# 1 "vsl_dispatch.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/lib/libvarnishapi//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vsl_dispatch.c"
# 31 "vsl_dispatch.c"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 32 "vsl_dispatch.c" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 25 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 392 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 393 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 22 "/usr/include/bits/wchar.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/wchar.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdint.h" 2 3 4
# 33 "vsl_dispatch.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 33 "/usr/include/libio.h" 2 3 4
# 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 339 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 391 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__warn_unused_result__)) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));








extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 43 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 124 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 935 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/stdio2.h" 1 3 4
# 23 "/usr/include/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}
# 227 "/usr/include/bits/stdio2.h" 3 4
extern char *__gets_chk (char *__str, size_t) __attribute__ ((__warn_unused_result__));
extern char *__gets_warn (char *__str) __asm__ ("" "gets")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use fgets or getline instead, gets can't " "specify buffer size")))
                               ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
gets (char *__str)
{
  if (__builtin_object_size (__str, 2 > 1) != (size_t) -1)
    return __gets_chk (__str, __builtin_object_size (__str, 2 > 1));
  return __gets_warn (__str);
}


extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")

                                        __attribute__ ((__warn_unused_result__));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}
# 327 "/usr/include/bits/stdio2.h" 3 4
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 938 "/usr/include/stdio.h" 2 3 4






# 34 "vsl_dispatch.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 276 "/usr/include/stdlib.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4

# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





# 1 "/usr/include/bits/select2.h" 1 3 4
# 24 "/usr/include/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 129 "/usr/include/sys/select.h" 2 3 4



# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}


# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 115 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 202 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 492 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 512 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 529 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

# 577 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) __attribute__ ((__warn_unused_result__));

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 770 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 807 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));
# 947 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}

# 952 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/bits/stdlib.h" 1 3 4
# 23 "/usr/include/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 956 "/usr/include/stdlib.h" 2 3 4
# 964 "/usr/include/stdlib.h" 3 4

# 35 "vsl_dispatch.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4

# 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 278 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 393 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 423 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 441 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 532 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 555 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 630 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 631 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 393 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 968 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1044 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1120 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1170 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1202 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1220 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1301 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 1320 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 634 "/usr/include/string.h" 2 3 4




# 1 "/usr/include/bits/string3.h" 1 3 4
# 22 "/usr/include/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")))
                                                                                                   ;
# 47 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 75 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  if (__builtin_constant_p (__len) && __len == 0
      && (!__builtin_constant_p (__ch) || __ch != 0))
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
# 116 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__ , __leaf__))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 639 "/usr/include/string.h" 2 3 4




# 36 "vsl_dispatch.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__));
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 25 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 646 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 689 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 893 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 58 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 72 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 151 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 894 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 991 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1015 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1038 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1059 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1080 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1103 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1134 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1169 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/unistd.h" 1 3 4
# 23 "/usr/include/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")
                               __attribute__ ((__warn_unused_result__));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}
# 123 "/usr/include/bits/unistd.h" 3 4
extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlink") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlink_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlinkat") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlinkat_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")))

                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) __asm__ ("" "getcwd") __attribute__ ((__nothrow__ , __leaf__))
                                              __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) __asm__ ("" "__getcwd_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")))
                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getcwd (char *__buf, size_t __size)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) __asm__ ("" "getwd") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getwd (char *__buf)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) __asm__ ("" "confstr") __attribute__ ((__nothrow__ , __leaf__))
                             ;
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("" "__confstr_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) confstr (int __name, char *__buf, size_t __len)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) __asm__ ("" "getgroups") __attribute__ ((__nothrow__ , __leaf__))
                 __attribute__ ((__warn_unused_result__));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) __asm__ ("" "__getgroups_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")))
                                           ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getgroups (int __size, __gid_t __list[])
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size) || __size < 0)
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ttyname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ttyname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r")
                     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) __asm__ ("" "gethostname") __attribute__ ((__nothrow__ , __leaf__))
                   __attribute__ ((__nonnull__ (1)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__gethostname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) gethostname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) __asm__ ("" "getdomainname") __attribute__ ((__nothrow__ , __leaf__))

                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getdomainname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")))

                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getdomainname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1170 "/usr/include/unistd.h" 2 3 4



# 37 "vsl_dispatch.c" 2

# 1 "../../include/vdef.h" 1
# 39 "vsl_dispatch.c" 2
# 1 "../../include/vas.h" 1
# 41 "../../include/vas.h"
enum vas_e {
 VAS_WRONG,
 VAS_MISSING,
 VAS_ASSERT,
 VAS_INCOMPLETE,
 VAS_VCL,
};

typedef void vas_f(const char *, const char *, int, const char *, enum vas_e);

extern vas_f *VAS_Fail __attribute__((__noreturn__));
# 40 "vsl_dispatch.c" 2
# 1 "../../include/miniobj.h" 1
# 41 "vsl_dispatch.c" 2

# 1 "../../include/vqueue.h" 1
# 43 "vsl_dispatch.c" 2
# 1 "../../include/vre.h" 1
# 38 "../../include/vre.h"
struct vre;

struct vre_limits {
 unsigned match;
 unsigned match_recursion;
};

typedef struct vre vre_t;





extern const unsigned VRE_has_jit;
extern const unsigned VRE_CASELESS;
extern const unsigned VRE_NOTEMPTY;

vre_t *VRE_compile(const char *, int, const char **, int *);
int VRE_exec(const vre_t *code, const char *subject, int length,
    int startoffset, int options, int *ovector, int ovecsize,
    const volatile struct vre_limits *lim);
void VRE_free(vre_t **);
# 44 "vsl_dispatch.c" 2
# 1 "../../include/vtim.h" 1
# 33 "../../include/vtim.h"
void VTIM_format(double t, char *p);
double VTIM_parse(const char *p);
double VTIM_mono(void);
double VTIM_real(void);
void VTIM_sleep(double t);
struct timespec VTIM_timespec(double t);
struct timeval VTIM_timeval(double t);
# 45 "vsl_dispatch.c" 2
# 1 "../../include/vtree.h" 1
# 46 "vsl_dispatch.c" 2

# 1 "../../include/vapi/vsl.h" 1
# 39 "../../include/vapi/vsl.h"
# 1 "../../include/vapi/vsl_int.h" 1
# 90 "../../include/vapi/vsl_int.h"
enum VSL_tag_e {
 SLT__Bogus = 0,

# 1 "../../include/tbl/vsl_tags.h" 1
# 49 "../../include/tbl/vsl_tags.h"
SLT_Debug,





SLT_Error,



SLT_CLI,





SLT_SessOpen,
# 90 "../../include/tbl/vsl_tags.h"
SLT_SessClose,
# 102 "../../include/tbl/vsl_tags.h"
SLT_BackendOpen,
# 116 "../../include/tbl/vsl_tags.h"
SLT_BackendReuse,
# 127 "../../include/tbl/vsl_tags.h"
SLT_BackendClose,
# 138 "../../include/tbl/vsl_tags.h"
SLT_HttpGarbage,



SLT_Proxy,
# 155 "../../include/tbl/vsl_tags.h"
SLT_ProxyGarbage,



SLT_Backend,
# 171 "../../include/tbl/vsl_tags.h"
SLT_Length,



SLT_FetchError,





# 1 "../../include/tbl/vsl_tags_http.h" 1
# 47 "../../include/tbl/vsl_tags_http.h"
SLT_ReqMethod,


SLT_ReqURL,


SLT_ReqProtocol,


SLT_ReqStatus,


SLT_ReqReason,


SLT_ReqHeader,
# 71 "../../include/tbl/vsl_tags_http.h"
SLT_ReqUnset,
# 80 "../../include/tbl/vsl_tags_http.h"
SLT_ReqLost,
# 182 "../../include/tbl/vsl_tags.h" 2





# 1 "../../include/tbl/vsl_tags_http.h" 1
# 47 "../../include/tbl/vsl_tags_http.h"
SLT_RespMethod,


SLT_RespURL,


SLT_RespProtocol,


SLT_RespStatus,


SLT_RespReason,


SLT_RespHeader,
# 71 "../../include/tbl/vsl_tags_http.h"
SLT_RespUnset,
# 80 "../../include/tbl/vsl_tags_http.h"
SLT_RespLost,
# 188 "../../include/tbl/vsl_tags.h" 2





# 1 "../../include/tbl/vsl_tags_http.h" 1
# 47 "../../include/tbl/vsl_tags_http.h"
SLT_BereqMethod,


SLT_BereqURL,


SLT_BereqProtocol,


SLT_BereqStatus,


SLT_BereqReason,


SLT_BereqHeader,
# 71 "../../include/tbl/vsl_tags_http.h"
SLT_BereqUnset,
# 80 "../../include/tbl/vsl_tags_http.h"
SLT_BereqLost,
# 194 "../../include/tbl/vsl_tags.h" 2





# 1 "../../include/tbl/vsl_tags_http.h" 1
# 47 "../../include/tbl/vsl_tags_http.h"
SLT_BerespMethod,


SLT_BerespURL,


SLT_BerespProtocol,


SLT_BerespStatus,


SLT_BerespReason,


SLT_BerespHeader,
# 71 "../../include/tbl/vsl_tags_http.h"
SLT_BerespUnset,
# 80 "../../include/tbl/vsl_tags_http.h"
SLT_BerespLost,
# 200 "../../include/tbl/vsl_tags.h" 2




# 1 "../../include/tbl/vsl_tags_http.h" 1
# 47 "../../include/tbl/vsl_tags_http.h"
SLT_ObjMethod,


SLT_ObjURL,


SLT_ObjProtocol,


SLT_ObjStatus,


SLT_ObjReason,


SLT_ObjHeader,
# 71 "../../include/tbl/vsl_tags_http.h"
SLT_ObjUnset,
# 80 "../../include/tbl/vsl_tags_http.h"
SLT_ObjLost,
# 205 "../../include/tbl/vsl_tags.h" 2


SLT_BogoHeader,



SLT_LostHeader,




SLT_TTL,
# 239 "../../include/tbl/vsl_tags.h"
SLT_Fetch_Body,
# 250 "../../include/tbl/vsl_tags.h"
SLT_VCL_acl,



SLT_VCL_call,



SLT_VCL_trace,
# 270 "../../include/tbl/vsl_tags.h"
SLT_VCL_return,



SLT_ReqStart,
# 285 "../../include/tbl/vsl_tags.h"
SLT_Hit,



SLT_HitPass,




SLT_ExpBan,



SLT_ExpKill,
# 339 "../../include/tbl/vsl_tags.h"
SLT_WorkThread,
# 350 "../../include/tbl/vsl_tags.h"
SLT_ESI_xmlerror,




SLT_Hash,




SLT_Backend_health,
# 377 "../../include/tbl/vsl_tags.h"
SLT_VCL_Log,



SLT_VCL_Error,



SLT_Gzip,
# 408 "../../include/tbl/vsl_tags.h"
SLT_Link,
# 419 "../../include/tbl/vsl_tags.h"
SLT_Begin,
# 430 "../../include/tbl/vsl_tags.h"
SLT_End,



SLT_VSL,




SLT_Storage,
# 449 "../../include/tbl/vsl_tags.h"
SLT_Timestamp,
# 466 "../../include/tbl/vsl_tags.h"
SLT_ReqAcct,
# 483 "../../include/tbl/vsl_tags.h"
SLT_PipeAcct,
# 495 "../../include/tbl/vsl_tags.h"
SLT_BereqAcct,
# 509 "../../include/tbl/vsl_tags.h"
SLT_VfpAcct,
# 521 "../../include/tbl/vsl_tags.h"
SLT_Witness,
# 94 "../../include/vapi/vsl_int.h" 2

 SLT__Reserved = 254,
 SLT__Batch = 255
};
# 40 "../../include/vapi/vsl.h" 2

struct VSM_data;
# 50 "../../include/vapi/vsl.h"
struct VSL_data;
struct VSLQ;

struct VSLC_ptr {
 const uint32_t *ptr;
 unsigned priv;
};
# 80 "../../include/vapi/vsl.h"
struct VSL_cursor {

 struct VSLC_ptr rec;


 const void *priv_tbl;
 void *priv_data;
};

