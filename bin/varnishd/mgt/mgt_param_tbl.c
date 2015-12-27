# 1 "mgt/mgt_param_tbl.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/bin/varnishd//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "mgt/mgt_param_tbl.c"
# 30 "mgt/mgt_param_tbl.c"
# 1 "../../config.h" 1
# 31 "mgt/mgt_param_tbl.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4





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
# 50 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 51 "/usr/include/libio.h" 2 3 4
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




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







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




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
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
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




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






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




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
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
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
# 640 "/usr/include/stdio.h" 3 4

# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
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

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
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



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




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


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







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





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





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




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...)

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 206 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 241 "/usr/include/bits/stdio2.h" 3 4
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


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")

                                                 __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




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






# 33 "mgt/mgt_param_tbl.c" 2

# 1 "./mgt/mgt.h" 1
# 31 "./mgt/mgt.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
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
# 32 "./mgt/mgt.h" 2

# 1 "./common/common.h" 1
# 33 "./common/common.h"
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






typedef __ino64_t ino64_t;




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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





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
# 216 "/usr/include/sys/types.h" 3 4
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
# 217 "/usr/include/sys/types.h" 2 3 4


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
# 54 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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



# 34 "./common/common.h" 2

# 1 "../../include/miniobj.h" 1
# 36 "./common/common.h" 2
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
# 37 "./common/common.h" 2
# 1 "../../include/vcs.h" 1
# 32 "../../include/vcs.h"
extern const char *VCS_version;
void VCS_Message(const char *);
# 38 "./common/common.h" 2
# 1 "../../include/vdef.h" 1
# 39 "./common/common.h" 2
# 1 "../../include/vqueue.h" 1
# 40 "./common/common.h" 2
# 1 "../../include/vsb.h" 1
# 37 "../../include/vsb.h"
struct vsb {
 unsigned magic;

 int s_error;
 char *s_buf;
 ssize_t s_size;
 ssize_t s_len;






 int s_flags;
 int s_indent;
};







struct vsb *VSB_new(struct vsb *, char *, int, int);


void VSB_clear(struct vsb *);
int VSB_bcat(struct vsb *, const void *, ssize_t);
int VSB_cat(struct vsb *, const char *);
int VSB_printf(struct vsb *, const char *, ...)
 __attribute__((format(printf, 2, 3)));




int VSB_putc(struct vsb *, int);
int VSB_error(const struct vsb *);
int VSB_finish(struct vsb *);
char *VSB_data(const struct vsb *);
ssize_t VSB_len(const struct vsb *);
void VSB_delete(struct vsb *);

void VSB_quote(struct vsb *s, const char *p, int len, int how);
void VSB_indent(struct vsb *, int);
# 41 "./common/common.h" 2
# 1 "../../include/vapi/vsc_int.h" 1
# 34 "../../include/vapi/vsc_int.h"
enum VSC_level_e {


# 1 "../../include/tbl/vsc_levels.h" 1
# 39 "../../include/tbl/vsc_levels.h"
VSC_level_info,

VSC_level_diag,

VSC_level_debug,
# 38 "../../include/vapi/vsc_int.h" 2

 VSC_level_MAX,
};



# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
extern const char *VSC_type_main;


extern const char *VSC_type_mgt;


extern const char *VSC_type_mempool;


extern const char *VSC_type_sma;


extern const char *VSC_type_smf;


extern const char *VSC_type_vbe;


extern const char *VSC_type_lck;
# 45 "../../include/vapi/vsc_int.h" 2






# 1 "../../include/tbl/vsc_all.h" 1
# 32 "../../include/tbl/vsc_all.h"
struct VSC_C_main {
# 1 "../../include/tbl/vsc_f_main.h" 1
# 38 "../../include/tbl/vsc_f_main.h"
uint64_t uptime;
# 48 "../../include/tbl/vsc_f_main.h"
uint64_t sess_conn;




uint64_t sess_drop;




uint64_t sess_fail;
# 67 "../../include/tbl/vsc_f_main.h"
uint64_t client_req_400;





uint64_t client_req_417;




uint64_t client_req;






uint64_t cache_hit;






uint64_t cache_hitpass;
# 101 "../../include/tbl/vsc_f_main.h"
uint64_t cache_miss;
# 110 "../../include/tbl/vsc_f_main.h"
uint64_t backend_conn;





uint64_t backend_unhealthy;



uint64_t backend_busy;



uint64_t backend_fail;



uint64_t backend_reuse;




uint64_t backend_recycle;







uint64_t backend_retry;
# 150 "../../include/tbl/vsc_f_main.h"
uint64_t fetch_head;



uint64_t fetch_length;



uint64_t fetch_chunked;



uint64_t fetch_eof;



uint64_t fetch_bad;



uint64_t fetch_none;



uint64_t fetch_1xx;



uint64_t fetch_204;



uint64_t fetch_304;



uint64_t fetch_failed;



uint64_t fetch_no_thread;
# 201 "../../include/tbl/vsc_f_main.h"
uint64_t pools;





uint64_t threads;






uint64_t threads_limited;






uint64_t threads_created;




uint64_t threads_destroyed;




uint64_t threads_failed;






uint64_t thread_queue_len;






uint64_t busy_sleep;





uint64_t busy_wakeup;





uint64_t busy_killed;





uint64_t sess_queued;





uint64_t sess_dropped;







uint64_t n_object;



uint64_t n_vampireobject;



uint64_t n_objectcore;



uint64_t n_objecthead;



uint64_t n_waitinglist;




uint64_t n_backend;




uint64_t n_expired;




uint64_t n_lru_nuked;




uint64_t n_lru_moved;




uint64_t losthdr;




uint64_t s_sess;



uint64_t s_req;



uint64_t s_pipe;



uint64_t s_pass;



uint64_t s_fetch;



uint64_t s_synth;



uint64_t s_req_hdrbytes;



uint64_t s_req_bodybytes;



uint64_t s_resp_hdrbytes;



uint64_t s_resp_bodybytes;



uint64_t s_pipe_hdrbytes;



uint64_t s_pipe_in;




uint64_t s_pipe_out;





uint64_t sess_closed;



uint64_t sess_closed_err;




uint64_t sess_readahead;



uint64_t sess_herd;
# 406 "../../include/tbl/vsc_f_main.h"
# 1 "../../include/tbl/sess_close.h" 1
# 33 "../../include/tbl/sess_close.h"
uint64_t sc_rem_close;
uint64_t sc_req_close;
uint64_t sc_req_http10;
uint64_t sc_rx_bad;
uint64_t sc_rx_body;
uint64_t sc_rx_junk;
uint64_t sc_rx_overflow;
uint64_t sc_rx_timeout;
uint64_t sc_tx_pipe;
uint64_t sc_tx_error;
uint64_t sc_tx_eof;
uint64_t sc_resp_close;
uint64_t sc_overload;
uint64_t sc_pipe_overflow;
uint64_t sc_range_short;
# 407 "../../include/tbl/vsc_f_main.h" 2
# 415 "../../include/tbl/vsc_f_main.h"
uint64_t shm_records;



uint64_t shm_writes;



uint64_t shm_flushes;



uint64_t shm_cont;



uint64_t shm_cycles;






uint64_t backend_req;






uint64_t n_vcl;



uint64_t n_vcl_avail;



uint64_t n_vcl_discard;






uint64_t bans;




uint64_t bans_completed;




uint64_t bans_obj;




uint64_t bans_req;




uint64_t bans_added;



uint64_t bans_deleted;




uint64_t bans_tested;




uint64_t bans_obj_killed;



uint64_t bans_lurker_tested;




uint64_t bans_tests_tested;






uint64_t bans_lurker_tests_tested;






uint64_t bans_lurker_obj_killed;



uint64_t bans_dups;



uint64_t bans_lurker_contention;



uint64_t bans_persisted_bytes;



uint64_t bans_persisted_fragmentation;







uint64_t n_purges;



uint64_t n_obj_purged;






uint64_t exp_mailed;




uint64_t exp_received;






uint64_t hcb_nolock;



uint64_t hcb_lock;



uint64_t hcb_insert;






uint64_t esi_errors;



uint64_t esi_warnings;






uint64_t vmods;






uint64_t n_gzip;



uint64_t n_gunzip;






uint64_t vsm_free;





uint64_t vsm_used;





uint64_t vsm_cooling;






uint64_t vsm_overflow;






uint64_t vsm_overflowed;
# 34 "../../include/tbl/vsc_all.h" 2
};

