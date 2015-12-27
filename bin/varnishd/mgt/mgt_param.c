# 1 "mgt/mgt_param.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/bin/varnishd//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "mgt/mgt_param.c"
# 30 "mgt/mgt_param.c"
# 1 "../../config.h" 1
# 31 "mgt/mgt_param.c" 2

# 1 "/usr/include/ctype.h" 1 3 4
# 26 "/usr/include/ctype.h" 3 4
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
# 27 "/usr/include/ctype.h" 2 3 4
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
# 28 "/usr/include/ctype.h" 2 3 4


# 40 "/usr/include/ctype.h" 3 4
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
# 41 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 80 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 105 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 215 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 258 "/usr/include/ctype.h" 3 4
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
# 259 "/usr/include/ctype.h" 2 3 4
# 272 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 348 "/usr/include/ctype.h" 3 4

# 33 "mgt/mgt_param.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4
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






# 34 "mgt/mgt_param.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/bits/waitstatus.h" 3 4
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

# 239 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));





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
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


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




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__, __alloc_size__ (2)));




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));









extern int system (const char *__command) __attribute__ ((__warn_unused_result__));






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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





extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






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

# 35 "mgt/mgt_param.c" 2
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


# 106 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 117 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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

# 162 "/usr/include/string.h" 3 4
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


# 273 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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
# 369 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 434 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 602 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



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




# 36 "mgt/mgt_param.c" 2

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
# 48 "/usr/include/stdint.h" 3 4
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
# 35 "./common/common.h"
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
# 38 "mgt/mgt_param.c" 2
# 1 "./common/heritage.h" 1
# 32 "./common/heritage.h"
struct vsm_sc;
struct suckaddr;

struct listen_sock {
 unsigned magic;

 struct { struct listen_sock *vtqe_next; struct listen_sock **vtqe_prev; } list;
 int sock;
 char *name;
 struct suckaddr *addr;
 enum sess_step first_step;
 const char *proto_name;
};

struct listen_sock_head { struct listen_sock *vtqh_first; struct listen_sock **vtqh_last; };

struct heritage {


 int cli_in;
 int cli_out;


 int std_fd;


 struct listen_sock_head socks;


 const struct hash_slinger *hash;

 struct vsm_sc *vsm;

 struct params *param;

 char *name;
 const char *identity;

 char *panic_str;
 ssize_t panic_str_len;
};

extern struct heritage heritage;

void child_main(void);
# 39 "mgt/mgt_param.c" 2

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
# 41 "mgt/mgt_param.c" 2
# 1 "../../include/vav.h" 1
# 31 "../../include/vav.h"
void VAV_Free(char **argv);
char **VAV_Parse(const char *s, int *argc, int flag);
char *VAV_BackSlashDecode(const char *s, const char *e);
int VAV_BackSlash(const char *s, char *res);
# 42 "mgt/mgt_param.c" 2
# 1 "../../include/vcli.h" 1
# 178 "../../include/vcli.h"
enum VCLI_status_e {
 CLIS_SYNTAX = 100,
 CLIS_UNKNOWN = 101,
 CLIS_UNIMPL = 102,
 CLIS_TOOFEW = 104,
 CLIS_TOOMANY = 105,
 CLIS_PARAM = 106,
 CLIS_AUTH = 107,
 CLIS_OK = 200,
 CLIS_TRUNCATED = 201,
 CLIS_CANT = 300,
 CLIS_COMMS = 400,
 CLIS_CLOSE = 500
};







int VCLI_WriteResult(int fd, unsigned status, const char *result);
int VCLI_ReadResult(int fd, unsigned *status, char **ptr, double tmo);
void VCLI_AuthResponse(int S_fd, const char *challenge,
    char reponse[64 + 1]);
# 43 "mgt/mgt_param.c" 2
# 1 "../../include/vcli_common.h" 1
# 31 "../../include/vcli_common.h"
struct vlu;
struct VCLS;

struct cli {
 unsigned magic;

 struct vsb *sb;
 enum VCLI_status_e result;
 char *cmd;
 unsigned auth;
 char challenge[34];
 char *ident;
 struct vlu *vlu;
 struct VCLS *cls;
 volatile unsigned *limit;
};
# 44 "mgt/mgt_param.c" 2
# 1 "../../include/vcli_priv.h" 1
# 36 "../../include/vcli_priv.h"
struct cli;

typedef void cli_func_t(struct cli*, const char * const *av, void *priv);

struct cli_proto {

 const char *request;
 const char *syntax;
 const char *help;
 unsigned minarg;
 unsigned maxarg;
 char flags[4];