enum VSL_transaction_e {
 VSL_t_unknown,
 VSL_t_sess,
 VSL_t_req,
 VSL_t_bereq,
 VSL_t_raw,
 VSL_t__MAX,
};

enum VSL_reason_e {
 VSL_r_unknown,
 VSL_r_http_1,
 VSL_r_rxreq,
 VSL_r_esi,
 VSL_r_restart,
 VSL_r_pass,
 VSL_r_fetch,
 VSL_r_bgfetch,
 VSL_r_pipe,
 VSL_r__MAX,
};

struct VSL_transaction {
 unsigned level;
 int32_t vxid;
 int32_t vxid_parent;
 enum VSL_transaction_e type;
 enum VSL_reason_e reason;
 struct VSL_cursor *c;
};

enum VSL_grouping_e {
 VSL_g_raw,
 VSL_g_vxid,
 VSL_g_request,
 VSL_g_session,
 VSL_g__MAX,
};

typedef int VSLQ_dispatch_f(struct VSL_data *vsl,
    struct VSL_transaction * const trans[], void *priv);
# 143 "../../include/vapi/vsl.h"
typedef void VSL_tagfind_f(int tag, void *priv);
# 153 "../../include/vapi/vsl.h"
extern const char * const VSL_tags[256];




extern const unsigned VSL_tagflags[256];
# 171 "../../include/vapi/vsl.h"
int VSL_Name2Tag(const char *name, int l);
# 187 "../../include/vapi/vsl.h"
int VSL_Glob2Tags(const char *glob, int l, VSL_tagfind_f *func, void *priv);
# 206 "../../include/vapi/vsl.h"
int VSL_List2Tags(const char *list, int l, VSL_tagfind_f *func, void *priv);
# 225 "../../include/vapi/vsl.h"
extern const char *VSLQ_grouping[VSL_g__MAX];




int VSLQ_Name2Grouping(const char *name, int l);
# 241 "../../include/vapi/vsl.h"
struct VSL_data *VSL_New(void);
int VSL_Arg(struct VSL_data *vsl, int opt, const char *arg);
# 251 "../../include/vapi/vsl.h"
void VSL_Delete(struct VSL_data *vsl);




const char *VSL_Error(const struct VSL_data *vsl);




void VSL_ResetError(struct VSL_data *vsl);







struct VSL_cursor *VSL_CursorVSM(struct VSL_data *vsl, struct VSM_data *vsm,
    unsigned options);
# 285 "../../include/vapi/vsl.h"
struct VSL_cursor *VSL_CursorFile(struct VSL_data *vsl, const char *name,
    unsigned options);
# 299 "../../include/vapi/vsl.h"
void VSL_DeleteCursor(const struct VSL_cursor *c);




int VSL_ResetCursor(const struct VSL_cursor *c);
# 315 "../../include/vapi/vsl.h"
int VSL_Check(const struct VSL_cursor *c, const struct VSLC_ptr *ptr);
# 327 "../../include/vapi/vsl.h"
int VSL_Next(const struct VSL_cursor *c);
# 340 "../../include/vapi/vsl.h"
int VSL_Match(struct VSL_data *vsl, const struct VSL_cursor *c);
# 350 "../../include/vapi/vsl.h"
int VSL_Print(const struct VSL_data *vsl, const struct VSL_cursor *c, void *fo);
# 368 "../../include/vapi/vsl.h"
int VSL_PrintTerse(const struct VSL_data *vsl, const struct VSL_cursor *c,
    void *fo);
# 387 "../../include/vapi/vsl.h"
int VSL_PrintAll(struct VSL_data *vsl, const struct VSL_cursor *c, void *fo);
# 402 "../../include/vapi/vsl.h"
VSLQ_dispatch_f VSL_PrintTransactions;
# 420 "../../include/vapi/vsl.h"
FILE *VSL_WriteOpen(struct VSL_data *vsl, const char *name, int append,
      int unbuffered);
# 438 "../../include/vapi/vsl.h"
int VSL_Write(const struct VSL_data *vsl, const struct VSL_cursor *c, void *fo);
# 447 "../../include/vapi/vsl.h"
int VSL_WriteAll(struct VSL_data *vsl, const struct VSL_cursor *c, void *fo);
# 457 "../../include/vapi/vsl.h"
VSLQ_dispatch_f VSL_WriteTransactions;







struct VSLQ *VSLQ_New(struct VSL_data *vsl, struct VSL_cursor **cp,
    enum VSL_grouping_e grouping, const char *query);
# 484 "../../include/vapi/vsl.h"
void VSLQ_Delete(struct VSLQ **pvslq);






void VSLQ_SetCursor(struct VSLQ *vslq, struct VSL_cursor **cp);
# 503 "../../include/vapi/vsl.h"
int VSLQ_Dispatch(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv);
# 519 "../../include/vapi/vsl.h"
int VSLQ_Flush(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv);
# 48 "vsl_dispatch.c" 2

# 1 "vsl_api.h" 1
# 35 "vsl_api.h"
int vsl_diag(struct VSL_data *vsl, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));
void vsl_vbm_bitset(int bit, void *priv);
void vsl_vbm_bitclr(int bit, void *priv);

typedef void vslc_delete_f(const struct VSL_cursor *);
typedef int vslc_next_f(const struct VSL_cursor *);
typedef int vslc_reset_f(const struct VSL_cursor *);
typedef int vslc_check_f(const struct VSL_cursor *, const struct VSLC_ptr *);

struct vslc_tbl {
 unsigned magic;


 vslc_delete_f *delete;
 vslc_next_f *next;
 vslc_reset_f *reset;
 vslc_check_f *check;
};

struct vslf {
 unsigned magic;

 struct { struct vslf *vtqe_next; struct vslf **vtqe_prev; } list;

 struct vbitmap *tags;
 vre_t *vre;
};

typedef struct { struct vslf *vtqh_first; struct vslf **vtqh_last; } vslf_list;

struct VSL_data {
 unsigned magic;


 struct vsb *diag;

 unsigned flags;



 struct vbitmap *vbm_select;
 struct vbitmap *vbm_supress;


 vslf_list vslf_select;
 vslf_list vslf_suppress;

 int b_opt;
 int c_opt;
 int C_opt;
 int L_opt;
 double T_opt;
 int v_opt;
};


struct vslq_query;
struct vslq_query *vslq_newquery(struct VSL_data *vsl,
    enum VSL_grouping_e grouping, const char *query);
void vslq_deletequery(struct vslq_query **pquery);
int vslq_runquery(const struct vslq_query *query,
    struct VSL_transaction * const ptrans[]);
# 50 "vsl_dispatch.c" 2





static const char * const vsl_t_names[VSL_t__MAX] = {
 [VSL_t_unknown] = "unknown",
 [VSL_t_sess] = "sess",
 [VSL_t_req] = "req",
 [VSL_t_bereq] = "bereq",
 [VSL_t_raw] = "raw",
};

static const char * const vsl_r_names[VSL_r__MAX] = {
 [VSL_r_unknown] = "unknown",
 [VSL_r_http_1] = "HTTP/1",
 [VSL_r_rxreq] = "rxreq",
 [VSL_r_esi] = "esi",
 [VSL_r_restart] = "restart",
 [VSL_r_pass] = "pass",
 [VSL_r_fetch] = "fetch",
 [VSL_r_bgfetch] = "bgfetch",
 [VSL_r_pipe] = "pipe",
};

struct vtx;

struct vslc_raw {
 unsigned magic;


 struct VSL_cursor cursor;

 const uint32_t *ptr;
};

struct synth {
 unsigned magic;


 struct { struct synth *vtqe_next; struct synth **vtqe_prev; } list;
 size_t offset;
 uint32_t data[2 + 64 / sizeof (uint32_t)];
};
struct synthhead { struct synth *vtqh_first; struct synth **vtqh_last; };

enum chunk_t {
 chunk_t__unassigned,
 chunk_t_shm,
 chunk_t_buf,
};

struct chunk {
 unsigned magic;

 enum chunk_t type;
 union {
  struct {
   struct VSLC_ptr start;
   struct { struct chunk *vtqe_next; struct chunk **vtqe_prev; } shmref;
  } shm;
  struct {
   uint32_t *data;
   size_t space;
  } buf;
 };
 size_t len;
 struct vtx *vtx;
 struct { struct chunk *vtqe_next; struct chunk **vtqe_prev; } list;
};
struct chunkhead { struct chunk *vtqh_first; struct chunk **vtqh_last; };

struct vslc_vtx {
 unsigned magic;


 struct VSL_cursor cursor;

 struct vtx *vtx;
 struct synth *synth;
 struct chunk *chunk;
 size_t chunkstart;
 size_t offset;
};

struct vtx_key {
 unsigned vxid;
 struct { struct vtx_key *rbe_left; struct vtx_key *rbe_right; struct vtx_key *rbe_parent; int rbe_color; } entry;
};
struct vtx_tree { struct vtx_key *rbh_root; };

struct vtx {
 struct vtx_key key;
 unsigned magic;

 struct { struct vtx *vtqe_next; struct vtx **vtqe_prev; } list_child;
 struct { struct vtx *vtqe_next; struct vtx **vtqe_prev; } list_vtx;

 double t_start;
 unsigned flags;







 enum VSL_transaction_e type;
 enum VSL_reason_e reason;

 struct vtx *parent;
 struct { struct vtx *vtqh_first; struct vtx **vtqh_last; } child;
 unsigned n_child;
 unsigned n_childready;
 unsigned n_descend;

 struct { struct synth *vtqh_first; struct synth **vtqh_last; } synth;

 struct chunk shmchunks[3];
 struct chunkhead shmchunks_free;

 struct chunkhead chunks;
 size_t len;

 struct vslc_vtx c;
};

struct VSLQ {
 unsigned magic;


 struct VSL_data *vsl;
 struct VSL_cursor *c;
 struct vslq_query *query;

 enum VSL_grouping_e grouping;


 struct vtx_tree tree;
 struct { struct vtx *vtqh_first; struct vtx **vtqh_last; } ready;
 struct { struct vtx *vtqh_first; struct vtx **vtqh_last; } incomplete;
 unsigned n_outstanding;
 struct chunkhead shmrefs;
 struct { struct vtx *vtqh_first; struct vtx **vtqh_last; } cache;
 unsigned n_cache;


 struct {
  struct vslc_raw c;
  struct VSL_transaction trans;
  struct VSL_transaction *ptrans[2];
  struct VSLC_ptr start;
  ssize_t len;
  size_t offset;
 } raw;
};

static void vtx_synth_rec(struct vtx *vtx, unsigned tag, const char *fmt, ...);

static int vtx_diag(struct vtx *vtx, const char *msg);

static int vtx_diag_tag(struct vtx *vtx, const uint32_t *ptr,
    const char *reason);

static inline int
vtx_keycmp(const struct vtx_key *a, const struct vtx_key *b)
{
 if (a->vxid < b->vxid)
  return (-1);
 if (a->vxid > b->vxid)
  return (1);
 return (0);
}