struct VSC_C_mgt {

# 1 "../../include/tbl/vsc_fields.h" 1
# 68 "../../include/tbl/vsc_fields.h"
uint64_t uptime;



uint64_t child_start;



uint64_t child_exit;



uint64_t child_stop;




uint64_t child_died;



uint64_t child_dump;



uint64_t child_panic;
# 39 "../../include/tbl/vsc_all.h" 2

};

struct VSC_C_mempool {

# 1 "../../include/tbl/vsc_fields.h" 1
# 230 "../../include/tbl/vsc_fields.h"
uint64_t live;



uint64_t pool;



uint64_t sz_wanted;



uint64_t sz_actual;



uint64_t allocs;



uint64_t frees;



uint64_t recycle;



uint64_t timeout;



uint64_t toosmall;



uint64_t surplus;



uint64_t randry;
# 45 "../../include/tbl/vsc_all.h" 2

};

struct VSC_C_sma {

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
uint64_t c_req;



uint64_t c_fail;



uint64_t c_bytes;



uint64_t c_freed;



uint64_t g_alloc;



uint64_t g_bytes;



uint64_t g_space;
# 51 "../../include/tbl/vsc_all.h" 2

};

struct VSC_C_smf {

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
uint64_t c_req;



uint64_t c_fail;



uint64_t c_bytes;



uint64_t c_freed;



uint64_t g_alloc;



uint64_t g_bytes;



uint64_t g_space;
# 164 "../../include/tbl/vsc_fields.h"
uint64_t g_smf;



uint64_t g_smf_frag;



uint64_t g_smf_large;
# 57 "../../include/tbl/vsc_all.h" 2

};

struct VSC_C_vbe {

# 1 "../../include/tbl/vsc_fields.h" 1
# 182 "../../include/tbl/vsc_fields.h"
uint64_t happy;



uint64_t bereq_hdrbytes;



uint64_t bereq_bodybytes;



uint64_t beresp_hdrbytes;



uint64_t beresp_bodybytes;



uint64_t pipe_hdrbytes;



uint64_t pipe_out;




uint64_t pipe_in;




uint64_t conn;



uint64_t req;
# 63 "../../include/tbl/vsc_all.h" 2

};

struct VSC_C_lck {

# 1 "../../include/tbl/vsc_fields.h" 1
# 104 "../../include/tbl/vsc_fields.h"
uint64_t creat;



uint64_t destroy;



uint64_t locks;
# 69 "../../include/tbl/vsc_all.h" 2

};
# 52 "../../include/vapi/vsc_int.h" 2
# 42 "./common/common.h" 2






enum baninfo {
 BI_NEW,
 BI_DROP
};

enum obj_attr {

# 1 "../../include/tbl/obj_attr.h" 1
# 34 "../../include/tbl/obj_attr.h"
OA_VXID,
OA_EXP,
OA_VARY,
OA_HEADERS,
OA_FLAGS,
OA_GZIPBITS,
OA_ESIDATA,
OA_LASTMODIFIED,
# 56 "./common/common.h" 2

};

enum obj_flags {

# 1 "../../include/tbl/obj_attr.h" 1
# 46 "../../include/tbl/obj_attr.h"
OF_GZIPED = (1<<1),
OF_CHGGZIP = (1<<2),
OF_IMSCAND = (1<<3),
OF_ESIPROC = (1<<4),
# 62 "./common/common.h" 2

};

enum sess_step {

# 1 "../../include/tbl/steps.h" 1
# 34 "../../include/tbl/steps.h"
S_STP_H1NEWSESS,
S_STP_H1NEWREQ,
S_STP_H1PROC,
S_STP_H1BUSY,
S_STP_H1CLEANUP,
S_STP_H1_LAST,

S_STP_PROXYNEWSESS,
S_STP_PROXY_LAST,
# 68 "./common/common.h" 2

};