 cli_func_t *func;
 void *priv;
};


int VCLI_Overflow(struct cli *cli);
void VCLI_Out(struct cli *cli, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));
void VCLI_Quote(struct cli *cli, const char *str);
void VCLI_SetResult(struct cli *cli, unsigned r);
# 45 "mgt/mgt_param.c" 2

# 1 "mgt/mgt_cli.h" 1
# 32 "mgt/mgt_cli.h"
cli_func_t mcf_server_startstop;
cli_func_t mcf_server_status;
cli_func_t mcf_panic_show;
cli_func_t mcf_panic_clear;


cli_func_t mcf_param_show;
cli_func_t mcf_param_set;


cli_func_t mcf_vcl_load;
cli_func_t mcf_vcl_inline;
cli_func_t mcf_vcl_use;
cli_func_t mcf_vcl_state;
cli_func_t mcf_vcl_discard;
cli_func_t mcf_vcl_list;


extern struct cli_proto cli_stv[];
# 47 "mgt/mgt_param.c" 2

struct plist {
 unsigned magic;

 struct { struct plist *vtqe_next; struct plist **vtqe_prev; } list;
 struct parspec *spec;
};

static struct { struct plist *vtqh_first; struct plist **vtqh_last; } phead = { ((void *)0), &(phead).vtqh_first, };

struct params mgt_param;
static const int margin1 = 8;
static int margin2 = 0;
static const int wrap_at = 72;
static const int tab0 = 3;



static const char OBJ_STICKY_TEXT[] =
 "\n\n"
 "NB: This parameter is evaluated only when objects are created."
 "To change it for all objects, restart or ban everything.";

static const char DELAYED_EFFECT_TEXT[] =
 "\n\n"
 "NB: This parameter may take quite some time to take (full) effect.";

static const char MUST_RESTART_TEXT[] =
 "\n\n"
 "NB: This parameter will not take any effect until the "
 "child process has been restarted.";

static const char MUST_RELOAD_TEXT[] =
 "\n\n"
 "NB: This parameter will not take any effect until the "
 "VCL programs have been reloaded.";

static const char EXPERIMENTAL_TEXT[] =
 "\n\n"
 "NB: We do not know yet if it is a good idea to change "
 "this parameter, or if the default value is even sensible.  "
 "Caution is advised, and feedback is most welcome.";

static const char WIZARD_TEXT[] =
 "\n\n"
 "NB: Do not change this parameter, unless a developer tell "
 "you to do so.";

static const char PROTECTED_TEXT[] =
 "\n\n"
 "NB: This parameter is protected and can not be changed.";

static const char ONLY_ROOT_TEXT[] =
 "\n\n"
 "NB: This parameter only works if varnishd is run as root.";



static struct parspec *
mcf_findpar(const char *name)
{
 struct plist *pl;

 do { do { if (!((name) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 110, "(name) != 0", VAS_ASSERT); } } while (0); } while (0);
 for ((pl) = (((&phead))->vtqh_first); (pl); (pl) = (((pl))->list.vtqe_next))
  if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pl->spec->name) && __builtin_constant_p (name) && (__s1_len = strlen (pl->spec->name), __s2_len = strlen (name), (!((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pl->spec->name, name) : (__builtin_constant_p (pl->spec->name) && ((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) && (__s1_len = strlen (pl->spec->name), __s1_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (pl->spec->name, name) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); register int __result = (((const unsigned char *) (const char *) (pl->spec->name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pl->spec->name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pl->spec->name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pl->spec->name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s2_len = strlen (name), __s2_len < 4) ? (__builtin_constant_p (pl->spec->name) && ((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) ? __builtin_strcmp (pl->spec->name, name) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pl->spec->name); register int __result = __s1[0] - ((const unsigned char *) (const char *) (name))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (name))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (name))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (name))[3]); } } __result; }))) : __builtin_strcmp (pl->spec->name, name)))); }))
   return (pl->spec);
 return (((void *)0));
}