__attribute__((__unused__)) static void vtx_tree_VRB_INSERT_COLOR(struct vtx_tree *, struct vtx_key *); __attribute__((__unused__)) static void vtx_tree_VRB_REMOVE_COLOR(struct vtx_tree *, struct vtx_key *, struct vtx_key *);__attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_REMOVE(struct vtx_tree *, struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_INSERT(struct vtx_tree *, struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_FIND(const struct vtx_tree *, const struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_NFIND(const struct vtx_tree *, const struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_NEXT(struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_PREV(struct vtx_key *); __attribute__((__unused__)) static struct vtx_key *vtx_tree_VRB_MINMAX(const struct vtx_tree *, int);
__attribute__((__unused__)) static void vtx_tree_VRB_INSERT_COLOR(struct vtx_tree *head, struct vtx_key *elm) { struct vtx_key *parent, *gparent, *tmp; while ((parent = (elm)->entry.rbe_parent) != ((void *)0) && (parent)->entry.rbe_color == 1) { gparent = (parent)->entry.rbe_parent; if (parent == (gparent)->entry.rbe_left) { tmp = (gparent)->entry.rbe_right; if (tmp && (tmp)->entry.rbe_color == 1) { (tmp)->entry.rbe_color = 0; do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while ( 0); elm = gparent; continue; } if ((parent)->entry.rbe_right == elm) { do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left) != ((void *)0)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while ( 0); do { (tmp) = (gparent)->entry.rbe_left; if (((gparent)->entry.rbe_left = (tmp)->entry.rbe_right) != ((void *)0)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (gparent); } do {} while (0); if (((tmp)->entry.rbe_parent = (gparent)->entry.rbe_parent) != ((void *)0)) { if ((gparent) == ((gparent)->entry.rbe_parent)->entry.rbe_left) ((gparent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((gparent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (gparent); (gparent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); } else { tmp = (gparent)->entry.rbe_left; if (tmp && (tmp)->entry.rbe_color == 1) { (tmp)->entry.rbe_color = 0; do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while ( 0); elm = gparent; continue; } if ((parent)->entry.rbe_left == elm) { do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right) != ((void *)0)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while ( 0); do { (tmp) = (gparent)->entry.rbe_right; if (((gparent)->entry.rbe_right = (tmp)->entry.rbe_left) != ((void *)0)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (gparent); } do {} while (0); if (((tmp)->entry.rbe_parent = (gparent)->entry.rbe_parent) != ((void *)0)) { if ((gparent) == ((gparent)->entry.rbe_parent)->entry.rbe_left) ((gparent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((gparent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (gparent); (gparent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); } } (head->rbh_root)->entry.rbe_color = 0; } __attribute__((__unused__)) static void vtx_tree_VRB_REMOVE_COLOR(struct vtx_tree *head, struct vtx_key *parent, struct vtx_key *elm) { struct vtx_key *tmp; while ((elm == ((void *)0) || (elm)->entry.rbe_color == 0) && elm != (head)->rbh_root) { do { do { if (!((parent) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 225, "(parent) != 0", VAS_ASSERT); } } while (0); } while (0); if ((parent)->entry.rbe_left == elm) { tmp = (parent)->entry.rbe_right; if ((tmp)->entry.rbe_color == 1) { do { (tmp)->entry.rbe_color = 0; (parent)->entry.rbe_color = 1; } while ( 0); do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left) != ((void *)0)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = (parent)->entry.rbe_right; } if (((tmp)->entry.rbe_left == ((void *)0) || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) && ((tmp)->entry.rbe_right == ((void *)0) || ((tmp)->entry.rbe_right)->entry.rbe_color == 0)) { (tmp)->entry.rbe_color = 1; elm = parent; parent = (elm)->entry.rbe_parent; } else { if ((tmp)->entry.rbe_right == ((void *)0) || ((tmp)->entry.rbe_right)->entry.rbe_color == 0) { struct vtx_key *oleft; if ((oleft = (tmp)->entry.rbe_left) != ((void *)0)) (oleft)->entry.rbe_color = 0; (tmp)->entry.rbe_color = 1; do { (oleft) = (tmp)->entry.rbe_left; if (((tmp)->entry.rbe_left = (oleft)->entry.rbe_right) != ((void *)0)) { ((oleft)->entry.rbe_right)->entry.rbe_parent = (tmp); } do {} while (0); if (((oleft)->entry.rbe_parent = (tmp)->entry.rbe_parent) != ((void *)0)) { if ((tmp) == ((tmp)->entry.rbe_parent)->entry.rbe_left) ((tmp)->entry.rbe_parent)->entry.rbe_left = (oleft); else ((tmp)->entry.rbe_parent)->entry.rbe_right = (oleft); } else (head)->rbh_root = (oleft); (oleft)->entry.rbe_right = (tmp); (tmp)->entry.rbe_parent = (oleft); do {} while (0); if (((oleft)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = (parent)->entry.rbe_right; } (tmp)->entry.rbe_color = (parent)->entry.rbe_color; (parent)->entry.rbe_color = 0; if ((tmp)->entry.rbe_right) ((tmp)->entry.rbe_right)->entry.rbe_color = 0; do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left) != ((void *)0)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); elm = (head)->rbh_root; break; } } else { tmp = (parent)->entry.rbe_left; if ((tmp)->entry.rbe_color == 1) { do { (tmp)->entry.rbe_color = 0; (parent)->entry.rbe_color = 1; } while ( 0); do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right) != ((void *)0)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = (parent)->entry.rbe_left; } if (((tmp)->entry.rbe_left == ((void *)0) || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) && ((tmp)->entry.rbe_right == ((void *)0) || ((tmp)->entry.rbe_right)->entry.rbe_color == 0)) { (tmp)->entry.rbe_color = 1; elm = parent; parent = (elm)->entry.rbe_parent; } else { if ((tmp)->entry.rbe_left == ((void *)0) || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) { struct vtx_key *oright; if ((oright = (tmp)->entry.rbe_right) != ((void *)0)) (oright)->entry.rbe_color = 0; (tmp)->entry.rbe_color = 1; do { (oright) = (tmp)->entry.rbe_right; if (((tmp)->entry.rbe_right = (oright)->entry.rbe_left) != ((void *)0)) { ((oright)->entry.rbe_left)->entry.rbe_parent = (tmp); } do {} while (0); if (((oright)->entry.rbe_parent = (tmp)->entry.rbe_parent) != ((void *)0)) { if ((tmp) == ((tmp)->entry.rbe_parent)->entry.rbe_left) ((tmp)->entry.rbe_parent)->entry.rbe_left = (oright); else ((tmp)->entry.rbe_parent)->entry.rbe_right = (oright); } else (head)->rbh_root = (oright); (oright)->entry.rbe_left = (tmp); (tmp)->entry.rbe_parent = (oright); do {} while (0); if (((oright)->entry.rbe_parent)) do {} while (0); } while ( 0); tmp = (parent)->entry.rbe_left; } (tmp)->entry.rbe_color = (parent)->entry.rbe_color; (parent)->entry.rbe_color = 0; if ((tmp)->entry.rbe_left) ((tmp)->entry.rbe_left)->entry.rbe_color = 0; do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right) != ((void *)0)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } do {} while (0); if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent) != ((void *)0)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); do {} while (0); if (((tmp)->entry.rbe_parent)) do {} while (0); } while ( 0); elm = (head)->rbh_root; break; } } } if (elm) (elm)->entry.rbe_color = 0; } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_REMOVE(struct vtx_tree *head, struct vtx_key *elm) { struct vtx_key *child, *parent, *old = elm; int color; if ((elm)->entry.rbe_left == ((void *)0)) child = (elm)->entry.rbe_right; else if ((elm)->entry.rbe_right == ((void *)0)) child = (elm)->entry.rbe_left; else { struct vtx_key *left; elm = (elm)->entry.rbe_right; while ((left = (elm)->entry.rbe_left) != ((void *)0)) elm = left; child = (elm)->entry.rbe_right; parent = (elm)->entry.rbe_parent; color = (elm)->entry.rbe_color; if (child) (child)->entry.rbe_parent = parent; if (parent) { if ((parent)->entry.rbe_left == elm) (parent)->entry.rbe_left = child; else (parent)->entry.rbe_right = child; do {} while (0); } else (head)->rbh_root = child; if ((elm)->entry.rbe_parent == old) parent = elm; (elm)->entry = (old)->entry; if ((old)->entry.rbe_parent) { if (((old)->entry.rbe_parent)->entry.rbe_left == old) ((old)->entry.rbe_parent)->entry.rbe_left = elm; else ((old)->entry.rbe_parent)->entry.rbe_right = elm; do {} while (0); } else (head)->rbh_root = elm; ((old)->entry.rbe_left)->entry.rbe_parent = elm; if ((old)->entry.rbe_right) ((old)->entry.rbe_right)->entry.rbe_parent = elm; if (parent) { left = parent; do { do {} while (0); } while ((left = (left)->entry.rbe_parent) != ((void *)0)); } goto color; } parent = (elm)->entry.rbe_parent; color = (elm)->entry.rbe_color; if (child) (child)->entry.rbe_parent = parent; if (parent) { if ((parent)->entry.rbe_left == elm) (parent)->entry.rbe_left = child; else (parent)->entry.rbe_right = child; do {} while (0); } else (head)->rbh_root = child; color: if (color == 0) { vtx_tree_VRB_REMOVE_COLOR(head, parent, child); } return (old); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_INSERT(struct vtx_tree *head, struct vtx_key *elm) { struct vtx_key *tmp; struct vtx_key *parent = ((void *)0); int comp = 0; tmp = (head)->rbh_root; while (tmp) { parent = tmp; comp = (vtx_keycmp)(elm, parent); if (comp < 0) tmp = (tmp)->entry.rbe_left; else if (comp > 0) tmp = (tmp)->entry.rbe_right; else return (tmp); } do { (elm)->entry.rbe_parent = parent; (elm)->entry.rbe_left = (elm)->entry.rbe_right = ((void *)0); (elm)->entry.rbe_color = 1; } while ( 0); if (parent != ((void *)0)) { if (comp < 0) (parent)->entry.rbe_left = elm; else (parent)->entry.rbe_right = elm; do {} while (0); } else (head)->rbh_root = elm; vtx_tree_VRB_INSERT_COLOR(head, elm); return (((void *)0)); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_FIND(const struct vtx_tree *head, const struct vtx_key *elm) { struct vtx_key *tmp = (head)->rbh_root; int comp; while (tmp) { comp = vtx_keycmp(elm, tmp); if (comp < 0) tmp = (tmp)->entry.rbe_left; else if (comp > 0) tmp = (tmp)->entry.rbe_right; else return (tmp); } return (((void *)0)); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_NFIND(const struct vtx_tree *head, const struct vtx_key *elm) { struct vtx_key *tmp = (head)->rbh_root; struct vtx_key *res = ((void *)0); int comp; while (tmp) { comp = vtx_keycmp(elm, tmp); if (comp < 0) { res = tmp; tmp = (tmp)->entry.rbe_left; } else if (comp > 0) tmp = (tmp)->entry.rbe_right; else return (tmp); } return (res); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_NEXT(struct vtx_key *elm) { if ((elm)->entry.rbe_right) { elm = (elm)->entry.rbe_right; while ((elm)->entry.rbe_left) elm = (elm)->entry.rbe_left; } else { if ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_left)) elm = (elm)->entry.rbe_parent; else { while ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_right)) elm = (elm)->entry.rbe_parent; elm = (elm)->entry.rbe_parent; } } return (elm); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_PREV(struct vtx_key *elm) { if ((elm)->entry.rbe_left) { elm = (elm)->entry.rbe_left; while ((elm)->entry.rbe_right) elm = (elm)->entry.rbe_right; } else { if ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_right)) elm = (elm)->entry.rbe_parent; else { while ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_left)) elm = (elm)->entry.rbe_parent; elm = (elm)->entry.rbe_parent; } } return (elm); } __attribute__((__unused__)) static struct vtx_key * vtx_tree_VRB_MINMAX(const struct vtx_tree *head, int val) { struct vtx_key *tmp = (head)->rbh_root; struct vtx_key *parent = ((void *)0); while (tmp) { parent = tmp; if (val < 0) tmp = (tmp)->entry.rbe_left; else tmp = (tmp)->entry.rbe_right; } return (parent); }

static int
vslc_raw_next(const struct VSL_cursor *cursor)
{
 struct vslc_raw *c;

 do { (c) = (cursor->priv_data); do { if (!((c) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 232, "(c) != NULL", VAS_ASSERT); } } while (0); do { do { if (!(((c))->magic == (0x247EBD44))) { VAS_Fail(__func__, "vsl_dispatch.c", 232, "((c))->magic == (0x247EBD44)", VAS_ASSERT); } } while (0); } while (0); } while (0);
 do { if (!(&c->cursor == cursor)) { VAS_Fail(__func__, "vsl_dispatch.c", 233, "&c->cursor == cursor", VAS_ASSERT); } } while (0);

 do { do { if (!((c->ptr) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 235, "(c->ptr) != 0", VAS_ASSERT); } } while (0); } while (0);
 if (c->cursor.rec.ptr == ((void *)0)) {
  c->cursor.rec.ptr = c->ptr;
  return (1);
 } else {
  c->cursor.rec.ptr = ((void *)0);
  return (0);
 }
}

static int
vslc_raw_reset(const struct VSL_cursor *cursor)
{
 struct vslc_raw *c;

 do { (c) = (cursor->priv_data); do { if (!((c) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 250, "(c) != NULL", VAS_ASSERT); } } while (0); do { do { if (!(((c))->magic == (0x247EBD44))) { VAS_Fail(__func__, "vsl_dispatch.c", 250, "((c))->magic == (0x247EBD44)", VAS_ASSERT); } } while (0); } while (0); } while (0);
 do { if (!(&c->cursor == cursor)) { VAS_Fail(__func__, "vsl_dispatch.c", 251, "&c->cursor == cursor", VAS_ASSERT); } } while (0);

 do { do { if (!((c->ptr) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 253, "(c->ptr) != 0", VAS_ASSERT); } } while (0); } while (0);
 c->cursor.rec.ptr = ((void *)0);

 return (0);
}

static const struct vslc_tbl vslc_raw_tbl = {
 .magic = 0x5007C0DE,
 .delete = ((void *)0),
 .next = vslc_raw_next,
 .reset = vslc_raw_reset,
 .check = ((void *)0),
};

static int
vslc_vtx_next(const struct VSL_cursor *cursor)
{
 struct vslc_vtx *c;
 const uint32_t *ptr;

 do { (c) = (cursor->priv_data); do { if (!((c) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 273, "(c) != NULL", VAS_ASSERT); } } while (0); do { do { if (!(((c))->magic == (0x74C6523F))) { VAS_Fail(__func__, "vsl_dispatch.c", 273, "((c))->magic == (0x74C6523F)", VAS_ASSERT); } } while (0); } while (0); } while (0);
 do { if (!(&c->cursor == cursor)) { VAS_Fail(__func__, "vsl_dispatch.c", 274, "&c->cursor == cursor", VAS_ASSERT); } } while (0);
 do { do { if (!((c->vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 275, "(c->vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((c->vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 275, "(c->vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);

 do {
  do { if ((c->synth) != ((void *)0)) do { if (!((c->synth)->magic == 0xC654479F)) { VAS_Fail(__func__, "vsl_dispatch.c", 278, "(c->synth)->magic == 0xC654479F", VAS_ASSERT); } } while (0); } while (0);
  if (c->synth != ((void *)0) && c->synth->offset == c->offset) {


   c->cursor.rec.ptr = c->synth->data;
   c->synth = ((c->synth)->list.vtqe_next);
  } else {
   do { if (!(c->offset <= c->vtx->len)) { VAS_Fail(__func__, "vsl_dispatch.c", 285, "c->offset <= c->vtx->len", VAS_ASSERT); } } while (0);
   if (c->offset == c->vtx->len)

    return (0);


   if (c->chunk == ((void *)0)) {
    c->chunk = ((&c->vtx->chunks)->vtqh_first);
    c->chunkstart = 0;
   }
   do { do { if (!((c->chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 295, "(c->chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((c->chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 295, "(c->chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
   while (c->offset >= c->chunkstart + c->chunk->len) {
    c->chunkstart += c->chunk->len;
    c->chunk = ((c->chunk)->list.vtqe_next);
    do { do { if (!((c->chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 299, "(c->chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((c->chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 299, "(c->chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
   }


   if (c->chunk->type == chunk_t_shm)
    ptr = c->chunk->shm.start.ptr;
   else {
    do { if (!(c->chunk->type == chunk_t_buf)) { VAS_Fail(__func__, "vsl_dispatch.c", 306, "c->chunk->type == chunk_t_buf", VAS_ASSERT); } } while (0);
    ptr = c->chunk->buf.data;
   }
   c->cursor.rec.ptr = ptr + c->offset - c->chunkstart;
   c->offset += ((c->cursor.rec.ptr) + 2 + (((((c->cursor.rec.ptr)[0] & 0xffff)) + 3) / 4)) -
       c->cursor.rec.ptr;
  }
 } while (((c->cursor.rec.ptr)[0] >> 24) == SLT__Batch);

 return (1);
}

static int
vslc_vtx_reset(const struct VSL_cursor *cursor)
{
 struct vslc_vtx *c;

 do { (c) = (cursor->priv_data); do { if (!((c) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 323, "(c) != NULL", VAS_ASSERT); } } while (0); do { do { if (!(((c))->magic == (0x74C6523F))) { VAS_Fail(__func__, "vsl_dispatch.c", 323, "((c))->magic == (0x74C6523F)", VAS_ASSERT); } } while (0); } while (0); } while (0);
 do { if (!(&c->cursor == cursor)) { VAS_Fail(__func__, "vsl_dispatch.c", 324, "&c->cursor == cursor", VAS_ASSERT); } } while (0);
 do { do { if (!((c->vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 325, "(c->vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((c->vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 325, "(c->vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 c->synth = ((&c->vtx->synth)->vtqh_first);
 c->chunk = ((void *)0);
 c->chunkstart = 0;
 c->offset = 0;
 c->cursor.rec.ptr = ((void *)0);

 return (0);
}

static const struct vslc_tbl vslc_vtx_tbl = {
 .magic = 0x5007C0DE,
 .delete = ((void *)0),
 .next = vslc_vtx_next,
 .reset = vslc_vtx_reset,
 .check = ((void *)0),
};


static struct chunk *
chunk_newbuf(struct vtx *vtx, const uint32_t *ptr, size_t len)
{
 struct chunk *chunk;

 do { (chunk) = calloc(sizeof *(chunk), 1); if ((chunk) != ((void *)0)) (chunk)->magic = (0x48DC0194); } while (0);
 do { do { if (!((chunk) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 350, "(chunk) != 0", VAS_MISSING); } } while (0); } while (0);
 chunk->type = chunk_t_buf;
 chunk->vtx = vtx;
 chunk->buf.space = 64;
 while (chunk->buf.space < len)
  chunk->buf.space *= 2;
 chunk->buf.data = malloc(sizeof (uint32_t) * chunk->buf.space);
 do { do { if (!((chunk->buf.data) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 357, "(chunk->buf.data) != 0", VAS_ASSERT); } } while (0); } while (0);
 memcpy(chunk->buf.data, ptr, sizeof (uint32_t) * len);
 chunk->len = len;
 return (chunk);
}


static void
chunk_freebuf(struct chunk **pchunk)
{

 do { do { if (!((*pchunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 368, "(*pchunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((*pchunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 368, "(*pchunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
 do { if (!((*pchunk)->type == chunk_t_buf)) { VAS_Fail(__func__, "vsl_dispatch.c", 369, "(*pchunk)->type == chunk_t_buf", VAS_ASSERT); } } while (0);
 free((*pchunk)->buf.data);
 do { (*pchunk)->magic = (0); free(*pchunk); *pchunk = ((void *)0); } while (0);
 *pchunk = ((void *)0);
}


static void
chunk_appendbuf(struct chunk *chunk, const uint32_t *ptr, size_t len)
{

 do { do { if (!((chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 380, "(chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 380, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
 do { if (!(chunk->type == chunk_t_buf)) { VAS_Fail(__func__, "vsl_dispatch.c", 381, "chunk->type == chunk_t_buf", VAS_ASSERT); } } while (0);
 if (chunk->buf.space < chunk->len + len) {
  while (chunk->buf.space < chunk->len + len)
   chunk->buf.space *= 2;
  chunk->buf.data = realloc(chunk->buf.data,
      sizeof (uint32_t) * chunk->buf.space);
 }
 memcpy(chunk->buf.data + chunk->len, ptr, sizeof (uint32_t) * len);
 chunk->len += len;
}


static void
chunk_shm_to_buf(struct VSLQ *vslq, struct chunk *chunk)
{
 struct vtx *vtx;
 struct chunk *buf;

 do { do { if (!((chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 399, "(chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 399, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
 do { if (!(chunk->type == chunk_t_shm)) { VAS_Fail(__func__, "vsl_dispatch.c", 400, "chunk->type == chunk_t_shm", VAS_ASSERT); } } while (0);
 vtx = chunk->vtx;
 do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 402, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 402, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);

 buf = (*(((struct chunkhead *)((chunk)->list.vtqe_prev))->vtqh_last));
 if (buf != ((void *)0) && buf->type == chunk_t_buf)

  chunk_appendbuf(buf, chunk->shm.start.ptr, chunk->len);
 else {

  buf = chunk_newbuf(vtx, chunk->shm.start.ptr, chunk->len);
  do { do { if (!((buf) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 411, "(buf) != 0", VAS_ASSERT); } } while (0); } while (0);
  do { (buf)->list.vtqe_prev = (chunk)->list.vtqe_prev; (((buf))->list.vtqe_next) = (chunk); *(chunk)->list.vtqe_prev = (buf); (chunk)->list.vtqe_prev = &(((buf))->list.vtqe_next); } while (0);
 }


 vtx->c.chunk = ((void *)0);



 do { if (((((chunk))->shm.shmref.vtqe_next)) != ((void *)0)) (((chunk))->shm.shmref.vtqe_next)->shm.shmref.vtqe_prev = (chunk)->shm.shmref.vtqe_prev; else { (&vslq->shmrefs)->vtqh_last = (chunk)->shm.shmref.vtqe_prev; } *(chunk)->shm.shmref.vtqe_prev = (((chunk))->shm.shmref.vtqe_next); ; ; } while (0);
 do { if (((((chunk))->list.vtqe_next)) != ((void *)0)) (((chunk))->list.vtqe_next)->list.vtqe_prev = (chunk)->list.vtqe_prev; else { (&vtx->chunks)->vtqh_last = (chunk)->list.vtqe_prev; } *(chunk)->list.vtqe_prev = (((chunk))->list.vtqe_next); ; ; } while (0);
 do { if (((((chunk))->list.vtqe_next) = (((&vtx->shmchunks_free))->vtqh_first)) != ((void *)0)) (((&vtx->shmchunks_free))->vtqh_first)->list.vtqe_prev = &(((chunk))->list.vtqe_next); else (&vtx->shmchunks_free)->vtqh_last = &(((chunk))->list.vtqe_next); (((&vtx->shmchunks_free))->vtqh_first) = (chunk); (chunk)->list.vtqe_prev = &(((&vtx->shmchunks_free))->vtqh_first); } while (0);
}


static void
vtx_append(struct VSLQ *vslq, struct vtx *vtx, const struct VSLC_ptr *start,
    size_t len)
{
 struct chunk *chunk;

 do { do { if (!((vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 432, "(vtx) != 0", VAS_ASSERT); } } while (0); } while (0);
 if (len == 0)
  return;
 do { do { if (!((start) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 435, "(start) != 0", VAS_ASSERT); } } while (0); } while (0);

 if (VSL_Check(vslq->c, start) == 2 &&
     !((&vtx->shmchunks_free)->vtqh_first == ((void *)0))) {

  chunk = ((&vtx->shmchunks_free)->vtqh_first);
  do { do { if (!((chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 441, "(chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 441, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
  do { if (!(chunk->type == chunk_t_shm)) { VAS_Fail(__func__, "vsl_dispatch.c", 442, "chunk->type == chunk_t_shm", VAS_ASSERT); } } while (0);
  do { if (!(chunk->vtx == vtx)) { VAS_Fail(__func__, "vsl_dispatch.c", 443, "chunk->vtx == vtx", VAS_ASSERT); } } while (0);
  do { if (((((chunk))->list.vtqe_next)) != ((void *)0)) (((chunk))->list.vtqe_next)->list.vtqe_prev = (chunk)->list.vtqe_prev; else { (&vtx->shmchunks_free)->vtqh_last = (chunk)->list.vtqe_prev; } *(chunk)->list.vtqe_prev = (((chunk))->list.vtqe_next); ; ; } while (0);
  chunk->shm.start = *start;
  chunk->len = len;
  do { (((chunk))->list.vtqe_next) = ((void *)0); (chunk)->list.vtqe_prev = (&vtx->chunks)->vtqh_last; *(&vtx->chunks)->vtqh_last = (chunk); (&vtx->chunks)->vtqh_last = &(((chunk))->list.vtqe_next); } while (0);


  do { (((chunk))->shm.shmref.vtqe_next) = ((void *)0); (chunk)->shm.shmref.vtqe_prev = (&vslq->shmrefs)->vtqh_last; *(&vslq->shmrefs)->vtqh_last = (chunk); (&vslq->shmrefs)->vtqh_last = &(((chunk))->shm.shmref.vtqe_next); } while (0);
 } else {

  chunk = (*(((struct chunkhead *)((&vtx->chunks)->vtqh_last))->vtqh_last));
  do { if ((chunk) != ((void *)0)) do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 454, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
  if (chunk != ((void *)0) && chunk->type == chunk_t_buf) {

   chunk_appendbuf(chunk, start->ptr, len);
  } else {

   chunk = chunk_newbuf(vtx, start->ptr, len);
   do { do { if (!((chunk) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 461, "(chunk) != 0", VAS_ASSERT); } } while (0); } while (0);
   do { (((chunk))->list.vtqe_next) = ((void *)0); (chunk)->list.vtqe_prev = (&vtx->chunks)->vtqh_last; *(&vtx->chunks)->vtqh_last = (chunk); (&vtx->chunks)->vtqh_last = &(((chunk))->list.vtqe_next); } while (0);
  }
 }
 vtx->len += len;
}


static struct vtx *
vtx_new(struct VSLQ *vslq)
{
 struct vtx *vtx;
 int i;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 475, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 if (vslq->n_cache) {
  do { do { if (!((((&vslq->cache)->vtqh_first == ((void *)0))) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 477, "(((&vslq->cache)->vtqh_first == ((void *)0))) == 0", VAS_ASSERT); } } while (0); } while (0);
  vtx = ((&vslq->cache)->vtqh_first);
  do { if (((((vtx))->list_child.vtqe_next)) != ((void *)0)) (((vtx))->list_child.vtqe_next)->list_child.vtqe_prev = (vtx)->list_child.vtqe_prev; else { (&vslq->cache)->vtqh_last = (vtx)->list_child.vtqe_prev; } *(vtx)->list_child.vtqe_prev = (((vtx))->list_child.vtqe_next); ; ; } while (0);
  vslq->n_cache--;
 } else {
  do { (vtx) = calloc(sizeof *(vtx), 1); if ((vtx) != ((void *)0)) (vtx)->magic = (0xACC21D09); } while (0);
  do { do { if (!((vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 483, "(vtx) != 0", VAS_ASSERT); } } while (0); } while (0);

  do { (((&vtx->child))->vtqh_first) = ((void *)0); (&vtx->child)->vtqh_last = &(((&vtx->child))->vtqh_first); } while (0);
  do { (((&vtx->shmchunks_free))->vtqh_first) = ((void *)0); (&vtx->shmchunks_free)->vtqh_last = &(((&vtx->shmchunks_free))->vtqh_first); } while (0);
  for (i = 0; i < 3; i++) {
   vtx->shmchunks[i].magic = 0x48DC0194;
   vtx->shmchunks[i].type = chunk_t_shm;
   vtx->shmchunks[i].vtx = vtx;
   do { (((&vtx->shmchunks[i]))->list.vtqe_next) = ((void *)0); (&vtx->shmchunks[i])->list.vtqe_prev = (&vtx->shmchunks_free)->vtqh_last; *(&vtx->shmchunks_free)->vtqh_last = (&vtx->shmchunks[i]); (&vtx->shmchunks_free)->vtqh_last = &(((&vtx->shmchunks[i]))->list.vtqe_next); } while (0)
                                ;
  }
  do { (((&vtx->chunks))->vtqh_first) = ((void *)0); (&vtx->chunks)->vtqh_last = &(((&vtx->chunks))->vtqh_first); } while (0);
  do { (((&vtx->synth))->vtqh_first) = ((void *)0); (&vtx->synth)->vtqh_last = &(((&vtx->synth))->vtqh_first); } while (0);
  vtx->c.magic = 0x74C6523F;
  vtx->c.vtx = vtx;
  vtx->c.cursor.priv_tbl = &vslc_vtx_tbl;
  vtx->c.cursor.priv_data = &vtx->c;
 }

 do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 502, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 502, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 vtx->key.vxid = 0;
 vtx->t_start = VTIM_mono();
 vtx->flags = 0;
 vtx->type = VSL_t_unknown;
 vtx->reason = VSL_r_unknown;
 vtx->parent = ((void *)0);
 vtx->n_child = 0;
 vtx->n_childready = 0;
 vtx->n_descend = 0;
 vtx->len = 0;
 (void)vslc_vtx_reset(&vtx->c.cursor);

 return (vtx);
}



static void
vtx_retire(struct VSLQ *vslq, struct vtx **pvtx)
{
 struct vtx *vtx;
 struct vtx *child;
 struct synth *synth;
 struct chunk *chunk;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 528, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((pvtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 529, "(pvtx) != 0", VAS_ASSERT); } } while (0); } while (0);

 vtx = *pvtx;
 *pvtx = ((void *)0);
 do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 533, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 533, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);

 do { do { if (!((vtx->flags & 0x4) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 535, "(vtx->flags & 0x4) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->flags & 0x8) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 536, "(vtx->flags & 0x8) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->parent) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 537, "(vtx->parent) == 0", VAS_ASSERT); } } while (0); } while (0);

 while (!((&vtx->child)->vtqh_first == ((void *)0))) {
  child = ((&vtx->child)->vtqh_first);
  do { if (!(child->parent == vtx)) { VAS_Fail(__func__, "vsl_dispatch.c", 541, "child->parent == vtx", VAS_ASSERT); } } while (0);
  do { do { if (!((vtx->n_child) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 542, "(vtx->n_child) != 0", VAS_ASSERT); } } while (0); } while (0);
  do { if (!(vtx->n_descend >= child->n_descend + 1)) { VAS_Fail(__func__, "vsl_dispatch.c", 543, "vtx->n_descend >= child->n_descend + 1", VAS_ASSERT); } } while (0);
  do { if (((((child))->list_child.vtqe_next)) != ((void *)0)) (((child))->list_child.vtqe_next)->list_child.vtqe_prev = (child)->list_child.vtqe_prev; else { (&vtx->child)->vtqh_last = (child)->list_child.vtqe_prev; } *(child)->list_child.vtqe_prev = (((child))->list_child.vtqe_next); ; ; } while (0);
  child->parent = ((void *)0);
  vtx->n_child--;
  vtx->n_descend -= child->n_descend + 1;
  vtx_retire(vslq, &child);
  do { do { if (!((child) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 549, "(child) == 0", VAS_ASSERT); } } while (0); } while (0);
 }
 do { do { if (!((vtx->n_child) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 551, "(vtx->n_child) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->n_descend) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 552, "(vtx->n_descend) == 0", VAS_ASSERT); } } while (0); } while (0);
 vtx->n_childready = 0;
 do { do { if (!((vtx_tree_VRB_REMOVE(&vslq->tree, &vtx->key)) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 554, "(vtx_tree_VRB_REMOVE(&vslq->tree, &vtx->key)) != 0", VAS_ASSERT); } } while (0); } while (0);
 vtx->key.vxid = 0;
 vtx->flags = 0;

 while (!((&vtx->synth)->vtqh_first == ((void *)0))) {
  synth = ((&vtx->synth)->vtqh_first);
  do { do { if (!((synth) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 560, "(synth) != NULL", VAS_ASSERT); } } while (0); do { if (!((synth)->magic == 0xC654479F)) { VAS_Fail(__func__, "vsl_dispatch.c", 560, "(synth)->magic == 0xC654479F", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((synth))->list.vtqe_next)) != ((void *)0)) (((synth))->list.vtqe_next)->list.vtqe_prev = (synth)->list.vtqe_prev; else { (&vtx->synth)->vtqh_last = (synth)->list.vtqe_prev; } *(synth)->list.vtqe_prev = (((synth))->list.vtqe_next); ; ; } while (0);
  do { (synth)->magic = (0); free(synth); synth = ((void *)0); } while (0);
 }

 while (!((&vtx->chunks)->vtqh_first == ((void *)0))) {
  chunk = ((&vtx->chunks)->vtqh_first);
  do { do { if (!((chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 567, "(chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 567, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((chunk))->list.vtqe_next)) != ((void *)0)) (((chunk))->list.vtqe_next)->list.vtqe_prev = (chunk)->list.vtqe_prev; else { (&vtx->chunks)->vtqh_last = (chunk)->list.vtqe_prev; } *(chunk)->list.vtqe_prev = (((chunk))->list.vtqe_next); ; ; } while (0);
  if (chunk->type == chunk_t_shm) {
   do { if (((((chunk))->shm.shmref.vtqe_next)) != ((void *)0)) (((chunk))->shm.shmref.vtqe_next)->shm.shmref.vtqe_prev = (chunk)->shm.shmref.vtqe_prev; else { (&vslq->shmrefs)->vtqh_last = (chunk)->shm.shmref.vtqe_prev; } *(chunk)->shm.shmref.vtqe_prev = (((chunk))->shm.shmref.vtqe_next); ; ; } while (0);
   do { if (((((chunk))->list.vtqe_next) = (((&vtx->shmchunks_free))->vtqh_first)) != ((void *)0)) (((&vtx->shmchunks_free))->vtqh_first)->list.vtqe_prev = &(((chunk))->list.vtqe_next); else (&vtx->shmchunks_free)->vtqh_last = &(((chunk))->list.vtqe_next); (((&vtx->shmchunks_free))->vtqh_first) = (chunk); (chunk)->list.vtqe_prev = &(((&vtx->shmchunks_free))->vtqh_first); } while (0);
  } else {
   do { if (!(chunk->type == chunk_t_buf)) { VAS_Fail(__func__, "vsl_dispatch.c", 573, "chunk->type == chunk_t_buf", VAS_ASSERT); } } while (0);
   chunk_freebuf(&chunk);
   do { do { if (!((chunk) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 575, "(chunk) == 0", VAS_ASSERT); } } while (0); } while (0);
  }
 }
 vtx->len = 0;
 do { do { if (!((vslq->n_outstanding) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 579, "(vslq->n_outstanding) != 0", VAS_ASSERT); } } while (0); } while (0);
 vslq->n_outstanding--;

 if (vslq->n_cache < 10) {
  do { if (((((vtx))->list_child.vtqe_next) = (((&vslq->cache))->vtqh_first)) != ((void *)0)) (((&vslq->cache))->vtqh_first)->list_child.vtqe_prev = &(((vtx))->list_child.vtqe_next); else (&vslq->cache)->vtqh_last = &(((vtx))->list_child.vtqe_next); (((&vslq->cache))->vtqh_first) = (vtx); (vtx)->list_child.vtqe_prev = &(((&vslq->cache))->vtqh_first); } while (0);
  vslq->n_cache++;
 } else {
  do { (vtx)->magic = (0); free(vtx); vtx = ((void *)0); } while (0);
  vtx = ((void *)0);
 }
}


static struct vtx *
vtx_lookup(const struct VSLQ *vslq, unsigned vxid)
{
 struct vtx_key lkey, *key;
 struct vtx *vtx;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 598, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 lkey.vxid = vxid;
 key = vtx_tree_VRB_FIND(&vslq->tree, &lkey);
 if (key == ((void *)0))
  return (((void *)0));
 do { (vtx) = ((void *)key); do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 603, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { do { if (!(((vtx))->magic == (0xACC21D09))) { VAS_Fail(__func__, "vsl_dispatch.c", 603, "((vtx))->magic == (0xACC21D09)", VAS_ASSERT); } } while (0); } while (0); } while (0);
 return (vtx);
}


static struct vtx *
vtx_add(struct VSLQ *vslq, unsigned vxid)
{
 struct vtx *vtx;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 613, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 vtx = vtx_new(vslq);
 do { do { if (!((vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 615, "(vtx) != 0", VAS_ASSERT); } } while (0); } while (0);
 vtx->key.vxid = vxid;
 do { do { if (!((vtx_tree_VRB_INSERT(&vslq->tree, &vtx->key)) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 617, "(vtx_tree_VRB_INSERT(&vslq->tree, &vtx->key)) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { (((vtx))->list_vtx.vtqe_next) = ((void *)0); (vtx)->list_vtx.vtqe_prev = (&vslq->incomplete)->vtqh_last; *(&vslq->incomplete)->vtqh_last = (vtx); (&vslq->incomplete)->vtqh_last = &(((vtx))->list_vtx.vtqe_next); } while (0);
 vslq->n_outstanding++;
 return (vtx);
}



static void
vtx_mark_complete(struct VSLQ *vslq, struct vtx *vtx)
{

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 629, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->flags & 0x2) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 630, "(vtx->flags & 0x2) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->flags & 0x4) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 631, "(vtx->flags & 0x4) == 0", VAS_ASSERT); } } while (0); } while (0);

 if (vtx->type == VSL_t_unknown)
  vtx_diag(vtx, "vtx of unknown type marked complete");

 vtx->flags |= 0x4;
 do { if (((((vtx))->list_vtx.vtqe_next)) != ((void *)0)) (((vtx))->list_vtx.vtqe_next)->list_vtx.vtqe_prev = (vtx)->list_vtx.vtqe_prev; else { (&vslq->incomplete)->vtqh_last = (vtx)->list_vtx.vtqe_prev; } *(vtx)->list_vtx.vtqe_prev = (((vtx))->list_vtx.vtqe_next); ; ; } while (0);

 while (1) {
  do { do { if (!((vtx->flags & 0x8) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 640, "(vtx->flags & 0x8) == 0", VAS_ASSERT); } } while (0); } while (0);
  if (vtx->flags & 0x4 &&
      vtx->n_child == vtx->n_childready)
   vtx->flags |= 0x8;
  else
   return;
  if (vtx->parent == ((void *)0)) {

   do { (((vtx))->list_vtx.vtqe_next) = ((void *)0); (vtx)->list_vtx.vtqe_prev = (&vslq->ready)->vtqh_last; *(&vslq->ready)->vtqh_last = (vtx); (&vslq->ready)->vtqh_last = &(((vtx))->list_vtx.vtqe_next); } while (0);
   return;
  }
  vtx = vtx->parent;
  vtx->n_childready++;
  do { if (!(vtx->n_child >= vtx->n_childready)) { VAS_Fail(__func__, "vsl_dispatch.c", 653, "vtx->n_child >= vtx->n_childready", VAS_ASSERT); } } while (0);
 }
}


static void
vtx_set_parent(struct vtx *parent, struct vtx *child)
{

 do { do { if (!((parent) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 662, "(parent) != NULL", VAS_ASSERT); } } while (0); do { if (!((parent)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 662, "(parent)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((child) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 663, "(child) != NULL", VAS_ASSERT); } } while (0); do { if (!((child)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 663, "(child)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 do { if (!(parent != child)) { VAS_Fail(__func__, "vsl_dispatch.c", 664, "parent != child", VAS_ASSERT); } } while (0);
 do { do { if (!((parent->flags & 0x4) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 665, "(parent->flags & 0x4) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((child->flags & 0x4) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 666, "(child->flags & 0x4) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((child->parent) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 667, "(child->parent) == 0", VAS_ASSERT); } } while (0); } while (0);
 child->parent = parent;
 do { (((child))->list_child.vtqe_next) = ((void *)0); (child)->list_child.vtqe_prev = (&parent->child)->vtqh_last; *(&parent->child)->vtqh_last = (child); (&parent->child)->vtqh_last = &(((child))->list_child.vtqe_next); } while (0);
 parent->n_child++;
 do
  parent->n_descend += 1 + child->n_descend;
 while ((parent = parent->parent) != ((void *)0));
}



static int
vtx_parse_link(const char *str, enum VSL_transaction_e *ptype,
    unsigned *pvxid, enum VSL_reason_e *preason)
{
 char type[16], reason[16];
 unsigned vxid;
 int i;
 enum VSL_transaction_e et;
 enum VSL_reason_e er;

 do { do { if (!((str) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 688, "(str) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((ptype) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 689, "(ptype) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((pvxid) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 690, "(pvxid) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((preason) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 691, "(preason) != 0", VAS_ASSERT); } } while (0); } while (0);

 i = sscanf(str, "%15s %u %15s", type, &vxid, reason);
 if (i < 1)
  return (0);


 for (et = 0; et < VSL_t__MAX; et++)
  if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p (vsl_t_names[et]) && (__s1_len = strlen (type), __s2_len = strlen (vsl_t_names[et]), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((vsl_t_names[et]) + 1) - (size_t)(const void *)(vsl_t_names[et]) == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, vsl_t_names[et]) : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = strlen (type), __s1_len < 4) ? (__builtin_constant_p (vsl_t_names[et]) && ((size_t)(const void *)((vsl_t_names[et]) + 1) - (size_t)(const void *)(vsl_t_names[et]) == 1) ? __builtin_strcmp (type, vsl_t_names[et]) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (vsl_t_names[et]); register int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (vsl_t_names[et]) && ((size_t)(const void *)((vsl_t_names[et]) + 1) - (size_t)(const void *)(vsl_t_names[et]) == 1) && (__s2_len = strlen (vsl_t_names[et]), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, vsl_t_names[et]) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (vsl_t_names[et]))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (vsl_t_names[et]))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (vsl_t_names[et]))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (vsl_t_names[et]))[3]); } } __result; }))) : __builtin_strcmp (type, vsl_t_names[et])))); }))
   break;
 if (et >= VSL_t__MAX)
  et = VSL_t_unknown;
 *ptype = et;
 if (i == 1)
  return (1);


 do { if (!((vxid & ~(~(3U<<30))) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 708, "(vxid & ~VSL_IDENTMASK) == 0", VAS_ASSERT); } } while (0);
 *pvxid = vxid;
 if (i == 2)
  return (2);


 for (er = 0; er < VSL_r__MAX; er++)
  if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (reason) && __builtin_constant_p (vsl_r_names[er]) && (__s1_len = strlen (reason), __s2_len = strlen (vsl_r_names[er]), (!((size_t)(const void *)((reason) + 1) - (size_t)(const void *)(reason) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((vsl_r_names[er]) + 1) - (size_t)(const void *)(vsl_r_names[er]) == 1) || __s2_len >= 4)) ? __builtin_strcmp (reason, vsl_r_names[er]) : (__builtin_constant_p (reason) && ((size_t)(const void *)((reason) + 1) - (size_t)(const void *)(reason) == 1) && (__s1_len = strlen (reason), __s1_len < 4) ? (__builtin_constant_p (vsl_r_names[er]) && ((size_t)(const void *)((vsl_r_names[er]) + 1) - (size_t)(const void *)(vsl_r_names[er]) == 1) ? __builtin_strcmp (reason, vsl_r_names[er]) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (vsl_r_names[er]); register int __result = (((const unsigned char *) (const char *) (reason))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (reason))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (reason))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (reason))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (vsl_r_names[er]) && ((size_t)(const void *)((vsl_r_names[er]) + 1) - (size_t)(const void *)(vsl_r_names[er]) == 1) && (__s2_len = strlen (vsl_r_names[er]), __s2_len < 4) ? (__builtin_constant_p (reason) && ((size_t)(const void *)((reason) + 1) - (size_t)(const void *)(reason) == 1) ? __builtin_strcmp (reason, vsl_r_names[er]) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (reason); register int __result = __s1[0] - ((const unsigned char *) (const char *) (vsl_r_names[er]))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (vsl_r_names[er]))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (vsl_r_names[er]))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (vsl_r_names[er]))[3]); } } __result; }))) : __builtin_strcmp (reason, vsl_r_names[er])))); }))
   break;
 if (er >= VSL_r__MAX)
  er = VSL_r_unknown;
 *preason = er;
 return (3);
}


static int
vtx_scan_begin(struct VSLQ *vslq, struct vtx *vtx, const uint32_t *ptr)
{
 int i;
 enum VSL_transaction_e type;
 enum VSL_reason_e reason;
 unsigned p_vxid;
 struct vtx *p_vtx;

 do { if (!(((ptr)[0] >> 24) == SLT_Begin)) { VAS_Fail(__func__, "vsl_dispatch.c", 733, "VSL_TAG(ptr) == SLT_Begin", VAS_ASSERT); } } while (0);

 do { do { if (!((vtx->flags & 0x8) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 735, "(vtx->flags & 0x8) == 0", VAS_ASSERT); } } while (0); } while (0);

 i = vtx_parse_link(((const char*)((ptr)+2)), &type, &p_vxid, &reason);
 if (i != 3)
  return (vtx_diag_tag(vtx, ptr, "parse error"));
 if (type == VSL_t_unknown)
  (void)vtx_diag_tag(vtx, ptr, "unknown vxid type");


 if (vtx->type != VSL_t_unknown && vtx->type != type)


  (void)vtx_diag_tag(vtx, ptr, "type mismatch");
 vtx->type = type;
 vtx->reason = reason;

 if (p_vxid == 0)

  return (0);
 if (p_vxid == vtx->key.vxid)
  return (vtx_diag_tag(vtx, ptr, "link to self"));

 if (vslq->grouping == VSL_g_vxid)
  return (0);
 if (vslq->grouping == VSL_g_request && vtx->type == VSL_t_req &&
     vtx->reason == VSL_r_rxreq)
  return (0);

 if (vtx->parent != ((void *)0)) {
  if (vtx->parent->key.vxid != p_vxid) {


   return (vtx_diag_tag(vtx, ptr, "link mismatch"));
  } else

   return (0);
 }

 p_vtx = vtx_lookup(vslq, p_vxid);
 if (p_vtx == ((void *)0)) {

  p_vtx = vtx_add(vslq, p_vxid);
  do { do { if (!((p_vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 777, "(p_vtx) != 0", VAS_ASSERT); } } while (0); } while (0);
 } else {
  do { do { if (!((p_vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 779, "(p_vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((p_vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 779, "(p_vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
  if (p_vtx->flags & 0x4)
   return (vtx_diag_tag(vtx, ptr, "link too late"));
 }


 vtx_set_parent(p_vtx, vtx);

 return (0);
}


static int
vtx_scan_link(struct VSLQ *vslq, struct vtx *vtx, const uint32_t *ptr)
{
 int i;
 enum VSL_transaction_e c_type;
 enum VSL_reason_e c_reason;
 unsigned c_vxid;
 struct vtx *c_vtx;

 do { if (!(((ptr)[0] >> 24) == SLT_Link)) { VAS_Fail(__func__, "vsl_dispatch.c", 800, "VSL_TAG(ptr) == SLT_Link", VAS_ASSERT); } } while (0);

 do { do { if (!((vtx->flags & 0x8) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 802, "(vtx->flags & 0x8) == 0", VAS_ASSERT); } } while (0); } while (0);

 i = vtx_parse_link(((const char*)((ptr)+2)), &c_type, &c_vxid, &c_reason);
 if (i != 3)
  return (vtx_diag_tag(vtx, ptr, "parse error"));
 if (c_type == VSL_t_unknown)
  (void)vtx_diag_tag(vtx, ptr, "unknown vxid type");

 if (vslq->grouping == VSL_g_vxid)
  return (0);
 if (vslq->grouping == VSL_g_request && vtx->type == VSL_t_sess)
  return (0);

 if (c_vxid == 0)
  return (vtx_diag_tag(vtx, ptr, "illegal link vxid"));
 if (c_vxid == vtx->key.vxid)
  return (vtx_diag_tag(vtx, ptr, "link to self"));


 c_vtx = vtx_lookup(vslq, c_vxid);
 if (c_vtx == ((void *)0)) {

  c_vtx = vtx_add(vslq, c_vxid);
  do { do { if (!((c_vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 825, "(c_vtx) != 0", VAS_ASSERT); } } while (0); } while (0);
  do { do { if (!((c_vtx->parent) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 826, "(c_vtx->parent) == 0", VAS_ASSERT); } } while (0); } while (0);
  c_vtx->type = c_type;
  c_vtx->reason = c_reason;
  vtx_set_parent(vtx, c_vtx);
  return (0);
 }

 do { do { if (!((c_vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 833, "(c_vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((c_vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 833, "(c_vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 if (c_vtx->parent == vtx)

  return (0);
 if (c_vtx->parent != vtx)
  return (vtx_diag_tag(vtx, ptr, "duplicate link"));
 if (c_vtx->flags & 0x4)
  return (vtx_diag_tag(vtx, ptr, "link too late"));
 if (c_vtx->type != VSL_t_unknown && c_vtx->type != c_type)
  (void)vtx_diag_tag(vtx, ptr, "type mismatch");

 c_vtx->type = c_type;
 c_vtx->reason = c_reason;
 vtx_set_parent(vtx, c_vtx);
 return (0);
}



static void
vtx_scan(struct VSLQ *vslq, struct vtx *vtx)
{
 const uint32_t *ptr;
 enum VSL_tag_e tag;

 while (!(vtx->flags & 0x4) &&
     vslc_vtx_next(&vtx->c.cursor) == 1) {
  ptr = vtx->c.cursor.rec.ptr;
  if ((((ptr)[1]) & (~(3U<<30))) != vtx->key.vxid) {
   (void)vtx_diag_tag(vtx, ptr, "vxid mismatch");
   continue;
  }

  tag = ((ptr)[0] >> 24);
  do { if (!(tag != SLT__Batch)) { VAS_Fail(__func__, "vsl_dispatch.c", 867, "tag != SLT__Batch", VAS_ASSERT); } } while (0);

  switch (tag) {
  case SLT_Begin:
   if (vtx->flags & 0x1)
    (void)vtx_diag_tag(vtx, ptr, "duplicate begin");
   else {
    (void)vtx_scan_begin(vslq, vtx, ptr);
    vtx->flags |= 0x1;
   }
   break;

  case SLT_Link:
   (void)vtx_scan_link(vslq, vtx, ptr);
   break;

  case SLT_End:
   do { do { if (!((vtx->flags & 0x2) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 884, "(vtx->flags & 0x2) == 0", VAS_ASSERT); } } while (0); } while (0);
   vtx->flags |= 0x2;
   vtx_mark_complete(vslq, vtx);
   break;

  default:
   break;
  }
 }
}



static void
vtx_force(struct VSLQ *vslq, struct vtx *vtx, const char *reason)
{

 do { do { if (!((vtx->flags & 0x4) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 901, "(vtx->flags & 0x4) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->flags & 0x8) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 902, "(vtx->flags & 0x8) == 0", VAS_ASSERT); } } while (0); } while (0);
 vtx_scan(vslq, vtx);
 if (!(vtx->flags & 0x1))
  vtx_synth_rec(vtx, SLT_Begin, "%s %u synth",
      vsl_t_names[vtx->type], 0);
 vtx_diag(vtx, reason);
 if (!(vtx->flags & 0x2))
  vtx_synth_rec(vtx, SLT_End, "synth");
 vtx_scan(vslq, vtx);
 do { do { if (!((vtx->flags & 0x4) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 911, "(vtx->flags & 0x4) != 0", VAS_ASSERT); } } while (0); } while (0);
}



static int
vslq_callback(const struct VSLQ *vslq, struct vtx *vtx, VSLQ_dispatch_f *func,
    void *priv)
{
 unsigned n = vtx->n_descend + 1;
 struct vtx *vtxs[n];
 struct VSL_transaction trans[n];
 struct VSL_transaction *ptrans[n + 1];
 unsigned i, j;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 926, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 927, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 927, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((vtx->flags & 0x8) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 928, "(vtx->flags & 0x8) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((func) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 929, "(func) != 0", VAS_ASSERT); } } while (0); } while (0);

 if (vslq->grouping == VSL_g_session &&
     vtx->type != VSL_t_sess)
  return (0);
 if (vslq->grouping == VSL_g_request &&
     vtx->type != VSL_t_req)
  return (0);


 (void)vslc_vtx_reset(&vtx->c.cursor);
 vtxs[0] = vtx;
 trans[0].level = 1;
 trans[0].vxid = vtx->key.vxid;
 trans[0].vxid_parent = 0;
 trans[0].type = vtx->type;
 trans[0].reason = vtx->reason;
 trans[0].c = &vtx->c.cursor;
 i = 1;
 j = 0;
 while (j < i) {
  for ((vtx) = (((&vtxs[j]->child))->vtqh_first); (vtx); (vtx) = (((vtx))->list_child.vtqe_next)) {
   do { if (!(i < n)) { VAS_Fail(__func__, "vsl_dispatch.c", 951, "i < n", VAS_ASSERT); } } while (0);
   (void)vslc_vtx_reset(&vtx->c.cursor);
   vtxs[i] = vtx;
   if (vtx->reason == VSL_r_restart)

    trans[i].level = trans[j].level;
   else
    trans[i].level = trans[j].level + 1;
   trans[i].vxid = vtx->key.vxid;
   trans[i].vxid_parent = trans[j].vxid;
   trans[i].type = vtx->type;
   trans[i].reason = vtx->reason;
   trans[i].c = &vtx->c.cursor;
   i++;
  }
  j++;
 }
 do { if (!(i == n)) { VAS_Fail(__func__, "vsl_dispatch.c", 968, "i == n", VAS_ASSERT); } } while (0);


 for (i = 0; i < n; i++)
  ptrans[i] = &trans[i];
 ptrans[i] = ((void *)0);


 if (vslq->query != ((void *)0) && !vslq_runquery(vslq->query, ptrans))
  return (0);


 return ((func)(vslq->vsl, ptrans, priv));
}



static void
vtx_synth_rec(struct vtx *vtx, unsigned tag, const char *fmt, ...)
{
 struct synth *synth, *it;
 va_list ap;
 char *buf;
 int l, buflen;

 do { (synth) = calloc(sizeof *(synth), 1); if ((synth) != ((void *)0)) (synth)->magic = (0xC654479F); } while (0);
 do { do { if (!((synth) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 994, "(synth) != 0", VAS_ASSERT); } } while (0); } while (0);

 buf = (char *)&synth->data[2];
 buflen = sizeof (synth->data) - 2 * sizeof (uint32_t);
 __builtin_va_start(ap,fmt);
 l = vsnprintf(buf, buflen, fmt, ap);
 do { if (!(l >= 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1000, "l >= 0", VAS_ASSERT); } } while (0);
 __builtin_va_end(ap);
 if (l > buflen - 1)
  l = buflen - 1;
 buf[l++] = '\0';
 synth->data[1] = vtx->key.vxid;
 switch (vtx->type) {
 case VSL_t_req:
  synth->data[1] |= (1U<<30);
  break;
 case VSL_t_bereq:
  synth->data[1] |= (1U<<31);
  break;
 default:
  break;
 }
 synth->data[0] = (((tag & 0xff) << 24) | l);
 synth->offset = vtx->c.offset;

 for ((it) = (*(((struct synthhead *)(((&vtx->synth))->vtqh_last))->vtqh_last)); (it); (it) = (*(((struct synthhead *)(((it))->list.vtqe_prev))->vtqh_last))) {

  do { do { if (!((it) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1021, "(it) != NULL", VAS_ASSERT); } } while (0); do { if (!((it)->magic == 0xC654479F)) { VAS_Fail(__func__, "vsl_dispatch.c", 1021, "(it)->magic == 0xC654479F", VAS_ASSERT); } } while (0); } while (0);
  if (synth->offset >= it->offset)
   break;
 }
 if (it != ((void *)0))
  do { if (((((synth))->list.vtqe_next) = (((it))->list.vtqe_next)) != ((void *)0)) (((synth))->list.vtqe_next)->list.vtqe_prev = &(((synth))->list.vtqe_next); else { (&vtx->synth)->vtqh_last = &(((synth))->list.vtqe_next); } (((it))->list.vtqe_next) = (synth); (synth)->list.vtqe_prev = &(((it))->list.vtqe_next); } while (0);
 else
  do { if (((((synth))->list.vtqe_next) = (((&vtx->synth))->vtqh_first)) != ((void *)0)) (((&vtx->synth))->vtqh_first)->list.vtqe_prev = &(((synth))->list.vtqe_next); else (&vtx->synth)->vtqh_last = &(((synth))->list.vtqe_next); (((&vtx->synth))->vtqh_first) = (synth); (synth)->list.vtqe_prev = &(((&vtx->synth))->vtqh_first); } while (0);


 do { if ((vtx->c.synth) != ((void *)0)) do { if (!((vtx->c.synth)->magic == 0xC654479F)) { VAS_Fail(__func__, "vsl_dispatch.c", 1031, "(vtx->c.synth)->magic == 0xC654479F", VAS_ASSERT); } } while (0); } while (0);
 if (vtx->c.synth == ((void *)0) || vtx->c.synth->offset > synth->offset)
  vtx->c.synth = synth;
}


static int
vtx_diag(struct vtx *vtx, const char *msg)
{

 vtx_synth_rec(vtx, SLT_VSL, msg);
 return (-1);
}



static int
vtx_diag_tag(struct vtx *vtx, const uint32_t *ptr, const char *reason)
{

 vtx_synth_rec(vtx, SLT_VSL, "%s (%u:%s \"%.*s\")", reason, (((ptr)[1]) & (~(3U<<30))),
     VSL_tags[((ptr)[0] >> 24)], (int)((ptr)[0] & 0xffff), ((const char*)((ptr)+2)));
 return (-1);
}

struct VSLQ *
VSLQ_New(struct VSL_data *vsl, struct VSL_cursor **cp,
    enum VSL_grouping_e grouping, const char *querystring)
{
 struct vslq_query *query;
 struct VSLQ *vslq;

 do { do { if (!((vsl) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1063, "(vsl) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsl)->magic == 0x8E6C92AA)) { VAS_Fail(__func__, "vsl_dispatch.c", 1063, "(vsl)->magic == 0x8E6C92AA", VAS_ASSERT); } } while (0); } while (0);
 if (grouping > VSL_g_session) {
  (void)vsl_diag(vsl, "Illegal query grouping");
  return (((void *)0));
 }
 if (querystring != ((void *)0)) {
  query = vslq_newquery(vsl, grouping, querystring);
  if (query == ((void *)0))
   return (((void *)0));
 } else
  query = ((void *)0);

 do { (vslq) = calloc(sizeof *(vslq), 1); if ((vslq) != ((void *)0)) (vslq)->magic = (0x23A8BE97); } while (0);
 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1076, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 vslq->vsl = vsl;
 if (cp != ((void *)0)) {
  vslq->c = *cp;
  *cp = ((void *)0);
 }
 vslq->grouping = grouping;
 vslq->query = query;


 do { (&vslq->tree)->rbh_root = ((void *)0); } while ( 0);
 do { (((&vslq->ready))->vtqh_first) = ((void *)0); (&vslq->ready)->vtqh_last = &(((&vslq->ready))->vtqh_first); } while (0);
 do { (((&vslq->incomplete))->vtqh_first) = ((void *)0); (&vslq->incomplete)->vtqh_last = &(((&vslq->incomplete))->vtqh_first); } while (0);
 do { (((&vslq->shmrefs))->vtqh_first) = ((void *)0); (&vslq->shmrefs)->vtqh_last = &(((&vslq->shmrefs))->vtqh_first); } while (0);
 do { (((&vslq->cache))->vtqh_first) = ((void *)0); (&vslq->cache)->vtqh_last = &(((&vslq->cache))->vtqh_first); } while (0);


 vslq->raw.c.magic = 0x247EBD44;
 vslq->raw.c.cursor.priv_tbl = &vslc_raw_tbl;
 vslq->raw.c.cursor.priv_data = &vslq->raw.c;
 vslq->raw.trans.level = 0;
 vslq->raw.trans.type = VSL_t_raw;
 vslq->raw.trans.reason = VSL_r_unknown;
 vslq->raw.trans.c = &vslq->raw.c.cursor;
 vslq->raw.ptrans[0] = &vslq->raw.trans;
 vslq->raw.ptrans[1] = ((void *)0);

 return (vslq);
}

void
VSLQ_Delete(struct VSLQ **pvslq)
{
 struct VSLQ *vslq;
 struct vtx *vtx;

 do { do { if (!((pvslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1112, "(pvslq) != 0", VAS_ASSERT); } } while (0); } while (0);
 vslq = *pvslq;
 *pvslq = ((void *)0);
 do { do { if (!((vslq) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1115, "(vslq) != NULL", VAS_ASSERT); } } while (0); do { if (!((vslq)->magic == 0x23A8BE97)) { VAS_Fail(__func__, "vsl_dispatch.c", 1115, "(vslq)->magic == 0x23A8BE97", VAS_ASSERT); } } while (0); } while (0);

 (void)VSLQ_Flush(vslq, ((void *)0), ((void *)0));
 do { do { if (!((vslq->n_outstanding) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1118, "(vslq->n_outstanding) == 0", VAS_ASSERT); } } while (0); } while (0);

 if (vslq->c != ((void *)0)) {
  VSL_DeleteCursor(vslq->c);
  vslq->c = ((void *)0);
 }

 if (vslq->query != ((void *)0))
  vslq_deletequery(&vslq->query);
 do { do { if (!((vslq->query) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1127, "(vslq->query) == 0", VAS_ASSERT); } } while (0); } while (0);

 while (!((&vslq->cache)->vtqh_first == ((void *)0))) {
  do { do { if (!((vslq->n_cache) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1130, "(vslq->n_cache) != 0", VAS_ASSERT); } } while (0); } while (0);
  vtx = ((&vslq->cache)->vtqh_first);
  do { if (((((vtx))->list_child.vtqe_next)) != ((void *)0)) (((vtx))->list_child.vtqe_next)->list_child.vtqe_prev = (vtx)->list_child.vtqe_prev; else { (&vslq->cache)->vtqh_last = (vtx)->list_child.vtqe_prev; } *(vtx)->list_child.vtqe_prev = (((vtx))->list_child.vtqe_next); ; ; } while (0);
  vslq->n_cache--;
  do { (vtx)->magic = (0); free(vtx); vtx = ((void *)0); } while (0);
 }

 do { (vslq)->magic = (0); free(vslq); vslq = ((void *)0); } while (0);
}

void
VSLQ_SetCursor(struct VSLQ *vslq, struct VSL_cursor **cp)
{

 do { do { if (!((vslq) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1144, "(vslq) != NULL", VAS_ASSERT); } } while (0); do { if (!((vslq)->magic == 0x23A8BE97)) { VAS_Fail(__func__, "vsl_dispatch.c", 1144, "(vslq)->magic == 0x23A8BE97", VAS_ASSERT); } } while (0); } while (0);

 if (vslq->c != ((void *)0)) {
  (void)VSLQ_Flush(vslq, ((void *)0), ((void *)0));
  do { do { if (!((vslq->n_outstanding) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1148, "(vslq->n_outstanding) == 0", VAS_ASSERT); } } while (0); } while (0);
  VSL_DeleteCursor(vslq->c);
  vslq->c = ((void *)0);
 }

 if (cp != ((void *)0)) {
  do { do { if (!((*cp) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1154, "(*cp) != 0", VAS_ASSERT); } } while (0); } while (0);
  vslq->c = *cp;
  *cp = ((void *)0);
 }
}



static int
vslq_raw(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv)
{
 int i = 1;
 int r;

 do { if (!(vslq->grouping == VSL_g_raw)) { VAS_Fail(__func__, "vsl_dispatch.c", 1168, "vslq->grouping == VSL_g_raw", VAS_ASSERT); } } while (0);

 do { if (!(vslq->raw.offset <= vslq->raw.len)) { VAS_Fail(__func__, "vsl_dispatch.c", 1170, "vslq->raw.offset <= vslq->raw.len", VAS_ASSERT); } } while (0);
 do {
  if (vslq->raw.offset == vslq->raw.len) {
   i = VSL_Next(vslq->c);
   if (i <= 0)
    return (i);
   do { do { if (!((vslq->c->rec.ptr) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1176, "(vslq->c->rec.ptr) != 0", VAS_ASSERT); } } while (0); } while (0);
   vslq->raw.start = vslq->c->rec;
   if (((vslq->c->rec.ptr)[0] >> 24) == SLT__Batch)
    vslq->raw.len = ((vslq->c->rec.ptr) + 2 + (((((vslq->c->rec.ptr)[1])) + 3) / 4))
                                        -
        vslq->c->rec.ptr;
   else
    vslq->raw.len = ((vslq->raw.start.ptr) + 2 + (((((vslq->raw.start.ptr)[0] & 0xffff)) + 3) / 4)) -
        vslq->raw.start.ptr;
   do { if (!(vslq->raw.len > 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1185, "vslq->raw.len > 0", VAS_ASSERT); } } while (0);
   vslq->raw.offset = 0;
  }

  vslq->raw.c.ptr = vslq->raw.start.ptr + vslq->raw.offset;
  vslq->raw.c.cursor.rec.ptr = ((void *)0);
  vslq->raw.trans.vxid = (((vslq->raw.c.ptr)[1]) & (~(3U<<30)));
  vslq->raw.offset += ((vslq->raw.c.ptr) + 2 + (((((vslq->raw.c.ptr)[0] & 0xffff)) + 3) / 4)) - vslq->raw.c.ptr;
 } while (((vslq->raw.c.ptr)[0] >> 24) == SLT__Batch);

 if (func == ((void *)0))
  return (i);

 if (vslq->query != ((void *)0) &&
     !vslq_runquery(vslq->query, vslq->raw.ptrans))
  return (i);

 r = (func)(vslq->vsl, vslq->raw.ptrans, priv);
 if (r)
  return (r);

 return (i);
}
# 1216 "vsl_dispatch.c"
static int
vslq_shmref_check(struct VSLQ *vslq)
{
 struct chunk *chunk;
 int i;

 while ((chunk = ((&vslq->shmrefs)->vtqh_first)) != ((void *)0)) {
  do { do { if (!((chunk) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1223, "(chunk) != NULL", VAS_ASSERT); } } while (0); do { if (!((chunk)->magic == 0x48DC0194)) { VAS_Fail(__func__, "vsl_dispatch.c", 1223, "(chunk)->magic == 0x48DC0194", VAS_ASSERT); } } while (0); } while (0);
  do { if (!(chunk->type == chunk_t_shm)) { VAS_Fail(__func__, "vsl_dispatch.c", 1224, "chunk->type == chunk_t_shm", VAS_ASSERT); } } while (0);
  i = VSL_Check(vslq->c, &chunk->shm.start);
  if (i == 2)


   return (0);
  else if (i == 1)

   chunk_shm_to_buf(vslq, chunk);
  else

   return (-3);
 }

 return (0);
}


static int
vslq_next(struct VSLQ *vslq)
{
 struct VSL_cursor *c;
 int i;
 enum VSL_tag_e tag;
 ssize_t len;
 unsigned vxid;
 struct vtx *vtx;

 c = vslq->c;
 i = VSL_Next(c);
 if (i != 1)
  return (i);

 tag = ((c->rec.ptr)[0] >> 24);
 if (tag == SLT__Batch) {
  vxid = (((((c->rec.ptr) + 2)[1]) & (~(3U<<30))));
  len = ((c->rec.ptr) + 2 + (((((c->rec.ptr)[1])) + 3) / 4)) -
      c->rec.ptr;
  if (len == 0)
   return (i);
  tag = ((((c->rec.ptr) + 2 + (((((c->rec.ptr)[0] & 0xffff)) + 3) / 4)))[0] >> 24);
 } else {
  vxid = (((c->rec.ptr)[1]) & (~(3U<<30)));
  len = ((c->rec.ptr) + 2 + (((((c->rec.ptr)[0] & 0xffff)) + 3) / 4)) - c->rec.ptr;
 }
 do { if (!(len > 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1269, "len > 0", VAS_ASSERT); } } while (0);
 if (vxid == 0)

  return (i);

 vtx = vtx_lookup(vslq, vxid);
 if (vtx == ((void *)0) && tag == SLT_Begin) {
  vtx = vtx_add(vslq, vxid);
  do { do { if (!((vtx) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1277, "(vtx) != 0", VAS_ASSERT); } } while (0); } while (0);
 }
 if (vtx != ((void *)0)) {
  vtx_append(vslq, vtx, &c->rec, len);
  vtx_scan(vslq, vtx);
 }

 return (i);
}


static int
vslq_process_ready(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv)
{
 struct vtx *vtx;
 int i = 0;

 do { do { if (!((vslq) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1294, "(vslq) != 0", VAS_ASSERT); } } while (0); } while (0);

 while (!((&vslq->ready)->vtqh_first == ((void *)0))) {
  vtx = ((&vslq->ready)->vtqh_first);
  do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1298, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 1298, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((vtx))->list_vtx.vtqe_next)) != ((void *)0)) (((vtx))->list_vtx.vtqe_next)->list_vtx.vtqe_prev = (vtx)->list_vtx.vtqe_prev; else { (&vslq->ready)->vtqh_last = (vtx)->list_vtx.vtqe_prev; } *(vtx)->list_vtx.vtqe_prev = (((vtx))->list_vtx.vtqe_next); ; ; } while (0);
  do { do { if (!((vtx->flags & 0x8) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1300, "(vtx->flags & 0x8) != 0", VAS_ASSERT); } } while (0); } while (0);
  if (func != ((void *)0))
   i = vslq_callback(vslq, vtx, func, priv);
  vtx_retire(vslq, &vtx);
  do { do { if (!((vtx) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1304, "(vtx) == 0", VAS_ASSERT); } } while (0); } while (0);
  if (i)
   return (i);
 }

 return (0);
}



int
VSLQ_Dispatch(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv)
{
 int i, r;
 double now;
 struct vtx *vtx;

 do { do { if (!((vslq) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1321, "(vslq) != NULL", VAS_ASSERT); } } while (0); do { if (!((vslq)->magic == 0x23A8BE97)) { VAS_Fail(__func__, "vsl_dispatch.c", 1321, "(vslq)->magic == 0x23A8BE97", VAS_ASSERT); } } while (0); } while (0);


 if (vslq->c == ((void *)0))
  return (-2);

 if (vslq->grouping == VSL_g_raw)
  return (vslq_raw(vslq, func, priv));


 i = vslq_next(vslq);
 if (i <= 0)

  return (i);


 r = vslq_shmref_check(vslq);
 if (r)

  return (r);


 now = VTIM_mono();
 while (!((&vslq->incomplete)->vtqh_first == ((void *)0))) {
  vtx = ((&vslq->incomplete)->vtqh_first);
  do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1346, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 1346, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
  if (now - vtx->t_start < vslq->vsl->T_opt)
   break;
  vtx_force(vslq, vtx, "timeout");
  do { do { if (!((vtx->flags & 0x4) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1350, "(vtx->flags & 0x4) != 0", VAS_ASSERT); } } while (0); } while (0);
 }


 while (vslq->n_outstanding > vslq->vsl->L_opt &&
     !(((&vslq->incomplete)->vtqh_first == ((void *)0)))) {
  vtx = ((&vslq->incomplete)->vtqh_first);
  do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1357, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 1357, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
  vtx_force(vslq, vtx, "store overflow");
  do { do { if (!((vtx->flags & 0x4) != 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1359, "(vtx->flags & 0x4) != 0", VAS_ASSERT); } } while (0); } while (0);
  r = vslq_process_ready(vslq, func, priv);
  if (r)

   return (r);
 }


 if (!((&vslq->ready)->vtqh_first == ((void *)0))) {
  r = vslq_process_ready(vslq, func, priv);
  if (r)

   return (r);
 }


 return (i);
}


int
VSLQ_Flush(struct VSLQ *vslq, VSLQ_dispatch_f *func, void *priv)
{
 struct vtx *vtx;

 do { do { if (!((vslq) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1384, "(vslq) != NULL", VAS_ASSERT); } } while (0); do { if (!((vslq)->magic == 0x23A8BE97)) { VAS_Fail(__func__, "vsl_dispatch.c", 1384, "(vslq)->magic == 0x23A8BE97", VAS_ASSERT); } } while (0); } while (0);

 while (!((&vslq->incomplete)->vtqh_first == ((void *)0))) {
  vtx = ((&vslq->incomplete)->vtqh_first);
  do { do { if (!((vtx) != ((void *)0))) { VAS_Fail(__func__, "vsl_dispatch.c", 1388, "(vtx) != NULL", VAS_ASSERT); } } while (0); do { if (!((vtx)->magic == 0xACC21D09)) { VAS_Fail(__func__, "vsl_dispatch.c", 1388, "(vtx)->magic == 0xACC21D09", VAS_ASSERT); } } while (0); } while (0);
  do { do { if (!((vtx->flags & 0x4) == 0)) { VAS_Fail(__func__, "vsl_dispatch.c", 1389, "(vtx->flags & 0x4) == 0", VAS_ASSERT); } } while (0); } while (0);
  vtx_force(vslq, vtx, "flush");
 }

 return (vslq_process_ready(vslq, func, priv));
}