struct cli;
# 89 "./common/common.h"
extern pid_t mgt_pid;



extern struct vsb *vident;
int Symbol_Lookup(struct vsb *vsb, void *ptr);



void mgt_child_inherit(int fd, const char *what);
# 107 "./common/common.h"
int VCL_TestLoad(const char *);


struct vsm_sc;
struct VSC_C_main;
struct vsm_sc *VSM_common_new(void *ptr, ssize_t len);
void *VSM_common_alloc(struct vsm_sc *sc, ssize_t size,
    const char *class, const char *type, const char *ident);
void VSM_common_free(struct vsm_sc *sc, void *ptr);
void VSM_common_delete(struct vsm_sc **sc);
void VSM_common_copy(struct vsm_sc *to, const struct vsm_sc *from);
void VSM_common_cleaner(struct vsm_sc *sc, struct VSC_C_main *stats);
void VSM_common_ageupdate(const struct vsm_sc *sc);
# 34 "./mgt/mgt.h" 2
# 1 "./common/params.h" 1
# 39 "./common/params.h"
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
# 40 "./common/params.h" 2



enum debug_bits {

# 1 "../../include/tbl/debug_bits.h" 1
# 33 "../../include/tbl/debug_bits.h"
DBG_REQ_STATE,
DBG_WORKSPACE,
DBG_WAITER,
DBG_WAITINGLIST,
DBG_SYNCVSL,
DBG_HASHEDGE,
DBG_VCLREL,
DBG_LURKER,
DBG_ESI_CHOP,
DBG_FLUSH_HEAD,
DBG_VTC_MODE,
DBG_WITNESS,
DBG_VSM_KEEP,
# 46 "./common/params.h" 2

       DBG_Reserved
};

enum feature_bits {

# 1 "../../include/tbl/feature_bits.h" 1
# 33 "../../include/tbl/feature_bits.h"
FEATURE_SHORT_PANIC,



FEATURE_WAIT_SILO,



FEATURE_NO_COREDUMP,



FEATURE_ESI_IGNORE_HTTPS,



FEATURE_ESI_DISABLE_XML_CHECK,



FEATURE_ESI_IGNORE_OTHER_ELEMENTS,



FEATURE_ESI_REMOVE_BOM,
# 53 "./common/params.h" 2

       FEATURE_Reserved
};

struct poolparam {
 unsigned min_pool;
 unsigned max_pool;
 double max_age;
};

struct params {






# 1 "../../include/tbl/params.h" 1
# 33 "../../include/tbl/params.h"
unsigned accept_filter;
# 47 "../../include/tbl/params.h"
double acceptor_sleep_decay;
# 64 "../../include/tbl/params.h"
double acceptor_sleep_incr;
# 81 "../../include/tbl/params.h"
double acceptor_sleep_max;
# 98 "../../include/tbl/params.h"
unsigned auto_restart;
# 112 "../../include/tbl/params.h"
unsigned ban_dups;
# 129 "../../include/tbl/params.h"
double ban_lurker_age;
# 146 "../../include/tbl/params.h"
unsigned ban_lurker_batch;
# 162 "../../include/tbl/params.h"
double ban_lurker_sleep;
# 179 "../../include/tbl/params.h"
double first_byte_timeout;
# 197 "../../include/tbl/params.h"
double between_bytes_timeout;
# 215 "../../include/tbl/params.h"
double backend_idle_timeout;
# 71 "./common/params.h" 2







 char *user;
 uid_t uid;
 char *group;
 gid_t gid;


 char *group_cc;
 gid_t gid_cc;


 double default_ttl;


 double default_grace;


 double default_keep;


 unsigned max_sess;


 unsigned wthread_min;
 unsigned wthread_max;
 double wthread_timeout;
 unsigned wthread_pools;
 unsigned wthread_add_threshold;
 double wthread_add_delay;
 double wthread_fail_delay;
 double wthread_destroy_delay;
 double wthread_stats_rate;
 ssize_t wthread_stacksize;
 unsigned wthread_queue_limit;


 unsigned workspace_backend;
 unsigned workspace_client;
 unsigned workspace_session;
 unsigned workspace_thread;

 unsigned vsl_buffer;

 unsigned shm_workspace;
 unsigned http_req_size;
 unsigned http_req_hdr_len;
 unsigned http_resp_size;
 unsigned http_resp_hdr_len;
 unsigned http_max_hdr;

 unsigned vsl_reclen;

 double timeout_linger;
 double timeout_idle;
 double pipe_timeout;
 double send_timeout;
 double idle_send_timeout;

 double tcp_keepalive_time;
 unsigned tcp_keepalive_probes;
 double tcp_keepalive_intvl;



 ssize_t fetch_chunksize;
 ssize_t fetch_maxchunksize;
 unsigned nuke_limit;


 unsigned listen_depth;


 double cli_timeout;
 unsigned cli_limit;
 unsigned ping_interval;


 double lru_interval;


 unsigned max_restarts;


 unsigned max_retries;


 unsigned max_esi_depth;


 unsigned rush_exponent;


 double connect_timeout;


 unsigned cli_buffer;


 unsigned prefer_ipv6;


 unsigned clock_skew;

 unsigned syslog_cli_traffic;

 unsigned http_range_support;

 unsigned http_gzip_support;
 unsigned gzip_buffer;
 unsigned gzip_level;
 unsigned gzip_memlevel;

 unsigned obj_readonly;

 double critbit_cooloff;

 double vcl_cooldown;

 double shortlived;

 struct vre_limits vre_limits;


 unsigned sigsegv_handler;


 ssize_t vsm_space;
 ssize_t vsl_space;

 struct poolparam req_pool;
 struct poolparam sess_pool;
 struct poolparam vbo_pool;

 uint8_t vsl_mask[256>>3];
 uint8_t debug_bits[(DBG_Reserved+7)>>3];
 uint8_t feature_bits[(FEATURE_Reserved+7)>>3];
};
# 35 "./mgt/mgt.h" 2