static void
mcf_addpar(struct parspec *ps)
{
 struct plist *pl, *pl2;
 int i;

 do { (pl) = calloc(sizeof *(pl), 1); if ((pl) != ((void *)0)) (pl)->magic = (0xbfc3ea16); } while (0);
 do { do { if (!((pl) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 124, "(pl) != 0", VAS_ASSERT); } } while (0); } while (0);
 pl->spec = ps;
 for ((pl2) = (((&phead))->vtqh_first); (pl2); (pl2) = (((pl2))->list.vtqe_next)) {
  i = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pl2->spec->name) && __builtin_constant_p (pl->spec->name) && (__s1_len = strlen (pl2->spec->name), __s2_len = strlen (pl->spec->name), (!((size_t)(const void *)((pl2->spec->name) + 1) - (size_t)(const void *)(pl2->spec->name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pl2->spec->name, pl->spec->name) : (__builtin_constant_p (pl2->spec->name) && ((size_t)(const void *)((pl2->spec->name) + 1) - (size_t)(const void *)(pl2->spec->name) == 1) && (__s1_len = strlen (pl2->spec->name), __s1_len < 4) ? (__builtin_constant_p (pl->spec->name) && ((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) ? __builtin_strcmp (pl2->spec->name, pl->spec->name) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (pl->spec->name); register int __result = (((const unsigned char *) (const char *) (pl2->spec->name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pl2->spec->name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pl2->spec->name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pl2->spec->name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (pl->spec->name) && ((size_t)(const void *)((pl->spec->name) + 1) - (size_t)(const void *)(pl->spec->name) == 1) && (__s2_len = strlen (pl->spec->name), __s2_len < 4) ? (__builtin_constant_p (pl2->spec->name) && ((size_t)(const void *)((pl2->spec->name) + 1) - (size_t)(const void *)(pl2->spec->name) == 1) ? __builtin_strcmp (pl2->spec->name, pl->spec->name) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pl2->spec->name); register int __result = __s1[0] - ((const unsigned char *) (const char *) (pl->spec->name))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (pl->spec->name))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (pl->spec->name))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (pl->spec->name))[3]); } } __result; }))) : __builtin_strcmp (pl2->spec->name, pl->spec->name)))); });
  if (i == 0) {
   fprintf(stderr, "Duplicate param: %s\n", ps->name);
   exit(4);
  } else if (i > 0) {
   do { (pl)->list.vtqe_prev = (pl2)->list.vtqe_prev; (((pl))->list.vtqe_next) = (pl2); *(pl2)->list.vtqe_prev = (pl); (pl2)->list.vtqe_prev = &(((pl))->list.vtqe_next); } while (0);
   return;
  }
 }
 do { (((pl))->list.vtqe_next) = ((void *)0); (pl)->list.vtqe_prev = (&phead)->vtqh_last; *(&phead)->vtqh_last = (pl); (&phead)->vtqh_last = &(((pl))->list.vtqe_next); } while (0);
}







static void
mcf_wrap_line(struct cli *cli, const char *b, const char *e, int tabs, int m0)
{
 int n, hadtabs = 0;
 const char *w;

 n = m0;
 VCLI_Out(cli, "%*s", n, "");

 while (b < e) {
  if (!((*__ctype_b_loc ())[(int) ((*b))] & (unsigned short int) _ISspace)) {
   VCLI_Out(cli, "%c", *b);
   b++;
   n++;
  } else if (*b == '\t') {
   do { if (!(tabs)) { VAS_Fail(__func__, "mgt/mgt_param.c", 160, "tabs", VAS_ASSERT); } } while (0);
   do { if (!(hadtabs < 2)) { VAS_Fail(__func__, "mgt/mgt_param.c", 161, "hadtabs < 2", VAS_ASSERT); } } while (0);
   do {
    VCLI_Out(cli, " ");
    n++;
   } while ((n % tabs) != (m0 + tab0) % tabs);
   b++;
   hadtabs++;
  } else {
   do { if (!(*b == ' ')) { VAS_Fail(__func__, "mgt/mgt_param.c", 169, "*b == ' '", VAS_ASSERT); } } while (0);
   for (w = b + 1; w < e; w++)
    if (((*__ctype_b_loc ())[(int) ((*w))] & (unsigned short int) _ISspace))
     break;
   if (n + (w - b) < wrap_at) {
    VCLI_Out(cli, "%.*s", (int)(w - b), b);
    n += (w - b);
    b = w;
   } else {
    do { if (!(hadtabs == 0 || hadtabs == 2)) { VAS_Fail(__func__, "mgt/mgt_param.c", 178, "hadtabs == 0 || hadtabs == 2", VAS_ASSERT); } } while (0);
    VCLI_Out(cli, "\n");
    mcf_wrap_line(cli, b + 1, e, 0,
        hadtabs ? m0 + tab0 + tabs : m0);
    return;
   }
  }
 }
 do { if (!(b == e)) { VAS_Fail(__func__, "mgt/mgt_param.c", 186, "b == e", VAS_ASSERT); } } while (0);
}

