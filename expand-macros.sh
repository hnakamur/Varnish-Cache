#!/bin/bash
set -eu
expand_macros_in_dir() {
  relative_dir=${1%/*}
  makefile=${1##*/}
  expand_makefile=${makefile}.expand-macros
  (echo entering $relative_dir && \
  cd $relative_dir && \
  awk -v relative_dir=$relative_dir '
BEGIN {
  i = 1
  target_dir = sprintf("$(top_srcdir)/macros-expanded/%s", relative_dir)
}
/^uninstall-am:/ {
  printf("expand-macros: $(%s)\n\n", expanded_sources_target)
}
{ print }
/_SOURCES = \\$/,/^$/ {
  if (/_SOURCES = \\$/) {
    sub(/_SOURCES/, "_EXPANDED_SOURCES", $1)
    expanded_sources_target = $1
  } else if ($1 ~ /\.c$/) {
    sources[i++] = $1
  } else if (/^$/) {
    printf("%s = \\\n", expanded_sources_target)
    for (i = 1; i < length(sources); i++) {
      printf("\t%s \\\n", macro_expanded_src_path(target_dir, sources[i]))
    }
    printf("\t%s\n\n", macro_expanded_src_path(target_dir, sources[i]))
  }
}
/\.l?o: .*\.c$/,/^$/ {
  if ($2 ~ /\.c$/) {
    source = $2
  } else if (/^$/) {
    dest = macro_expanded_src_path(target_dir, source)
    printf("%s: %s\n", dest, source)
    dir = dest
    sub(/\/[^/]*$/, "", dir)
    printf("\tmkdir -p %s\n", dir)
    sub(/-c -o [^ ]+\.o/, sprintf("-E -o %s", dest), command)
    printf("%s\n\n", command)
  } else if ($1 != "#") {
    command = $0
  }
}
(relative_dir == "lib/libvmod_std" ||
 relative_dir == "lib/libvmod_directors" ||
 relative_dir == "lib/libvcc" ||
 relative_dir == "lib/libvarnishcompat" ||
 relative_dir == "lib/libvmod_debug" ||
 relative_dir == "bin/varnishhist" ||
 relative_dir == "bin/varnishncsa" ||
 relative_dir == "bin/varnishlog" ||
 relative_dir == "bin/varnishstat" ||
 relative_dir == "bin/varnishtop") &&
/^\.c\.o:$/,/^$/ {
  if (/^$/) {
    for (i = 1; i <= length(sources); i++) {
      source = sources[i]
      dest = macro_expanded_src_path(target_dir, source)
      printf("%s: %s\n", dest, source)
      dir = dest
      sub(/\/[^/]*$/, "", dir)
      printf("\tmkdir -p %s\n", dir)
      printf("%s -E -o %s %s\n\n", command, dest, source)
    }
  } else if (! /\.c\.o:$/ && ! /^#/) {
    sub(/ -c \$</, "")
    command = $0
  }
}

function macro_expanded_src_path(target_dir, source) {
  if (source ~ /\$\(top_srcdir\)/) {
    sub(/\$\(top_srcdir\)/, "$(top_srcdir)/macros-expanded", source)
    return source
  } else {
    return target_dir "/" source
  }
}
' $makefile > $expand_makefile && \
  make -f $expand_makefile expand-macros)
}

makefiles=`find . -name Makefile | xargs grep -l '_SOURCES = \\\\$'`
for f in $makefiles; do
  expand_macros_in_dir ${f#./}
done