struct cli;
struct parspec;

extern struct vev_base *mgt_evb;
extern unsigned d_flag;
extern int exit_status;



void MAC_Arg(const char *);
void MAC_Validate(void);
void MAC_reopen_sockets(struct cli *);
int MAC_sockets_ready(struct cli *);


extern pid_t child_pid;
void MGT_Run(void);
void mgt_stop_child(void);
void mgt_got_fd(int fd);
void MGT_Child_Cli_Fail(void);



typedef void mgt_cli_close_f(void *priv);
void mgt_cli_setup(int fdi, int fdo, int verbose, const char *ident,
    mgt_cli_close_f *close_func, void *priv);
int mgt_cli_askchild(unsigned *status, char **resp, const char *fmt, ...)
    __attribute__((format(printf, 3, 4)));
void mgt_cli_start_child(int fdi, int fdo);
void mgt_cli_stop_child(void);
void mgt_cli_telnet(const char *T_arg);
void mgt_cli_master(const char *M_arg);
void mgt_cli_secret(const char *S_arg);
void mgt_cli_close_all(void);



enum jail_subproc_e {
 JAIL_SUBPROC_VCC,
 JAIL_SUBPROC_CC,
 JAIL_SUBPROC_VCLLOAD,
 JAIL_SUBPROC_WORKER,
};

enum jail_master_e {
 JAIL_MASTER_LOW,
 JAIL_MASTER_FILE,
 JAIL_MASTER_STORAGE,
 JAIL_MASTER_PRIVPORT,
};

typedef int jail_init_f(char **);
typedef void jail_master_f(enum jail_master_e);
typedef void jail_subproc_f(enum jail_subproc_e);
typedef void jail_make_dir_f(const char *dname);
typedef void jail_fixfile_f(int fd);

struct jail_tech {
 unsigned magic;

 const char *name;
 jail_init_f *init;
 jail_master_f *master;
 jail_subproc_f *subproc;
 jail_make_dir_f *make_workdir;
 jail_make_dir_f *make_vcldir;
 jail_fixfile_f *vsm_file;
 jail_fixfile_f *storage_file;
};

void VJ_Init(const char *j_arg);
void VJ_master(enum jail_master_e jme);
void VJ_subproc(enum jail_subproc_e jse);
void VJ_make_workdir(const char *dname);
void VJ_make_vcldir(const char *dname);
void VJ_fix_vsm_file(int fd);
void VJ_fix_storage_file(int fd);

extern const struct jail_tech jail_tech_unix;
extern const struct jail_tech jail_tech_solaris;


extern struct VSC_C_mgt *VSC_C_mgt;
extern struct VSC_C_mgt static_VSC_C_mgt;
struct choice {
 const char *name;
 const void *ptr;
};
const void *pick(const struct choice *cp, const char *which, const char *kind);

extern const char C_ERR[];
extern const char C_INFO[];
extern const char C_DEBUG[];
extern const char C_SECURITY[];
extern const char C_CLI[];
void MGT_complain(const char *loud, const char *, ...) __attribute__((format(printf, 2, 3)));


void MCF_InitParams(struct cli *);
void MCF_CollectParams(void);
void MCF_SetDefault(const char *param, const char *def);
void MCF_SetMinimum(const char *param, const char *def);
void MCF_SetMaximum(const char *param, const char *def);
void MCF_ParamSet(struct cli *, const char *param, const char *val);
void MCF_ParamProtect(struct cli *, const char *arg);
void MCF_DumpRstParam(void);
void MCF_AddParams(struct parspec *ps);
extern struct params mgt_param;


void MCF_TcpParams(void);


void mgt_SHM_Init(void);
void mgt_SHM_static_alloc(const void *, ssize_t size,
    const char *class, const char *type, const char *ident);
void mgt_SHM_Create(void);
void mgt_SHM_Commit(void);
void mgt_SHM_Destroy(int keep);
void mgt_SHM_Size_Adjust(void);



void STV_Config(const char *spec);
void STV_Config_Transient(void);


char *mgt_VccCompile(struct cli *, const char *vclname, const char *vclsrc,
    int C_flag);
void mgt_vcc_init(void);

void mgt_vcl_init(void);
void mgt_vcc_default(struct cli *, const char *b_arg, const char *vclsrc,
    int Cflag);
int mgt_push_vcls_and_start(unsigned *status, char **p);
int mgt_has_vcl(void);
extern char *mgt_cc_cmd;
extern const char *mgt_vcl_dir;
extern const char *mgt_vmod_dir;
extern unsigned mgt_vcc_err_unref;
extern unsigned mgt_vcc_allow_inline_c;
extern unsigned mgt_vcc_unsafe_path;





static inline int
MGT_FEATURE(enum feature_bits x)
{
 return (mgt_param.feature_bits[(unsigned)x>>3] &
     (0x80U >> ((unsigned)x & 7)));
}

static inline int
MGT_DO_DEBUG(enum debug_bits x)
{
 return (mgt_param.debug_bits[(unsigned)x>>3] &
     (0x80U >> ((unsigned)x & 7)));
}
# 35 "mgt/mgt_param_tbl.c" 2

# 1 "./mgt/mgt_param.h" 1
# 31 "./mgt/mgt_param.h"
struct parspec;

typedef int tweak_t(struct vsb *, const struct parspec *, const char *arg);

struct parspec {
 const char *name;
 tweak_t *func;
 volatile void *priv;
 const char *min;
 const char *max;
 const char *descr;
 int flags;
# 51 "./mgt/mgt_param.h"
 const char *def;
 const char *units;
};

tweak_t tweak_bool;
tweak_t tweak_bytes;
tweak_t tweak_bytes_u;
tweak_t tweak_double;
tweak_t tweak_poolparam;
tweak_t tweak_string;
tweak_t tweak_timeout;
tweak_t tweak_uint;
tweak_t tweak_waiter;
tweak_t tweak_vsl_buffer;
tweak_t tweak_vsl_reclen;

int tweak_generic_uint(struct vsb *vsb, volatile unsigned *dest,
    const char *arg, const char *min, const char *max);