static void
mcf_wrap(struct cli *cli, const char *text)
{
 const char *p, *q, *r;
 int tw = 0;

 if ((__extension__ (__builtin_constant_p ('\t') && !__builtin_constant_p (text) && ('\t') == '\0' ? (char *) __rawmemchr (text, '\t') : __builtin_strchr (text, '\t'))) != ((void *)0)) {
  for (p = text; *p != '\0'; ) {
   q = strstr(p, "\n\t");
   if (q == ((void *)0))
    break;
   q += 2;
   r = (__extension__ (__builtin_constant_p ('\t') && !__builtin_constant_p (q) && ('\t') == '\0' ? (char *) __rawmemchr (q, '\t') : __builtin_strchr (q, '\t')));
   if (r == ((void *)0)) {
    fprintf(stderr,
        "LINE with just one TAB: <%s>\n", text);
    exit(4);
   }
   if (r - q > tw)
    tw = r - q;
   p = q;
  }
  tw += 2;
  if (tw < 20)
   tw = 20;
 }

 for (p = text; *p != '\0'; ) {
  if (*p == '\n') {
   VCLI_Out(cli, "\n");
   p++;
   continue;
  }
  q = (__extension__ (__builtin_constant_p ('\n') && !__builtin_constant_p (p) && ('\n') == '\0' ? (char *) __rawmemchr (p, '\n') : __builtin_strchr (p, '\n')));
  if (q == ((void *)0))
   q = (__extension__ (__builtin_constant_p ('\0') && !__builtin_constant_p (p) && ('\0') == '\0' ? (char *) __rawmemchr (p, '\0') : __builtin_strchr (p, '\0')));
  mcf_wrap_line(cli, p, q, tw, margin1);
  p = q;
 }
}



void
mcf_param_show(struct cli *cli, const char * const *av, void *priv)
{
 int n;
 struct plist *pl;
 const struct parspec *pp;
 int lfmt = 0, chg = 0;
 struct vsb *vsb;

 vsb = VSB_new(((void *)0), ((void *)0), 0, 0x00000001);
 (void)priv;

 if (av[2] != ((void *)0) && !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (av[2]) && __builtin_constant_p ("changed") && (__s1_len = strlen (av[2]), __s2_len = strlen ("changed"), (!((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("changed") + 1) - (size_t)(const void *)("changed") == 1) || __s2_len >= 4)) ? __builtin_strcmp (av[2], "changed") : (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) && (__s1_len = strlen (av[2]), __s1_len < 4) ? (__builtin_constant_p ("changed") && ((size_t)(const void *)(("changed") + 1) - (size_t)(const void *)("changed") == 1) ? __builtin_strcmp (av[2], "changed") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("changed"); register int __result = (((const unsigned char *) (const char *) (av[2]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (av[2]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (av[2]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (av[2]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("changed") && ((size_t)(const void *)(("changed") + 1) - (size_t)(const void *)("changed") == 1) && (__s2_len = strlen ("changed"), __s2_len < 4) ? (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) ? __builtin_strcmp (av[2], "changed") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (av[2]); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("changed"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("changed"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("changed"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("changed"))[3]); } } __result; }))) : __builtin_strcmp (av[2], "changed")))); }))
  chg = 1;
 else if (av[2] != ((void *)0))
  lfmt = 1;

 n = 0;
 for ((pl) = (((&phead))->vtqh_first); (pl); (pl) = (((pl))->list.vtqe_next)) {
  pp = pl->spec;
  if (lfmt && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pp->name) && __builtin_constant_p (av[2]) && (__s1_len = strlen (pp->name), __s2_len = strlen (av[2]), (!((size_t)(const void *)((pp->name) + 1) - (size_t)(const void *)(pp->name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pp->name, av[2]) : (__builtin_constant_p (pp->name) && ((size_t)(const void *)((pp->name) + 1) - (size_t)(const void *)(pp->name) == 1) && (__s1_len = strlen (pp->name), __s1_len < 4) ? (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) ? __builtin_strcmp (pp->name, av[2]) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (av[2]); register int __result = (((const unsigned char *) (const char *) (pp->name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pp->name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) && (__s2_len = strlen (av[2]), __s2_len < 4) ? (__builtin_constant_p (pp->name) && ((size_t)(const void *)((pp->name) + 1) - (size_t)(const void *)(pp->name) == 1) ? __builtin_strcmp (pp->name, av[2]) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pp->name); register int __result = __s1[0] - ((const unsigned char *) (const char *) (av[2]))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (av[2]))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (av[2]))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (av[2]))[3]); } } __result; }))) : __builtin_strcmp (pp->name, av[2])))); }) && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p ("-l") && __builtin_constant_p (av[2]) && (__s1_len = strlen ("-l"), __s2_len = strlen (av[2]), (!((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) || __s1_len >= 4) && (!((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) || __s2_len >= 4)) ? __builtin_strcmp ("-l", av[2]) : (__builtin_constant_p ("-l") && ((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) && (__s1_len = strlen ("-l"), __s1_len < 4) ? (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) ? __builtin_strcmp ("-l", av[2]) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (av[2]); register int __result = (((const unsigned char *) (const char *) ("-l"))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-l"))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-l"))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-l"))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) && (__s2_len = strlen (av[2]), __s2_len < 4) ? (__builtin_constant_p ("-l") && ((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) ? __builtin_strcmp ("-l", av[2]) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) ("-l"); register int __result = __s1[0] - ((const unsigned char *) (const char *) (av[2]))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (av[2]))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (av[2]))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (av[2]))[3]); } } __result; }))) : __builtin_strcmp ("-l", av[2])))); }))
   continue;
  n++;

  VSB_clear(vsb);
  if (pp->func(vsb, pp, ((void *)0)))
   VCLI_SetResult(cli, CLIS_PARAM);
  do { do { if (!((VSB_finish(vsb)) == 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 259, "(VSB_finish(vsb)) == 0", VAS_ASSERT); } } while (0); } while (0);
  if (chg && pp->def != ((void *)0) && !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pp->def) && __builtin_constant_p (VSB_data(vsb)) && (__s1_len = strlen (pp->def), __s2_len = strlen (VSB_data(vsb)), (!((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) && (__s1_len = strlen (pp->def), __s1_len < 4) ? (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSB_data(vsb)); register int __result = (((const unsigned char *) (const char *) (pp->def))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pp->def))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) && (__s2_len = strlen (VSB_data(vsb)), __s2_len < 4) ? (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pp->def); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[3]); } } __result; }))) : __builtin_strcmp (pp->def, VSB_data(vsb))))); }))
   continue;

  if (lfmt) {
   VCLI_Out(cli, "%s\n", pp->name);
   VCLI_Out(cli, "%-*sValue is: ", margin1, " ");
  } else {
   VCLI_Out(cli, "%-*s", margin2, pp->name);
  }
  VCLI_Out(cli, "%s", VSB_data(vsb));
  if (pp->units != ((void *)0) && *pp->units != '\0')
   VCLI_Out(cli, " [%s]", pp->units);
  if (pp->def != ((void *)0) && !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pp->def) && __builtin_constant_p (VSB_data(vsb)) && (__s1_len = strlen (pp->def), __s2_len = strlen (VSB_data(vsb)), (!((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) && (__s1_len = strlen (pp->def), __s1_len < 4) ? (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSB_data(vsb)); register int __result = (((const unsigned char *) (const char *) (pp->def))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pp->def))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) && (__s2_len = strlen (VSB_data(vsb)), __s2_len < 4) ? (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pp->def); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[3]); } } __result; }))) : __builtin_strcmp (pp->def, VSB_data(vsb))))); }))
   VCLI_Out(cli, " (default)");
  VCLI_Out(cli, "\n");
  if (lfmt) {
   if (pp->def != ((void *)0) && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (pp->def) && __builtin_constant_p (VSB_data(vsb)) && (__s1_len = strlen (pp->def), __s2_len = strlen (VSB_data(vsb)), (!((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) || __s2_len >= 4)) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) && (__s1_len = strlen (pp->def), __s1_len < 4) ? (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSB_data(vsb)); register int __result = (((const unsigned char *) (const char *) (pp->def))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (pp->def))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (pp->def))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) && (__s2_len = strlen (VSB_data(vsb)), __s2_len < 4) ? (__builtin_constant_p (pp->def) && ((size_t)(const void *)((pp->def) + 1) - (size_t)(const void *)(pp->def) == 1) ? __builtin_strcmp (pp->def, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (pp->def); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[3]); } } __result; }))) : __builtin_strcmp (pp->def, VSB_data(vsb))))); }))
    VCLI_Out(cli, "%-*sDefault is: %s\n",
        margin1, "", pp->def);
   if (pp->min != ((void *)0))
    VCLI_Out(cli, "%-*sMinimum is: %s\n",
        margin1, "", pp->min);
   if (pp->max != ((void *)0))
    VCLI_Out(cli, "%-*sMaximum is: %s\n",
        margin1, "", pp->max);
   VCLI_Out(cli, "\n");
   mcf_wrap(cli, pp->descr);
   if (pp->flags & (1<<6))
    mcf_wrap(cli, OBJ_STICKY_TEXT);
   if (pp->flags & (1<<0))
    mcf_wrap(cli, DELAYED_EFFECT_TEXT);
   if (pp->flags & (1<<1))
    mcf_wrap(cli, EXPERIMENTAL_TEXT);
   if (pp->flags & (1<<3))
    mcf_wrap(cli, MUST_RELOAD_TEXT);
   if (pp->flags & (1<<2))
    mcf_wrap(cli, MUST_RESTART_TEXT);
   if (pp->flags & (1<<4))
    mcf_wrap(cli, WIZARD_TEXT);
   if (pp->flags & (1<<5))
    mcf_wrap(cli, PROTECTED_TEXT);
   if (pp->flags & (1<<7))
    mcf_wrap(cli, ONLY_ROOT_TEXT);
   VCLI_Out(cli, "\n\n");
  }
 }
 if (av[2] != ((void *)0) && lfmt && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (av[2]) && __builtin_constant_p ("-l") && (__s1_len = strlen (av[2]), __s2_len = strlen ("-l"), (!((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) || __s2_len >= 4)) ? __builtin_strcmp (av[2], "-l") : (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) && (__s1_len = strlen (av[2]), __s1_len < 4) ? (__builtin_constant_p ("-l") && ((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) ? __builtin_strcmp (av[2], "-l") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-l"); register int __result = (((const unsigned char *) (const char *) (av[2]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (av[2]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (av[2]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (av[2]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-l") && ((size_t)(const void *)(("-l") + 1) - (size_t)(const void *)("-l") == 1) && (__s2_len = strlen ("-l"), __s2_len < 4) ? (__builtin_constant_p (av[2]) && ((size_t)(const void *)((av[2]) + 1) - (size_t)(const void *)(av[2]) == 1) ? __builtin_strcmp (av[2], "-l") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (av[2]); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("-l"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("-l"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("-l"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("-l"))[3]); } } __result; }))) : __builtin_strcmp (av[2], "-l")))); }) && n == 0) {
  VCLI_SetResult(cli, CLIS_PARAM);
  VCLI_Out(cli, "Unknown parameter \"%s\".", av[2]);
 }
 VSB_delete(vsb);
}