extern struct parspec mgt_parspec[];
extern struct parspec VSL_parspec[];
extern struct parspec WRK_parspec[];
# 37 "mgt/mgt_param_tbl.c" 2
# 45 "mgt/mgt_param_tbl.c"
struct parspec mgt_parspec[] = {


# 1 "../../include/tbl/params.h" 1
# 33 "../../include/tbl/params.h"
{ "accept_filter", tweak_bool, &mgt_param.accept_filter, ((void *)0), ((void *)0), "Enable kernel accept-filters (if available in the kernel).", (1<<2), "on", "bool" },
# 47 "../../include/tbl/params.h"
{ "acceptor_sleep_decay", tweak_double, &mgt_param.acceptor_sleep_decay, "0", "1", "If we run out of resources, such as file descriptors or worker " "threads, the acceptor will sleep between accepts.\n" "This parameter (multiplicatively) reduce the sleep duration for " "each successful accept. (ie: 0.9 = reduce by 10%)", (1<<1), "0.9", ((void *)0) },
# 64 "../../include/tbl/params.h"
{ "acceptor_sleep_incr", tweak_timeout, &mgt_param.acceptor_sleep_incr, "0", "1", "If we run out of resources, such as file descriptors or worker " "threads, the acceptor will sleep between accepts.\n" "This parameter control how much longer we sleep, each time we " "fail to accept a new connection.", (1<<1), "0", "seconds" },
# 81 "../../include/tbl/params.h"
{ "acceptor_sleep_max", tweak_timeout, &mgt_param.acceptor_sleep_max, "0", "10", "If we run out of resources, such as file descriptors or worker " "threads, the acceptor will sleep between accepts.\n" "This parameter limits how long it can sleep between attempts to " "accept new connections.", (1<<1), "0.05", "seconds" },
# 98 "../../include/tbl/params.h"
{ "auto_restart", tweak_bool, &mgt_param.auto_restart, ((void *)0), ((void *)0), "Automatically restart the child/worker process if it dies.", 0, "on", "bool" },
# 112 "../../include/tbl/params.h"
{ "ban_dups", tweak_bool, &mgt_param.ban_dups, ((void *)0), ((void *)0), "Eliminate older identical bans when a new ban is added.  This saves " "CPU cycles by not comparing objects to identical bans.\n" "This is a waste of time if you have many bans which are never " "identical.", 0, "on", "bool" },
# 129 "../../include/tbl/params.h"
{ "ban_lurker_age", tweak_timeout, &mgt_param.ban_lurker_age, "0", ((void *)0), "The ban lurker will ignore bans until they are this old.  " "When a ban is added, the active traffic will be tested against it " "as part of object lookup.  This parameter " "holds the ban-lurker off, until the rush is over.", 0, "60", "seconds" },
# 146 "../../include/tbl/params.h"
{ "ban_lurker_batch", tweak_uint, &mgt_param.ban_lurker_batch, "1", ((void *)0), "The ban lurker sleeps ${ban_lurker_sleep} after examining this " "many objects." "  Use this to pace the ban-lurker if it eats too many resources.", 0, "1000", ((void *)0) },
# 162 "../../include/tbl/params.h"
{ "ban_lurker_sleep", tweak_timeout, &mgt_param.ban_lurker_sleep, "0", ((void *)0), "How long the ban lurker sleeps after examining ${ban_lurker_batch} " "objects." "  Use this to pace the ban-lurker if it eats too many resources.\n" "A value of zero will disable the ban lurker entirely.", 0, "0.010", "seconds" },
# 179 "../../include/tbl/params.h"
{ "first_byte_timeout", tweak_timeout, &mgt_param.first_byte_timeout, "0", ((void *)0), "Default timeout for receiving first byte from backend. We only " "wait for this many seconds for the first byte before giving up. A " "value of 0 means it will never time out. VCL can override this " "default value for each backend and backend request. This " "parameter does not apply to pipe.", 0, "60", "seconds" },
# 197 "../../include/tbl/params.h"
{ "between_bytes_timeout", tweak_timeout, &mgt_param.between_bytes_timeout, "0", ((void *)0), "We only wait for this many seconds between bytes received from " "the backend before giving up the fetch.\n" "A value of zero means never give up.\n" "VCL values, per backend or per backend request take precedence.\n" "This parameter does not apply to pipe'ed requests.", 0, "60", "seconds" },
# 215 "../../include/tbl/params.h"
{ "backend_idle_timeout", tweak_timeout, &mgt_param.backend_idle_timeout, "1", ((void *)0), "Timeout before we close unused backend connections.", 0, "60", "seconds" },
# 49 "mgt/mgt_param_tbl.c" 2