void
MCF_ParamProtect(struct cli *cli, const char *args)
{
 char **av;
 struct parspec *pp;
 int i;

 av = VAV_Parse(args, ((void *)0), (1 << 1));
 if (av[0] != ((void *)0)) {
  VCLI_Out(cli, "Parse error: %s", av[0]);
  VCLI_SetResult(cli, CLIS_PARAM);
  VAV_Free(av);
  return;
 }
 for (i = 1; av[i] != ((void *)0); i++) {
  pp = mcf_findpar(av[i]);
  if (pp == ((void *)0)) {
   VCLI_Out(cli, "Unknown parameter %s", av[i]);
   VCLI_SetResult(cli, CLIS_PARAM);
   VAV_Free(av);
   return;
  }
  pp->flags |= (1<<5);
 }
 VAV_Free(av);
}



void
MCF_ParamSet(struct cli *cli, const char *param, const char *val)
{
 const struct parspec *pp;

 pp = mcf_findpar(param);
 if (pp == ((void *)0)) {
  VCLI_SetResult(cli, CLIS_PARAM);
  VCLI_Out(cli, "Unknown parameter \"%s\".", param);
  return;
 }
 if (pp->flags & (1<<5)) {
  VCLI_SetResult(cli, CLIS_AUTH);
  VCLI_Out(cli, "parameter \"%s\" is protected.", param);
  return;
 }
 if (pp->func(cli->sb, pp, val))
  VCLI_SetResult(cli, CLIS_PARAM);

 if (cli->result == CLIS_OK && heritage.param != ((void *)0))
  *heritage.param = mgt_param;

 if (cli->result != CLIS_OK) {
  VCLI_Out(cli, "\n(attempting to set param '%s' to '%s')",
      pp->name, val);
 } else if (child_pid >= 0 && pp->flags & (1<<2)) {
  VCLI_Out(cli,
      "\nChange will take effect when child is restarted");
 } else if (pp->flags & (1<<3)) {
  VCLI_Out(cli,
      "\nChange will take effect when VCL script is reloaded");
 }
}




void
mcf_param_set(struct cli *cli, const char * const *av, void *priv)
{

 (void)priv;
 MCF_ParamSet(cli, av[2], av[3]);
}





void
MCF_AddParams(struct parspec *ps)
{
 struct parspec *pp;
 const char *s;

 for (pp = ps; pp->name != ((void *)0); pp++) {
  do { do { if (!((pp->func) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 402, "(pp->func) != 0", VAS_ASSERT); } } while (0); } while (0);
  s = (__extension__ (__builtin_constant_p ('\0') && !__builtin_constant_p (pp->descr) && ('\0') == '\0' ? (char *) __rawmemchr (pp->descr, '\0') : __builtin_strchr (pp->descr, '\0')));
  if (((*__ctype_b_loc ())[(int) ((s[-1]))] & (unsigned short int) _ISspace)) {
   fprintf(stderr,
       "Param->descr has trailing space: %s\n", pp->name);
   exit(4);
  }
  mcf_addpar(pp);
  if (strlen(pp->name) + 1 > margin2)
   margin2 = strlen(pp->name) + 1;
 }
}





static void
mcf_wash_param(struct cli *cli, const struct parspec *pp, const char **val,
    const char *name, struct vsb *vsb)
{
 int err;

 do { do { if (!((*val) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 425, "(*val) != 0", VAS_ASSERT); } } while (0); } while (0);
 VSB_clear(vsb);
 VSB_printf(vsb, "FAILED to set %s for param %s: %s\n",
     name, pp->name, *val);
 err = pp->func(vsb, pp, *val);
 do { do { if (!((VSB_finish(vsb)) == 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 430, "(VSB_finish(vsb)) == 0", VAS_ASSERT); } } while (0); } while (0);
 if (err) {
  VCLI_Out(cli, "%s\n", VSB_data(vsb));
  VCLI_SetResult(cli, CLIS_CANT);
  return;
 }
 VSB_clear(vsb);
 err = pp->func(vsb, pp, ((void *)0));
 do { do { if (!((err) == 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 438, "(err) == 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((VSB_finish(vsb)) == 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 439, "(VSB_finish(vsb)) == 0", VAS_ASSERT); } } while (0); } while (0);
 if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (*val) && __builtin_constant_p (VSB_data(vsb)) && (__s1_len = strlen (*val), __s2_len = strlen (VSB_data(vsb)), (!((size_t)(const void *)((*val) + 1) - (size_t)(const void *)(*val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) || __s2_len >= 4)) ? __builtin_strcmp (*val, VSB_data(vsb)) : (__builtin_constant_p (*val) && ((size_t)(const void *)((*val) + 1) - (size_t)(const void *)(*val) == 1) && (__s1_len = strlen (*val), __s1_len < 4) ? (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) ? __builtin_strcmp (*val, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSB_data(vsb)); register int __result = (((const unsigned char *) (const char *) (*val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (*val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (*val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (*val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) && (__s2_len = strlen (VSB_data(vsb)), __s2_len < 4) ? (__builtin_constant_p (*val) && ((size_t)(const void *)((*val) + 1) - (size_t)(const void *)(*val) == 1) ? __builtin_strcmp (*val, VSB_data(vsb)) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (*val); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSB_data(vsb)))[3]); } } __result; }))) : __builtin_strcmp (*val, VSB_data(vsb))))); })) {
  *val = (__extension__ (__builtin_constant_p (VSB_data(vsb)) && ((size_t)(const void *)((VSB_data(vsb)) + 1) - (size_t)(const void *)(VSB_data(vsb)) == 1) ? (((const char *) (VSB_data(vsb)))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (VSB_data(vsb)) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, VSB_data(vsb), __len); __retval; })) : __strdup (VSB_data(vsb))));
  do { do { if (!((*val) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 442, "(*val) != 0", VAS_ASSERT); } } while (0); } while (0);
 }
}





void
MCF_InitParams(struct cli *cli)
{
 struct plist *pl;
 struct parspec *pp;
 struct vsb *vsb;

 vsb = VSB_new(((void *)0), ((void *)0), 0, 0x00000001);
 do { do { if (!((vsb) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 458, "(vsb) != 0", VAS_ASSERT); } } while (0); } while (0);
 for ((pl) = (((&phead))->vtqh_first); (pl); (pl) = (((pl))->list.vtqe_next)) {
  pp = pl->spec;

  if (pp->min != ((void *)0))
   mcf_wash_param(cli, pp, &pp->min, "minimum", vsb);
  if (pp->max != ((void *)0))
   mcf_wash_param(cli, pp, &pp->max, "maximum", vsb);
  do { do { if (!((pp->def) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 466, "(pp->def) != 0", VAS_ASSERT); } } while (0); } while (0);
  mcf_wash_param(cli, pp, &pp->def, "default", vsb);
 }
 VSB_delete(vsb);
}



void
MCF_CollectParams(void)
{

 MCF_AddParams(mgt_parspec);
 MCF_AddParams(WRK_parspec);
 MCF_AddParams(VSL_parspec);
}