 { "default_ttl", tweak_timeout, &mgt_param.default_ttl,
  "0", ((void *)0),
  "The TTL assigned to objects if neither the backend nor "
  "the VCL code assigns one.",
  (1<<6),
  "120", "seconds" },
 { "default_grace", tweak_timeout, &mgt_param.default_grace,
  "0", ((void *)0),
  "Default grace period.  We will deliver an object "
  "this long after it has expired, provided another thread "
  "is attempting to get a new copy.",
  (1<<6),
  "10", "seconds" },
 { "default_keep", tweak_timeout, &mgt_param.default_keep,
  "0", ((void *)0),
  "Default keep period.  We will keep a useless object "
  "around this long, making it available for conditional "
  "backend fetches.  "
  "That means that the object will be removed from the "
  "cache at the end of ttl+grace+keep.",
  (1<<6),
  "0", "seconds" },
 { "workspace_session",
  tweak_bytes_u, &mgt_param.workspace_session,
  "256", ((void *)0),
  "Allocation size for session structure and workspace.  "
  "  The workspace is primarily used for TCP connection "
  "addresses."
  "  If larger than 4k, use a multiple of 4k for VM efficiency.",
  (1<<0),
  "512", "bytes" },
 { "workspace_client",
  tweak_bytes_u, &mgt_param.workspace_client,
  "9k", ((void *)0),
  "Bytes of HTTP protocol workspace for clients HTTP req/resp."
  "  If larger than 4k, use a multiple of 4k for VM efficiency.",
  (1<<0),
  "64k", "bytes" },
 { "workspace_backend",
  tweak_bytes_u, &mgt_param.workspace_backend,
  "1024", ((void *)0),
  "Bytes of HTTP protocol workspace for backend HTTP req/resp."
  "  If larger than 4k, use a multiple of 4k for VM efficiency.",
  (1<<0),
  "64k", "bytes" },
 { "workspace_thread",
  tweak_bytes_u, &mgt_param.workspace_thread,
  "256", "8192",
  "Bytes of auxiliary workspace per thread.\n"
  "This workspace is used for certain temporary data structures"
  " during the operation of a worker thread.\n"
  "One use is for the io-vectors for writing requests and"
  " responses to sockets, having too little space will"
  " result in more writev(2) system calls, having too much"
  " just wastes the space.",
  (1<<0),
  "2048", "bytes" },
 { "http_req_hdr_len",
  tweak_bytes_u, &mgt_param.http_req_hdr_len,
  "40", ((void *)0),
  "Maximum length of any HTTP client request header we will "
  "allow.  The limit is inclusive its continuation lines.",
  0,
  "8k", "bytes" },
 { "http_req_size",
  tweak_bytes_u, &mgt_param.http_req_size,
  "256", ((void *)0),
  "Maximum number of bytes of HTTP client request we will deal "
  "with.  This is a limit on all bytes up to the double blank "
  "line which ends the HTTP request.\n"
  "The memory for the request is allocated from the client "
  "workspace (param: workspace_client) and this parameter limits "
  "how much of that the request is allowed to take up.",
  0,
  "32k", "bytes" },
 { "http_resp_hdr_len",
  tweak_bytes_u, &mgt_param.http_resp_hdr_len,
  "40", ((void *)0),
  "Maximum length of any HTTP backend response header we will "
  "allow.  The limit is inclusive its continuation lines.",
  0,
  "8k", "bytes" },
 { "http_resp_size",
  tweak_bytes_u, &mgt_param.http_resp_size,
  "256", ((void *)0),
  "Maximum number of bytes of HTTP backend response we will deal "
  "with.  This is a limit on all bytes up to the double blank "
  "line which ends the HTTP request.\n"
  "The memory for the request is allocated from the worker "
  "workspace (param: thread_pool_workspace) and this parameter "
  "limits how much of that the request is allowed to take up.",
  0,
  "32k", "bytes" },
 { "http_max_hdr", tweak_uint, &mgt_param.http_max_hdr,
  "32", "65535",
  "Maximum number of HTTP header lines we allow in "
  "{req|resp|bereq|beresp}.http "
  "(obj.http is autosized to the exact number of headers).\n"
  "Cheap, ~20 bytes, in terms of workspace memory.\n"
  "Note that the first line occupies five header lines.",
  0,
  "64", "header lines" },
 { "vsl_buffer",
  tweak_vsl_buffer, &mgt_param.vsl_buffer,
  "1024", ((void *)0),
  "Bytes of (req-/backend-)workspace dedicated to buffering"
  " VSL records.\n"
  "Setting this too high costs memory, setting it too low"
  " will cause more VSL flushes and likely increase"
  " lock-contention on the VSL mutex.\n\n"
  "The minimum tracks the vsl_reclen parameter + 12 bytes.",
  0,
  "4k", "bytes" },
 { "vsl_reclen",
  tweak_vsl_reclen, &mgt_param.vsl_reclen,
  "16", "65535",
  "Maximum number of bytes in SHM log record.\n\n"
  "The maximum tracks the vsl_buffer parameter - 12 bytes.",
  0,
  "255", "bytes" },
 { "shm_reclen",
  tweak_vsl_reclen, &mgt_param.vsl_reclen,
  "16", "65535",
  "Old name for vsl_reclen, use that instead.",
  0,
  "255", "bytes" },
 { "timeout_idle", tweak_timeout, &mgt_param.timeout_idle,
  "0", ((void *)0),
  "Idle timeout for client connections.\n"
  "A connection is considered idle, until we have "
  "received the full request headers.",
  0,
  "5", "seconds" },
 { "pipe_timeout", tweak_timeout, &mgt_param.pipe_timeout,
  "0", ((void *)0),
  "Idle timeout for PIPE sessions. "
  "If nothing have been received in either direction for "
  "this many seconds, the session is closed.",
  0,
  "60", "seconds" },
 { "send_timeout", tweak_timeout, &mgt_param.send_timeout,
  "0", ((void *)0),
  "Send timeout for client connections. "
  "If the HTTP response hasn't been transmitted in this many\n"
  "seconds the session is closed.\n"
  "See setsockopt(2) under SO_SNDTIMEO for more information.",
  (1<<0),
  "600", "seconds" },
 { "idle_send_timeout", tweak_timeout, &mgt_param.idle_send_timeout,
  "0", ((void *)0),
  "Time to wait with no data sent. "
  "If no data has been transmitted in this many\n"
  "seconds the session is closed.\n"
  "See setsockopt(2) under SO_SNDTIMEO for more information.",
  (1<<0),
  "60", "seconds" },
 { "nuke_limit",
  tweak_uint, &mgt_param.nuke_limit,
  "0", ((void *)0),
  "Maximum number of objects we attempt to nuke in order"
  "to make space for a object body.",
  (1<<1),
  "50", "allocations" },
 { "fetch_chunksize",
  tweak_bytes, &mgt_param.fetch_chunksize,
  "4096", ((void *)0),
  "The default chunksize used by fetcher. "
  "This should be bigger than the majority of objects with "
  "short TTLs.\n"
  "Internal limits in the storage_file module makes increases "
  "above 128kb a dubious idea.",
  (1<<1),
  "16k", "bytes" },
 { "fetch_maxchunksize",
  tweak_bytes, &mgt_param.fetch_maxchunksize,
  "65536", ((void *)0),
  "The maximum chunksize we attempt to allocate from storage. "
  "Making this too large may cause delays and storage "
  "fragmentation.",
  (1<<1),
  "256m", "bytes" },
 { "listen_depth", tweak_uint, &mgt_param.listen_depth,
  "0", ((void *)0),
  "Listen queue depth.",
  (1<<2),
  "1024", "connections" },
 { "cli_buffer",
  tweak_bytes_u, &mgt_param.cli_buffer,
  "4096", ((void *)0),
  "Size of buffer for CLI command input."
  "\nYou may need to increase this if you have big VCL files "
  "and use the vcl.inline CLI command.\n"
  "NB: Must be specified with -p to have effect.",
  0,
  "8k", "bytes" },
 { "cli_limit",
  tweak_bytes_u, &mgt_param.cli_limit,
  "128", "99999999",
  "Maximum size of CLI response.  If the response exceeds"
  " this limit, the response code will be 201 instead of"
  " 200 and the last line will indicate the truncation.",
  0,
  "48k", "bytes" },
 { "cli_timeout", tweak_timeout, &mgt_param.cli_timeout,
  "0", ((void *)0),
  "Timeout for the childs replies to CLI requests from "
  "the mgt_param.",
  0,
  "60", "seconds" },
 { "ping_interval", tweak_uint, &mgt_param.ping_interval,
  "0", ((void *)0),
  "Interval between pings from parent to child.\n"
  "Zero will disable pinging entirely, which makes "
  "it possible to attach a debugger to the child.",
  (1<<2),
  "3", "seconds" },
 { "lru_interval", tweak_timeout, &mgt_param.lru_interval,
  "0", ((void *)0),
  "Grace period before object moves on LRU list.\n"
  "Objects are only moved to the front of the LRU "
  "list if they have not been moved there already inside "
  "this timeout period.  This reduces the amount of lock "
  "operations necessary for LRU list access.",
  (1<<1),
  "2", "seconds" },
 { "cc_command", tweak_string, &mgt_cc_cmd,
  ((void *)0), ((void *)0),
  "Command used for compiling the C source code to a "
  "dlopen(3) loadable object.  Any occurrence of %s in "
  "the string will be replaced with the source file name, "
  "and %o will be replaced with the output file name.",
  (1<<3),
  "exec gcc -std=gnu99 -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches   -m64 -mtune=generic -Wall -Werror -Wno-error=unused-result -pthread -fpic -shared -Wl,-x -o %o %s" , ((void *)0) },
 { "max_restarts", tweak_uint, &mgt_param.max_restarts,
  "0", ((void *)0),
  "Upper limit on how many times a request can restart."
  "\nBe aware that restarts are likely to cause a hit against "
  "the backend, so don't increase thoughtlessly.",
  0,
  "4", "restarts" },
 { "max_retries", tweak_uint, &mgt_param.max_retries,
  "0", ((void *)0),
  "Upper limit on how many times a backend fetch can retry.",
  0,
  "4", "retries" },
 { "max_esi_depth", tweak_uint, &mgt_param.max_esi_depth,
  "0", ((void *)0),
  "Maximum depth of esi:include processing.",
  0,
  "5", "levels" },
 { "connect_timeout", tweak_timeout, &mgt_param.connect_timeout,
  "0", ((void *)0),
  "Default connection timeout for backend connections. "
  "We only try to connect to the backend for this many "
  "seconds before giving up. "
  "VCL can override this default value for each backend and "
  "backend request.",
  0,
  "3.5", "seconds" },
 { "clock_skew", tweak_uint, &mgt_param.clock_skew,
  "0", ((void *)0),
  "How much clockskew we are willing to accept between the "
  "backend and our own clock.",
  0,
  "10", "seconds" },
 { "prefer_ipv6", tweak_bool, &mgt_param.prefer_ipv6,
  ((void *)0), ((void *)0),
  "Prefer IPv6 address when connecting to backends which "
  "have both IPv4 and IPv6 addresses.",
  0,
  "off", "bool" },
 { "session_max", tweak_uint,
  &mgt_param.max_sess,
  "1000", ((void *)0),
  "Maximum number of sessions we will allocate from one pool "
  "before just dropping connections.\n"
  "This is mostly an anti-DoS measure, and setting it plenty "
  "high should not hurt, as long as you have the memory for "
  "it.",
  0,
  "100000", "sessions" },
 { "timeout_linger", tweak_timeout, &mgt_param.timeout_linger,
  "0", ((void *)0),
  "How long the worker thread lingers on an idle session "
  "before handing it over to the waiter.\n"
  "When sessions are reused, as much as half of all reuses "
  "happen within the first 100 msec of the previous request "
  "completing.\n"
  "Setting this too high results in worker threads not doing "
  "anything for their keep, setting it too low just means that "
  "more sessions take a detour around the waiter.",
  (1<<1),
  "0.050", "seconds" },
 { "syslog_cli_traffic", tweak_bool, &mgt_param.syslog_cli_traffic,
  ((void *)0), ((void *)0),
  "Log all CLI traffic to syslog(LOG_INFO).",
  0,
  "on", "bool" },
 { "http_range_support", tweak_bool, &mgt_param.http_range_support,
  ((void *)0), ((void *)0),
  "Enable support for HTTP Range headers.",
  0,
  "on", "bool" },
 { "http_gzip_support", tweak_bool, &mgt_param.http_gzip_support,
  ((void *)0), ((void *)0),
  "Enable gzip support. When enabled Varnish request compressed "
  "objects from the backend and store them compressed. "
  "If a client does not support gzip encoding Varnish will "
  "uncompress compressed objects on demand. Varnish will also "
  "rewrite the Accept-Encoding header of clients indicating "
  "support for gzip to:\n"
  "  Accept-Encoding: gzip\n\n"
  "Clients that do not support gzip will have their "
  "Accept-Encoding header removed. For more information on how "
  "gzip is implemented please see the chapter on gzip in the "
  "Varnish reference.",
  0,
  "on", "bool" },
 { "gzip_level", tweak_uint, &mgt_param.gzip_level,
  "0", "9",
  "Gzip compression level: 0=debug, 1=fast, 9=best",
  0,
  "6", ""},
 { "gzip_memlevel", tweak_uint, &mgt_param.gzip_memlevel,
  "1", "9",
  "Gzip memory level 1=slow/least, 9=fast/most compression.\n"
  "Memory impact is 1=1k, 2=2k, ... 9=256k.",
  0,
  "8", ""},
 { "gzip_buffer",
  tweak_bytes_u, &mgt_param.gzip_buffer,
  "2048", ((void *)0),
  "Size of malloc buffer used for gzip processing.\n"
  "These buffers are used for in-transit data,"
  " for instance gunzip'ed data being sent to a client."
  "Making this space to small results in more overhead,"
  " writes to sockets etc, making it too big is probably"
  " just a waste of memory.",
  (1<<1),
  "32k", "bytes" },
 { "shortlived", tweak_timeout,
  &mgt_param.shortlived,
  "0", ((void *)0),
  "Objects created with (ttl+grace+keep) shorter than this"
  " are always put in transient storage.",
  0,
  "10", "seconds" },
 { "critbit_cooloff", tweak_timeout,
  &mgt_param.critbit_cooloff,
  "60", "254",
  "How long the critbit hasher keeps deleted objheads "
  "on the cooloff list.",
  (1<<4),
  "180", "seconds" },
 { "sigsegv_handler", tweak_bool, &mgt_param.sigsegv_handler,
  ((void *)0), ((void *)0),
  "Install a signal handler which tries to dump debug"
  " information on segmentation faults, bus errors and abort"
  " signals.",
  (1<<2),
  "on", "bool" },
 { "vcl_dir", tweak_string, &mgt_vcl_dir,
  ((void *)0), ((void *)0),
  "Directory from which relative VCL filenames (vcl.load and "
  "include) are opened.",
  0,
  "/etc/varnish",
  ((void *)0) },
 { "vmod_dir", tweak_string, &mgt_vmod_dir,
  ((void *)0), ((void *)0),
  "Directory where VCL modules are to be found.",
  0,
  "/usr/lib64/varnish/vmods",
  ((void *)0) },
 { "vcl_cooldown", tweak_timeout, &mgt_param.vcl_cooldown,
  "0", ((void *)0),
  "How long a VCL is kept warm after being replaced as the"
  " active VCL (granularity approximately 30 seconds).",
  0,
  "600", "seconds" },
 { "vcc_err_unref", tweak_bool, &mgt_vcc_err_unref,
  ((void *)0), ((void *)0),
  "Unreferenced VCL objects result in error.",
  0,
  "on", "bool" },

 { "vcc_allow_inline_c", tweak_bool, &mgt_vcc_allow_inline_c,
  ((void *)0), ((void *)0),
  "Allow inline C code in VCL.",
  0,
  "off", "bool" },

 { "vcc_unsafe_path", tweak_bool, &mgt_vcc_unsafe_path,
  ((void *)0), ((void *)0),
  "Allow '/' in vmod & include paths.\n"
  "Allow 'import ... from ...'.",
  0,
  "on", "bool" },

 { "pcre_match_limit", tweak_uint,
  &mgt_param.vre_limits.match,
  "1", ((void *)0),
  "The limit for the number of calls to the internal match()"
  " function in pcre_exec().\n\n"
  "(See: PCRE_EXTRA_MATCH_LIMIT in pcre docs.)\n\n"
  "This parameter limits how much CPU time"
  " regular expression matching can soak up.",
  0,
  "10000", ""},
 { "pcre_match_limit_recursion", tweak_uint,
  &mgt_param.vre_limits.match_recursion,
  "1", ((void *)0),
  "The recursion depth-limit for the internal match() function"
  " in a pcre_exec().\n\n"
  "(See: PCRE_EXTRA_MATCH_LIMIT_RECURSION in pcre docs.)\n\n"
  "This puts an upper limit on the amount of stack used"
  " by PCRE for certain classes of regular expressions.\n\n"
  "We have set the default value low in order to"
  " prevent crashes, at the cost of possible regexp"
  " matching failures.\n\n"
  "Matching failures will show up in the log as VCL_Error"
  " messages with regexp errors -27 or -21.\n\n"
  "Testcase r01576 can be useful when tuning this parameter.",
  0,
  "20", ""},
 { "vsl_space", tweak_bytes,
  &mgt_param.vsl_space,
  "1M", ((void *)0),
  "The amount of space to allocate for the VSL fifo buffer"
  " in the VSM memory segment."
  "  If you make this too small, varnish{ncsa|log} etc will"
  " not be able to keep up."
  "  Making it too large just costs memory resources.",
  (1<<2),
  "80M", "bytes"},