void
MCF_SetDefault(const char *param, const char *new_def)
{
 struct parspec *pp;

 pp = mcf_findpar(param);
 do { do { if (!((pp) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 491, "(pp) != 0", VAS_ASSERT); } } while (0); } while (0);
 pp->def = new_def;
 do { do { if (!((pp->def) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 493, "(pp->def) != 0", VAS_ASSERT); } } while (0); } while (0);
}

void
MCF_SetMinimum(const char *param, const char *new_min)
{
 struct parspec *pp;

 do { do { if (!((new_min) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 501, "(new_min) != 0", VAS_ASSERT); } } while (0); } while (0);
 pp = mcf_findpar(param);
 do { do { if (!((pp) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 503, "(pp) != 0", VAS_ASSERT); } } while (0); } while (0);
 pp->min = new_min;
 do { do { if (!((pp->min) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 505, "(pp->min) != 0", VAS_ASSERT); } } while (0); } while (0);
}

void
MCF_SetMaximum(const char *param, const char *new_max)
{
 struct parspec *pp;

 do { do { if (!((new_max) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 513, "(new_max) != 0", VAS_ASSERT); } } while (0); } while (0);
 pp = mcf_findpar(param);
 do { do { if (!((pp) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 515, "(pp) != 0", VAS_ASSERT); } } while (0); } while (0);
 pp->max = new_max;
 do { do { if (!((pp->max) != 0)) { VAS_Fail(__func__, "mgt/mgt_param.c", 517, "(pp->max) != 0", VAS_ASSERT); } } while (0); } while (0);
}



void
MCF_DumpRstParam(void)
{
 struct plist *pl;
 const struct parspec *pp;
 const char *p, *q, *t1, *t2;
 int j;

 printf("\n.. The following is the autogenerated "
     "output from varnishd -x dumprstparam\n\n");
 for ((pl) = (((&phead))->vtqh_first); (pl); (pl) = (((pl))->list.vtqe_next)) {
  pp = pl->spec;
  printf(".. _ref_param_%s:\n\n", pp->name);
  printf("%s\n", pp->name);
  for (j = 0; j < strlen(pp->name); j++)
   printf("~");
  printf("\n");
  if (pp->units != ((void *)0) && *pp->units != '\0')
   printf("\t* Units: %s\n", pp->units);
  printf("\t* Default: %s\n", pp->def);
  if (pp->min != ((void *)0))
   printf("\t* Minimum: %s\n", pp->min);
  if (pp->max != ((void *)0))
   printf("\t* Maximum: %s\n", pp->max);





  if (pp->flags) {
   printf("\t* Flags: ");
   q = "";
   if (pp->flags & (1<<0)) {
    printf("%sdelayed", q);
    q = ", ";
   }
   if (pp->flags & (1<<2)) {
    printf("%smust_restart", q);
    q = ", ";
   }
   if (pp->flags & (1<<3)) {
    printf("%smust_reload", q);
    q = ", ";
   }
   if (pp->flags & (1<<1)) {
    printf("%sexperimental", q);
    q = ", ";
   }
   if (pp->flags & (1<<4)) {
    printf("%swizard", q);
    q = ", ";
   }
   if (pp->flags & (1<<7)) {
    printf("%sonly_root", q);
    q = ", ";
   }
   printf("\n");
  }
  printf("\n");
  p = pp->descr;
  while (*p != '\0') {
   q = (__extension__ (__builtin_constant_p ('\n') && !__builtin_constant_p (p) && ('\n') == '\0' ? (char *) __rawmemchr (p, '\n') : __builtin_strchr (p, '\n')));
   if (q == ((void *)0))
    q = (__extension__ (__builtin_constant_p ('\0') && !__builtin_constant_p (p) && ('\0') == '\0' ? (char *) __rawmemchr (p, '\0') : __builtin_strchr (p, '\0')));
   t1 = (__extension__ (__builtin_constant_p ('\t') && !__builtin_constant_p (p) && ('\t') == '\0' ? (char *) __rawmemchr (p, '\t') : __builtin_strchr (p, '\t')));
   if (t1 != ((void *)0) && t1 < q) {
    t2 = (__extension__ (__builtin_constant_p ('\t') && !__builtin_constant_p (t1 + 1) && ('\t') == '\0' ? (char *) __rawmemchr (t1 + 1, '\t') : __builtin_strchr (t1 + 1, '\t')));
    printf("\n\t*");
    (void)fwrite(t1 + 1, (t2 - 1) - t1, 1, stdout);
    printf("*\n\t\t");
    p = t2 + 1;
   }
   (void)fwrite(p, q - p, 1, stdout);
   p = q;
   if (*p == '\n') {
    printf("\n");
    p++;
   }
   continue;
  }
  printf("\n\n");
 }
}