 { "vsm_space", tweak_bytes,
  &mgt_param.vsm_space,
  "1M", ((void *)0),
  "The amount of space to allocate for stats counters"
  " in the VSM memory segment."
  "  If you make this too small, some counters will be"
  " invisible."
  "  Making it too large just costs memory resources.",
  (1<<2),
  "1M", "bytes"},

 { "pool_req", tweak_poolparam, &mgt_param.req_pool,
  ((void *)0), ((void *)0),
  "Parameters for per worker pool request memory pool.\n"
  "The three numbers are:\n" "\tmin_pool\tminimum size of free pool.\n" "\tmax_pool\tmaximum size of free pool.\n" "\tmax_age\tmax age of free element.",
  0,
  "10,100,10", ""},
 { "pool_sess", tweak_poolparam, &mgt_param.sess_pool,
  ((void *)0), ((void *)0),
  "Parameters for per worker pool session memory pool.\n"
  "The three numbers are:\n" "\tmin_pool\tminimum size of free pool.\n" "\tmax_pool\tmaximum size of free pool.\n" "\tmax_age\tmax age of free element.",
  0,
  "10,100,10", ""},
 { "pool_vbo", tweak_poolparam, &mgt_param.vbo_pool,
  ((void *)0), ((void *)0),
  "Parameters for backend object fetch memory pool.\n"
  "The three numbers are:\n" "\tmin_pool\tminimum size of free pool.\n" "\tmax_pool\tmaximum size of free pool.\n" "\tmax_age\tmax age of free element.",
  0,
  "10,100,10", ""},

 { ((void *)0), ((void *)0), ((void *)0) }
};
