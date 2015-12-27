# 1 "../libvarnish/vsha256.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/lib/libvarnishapi//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "../libvarnish/vsha256.c"
# 29 "../libvarnish/vsha256.c"
# 1 "../../config.h" 1
# 30 "../libvarnish/vsha256.c" 2







# 1 "/usr/include/endian.h" 1 3 4
# 21 "/usr/include/endian.h" 3 4
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
# 22 "/usr/include/endian.h" 2 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 27 "/usr/include/bits/byteswap.h" 3 4
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
# 28 "/usr/include/bits/byteswap.h" 2 3 4
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
# 38 "../libvarnish/vsha256.c" 2




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
# 43 "../libvarnish/vsha256.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 1296 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4


# 463 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

# 964 "/usr/include/stdlib.h" 3 4

# 1297 "/usr/include/bits/string2.h" 2 3 4




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




# 44 "../libvarnish/vsha256.c" 2

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
# 46 "../libvarnish/vsha256.c" 2
# 1 "../../include/vend.h" 1
# 37 "../../include/vend.h"
static __inline uint16_t
vbe16dec(const void *pp)
{
 uint8_t const *p = (uint8_t const *)pp;

 return ((p[0] << 8) | p[1]);
}

static __inline uint32_t
vbe32dec(const void *pp)
{
 uint8_t const *p = (uint8_t const *)pp;

 return (((unsigned)p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
}

static __inline uint64_t
vbe64dec(const void *pp)
{
 uint8_t const *p = (uint8_t const *)pp;

 return (((uint64_t)vbe32dec(p) << 32) | vbe32dec(p + 4));
}
# 71 "../../include/vend.h"
static __inline uint32_t
vle32dec(const void *pp)
{
 uint8_t const *p = (uint8_t const *)pp;

 return (((unsigned)p[3] << 24) | (p[2] << 16) | (p[1] << 8) | p[0]);
}
# 89 "../../include/vend.h"
static __inline void
vbe16enc(void *pp, uint16_t u)
{
 uint8_t *p = (uint8_t *)pp;

 p[0] = (u >> 8) & 0xff;
 p[1] = u & 0xff;
}

static __inline void
vbe32enc(void *pp, uint32_t u)
{
 uint8_t *p = (uint8_t *)pp;

 p[0] = (u >> 24) & 0xff;
 p[1] = (u >> 16) & 0xff;
 p[2] = (u >> 8) & 0xff;
 p[3] = u & 0xff;
}

static __inline void
vbe64enc(void *pp, uint64_t u)
{
 uint8_t *p = (uint8_t *)pp;

 vbe32enc(p, (uint32_t)(u >> 32));
 vbe32enc(p + 4, (uint32_t)(u & 0xffffffffU));
}

static __inline void
vle16enc(void *pp, uint16_t u)
{
 uint8_t *p = (uint8_t *)pp;

 p[0] = u & 0xff;
 p[1] = (u >> 8) & 0xff;
}

static __inline void
vle32enc(void *pp, uint32_t u)
{
 uint8_t *p = (uint8_t *)pp;

 p[0] = u & 0xff;
 p[1] = (u >> 8) & 0xff;
 p[2] = (u >> 16) & 0xff;
 p[3] = (u >> 24) & 0xff;
}
# 47 "../libvarnish/vsha256.c" 2
# 1 "../../include/vsha256.h" 1
# 34 "../../include/vsha256.h"
typedef struct SHA256Context {
 uint32_t state[8];
 uint64_t count;
 unsigned char buf[64];
} SHA256_CTX;

void SHA256_Init(SHA256_CTX *);
void SHA256_Update(SHA256_CTX *, const void *, size_t);
void SHA256_Final(unsigned char [32], SHA256_CTX *);
void SHA256_Test(void);
# 48 "../libvarnish/vsha256.c" 2
# 65 "../libvarnish/vsha256.c"
static void
be32enc_vect(unsigned char *dst, const uint32_t *src, size_t len)
{
 size_t i;

 for (i = 0; i < len / 4; i++)
  vbe32enc(dst + i * 4, src[i]);
}





static void
be32dec_vect(uint32_t *dst, const unsigned char *src, size_t len)
{
 size_t i;

 for (i = 0; i < len / 4; i++)
  dst[i] = vbe32dec(src + i * 4);
}
# 118 "../libvarnish/vsha256.c"
static void
SHA256_Transform(uint32_t * state, const unsigned char block[64])
{
 uint32_t W[64];
 uint32_t S[8];
 uint32_t t0, t1;
 int i;


 be32dec_vect(W, block, 64);
 for (i = 16; i < 64; i++)
  W[i] = (((W[i - 2] >> 17) | (W[i - 2] << (32 - 17))) ^ ((W[i - 2] >> 19) | (W[i - 2] << (32 - 19))) ^ (W[i - 2] >> 10)) + W[i - 7] + (((W[i - 15] >> 7) | (W[i - 15] << (32 - 7))) ^ ((W[i - 15] >> 18) | (W[i - 15] << (32 - 18))) ^ (W[i - 15] >> 3)) + W[i - 16];


 memcpy(S, state, 32);


 t0 = S[(71 - 0) % 8] + (((S[(68 - 0) % 8] >> 6) | (S[(68 - 0) % 8] << (32 - 6))) ^ ((S[(68 - 0) % 8] >> 11) | (S[(68 - 0) % 8] << (32 - 11))) ^ ((S[(68 - 0) % 8] >> 25) | (S[(68 - 0) % 8] << (32 - 25)))) + ((S[(68 - 0) % 8] & (S[(69 - 0) % 8] ^ S[(70 - 0) % 8])) ^ S[(70 - 0) % 8]) + (W[0] + 0x428a2f98); t1 = (((S[(64 - 0) % 8] >> 2) | (S[(64 - 0) % 8] << (32 - 2))) ^ ((S[(64 - 0) % 8] >> 13) | (S[(64 - 0) % 8] << (32 - 13))) ^ ((S[(64 - 0) % 8] >> 22) | (S[(64 - 0) % 8] << (32 - 22)))) + ((S[(64 - 0) % 8] & (S[(65 - 0) % 8] | S[(66 - 0) % 8])) | (S[(65 - 0) % 8] & S[(66 - 0) % 8])); S[(67 - 0) % 8] += t0; S[(71 - 0) % 8] = t0 + t1;;
 t0 = S[(71 - 1) % 8] + (((S[(68 - 1) % 8] >> 6) | (S[(68 - 1) % 8] << (32 - 6))) ^ ((S[(68 - 1) % 8] >> 11) | (S[(68 - 1) % 8] << (32 - 11))) ^ ((S[(68 - 1) % 8] >> 25) | (S[(68 - 1) % 8] << (32 - 25)))) + ((S[(68 - 1) % 8] & (S[(69 - 1) % 8] ^ S[(70 - 1) % 8])) ^ S[(70 - 1) % 8]) + (W[1] + 0x71374491); t1 = (((S[(64 - 1) % 8] >> 2) | (S[(64 - 1) % 8] << (32 - 2))) ^ ((S[(64 - 1) % 8] >> 13) | (S[(64 - 1) % 8] << (32 - 13))) ^ ((S[(64 - 1) % 8] >> 22) | (S[(64 - 1) % 8] << (32 - 22)))) + ((S[(64 - 1) % 8] & (S[(65 - 1) % 8] | S[(66 - 1) % 8])) | (S[(65 - 1) % 8] & S[(66 - 1) % 8])); S[(67 - 1) % 8] += t0; S[(71 - 1) % 8] = t0 + t1;;
 t0 = S[(71 - 2) % 8] + (((S[(68 - 2) % 8] >> 6) | (S[(68 - 2) % 8] << (32 - 6))) ^ ((S[(68 - 2) % 8] >> 11) | (S[(68 - 2) % 8] << (32 - 11))) ^ ((S[(68 - 2) % 8] >> 25) | (S[(68 - 2) % 8] << (32 - 25)))) + ((S[(68 - 2) % 8] & (S[(69 - 2) % 8] ^ S[(70 - 2) % 8])) ^ S[(70 - 2) % 8]) + (W[2] + 0xb5c0fbcf); t1 = (((S[(64 - 2) % 8] >> 2) | (S[(64 - 2) % 8] << (32 - 2))) ^ ((S[(64 - 2) % 8] >> 13) | (S[(64 - 2) % 8] << (32 - 13))) ^ ((S[(64 - 2) % 8] >> 22) | (S[(64 - 2) % 8] << (32 - 22)))) + ((S[(64 - 2) % 8] & (S[(65 - 2) % 8] | S[(66 - 2) % 8])) | (S[(65 - 2) % 8] & S[(66 - 2) % 8])); S[(67 - 2) % 8] += t0; S[(71 - 2) % 8] = t0 + t1;;
 t0 = S[(71 - 3) % 8] + (((S[(68 - 3) % 8] >> 6) | (S[(68 - 3) % 8] << (32 - 6))) ^ ((S[(68 - 3) % 8] >> 11) | (S[(68 - 3) % 8] << (32 - 11))) ^ ((S[(68 - 3) % 8] >> 25) | (S[(68 - 3) % 8] << (32 - 25)))) + ((S[(68 - 3) % 8] & (S[(69 - 3) % 8] ^ S[(70 - 3) % 8])) ^ S[(70 - 3) % 8]) + (W[3] + 0xe9b5dba5); t1 = (((S[(64 - 3) % 8] >> 2) | (S[(64 - 3) % 8] << (32 - 2))) ^ ((S[(64 - 3) % 8] >> 13) | (S[(64 - 3) % 8] << (32 - 13))) ^ ((S[(64 - 3) % 8] >> 22) | (S[(64 - 3) % 8] << (32 - 22)))) + ((S[(64 - 3) % 8] & (S[(65 - 3) % 8] | S[(66 - 3) % 8])) | (S[(65 - 3) % 8] & S[(66 - 3) % 8])); S[(67 - 3) % 8] += t0; S[(71 - 3) % 8] = t0 + t1;;
 t0 = S[(71 - 4) % 8] + (((S[(68 - 4) % 8] >> 6) | (S[(68 - 4) % 8] << (32 - 6))) ^ ((S[(68 - 4) % 8] >> 11) | (S[(68 - 4) % 8] << (32 - 11))) ^ ((S[(68 - 4) % 8] >> 25) | (S[(68 - 4) % 8] << (32 - 25)))) + ((S[(68 - 4) % 8] & (S[(69 - 4) % 8] ^ S[(70 - 4) % 8])) ^ S[(70 - 4) % 8]) + (W[4] + 0x3956c25b); t1 = (((S[(64 - 4) % 8] >> 2) | (S[(64 - 4) % 8] << (32 - 2))) ^ ((S[(64 - 4) % 8] >> 13) | (S[(64 - 4) % 8] << (32 - 13))) ^ ((S[(64 - 4) % 8] >> 22) | (S[(64 - 4) % 8] << (32 - 22)))) + ((S[(64 - 4) % 8] & (S[(65 - 4) % 8] | S[(66 - 4) % 8])) | (S[(65 - 4) % 8] & S[(66 - 4) % 8])); S[(67 - 4) % 8] += t0; S[(71 - 4) % 8] = t0 + t1;;
 t0 = S[(71 - 5) % 8] + (((S[(68 - 5) % 8] >> 6) | (S[(68 - 5) % 8] << (32 - 6))) ^ ((S[(68 - 5) % 8] >> 11) | (S[(68 - 5) % 8] << (32 - 11))) ^ ((S[(68 - 5) % 8] >> 25) | (S[(68 - 5) % 8] << (32 - 25)))) + ((S[(68 - 5) % 8] & (S[(69 - 5) % 8] ^ S[(70 - 5) % 8])) ^ S[(70 - 5) % 8]) + (W[5] + 0x59f111f1); t1 = (((S[(64 - 5) % 8] >> 2) | (S[(64 - 5) % 8] << (32 - 2))) ^ ((S[(64 - 5) % 8] >> 13) | (S[(64 - 5) % 8] << (32 - 13))) ^ ((S[(64 - 5) % 8] >> 22) | (S[(64 - 5) % 8] << (32 - 22)))) + ((S[(64 - 5) % 8] & (S[(65 - 5) % 8] | S[(66 - 5) % 8])) | (S[(65 - 5) % 8] & S[(66 - 5) % 8])); S[(67 - 5) % 8] += t0; S[(71 - 5) % 8] = t0 + t1;;
 t0 = S[(71 - 6) % 8] + (((S[(68 - 6) % 8] >> 6) | (S[(68 - 6) % 8] << (32 - 6))) ^ ((S[(68 - 6) % 8] >> 11) | (S[(68 - 6) % 8] << (32 - 11))) ^ ((S[(68 - 6) % 8] >> 25) | (S[(68 - 6) % 8] << (32 - 25)))) + ((S[(68 - 6) % 8] & (S[(69 - 6) % 8] ^ S[(70 - 6) % 8])) ^ S[(70 - 6) % 8]) + (W[6] + 0x923f82a4); t1 = (((S[(64 - 6) % 8] >> 2) | (S[(64 - 6) % 8] << (32 - 2))) ^ ((S[(64 - 6) % 8] >> 13) | (S[(64 - 6) % 8] << (32 - 13))) ^ ((S[(64 - 6) % 8] >> 22) | (S[(64 - 6) % 8] << (32 - 22)))) + ((S[(64 - 6) % 8] & (S[(65 - 6) % 8] | S[(66 - 6) % 8])) | (S[(65 - 6) % 8] & S[(66 - 6) % 8])); S[(67 - 6) % 8] += t0; S[(71 - 6) % 8] = t0 + t1;;
 t0 = S[(71 - 7) % 8] + (((S[(68 - 7) % 8] >> 6) | (S[(68 - 7) % 8] << (32 - 6))) ^ ((S[(68 - 7) % 8] >> 11) | (S[(68 - 7) % 8] << (32 - 11))) ^ ((S[(68 - 7) % 8] >> 25) | (S[(68 - 7) % 8] << (32 - 25)))) + ((S[(68 - 7) % 8] & (S[(69 - 7) % 8] ^ S[(70 - 7) % 8])) ^ S[(70 - 7) % 8]) + (W[7] + 0xab1c5ed5); t1 = (((S[(64 - 7) % 8] >> 2) | (S[(64 - 7) % 8] << (32 - 2))) ^ ((S[(64 - 7) % 8] >> 13) | (S[(64 - 7) % 8] << (32 - 13))) ^ ((S[(64 - 7) % 8] >> 22) | (S[(64 - 7) % 8] << (32 - 22)))) + ((S[(64 - 7) % 8] & (S[(65 - 7) % 8] | S[(66 - 7) % 8])) | (S[(65 - 7) % 8] & S[(66 - 7) % 8])); S[(67 - 7) % 8] += t0; S[(71 - 7) % 8] = t0 + t1;;
 t0 = S[(71 - 8) % 8] + (((S[(68 - 8) % 8] >> 6) | (S[(68 - 8) % 8] << (32 - 6))) ^ ((S[(68 - 8) % 8] >> 11) | (S[(68 - 8) % 8] << (32 - 11))) ^ ((S[(68 - 8) % 8] >> 25) | (S[(68 - 8) % 8] << (32 - 25)))) + ((S[(68 - 8) % 8] & (S[(69 - 8) % 8] ^ S[(70 - 8) % 8])) ^ S[(70 - 8) % 8]) + (W[8] + 0xd807aa98); t1 = (((S[(64 - 8) % 8] >> 2) | (S[(64 - 8) % 8] << (32 - 2))) ^ ((S[(64 - 8) % 8] >> 13) | (S[(64 - 8) % 8] << (32 - 13))) ^ ((S[(64 - 8) % 8] >> 22) | (S[(64 - 8) % 8] << (32 - 22)))) + ((S[(64 - 8) % 8] & (S[(65 - 8) % 8] | S[(66 - 8) % 8])) | (S[(65 - 8) % 8] & S[(66 - 8) % 8])); S[(67 - 8) % 8] += t0; S[(71 - 8) % 8] = t0 + t1;;
 t0 = S[(71 - 9) % 8] + (((S[(68 - 9) % 8] >> 6) | (S[(68 - 9) % 8] << (32 - 6))) ^ ((S[(68 - 9) % 8] >> 11) | (S[(68 - 9) % 8] << (32 - 11))) ^ ((S[(68 - 9) % 8] >> 25) | (S[(68 - 9) % 8] << (32 - 25)))) + ((S[(68 - 9) % 8] & (S[(69 - 9) % 8] ^ S[(70 - 9) % 8])) ^ S[(70 - 9) % 8]) + (W[9] + 0x12835b01); t1 = (((S[(64 - 9) % 8] >> 2) | (S[(64 - 9) % 8] << (32 - 2))) ^ ((S[(64 - 9) % 8] >> 13) | (S[(64 - 9) % 8] << (32 - 13))) ^ ((S[(64 - 9) % 8] >> 22) | (S[(64 - 9) % 8] << (32 - 22)))) + ((S[(64 - 9) % 8] & (S[(65 - 9) % 8] | S[(66 - 9) % 8])) | (S[(65 - 9) % 8] & S[(66 - 9) % 8])); S[(67 - 9) % 8] += t0; S[(71 - 9) % 8] = t0 + t1;;
 t0 = S[(71 - 10) % 8] + (((S[(68 - 10) % 8] >> 6) | (S[(68 - 10) % 8] << (32 - 6))) ^ ((S[(68 - 10) % 8] >> 11) | (S[(68 - 10) % 8] << (32 - 11))) ^ ((S[(68 - 10) % 8] >> 25) | (S[(68 - 10) % 8] << (32 - 25)))) + ((S[(68 - 10) % 8] & (S[(69 - 10) % 8] ^ S[(70 - 10) % 8])) ^ S[(70 - 10) % 8]) + (W[10] + 0x243185be); t1 = (((S[(64 - 10) % 8] >> 2) | (S[(64 - 10) % 8] << (32 - 2))) ^ ((S[(64 - 10) % 8] >> 13) | (S[(64 - 10) % 8] << (32 - 13))) ^ ((S[(64 - 10) % 8] >> 22) | (S[(64 - 10) % 8] << (32 - 22)))) + ((S[(64 - 10) % 8] & (S[(65 - 10) % 8] | S[(66 - 10) % 8])) | (S[(65 - 10) % 8] & S[(66 - 10) % 8])); S[(67 - 10) % 8] += t0; S[(71 - 10) % 8] = t0 + t1;;
 t0 = S[(71 - 11) % 8] + (((S[(68 - 11) % 8] >> 6) | (S[(68 - 11) % 8] << (32 - 6))) ^ ((S[(68 - 11) % 8] >> 11) | (S[(68 - 11) % 8] << (32 - 11))) ^ ((S[(68 - 11) % 8] >> 25) | (S[(68 - 11) % 8] << (32 - 25)))) + ((S[(68 - 11) % 8] & (S[(69 - 11) % 8] ^ S[(70 - 11) % 8])) ^ S[(70 - 11) % 8]) + (W[11] + 0x550c7dc3); t1 = (((S[(64 - 11) % 8] >> 2) | (S[(64 - 11) % 8] << (32 - 2))) ^ ((S[(64 - 11) % 8] >> 13) | (S[(64 - 11) % 8] << (32 - 13))) ^ ((S[(64 - 11) % 8] >> 22) | (S[(64 - 11) % 8] << (32 - 22)))) + ((S[(64 - 11) % 8] & (S[(65 - 11) % 8] | S[(66 - 11) % 8])) | (S[(65 - 11) % 8] & S[(66 - 11) % 8])); S[(67 - 11) % 8] += t0; S[(71 - 11) % 8] = t0 + t1;;
 t0 = S[(71 - 12) % 8] + (((S[(68 - 12) % 8] >> 6) | (S[(68 - 12) % 8] << (32 - 6))) ^ ((S[(68 - 12) % 8] >> 11) | (S[(68 - 12) % 8] << (32 - 11))) ^ ((S[(68 - 12) % 8] >> 25) | (S[(68 - 12) % 8] << (32 - 25)))) + ((S[(68 - 12) % 8] & (S[(69 - 12) % 8] ^ S[(70 - 12) % 8])) ^ S[(70 - 12) % 8]) + (W[12] + 0x72be5d74); t1 = (((S[(64 - 12) % 8] >> 2) | (S[(64 - 12) % 8] << (32 - 2))) ^ ((S[(64 - 12) % 8] >> 13) | (S[(64 - 12) % 8] << (32 - 13))) ^ ((S[(64 - 12) % 8] >> 22) | (S[(64 - 12) % 8] << (32 - 22)))) + ((S[(64 - 12) % 8] & (S[(65 - 12) % 8] | S[(66 - 12) % 8])) | (S[(65 - 12) % 8] & S[(66 - 12) % 8])); S[(67 - 12) % 8] += t0; S[(71 - 12) % 8] = t0 + t1;;
 t0 = S[(71 - 13) % 8] + (((S[(68 - 13) % 8] >> 6) | (S[(68 - 13) % 8] << (32 - 6))) ^ ((S[(68 - 13) % 8] >> 11) | (S[(68 - 13) % 8] << (32 - 11))) ^ ((S[(68 - 13) % 8] >> 25) | (S[(68 - 13) % 8] << (32 - 25)))) + ((S[(68 - 13) % 8] & (S[(69 - 13) % 8] ^ S[(70 - 13) % 8])) ^ S[(70 - 13) % 8]) + (W[13] + 0x80deb1fe); t1 = (((S[(64 - 13) % 8] >> 2) | (S[(64 - 13) % 8] << (32 - 2))) ^ ((S[(64 - 13) % 8] >> 13) | (S[(64 - 13) % 8] << (32 - 13))) ^ ((S[(64 - 13) % 8] >> 22) | (S[(64 - 13) % 8] << (32 - 22)))) + ((S[(64 - 13) % 8] & (S[(65 - 13) % 8] | S[(66 - 13) % 8])) | (S[(65 - 13) % 8] & S[(66 - 13) % 8])); S[(67 - 13) % 8] += t0; S[(71 - 13) % 8] = t0 + t1;;
 t0 = S[(71 - 14) % 8] + (((S[(68 - 14) % 8] >> 6) | (S[(68 - 14) % 8] << (32 - 6))) ^ ((S[(68 - 14) % 8] >> 11) | (S[(68 - 14) % 8] << (32 - 11))) ^ ((S[(68 - 14) % 8] >> 25) | (S[(68 - 14) % 8] << (32 - 25)))) + ((S[(68 - 14) % 8] & (S[(69 - 14) % 8] ^ S[(70 - 14) % 8])) ^ S[(70 - 14) % 8]) + (W[14] + 0x9bdc06a7); t1 = (((S[(64 - 14) % 8] >> 2) | (S[(64 - 14) % 8] << (32 - 2))) ^ ((S[(64 - 14) % 8] >> 13) | (S[(64 - 14) % 8] << (32 - 13))) ^ ((S[(64 - 14) % 8] >> 22) | (S[(64 - 14) % 8] << (32 - 22)))) + ((S[(64 - 14) % 8] & (S[(65 - 14) % 8] | S[(66 - 14) % 8])) | (S[(65 - 14) % 8] & S[(66 - 14) % 8])); S[(67 - 14) % 8] += t0; S[(71 - 14) % 8] = t0 + t1;;
 t0 = S[(71 - 15) % 8] + (((S[(68 - 15) % 8] >> 6) | (S[(68 - 15) % 8] << (32 - 6))) ^ ((S[(68 - 15) % 8] >> 11) | (S[(68 - 15) % 8] << (32 - 11))) ^ ((S[(68 - 15) % 8] >> 25) | (S[(68 - 15) % 8] << (32 - 25)))) + ((S[(68 - 15) % 8] & (S[(69 - 15) % 8] ^ S[(70 - 15) % 8])) ^ S[(70 - 15) % 8]) + (W[15] + 0xc19bf174); t1 = (((S[(64 - 15) % 8] >> 2) | (S[(64 - 15) % 8] << (32 - 2))) ^ ((S[(64 - 15) % 8] >> 13) | (S[(64 - 15) % 8] << (32 - 13))) ^ ((S[(64 - 15) % 8] >> 22) | (S[(64 - 15) % 8] << (32 - 22)))) + ((S[(64 - 15) % 8] & (S[(65 - 15) % 8] | S[(66 - 15) % 8])) | (S[(65 - 15) % 8] & S[(66 - 15) % 8])); S[(67 - 15) % 8] += t0; S[(71 - 15) % 8] = t0 + t1;;
 t0 = S[(71 - 16) % 8] + (((S[(68 - 16) % 8] >> 6) | (S[(68 - 16) % 8] << (32 - 6))) ^ ((S[(68 - 16) % 8] >> 11) | (S[(68 - 16) % 8] << (32 - 11))) ^ ((S[(68 - 16) % 8] >> 25) | (S[(68 - 16) % 8] << (32 - 25)))) + ((S[(68 - 16) % 8] & (S[(69 - 16) % 8] ^ S[(70 - 16) % 8])) ^ S[(70 - 16) % 8]) + (W[16] + 0xe49b69c1); t1 = (((S[(64 - 16) % 8] >> 2) | (S[(64 - 16) % 8] << (32 - 2))) ^ ((S[(64 - 16) % 8] >> 13) | (S[(64 - 16) % 8] << (32 - 13))) ^ ((S[(64 - 16) % 8] >> 22) | (S[(64 - 16) % 8] << (32 - 22)))) + ((S[(64 - 16) % 8] & (S[(65 - 16) % 8] | S[(66 - 16) % 8])) | (S[(65 - 16) % 8] & S[(66 - 16) % 8])); S[(67 - 16) % 8] += t0; S[(71 - 16) % 8] = t0 + t1;;
 t0 = S[(71 - 17) % 8] + (((S[(68 - 17) % 8] >> 6) | (S[(68 - 17) % 8] << (32 - 6))) ^ ((S[(68 - 17) % 8] >> 11) | (S[(68 - 17) % 8] << (32 - 11))) ^ ((S[(68 - 17) % 8] >> 25) | (S[(68 - 17) % 8] << (32 - 25)))) + ((S[(68 - 17) % 8] & (S[(69 - 17) % 8] ^ S[(70 - 17) % 8])) ^ S[(70 - 17) % 8]) + (W[17] + 0xefbe4786); t1 = (((S[(64 - 17) % 8] >> 2) | (S[(64 - 17) % 8] << (32 - 2))) ^ ((S[(64 - 17) % 8] >> 13) | (S[(64 - 17) % 8] << (32 - 13))) ^ ((S[(64 - 17) % 8] >> 22) | (S[(64 - 17) % 8] << (32 - 22)))) + ((S[(64 - 17) % 8] & (S[(65 - 17) % 8] | S[(66 - 17) % 8])) | (S[(65 - 17) % 8] & S[(66 - 17) % 8])); S[(67 - 17) % 8] += t0; S[(71 - 17) % 8] = t0 + t1;;
 t0 = S[(71 - 18) % 8] + (((S[(68 - 18) % 8] >> 6) | (S[(68 - 18) % 8] << (32 - 6))) ^ ((S[(68 - 18) % 8] >> 11) | (S[(68 - 18) % 8] << (32 - 11))) ^ ((S[(68 - 18) % 8] >> 25) | (S[(68 - 18) % 8] << (32 - 25)))) + ((S[(68 - 18) % 8] & (S[(69 - 18) % 8] ^ S[(70 - 18) % 8])) ^ S[(70 - 18) % 8]) + (W[18] + 0x0fc19dc6); t1 = (((S[(64 - 18) % 8] >> 2) | (S[(64 - 18) % 8] << (32 - 2))) ^ ((S[(64 - 18) % 8] >> 13) | (S[(64 - 18) % 8] << (32 - 13))) ^ ((S[(64 - 18) % 8] >> 22) | (S[(64 - 18) % 8] << (32 - 22)))) + ((S[(64 - 18) % 8] & (S[(65 - 18) % 8] | S[(66 - 18) % 8])) | (S[(65 - 18) % 8] & S[(66 - 18) % 8])); S[(67 - 18) % 8] += t0; S[(71 - 18) % 8] = t0 + t1;;
 t0 = S[(71 - 19) % 8] + (((S[(68 - 19) % 8] >> 6) | (S[(68 - 19) % 8] << (32 - 6))) ^ ((S[(68 - 19) % 8] >> 11) | (S[(68 - 19) % 8] << (32 - 11))) ^ ((S[(68 - 19) % 8] >> 25) | (S[(68 - 19) % 8] << (32 - 25)))) + ((S[(68 - 19) % 8] & (S[(69 - 19) % 8] ^ S[(70 - 19) % 8])) ^ S[(70 - 19) % 8]) + (W[19] + 0x240ca1cc); t1 = (((S[(64 - 19) % 8] >> 2) | (S[(64 - 19) % 8] << (32 - 2))) ^ ((S[(64 - 19) % 8] >> 13) | (S[(64 - 19) % 8] << (32 - 13))) ^ ((S[(64 - 19) % 8] >> 22) | (S[(64 - 19) % 8] << (32 - 22)))) + ((S[(64 - 19) % 8] & (S[(65 - 19) % 8] | S[(66 - 19) % 8])) | (S[(65 - 19) % 8] & S[(66 - 19) % 8])); S[(67 - 19) % 8] += t0; S[(71 - 19) % 8] = t0 + t1;;
 t0 = S[(71 - 20) % 8] + (((S[(68 - 20) % 8] >> 6) | (S[(68 - 20) % 8] << (32 - 6))) ^ ((S[(68 - 20) % 8] >> 11) | (S[(68 - 20) % 8] << (32 - 11))) ^ ((S[(68 - 20) % 8] >> 25) | (S[(68 - 20) % 8] << (32 - 25)))) + ((S[(68 - 20) % 8] & (S[(69 - 20) % 8] ^ S[(70 - 20) % 8])) ^ S[(70 - 20) % 8]) + (W[20] + 0x2de92c6f); t1 = (((S[(64 - 20) % 8] >> 2) | (S[(64 - 20) % 8] << (32 - 2))) ^ ((S[(64 - 20) % 8] >> 13) | (S[(64 - 20) % 8] << (32 - 13))) ^ ((S[(64 - 20) % 8] >> 22) | (S[(64 - 20) % 8] << (32 - 22)))) + ((S[(64 - 20) % 8] & (S[(65 - 20) % 8] | S[(66 - 20) % 8])) | (S[(65 - 20) % 8] & S[(66 - 20) % 8])); S[(67 - 20) % 8] += t0; S[(71 - 20) % 8] = t0 + t1;;
 t0 = S[(71 - 21) % 8] + (((S[(68 - 21) % 8] >> 6) | (S[(68 - 21) % 8] << (32 - 6))) ^ ((S[(68 - 21) % 8] >> 11) | (S[(68 - 21) % 8] << (32 - 11))) ^ ((S[(68 - 21) % 8] >> 25) | (S[(68 - 21) % 8] << (32 - 25)))) + ((S[(68 - 21) % 8] & (S[(69 - 21) % 8] ^ S[(70 - 21) % 8])) ^ S[(70 - 21) % 8]) + (W[21] + 0x4a7484aa); t1 = (((S[(64 - 21) % 8] >> 2) | (S[(64 - 21) % 8] << (32 - 2))) ^ ((S[(64 - 21) % 8] >> 13) | (S[(64 - 21) % 8] << (32 - 13))) ^ ((S[(64 - 21) % 8] >> 22) | (S[(64 - 21) % 8] << (32 - 22)))) + ((S[(64 - 21) % 8] & (S[(65 - 21) % 8] | S[(66 - 21) % 8])) | (S[(65 - 21) % 8] & S[(66 - 21) % 8])); S[(67 - 21) % 8] += t0; S[(71 - 21) % 8] = t0 + t1;;
 t0 = S[(71 - 22) % 8] + (((S[(68 - 22) % 8] >> 6) | (S[(68 - 22) % 8] << (32 - 6))) ^ ((S[(68 - 22) % 8] >> 11) | (S[(68 - 22) % 8] << (32 - 11))) ^ ((S[(68 - 22) % 8] >> 25) | (S[(68 - 22) % 8] << (32 - 25)))) + ((S[(68 - 22) % 8] & (S[(69 - 22) % 8] ^ S[(70 - 22) % 8])) ^ S[(70 - 22) % 8]) + (W[22] + 0x5cb0a9dc); t1 = (((S[(64 - 22) % 8] >> 2) | (S[(64 - 22) % 8] << (32 - 2))) ^ ((S[(64 - 22) % 8] >> 13) | (S[(64 - 22) % 8] << (32 - 13))) ^ ((S[(64 - 22) % 8] >> 22) | (S[(64 - 22) % 8] << (32 - 22)))) + ((S[(64 - 22) % 8] & (S[(65 - 22) % 8] | S[(66 - 22) % 8])) | (S[(65 - 22) % 8] & S[(66 - 22) % 8])); S[(67 - 22) % 8] += t0; S[(71 - 22) % 8] = t0 + t1;;
 t0 = S[(71 - 23) % 8] + (((S[(68 - 23) % 8] >> 6) | (S[(68 - 23) % 8] << (32 - 6))) ^ ((S[(68 - 23) % 8] >> 11) | (S[(68 - 23) % 8] << (32 - 11))) ^ ((S[(68 - 23) % 8] >> 25) | (S[(68 - 23) % 8] << (32 - 25)))) + ((S[(68 - 23) % 8] & (S[(69 - 23) % 8] ^ S[(70 - 23) % 8])) ^ S[(70 - 23) % 8]) + (W[23] + 0x76f988da); t1 = (((S[(64 - 23) % 8] >> 2) | (S[(64 - 23) % 8] << (32 - 2))) ^ ((S[(64 - 23) % 8] >> 13) | (S[(64 - 23) % 8] << (32 - 13))) ^ ((S[(64 - 23) % 8] >> 22) | (S[(64 - 23) % 8] << (32 - 22)))) + ((S[(64 - 23) % 8] & (S[(65 - 23) % 8] | S[(66 - 23) % 8])) | (S[(65 - 23) % 8] & S[(66 - 23) % 8])); S[(67 - 23) % 8] += t0; S[(71 - 23) % 8] = t0 + t1;;
 t0 = S[(71 - 24) % 8] + (((S[(68 - 24) % 8] >> 6) | (S[(68 - 24) % 8] << (32 - 6))) ^ ((S[(68 - 24) % 8] >> 11) | (S[(68 - 24) % 8] << (32 - 11))) ^ ((S[(68 - 24) % 8] >> 25) | (S[(68 - 24) % 8] << (32 - 25)))) + ((S[(68 - 24) % 8] & (S[(69 - 24) % 8] ^ S[(70 - 24) % 8])) ^ S[(70 - 24) % 8]) + (W[24] + 0x983e5152); t1 = (((S[(64 - 24) % 8] >> 2) | (S[(64 - 24) % 8] << (32 - 2))) ^ ((S[(64 - 24) % 8] >> 13) | (S[(64 - 24) % 8] << (32 - 13))) ^ ((S[(64 - 24) % 8] >> 22) | (S[(64 - 24) % 8] << (32 - 22)))) + ((S[(64 - 24) % 8] & (S[(65 - 24) % 8] | S[(66 - 24) % 8])) | (S[(65 - 24) % 8] & S[(66 - 24) % 8])); S[(67 - 24) % 8] += t0; S[(71 - 24) % 8] = t0 + t1;;
 t0 = S[(71 - 25) % 8] + (((S[(68 - 25) % 8] >> 6) | (S[(68 - 25) % 8] << (32 - 6))) ^ ((S[(68 - 25) % 8] >> 11) | (S[(68 - 25) % 8] << (32 - 11))) ^ ((S[(68 - 25) % 8] >> 25) | (S[(68 - 25) % 8] << (32 - 25)))) + ((S[(68 - 25) % 8] & (S[(69 - 25) % 8] ^ S[(70 - 25) % 8])) ^ S[(70 - 25) % 8]) + (W[25] + 0xa831c66d); t1 = (((S[(64 - 25) % 8] >> 2) | (S[(64 - 25) % 8] << (32 - 2))) ^ ((S[(64 - 25) % 8] >> 13) | (S[(64 - 25) % 8] << (32 - 13))) ^ ((S[(64 - 25) % 8] >> 22) | (S[(64 - 25) % 8] << (32 - 22)))) + ((S[(64 - 25) % 8] & (S[(65 - 25) % 8] | S[(66 - 25) % 8])) | (S[(65 - 25) % 8] & S[(66 - 25) % 8])); S[(67 - 25) % 8] += t0; S[(71 - 25) % 8] = t0 + t1;;
 t0 = S[(71 - 26) % 8] + (((S[(68 - 26) % 8] >> 6) | (S[(68 - 26) % 8] << (32 - 6))) ^ ((S[(68 - 26) % 8] >> 11) | (S[(68 - 26) % 8] << (32 - 11))) ^ ((S[(68 - 26) % 8] >> 25) | (S[(68 - 26) % 8] << (32 - 25)))) + ((S[(68 - 26) % 8] & (S[(69 - 26) % 8] ^ S[(70 - 26) % 8])) ^ S[(70 - 26) % 8]) + (W[26] + 0xb00327c8); t1 = (((S[(64 - 26) % 8] >> 2) | (S[(64 - 26) % 8] << (32 - 2))) ^ ((S[(64 - 26) % 8] >> 13) | (S[(64 - 26) % 8] << (32 - 13))) ^ ((S[(64 - 26) % 8] >> 22) | (S[(64 - 26) % 8] << (32 - 22)))) + ((S[(64 - 26) % 8] & (S[(65 - 26) % 8] | S[(66 - 26) % 8])) | (S[(65 - 26) % 8] & S[(66 - 26) % 8])); S[(67 - 26) % 8] += t0; S[(71 - 26) % 8] = t0 + t1;;
 t0 = S[(71 - 27) % 8] + (((S[(68 - 27) % 8] >> 6) | (S[(68 - 27) % 8] << (32 - 6))) ^ ((S[(68 - 27) % 8] >> 11) | (S[(68 - 27) % 8] << (32 - 11))) ^ ((S[(68 - 27) % 8] >> 25) | (S[(68 - 27) % 8] << (32 - 25)))) + ((S[(68 - 27) % 8] & (S[(69 - 27) % 8] ^ S[(70 - 27) % 8])) ^ S[(70 - 27) % 8]) + (W[27] + 0xbf597fc7); t1 = (((S[(64 - 27) % 8] >> 2) | (S[(64 - 27) % 8] << (32 - 2))) ^ ((S[(64 - 27) % 8] >> 13) | (S[(64 - 27) % 8] << (32 - 13))) ^ ((S[(64 - 27) % 8] >> 22) | (S[(64 - 27) % 8] << (32 - 22)))) + ((S[(64 - 27) % 8] & (S[(65 - 27) % 8] | S[(66 - 27) % 8])) | (S[(65 - 27) % 8] & S[(66 - 27) % 8])); S[(67 - 27) % 8] += t0; S[(71 - 27) % 8] = t0 + t1;;
 t0 = S[(71 - 28) % 8] + (((S[(68 - 28) % 8] >> 6) | (S[(68 - 28) % 8] << (32 - 6))) ^ ((S[(68 - 28) % 8] >> 11) | (S[(68 - 28) % 8] << (32 - 11))) ^ ((S[(68 - 28) % 8] >> 25) | (S[(68 - 28) % 8] << (32 - 25)))) + ((S[(68 - 28) % 8] & (S[(69 - 28) % 8] ^ S[(70 - 28) % 8])) ^ S[(70 - 28) % 8]) + (W[28] + 0xc6e00bf3); t1 = (((S[(64 - 28) % 8] >> 2) | (S[(64 - 28) % 8] << (32 - 2))) ^ ((S[(64 - 28) % 8] >> 13) | (S[(64 - 28) % 8] << (32 - 13))) ^ ((S[(64 - 28) % 8] >> 22) | (S[(64 - 28) % 8] << (32 - 22)))) + ((S[(64 - 28) % 8] & (S[(65 - 28) % 8] | S[(66 - 28) % 8])) | (S[(65 - 28) % 8] & S[(66 - 28) % 8])); S[(67 - 28) % 8] += t0; S[(71 - 28) % 8] = t0 + t1;;
 t0 = S[(71 - 29) % 8] + (((S[(68 - 29) % 8] >> 6) | (S[(68 - 29) % 8] << (32 - 6))) ^ ((S[(68 - 29) % 8] >> 11) | (S[(68 - 29) % 8] << (32 - 11))) ^ ((S[(68 - 29) % 8] >> 25) | (S[(68 - 29) % 8] << (32 - 25)))) + ((S[(68 - 29) % 8] & (S[(69 - 29) % 8] ^ S[(70 - 29) % 8])) ^ S[(70 - 29) % 8]) + (W[29] + 0xd5a79147); t1 = (((S[(64 - 29) % 8] >> 2) | (S[(64 - 29) % 8] << (32 - 2))) ^ ((S[(64 - 29) % 8] >> 13) | (S[(64 - 29) % 8] << (32 - 13))) ^ ((S[(64 - 29) % 8] >> 22) | (S[(64 - 29) % 8] << (32 - 22)))) + ((S[(64 - 29) % 8] & (S[(65 - 29) % 8] | S[(66 - 29) % 8])) | (S[(65 - 29) % 8] & S[(66 - 29) % 8])); S[(67 - 29) % 8] += t0; S[(71 - 29) % 8] = t0 + t1;;
 t0 = S[(71 - 30) % 8] + (((S[(68 - 30) % 8] >> 6) | (S[(68 - 30) % 8] << (32 - 6))) ^ ((S[(68 - 30) % 8] >> 11) | (S[(68 - 30) % 8] << (32 - 11))) ^ ((S[(68 - 30) % 8] >> 25) | (S[(68 - 30) % 8] << (32 - 25)))) + ((S[(68 - 30) % 8] & (S[(69 - 30) % 8] ^ S[(70 - 30) % 8])) ^ S[(70 - 30) % 8]) + (W[30] + 0x06ca6351); t1 = (((S[(64 - 30) % 8] >> 2) | (S[(64 - 30) % 8] << (32 - 2))) ^ ((S[(64 - 30) % 8] >> 13) | (S[(64 - 30) % 8] << (32 - 13))) ^ ((S[(64 - 30) % 8] >> 22) | (S[(64 - 30) % 8] << (32 - 22)))) + ((S[(64 - 30) % 8] & (S[(65 - 30) % 8] | S[(66 - 30) % 8])) | (S[(65 - 30) % 8] & S[(66 - 30) % 8])); S[(67 - 30) % 8] += t0; S[(71 - 30) % 8] = t0 + t1;;
 t0 = S[(71 - 31) % 8] + (((S[(68 - 31) % 8] >> 6) | (S[(68 - 31) % 8] << (32 - 6))) ^ ((S[(68 - 31) % 8] >> 11) | (S[(68 - 31) % 8] << (32 - 11))) ^ ((S[(68 - 31) % 8] >> 25) | (S[(68 - 31) % 8] << (32 - 25)))) + ((S[(68 - 31) % 8] & (S[(69 - 31) % 8] ^ S[(70 - 31) % 8])) ^ S[(70 - 31) % 8]) + (W[31] + 0x14292967); t1 = (((S[(64 - 31) % 8] >> 2) | (S[(64 - 31) % 8] << (32 - 2))) ^ ((S[(64 - 31) % 8] >> 13) | (S[(64 - 31) % 8] << (32 - 13))) ^ ((S[(64 - 31) % 8] >> 22) | (S[(64 - 31) % 8] << (32 - 22)))) + ((S[(64 - 31) % 8] & (S[(65 - 31) % 8] | S[(66 - 31) % 8])) | (S[(65 - 31) % 8] & S[(66 - 31) % 8])); S[(67 - 31) % 8] += t0; S[(71 - 31) % 8] = t0 + t1;;
 t0 = S[(71 - 32) % 8] + (((S[(68 - 32) % 8] >> 6) | (S[(68 - 32) % 8] << (32 - 6))) ^ ((S[(68 - 32) % 8] >> 11) | (S[(68 - 32) % 8] << (32 - 11))) ^ ((S[(68 - 32) % 8] >> 25) | (S[(68 - 32) % 8] << (32 - 25)))) + ((S[(68 - 32) % 8] & (S[(69 - 32) % 8] ^ S[(70 - 32) % 8])) ^ S[(70 - 32) % 8]) + (W[32] + 0x27b70a85); t1 = (((S[(64 - 32) % 8] >> 2) | (S[(64 - 32) % 8] << (32 - 2))) ^ ((S[(64 - 32) % 8] >> 13) | (S[(64 - 32) % 8] << (32 - 13))) ^ ((S[(64 - 32) % 8] >> 22) | (S[(64 - 32) % 8] << (32 - 22)))) + ((S[(64 - 32) % 8] & (S[(65 - 32) % 8] | S[(66 - 32) % 8])) | (S[(65 - 32) % 8] & S[(66 - 32) % 8])); S[(67 - 32) % 8] += t0; S[(71 - 32) % 8] = t0 + t1;;
 t0 = S[(71 - 33) % 8] + (((S[(68 - 33) % 8] >> 6) | (S[(68 - 33) % 8] << (32 - 6))) ^ ((S[(68 - 33) % 8] >> 11) | (S[(68 - 33) % 8] << (32 - 11))) ^ ((S[(68 - 33) % 8] >> 25) | (S[(68 - 33) % 8] << (32 - 25)))) + ((S[(68 - 33) % 8] & (S[(69 - 33) % 8] ^ S[(70 - 33) % 8])) ^ S[(70 - 33) % 8]) + (W[33] + 0x2e1b2138); t1 = (((S[(64 - 33) % 8] >> 2) | (S[(64 - 33) % 8] << (32 - 2))) ^ ((S[(64 - 33) % 8] >> 13) | (S[(64 - 33) % 8] << (32 - 13))) ^ ((S[(64 - 33) % 8] >> 22) | (S[(64 - 33) % 8] << (32 - 22)))) + ((S[(64 - 33) % 8] & (S[(65 - 33) % 8] | S[(66 - 33) % 8])) | (S[(65 - 33) % 8] & S[(66 - 33) % 8])); S[(67 - 33) % 8] += t0; S[(71 - 33) % 8] = t0 + t1;;
 t0 = S[(71 - 34) % 8] + (((S[(68 - 34) % 8] >> 6) | (S[(68 - 34) % 8] << (32 - 6))) ^ ((S[(68 - 34) % 8] >> 11) | (S[(68 - 34) % 8] << (32 - 11))) ^ ((S[(68 - 34) % 8] >> 25) | (S[(68 - 34) % 8] << (32 - 25)))) + ((S[(68 - 34) % 8] & (S[(69 - 34) % 8] ^ S[(70 - 34) % 8])) ^ S[(70 - 34) % 8]) + (W[34] + 0x4d2c6dfc); t1 = (((S[(64 - 34) % 8] >> 2) | (S[(64 - 34) % 8] << (32 - 2))) ^ ((S[(64 - 34) % 8] >> 13) | (S[(64 - 34) % 8] << (32 - 13))) ^ ((S[(64 - 34) % 8] >> 22) | (S[(64 - 34) % 8] << (32 - 22)))) + ((S[(64 - 34) % 8] & (S[(65 - 34) % 8] | S[(66 - 34) % 8])) | (S[(65 - 34) % 8] & S[(66 - 34) % 8])); S[(67 - 34) % 8] += t0; S[(71 - 34) % 8] = t0 + t1;;
 t0 = S[(71 - 35) % 8] + (((S[(68 - 35) % 8] >> 6) | (S[(68 - 35) % 8] << (32 - 6))) ^ ((S[(68 - 35) % 8] >> 11) | (S[(68 - 35) % 8] << (32 - 11))) ^ ((S[(68 - 35) % 8] >> 25) | (S[(68 - 35) % 8] << (32 - 25)))) + ((S[(68 - 35) % 8] & (S[(69 - 35) % 8] ^ S[(70 - 35) % 8])) ^ S[(70 - 35) % 8]) + (W[35] + 0x53380d13); t1 = (((S[(64 - 35) % 8] >> 2) | (S[(64 - 35) % 8] << (32 - 2))) ^ ((S[(64 - 35) % 8] >> 13) | (S[(64 - 35) % 8] << (32 - 13))) ^ ((S[(64 - 35) % 8] >> 22) | (S[(64 - 35) % 8] << (32 - 22)))) + ((S[(64 - 35) % 8] & (S[(65 - 35) % 8] | S[(66 - 35) % 8])) | (S[(65 - 35) % 8] & S[(66 - 35) % 8])); S[(67 - 35) % 8] += t0; S[(71 - 35) % 8] = t0 + t1;;
 t0 = S[(71 - 36) % 8] + (((S[(68 - 36) % 8] >> 6) | (S[(68 - 36) % 8] << (32 - 6))) ^ ((S[(68 - 36) % 8] >> 11) | (S[(68 - 36) % 8] << (32 - 11))) ^ ((S[(68 - 36) % 8] >> 25) | (S[(68 - 36) % 8] << (32 - 25)))) + ((S[(68 - 36) % 8] & (S[(69 - 36) % 8] ^ S[(70 - 36) % 8])) ^ S[(70 - 36) % 8]) + (W[36] + 0x650a7354); t1 = (((S[(64 - 36) % 8] >> 2) | (S[(64 - 36) % 8] << (32 - 2))) ^ ((S[(64 - 36) % 8] >> 13) | (S[(64 - 36) % 8] << (32 - 13))) ^ ((S[(64 - 36) % 8] >> 22) | (S[(64 - 36) % 8] << (32 - 22)))) + ((S[(64 - 36) % 8] & (S[(65 - 36) % 8] | S[(66 - 36) % 8])) | (S[(65 - 36) % 8] & S[(66 - 36) % 8])); S[(67 - 36) % 8] += t0; S[(71 - 36) % 8] = t0 + t1;;
 t0 = S[(71 - 37) % 8] + (((S[(68 - 37) % 8] >> 6) | (S[(68 - 37) % 8] << (32 - 6))) ^ ((S[(68 - 37) % 8] >> 11) | (S[(68 - 37) % 8] << (32 - 11))) ^ ((S[(68 - 37) % 8] >> 25) | (S[(68 - 37) % 8] << (32 - 25)))) + ((S[(68 - 37) % 8] & (S[(69 - 37) % 8] ^ S[(70 - 37) % 8])) ^ S[(70 - 37) % 8]) + (W[37] + 0x766a0abb); t1 = (((S[(64 - 37) % 8] >> 2) | (S[(64 - 37) % 8] << (32 - 2))) ^ ((S[(64 - 37) % 8] >> 13) | (S[(64 - 37) % 8] << (32 - 13))) ^ ((S[(64 - 37) % 8] >> 22) | (S[(64 - 37) % 8] << (32 - 22)))) + ((S[(64 - 37) % 8] & (S[(65 - 37) % 8] | S[(66 - 37) % 8])) | (S[(65 - 37) % 8] & S[(66 - 37) % 8])); S[(67 - 37) % 8] += t0; S[(71 - 37) % 8] = t0 + t1;;
 t0 = S[(71 - 38) % 8] + (((S[(68 - 38) % 8] >> 6) | (S[(68 - 38) % 8] << (32 - 6))) ^ ((S[(68 - 38) % 8] >> 11) | (S[(68 - 38) % 8] << (32 - 11))) ^ ((S[(68 - 38) % 8] >> 25) | (S[(68 - 38) % 8] << (32 - 25)))) + ((S[(68 - 38) % 8] & (S[(69 - 38) % 8] ^ S[(70 - 38) % 8])) ^ S[(70 - 38) % 8]) + (W[38] + 0x81c2c92e); t1 = (((S[(64 - 38) % 8] >> 2) | (S[(64 - 38) % 8] << (32 - 2))) ^ ((S[(64 - 38) % 8] >> 13) | (S[(64 - 38) % 8] << (32 - 13))) ^ ((S[(64 - 38) % 8] >> 22) | (S[(64 - 38) % 8] << (32 - 22)))) + ((S[(64 - 38) % 8] & (S[(65 - 38) % 8] | S[(66 - 38) % 8])) | (S[(65 - 38) % 8] & S[(66 - 38) % 8])); S[(67 - 38) % 8] += t0; S[(71 - 38) % 8] = t0 + t1;;
 t0 = S[(71 - 39) % 8] + (((S[(68 - 39) % 8] >> 6) | (S[(68 - 39) % 8] << (32 - 6))) ^ ((S[(68 - 39) % 8] >> 11) | (S[(68 - 39) % 8] << (32 - 11))) ^ ((S[(68 - 39) % 8] >> 25) | (S[(68 - 39) % 8] << (32 - 25)))) + ((S[(68 - 39) % 8] & (S[(69 - 39) % 8] ^ S[(70 - 39) % 8])) ^ S[(70 - 39) % 8]) + (W[39] + 0x92722c85); t1 = (((S[(64 - 39) % 8] >> 2) | (S[(64 - 39) % 8] << (32 - 2))) ^ ((S[(64 - 39) % 8] >> 13) | (S[(64 - 39) % 8] << (32 - 13))) ^ ((S[(64 - 39) % 8] >> 22) | (S[(64 - 39) % 8] << (32 - 22)))) + ((S[(64 - 39) % 8] & (S[(65 - 39) % 8] | S[(66 - 39) % 8])) | (S[(65 - 39) % 8] & S[(66 - 39) % 8])); S[(67 - 39) % 8] += t0; S[(71 - 39) % 8] = t0 + t1;;
 t0 = S[(71 - 40) % 8] + (((S[(68 - 40) % 8] >> 6) | (S[(68 - 40) % 8] << (32 - 6))) ^ ((S[(68 - 40) % 8] >> 11) | (S[(68 - 40) % 8] << (32 - 11))) ^ ((S[(68 - 40) % 8] >> 25) | (S[(68 - 40) % 8] << (32 - 25)))) + ((S[(68 - 40) % 8] & (S[(69 - 40) % 8] ^ S[(70 - 40) % 8])) ^ S[(70 - 40) % 8]) + (W[40] + 0xa2bfe8a1); t1 = (((S[(64 - 40) % 8] >> 2) | (S[(64 - 40) % 8] << (32 - 2))) ^ ((S[(64 - 40) % 8] >> 13) | (S[(64 - 40) % 8] << (32 - 13))) ^ ((S[(64 - 40) % 8] >> 22) | (S[(64 - 40) % 8] << (32 - 22)))) + ((S[(64 - 40) % 8] & (S[(65 - 40) % 8] | S[(66 - 40) % 8])) | (S[(65 - 40) % 8] & S[(66 - 40) % 8])); S[(67 - 40) % 8] += t0; S[(71 - 40) % 8] = t0 + t1;;
 t0 = S[(71 - 41) % 8] + (((S[(68 - 41) % 8] >> 6) | (S[(68 - 41) % 8] << (32 - 6))) ^ ((S[(68 - 41) % 8] >> 11) | (S[(68 - 41) % 8] << (32 - 11))) ^ ((S[(68 - 41) % 8] >> 25) | (S[(68 - 41) % 8] << (32 - 25)))) + ((S[(68 - 41) % 8] & (S[(69 - 41) % 8] ^ S[(70 - 41) % 8])) ^ S[(70 - 41) % 8]) + (W[41] + 0xa81a664b); t1 = (((S[(64 - 41) % 8] >> 2) | (S[(64 - 41) % 8] << (32 - 2))) ^ ((S[(64 - 41) % 8] >> 13) | (S[(64 - 41) % 8] << (32 - 13))) ^ ((S[(64 - 41) % 8] >> 22) | (S[(64 - 41) % 8] << (32 - 22)))) + ((S[(64 - 41) % 8] & (S[(65 - 41) % 8] | S[(66 - 41) % 8])) | (S[(65 - 41) % 8] & S[(66 - 41) % 8])); S[(67 - 41) % 8] += t0; S[(71 - 41) % 8] = t0 + t1;;
 t0 = S[(71 - 42) % 8] + (((S[(68 - 42) % 8] >> 6) | (S[(68 - 42) % 8] << (32 - 6))) ^ ((S[(68 - 42) % 8] >> 11) | (S[(68 - 42) % 8] << (32 - 11))) ^ ((S[(68 - 42) % 8] >> 25) | (S[(68 - 42) % 8] << (32 - 25)))) + ((S[(68 - 42) % 8] & (S[(69 - 42) % 8] ^ S[(70 - 42) % 8])) ^ S[(70 - 42) % 8]) + (W[42] + 0xc24b8b70); t1 = (((S[(64 - 42) % 8] >> 2) | (S[(64 - 42) % 8] << (32 - 2))) ^ ((S[(64 - 42) % 8] >> 13) | (S[(64 - 42) % 8] << (32 - 13))) ^ ((S[(64 - 42) % 8] >> 22) | (S[(64 - 42) % 8] << (32 - 22)))) + ((S[(64 - 42) % 8] & (S[(65 - 42) % 8] | S[(66 - 42) % 8])) | (S[(65 - 42) % 8] & S[(66 - 42) % 8])); S[(67 - 42) % 8] += t0; S[(71 - 42) % 8] = t0 + t1;;
 t0 = S[(71 - 43) % 8] + (((S[(68 - 43) % 8] >> 6) | (S[(68 - 43) % 8] << (32 - 6))) ^ ((S[(68 - 43) % 8] >> 11) | (S[(68 - 43) % 8] << (32 - 11))) ^ ((S[(68 - 43) % 8] >> 25) | (S[(68 - 43) % 8] << (32 - 25)))) + ((S[(68 - 43) % 8] & (S[(69 - 43) % 8] ^ S[(70 - 43) % 8])) ^ S[(70 - 43) % 8]) + (W[43] + 0xc76c51a3); t1 = (((S[(64 - 43) % 8] >> 2) | (S[(64 - 43) % 8] << (32 - 2))) ^ ((S[(64 - 43) % 8] >> 13) | (S[(64 - 43) % 8] << (32 - 13))) ^ ((S[(64 - 43) % 8] >> 22) | (S[(64 - 43) % 8] << (32 - 22)))) + ((S[(64 - 43) % 8] & (S[(65 - 43) % 8] | S[(66 - 43) % 8])) | (S[(65 - 43) % 8] & S[(66 - 43) % 8])); S[(67 - 43) % 8] += t0; S[(71 - 43) % 8] = t0 + t1;;
 t0 = S[(71 - 44) % 8] + (((S[(68 - 44) % 8] >> 6) | (S[(68 - 44) % 8] << (32 - 6))) ^ ((S[(68 - 44) % 8] >> 11) | (S[(68 - 44) % 8] << (32 - 11))) ^ ((S[(68 - 44) % 8] >> 25) | (S[(68 - 44) % 8] << (32 - 25)))) + ((S[(68 - 44) % 8] & (S[(69 - 44) % 8] ^ S[(70 - 44) % 8])) ^ S[(70 - 44) % 8]) + (W[44] + 0xd192e819); t1 = (((S[(64 - 44) % 8] >> 2) | (S[(64 - 44) % 8] << (32 - 2))) ^ ((S[(64 - 44) % 8] >> 13) | (S[(64 - 44) % 8] << (32 - 13))) ^ ((S[(64 - 44) % 8] >> 22) | (S[(64 - 44) % 8] << (32 - 22)))) + ((S[(64 - 44) % 8] & (S[(65 - 44) % 8] | S[(66 - 44) % 8])) | (S[(65 - 44) % 8] & S[(66 - 44) % 8])); S[(67 - 44) % 8] += t0; S[(71 - 44) % 8] = t0 + t1;;
 t0 = S[(71 - 45) % 8] + (((S[(68 - 45) % 8] >> 6) | (S[(68 - 45) % 8] << (32 - 6))) ^ ((S[(68 - 45) % 8] >> 11) | (S[(68 - 45) % 8] << (32 - 11))) ^ ((S[(68 - 45) % 8] >> 25) | (S[(68 - 45) % 8] << (32 - 25)))) + ((S[(68 - 45) % 8] & (S[(69 - 45) % 8] ^ S[(70 - 45) % 8])) ^ S[(70 - 45) % 8]) + (W[45] + 0xd6990624); t1 = (((S[(64 - 45) % 8] >> 2) | (S[(64 - 45) % 8] << (32 - 2))) ^ ((S[(64 - 45) % 8] >> 13) | (S[(64 - 45) % 8] << (32 - 13))) ^ ((S[(64 - 45) % 8] >> 22) | (S[(64 - 45) % 8] << (32 - 22)))) + ((S[(64 - 45) % 8] & (S[(65 - 45) % 8] | S[(66 - 45) % 8])) | (S[(65 - 45) % 8] & S[(66 - 45) % 8])); S[(67 - 45) % 8] += t0; S[(71 - 45) % 8] = t0 + t1;;
 t0 = S[(71 - 46) % 8] + (((S[(68 - 46) % 8] >> 6) | (S[(68 - 46) % 8] << (32 - 6))) ^ ((S[(68 - 46) % 8] >> 11) | (S[(68 - 46) % 8] << (32 - 11))) ^ ((S[(68 - 46) % 8] >> 25) | (S[(68 - 46) % 8] << (32 - 25)))) + ((S[(68 - 46) % 8] & (S[(69 - 46) % 8] ^ S[(70 - 46) % 8])) ^ S[(70 - 46) % 8]) + (W[46] + 0xf40e3585); t1 = (((S[(64 - 46) % 8] >> 2) | (S[(64 - 46) % 8] << (32 - 2))) ^ ((S[(64 - 46) % 8] >> 13) | (S[(64 - 46) % 8] << (32 - 13))) ^ ((S[(64 - 46) % 8] >> 22) | (S[(64 - 46) % 8] << (32 - 22)))) + ((S[(64 - 46) % 8] & (S[(65 - 46) % 8] | S[(66 - 46) % 8])) | (S[(65 - 46) % 8] & S[(66 - 46) % 8])); S[(67 - 46) % 8] += t0; S[(71 - 46) % 8] = t0 + t1;;
 t0 = S[(71 - 47) % 8] + (((S[(68 - 47) % 8] >> 6) | (S[(68 - 47) % 8] << (32 - 6))) ^ ((S[(68 - 47) % 8] >> 11) | (S[(68 - 47) % 8] << (32 - 11))) ^ ((S[(68 - 47) % 8] >> 25) | (S[(68 - 47) % 8] << (32 - 25)))) + ((S[(68 - 47) % 8] & (S[(69 - 47) % 8] ^ S[(70 - 47) % 8])) ^ S[(70 - 47) % 8]) + (W[47] + 0x106aa070); t1 = (((S[(64 - 47) % 8] >> 2) | (S[(64 - 47) % 8] << (32 - 2))) ^ ((S[(64 - 47) % 8] >> 13) | (S[(64 - 47) % 8] << (32 - 13))) ^ ((S[(64 - 47) % 8] >> 22) | (S[(64 - 47) % 8] << (32 - 22)))) + ((S[(64 - 47) % 8] & (S[(65 - 47) % 8] | S[(66 - 47) % 8])) | (S[(65 - 47) % 8] & S[(66 - 47) % 8])); S[(67 - 47) % 8] += t0; S[(71 - 47) % 8] = t0 + t1;;
 t0 = S[(71 - 48) % 8] + (((S[(68 - 48) % 8] >> 6) | (S[(68 - 48) % 8] << (32 - 6))) ^ ((S[(68 - 48) % 8] >> 11) | (S[(68 - 48) % 8] << (32 - 11))) ^ ((S[(68 - 48) % 8] >> 25) | (S[(68 - 48) % 8] << (32 - 25)))) + ((S[(68 - 48) % 8] & (S[(69 - 48) % 8] ^ S[(70 - 48) % 8])) ^ S[(70 - 48) % 8]) + (W[48] + 0x19a4c116); t1 = (((S[(64 - 48) % 8] >> 2) | (S[(64 - 48) % 8] << (32 - 2))) ^ ((S[(64 - 48) % 8] >> 13) | (S[(64 - 48) % 8] << (32 - 13))) ^ ((S[(64 - 48) % 8] >> 22) | (S[(64 - 48) % 8] << (32 - 22)))) + ((S[(64 - 48) % 8] & (S[(65 - 48) % 8] | S[(66 - 48) % 8])) | (S[(65 - 48) % 8] & S[(66 - 48) % 8])); S[(67 - 48) % 8] += t0; S[(71 - 48) % 8] = t0 + t1;;
 t0 = S[(71 - 49) % 8] + (((S[(68 - 49) % 8] >> 6) | (S[(68 - 49) % 8] << (32 - 6))) ^ ((S[(68 - 49) % 8] >> 11) | (S[(68 - 49) % 8] << (32 - 11))) ^ ((S[(68 - 49) % 8] >> 25) | (S[(68 - 49) % 8] << (32 - 25)))) + ((S[(68 - 49) % 8] & (S[(69 - 49) % 8] ^ S[(70 - 49) % 8])) ^ S[(70 - 49) % 8]) + (W[49] + 0x1e376c08); t1 = (((S[(64 - 49) % 8] >> 2) | (S[(64 - 49) % 8] << (32 - 2))) ^ ((S[(64 - 49) % 8] >> 13) | (S[(64 - 49) % 8] << (32 - 13))) ^ ((S[(64 - 49) % 8] >> 22) | (S[(64 - 49) % 8] << (32 - 22)))) + ((S[(64 - 49) % 8] & (S[(65 - 49) % 8] | S[(66 - 49) % 8])) | (S[(65 - 49) % 8] & S[(66 - 49) % 8])); S[(67 - 49) % 8] += t0; S[(71 - 49) % 8] = t0 + t1;;
 t0 = S[(71 - 50) % 8] + (((S[(68 - 50) % 8] >> 6) | (S[(68 - 50) % 8] << (32 - 6))) ^ ((S[(68 - 50) % 8] >> 11) | (S[(68 - 50) % 8] << (32 - 11))) ^ ((S[(68 - 50) % 8] >> 25) | (S[(68 - 50) % 8] << (32 - 25)))) + ((S[(68 - 50) % 8] & (S[(69 - 50) % 8] ^ S[(70 - 50) % 8])) ^ S[(70 - 50) % 8]) + (W[50] + 0x2748774c); t1 = (((S[(64 - 50) % 8] >> 2) | (S[(64 - 50) % 8] << (32 - 2))) ^ ((S[(64 - 50) % 8] >> 13) | (S[(64 - 50) % 8] << (32 - 13))) ^ ((S[(64 - 50) % 8] >> 22) | (S[(64 - 50) % 8] << (32 - 22)))) + ((S[(64 - 50) % 8] & (S[(65 - 50) % 8] | S[(66 - 50) % 8])) | (S[(65 - 50) % 8] & S[(66 - 50) % 8])); S[(67 - 50) % 8] += t0; S[(71 - 50) % 8] = t0 + t1;;
 t0 = S[(71 - 51) % 8] + (((S[(68 - 51) % 8] >> 6) | (S[(68 - 51) % 8] << (32 - 6))) ^ ((S[(68 - 51) % 8] >> 11) | (S[(68 - 51) % 8] << (32 - 11))) ^ ((S[(68 - 51) % 8] >> 25) | (S[(68 - 51) % 8] << (32 - 25)))) + ((S[(68 - 51) % 8] & (S[(69 - 51) % 8] ^ S[(70 - 51) % 8])) ^ S[(70 - 51) % 8]) + (W[51] + 0x34b0bcb5); t1 = (((S[(64 - 51) % 8] >> 2) | (S[(64 - 51) % 8] << (32 - 2))) ^ ((S[(64 - 51) % 8] >> 13) | (S[(64 - 51) % 8] << (32 - 13))) ^ ((S[(64 - 51) % 8] >> 22) | (S[(64 - 51) % 8] << (32 - 22)))) + ((S[(64 - 51) % 8] & (S[(65 - 51) % 8] | S[(66 - 51) % 8])) | (S[(65 - 51) % 8] & S[(66 - 51) % 8])); S[(67 - 51) % 8] += t0; S[(71 - 51) % 8] = t0 + t1;;
 t0 = S[(71 - 52) % 8] + (((S[(68 - 52) % 8] >> 6) | (S[(68 - 52) % 8] << (32 - 6))) ^ ((S[(68 - 52) % 8] >> 11) | (S[(68 - 52) % 8] << (32 - 11))) ^ ((S[(68 - 52) % 8] >> 25) | (S[(68 - 52) % 8] << (32 - 25)))) + ((S[(68 - 52) % 8] & (S[(69 - 52) % 8] ^ S[(70 - 52) % 8])) ^ S[(70 - 52) % 8]) + (W[52] + 0x391c0cb3); t1 = (((S[(64 - 52) % 8] >> 2) | (S[(64 - 52) % 8] << (32 - 2))) ^ ((S[(64 - 52) % 8] >> 13) | (S[(64 - 52) % 8] << (32 - 13))) ^ ((S[(64 - 52) % 8] >> 22) | (S[(64 - 52) % 8] << (32 - 22)))) + ((S[(64 - 52) % 8] & (S[(65 - 52) % 8] | S[(66 - 52) % 8])) | (S[(65 - 52) % 8] & S[(66 - 52) % 8])); S[(67 - 52) % 8] += t0; S[(71 - 52) % 8] = t0 + t1;;
 t0 = S[(71 - 53) % 8] + (((S[(68 - 53) % 8] >> 6) | (S[(68 - 53) % 8] << (32 - 6))) ^ ((S[(68 - 53) % 8] >> 11) | (S[(68 - 53) % 8] << (32 - 11))) ^ ((S[(68 - 53) % 8] >> 25) | (S[(68 - 53) % 8] << (32 - 25)))) + ((S[(68 - 53) % 8] & (S[(69 - 53) % 8] ^ S[(70 - 53) % 8])) ^ S[(70 - 53) % 8]) + (W[53] + 0x4ed8aa4a); t1 = (((S[(64 - 53) % 8] >> 2) | (S[(64 - 53) % 8] << (32 - 2))) ^ ((S[(64 - 53) % 8] >> 13) | (S[(64 - 53) % 8] << (32 - 13))) ^ ((S[(64 - 53) % 8] >> 22) | (S[(64 - 53) % 8] << (32 - 22)))) + ((S[(64 - 53) % 8] & (S[(65 - 53) % 8] | S[(66 - 53) % 8])) | (S[(65 - 53) % 8] & S[(66 - 53) % 8])); S[(67 - 53) % 8] += t0; S[(71 - 53) % 8] = t0 + t1;;
 t0 = S[(71 - 54) % 8] + (((S[(68 - 54) % 8] >> 6) | (S[(68 - 54) % 8] << (32 - 6))) ^ ((S[(68 - 54) % 8] >> 11) | (S[(68 - 54) % 8] << (32 - 11))) ^ ((S[(68 - 54) % 8] >> 25) | (S[(68 - 54) % 8] << (32 - 25)))) + ((S[(68 - 54) % 8] & (S[(69 - 54) % 8] ^ S[(70 - 54) % 8])) ^ S[(70 - 54) % 8]) + (W[54] + 0x5b9cca4f); t1 = (((S[(64 - 54) % 8] >> 2) | (S[(64 - 54) % 8] << (32 - 2))) ^ ((S[(64 - 54) % 8] >> 13) | (S[(64 - 54) % 8] << (32 - 13))) ^ ((S[(64 - 54) % 8] >> 22) | (S[(64 - 54) % 8] << (32 - 22)))) + ((S[(64 - 54) % 8] & (S[(65 - 54) % 8] | S[(66 - 54) % 8])) | (S[(65 - 54) % 8] & S[(66 - 54) % 8])); S[(67 - 54) % 8] += t0; S[(71 - 54) % 8] = t0 + t1;;
 t0 = S[(71 - 55) % 8] + (((S[(68 - 55) % 8] >> 6) | (S[(68 - 55) % 8] << (32 - 6))) ^ ((S[(68 - 55) % 8] >> 11) | (S[(68 - 55) % 8] << (32 - 11))) ^ ((S[(68 - 55) % 8] >> 25) | (S[(68 - 55) % 8] << (32 - 25)))) + ((S[(68 - 55) % 8] & (S[(69 - 55) % 8] ^ S[(70 - 55) % 8])) ^ S[(70 - 55) % 8]) + (W[55] + 0x682e6ff3); t1 = (((S[(64 - 55) % 8] >> 2) | (S[(64 - 55) % 8] << (32 - 2))) ^ ((S[(64 - 55) % 8] >> 13) | (S[(64 - 55) % 8] << (32 - 13))) ^ ((S[(64 - 55) % 8] >> 22) | (S[(64 - 55) % 8] << (32 - 22)))) + ((S[(64 - 55) % 8] & (S[(65 - 55) % 8] | S[(66 - 55) % 8])) | (S[(65 - 55) % 8] & S[(66 - 55) % 8])); S[(67 - 55) % 8] += t0; S[(71 - 55) % 8] = t0 + t1;;
 t0 = S[(71 - 56) % 8] + (((S[(68 - 56) % 8] >> 6) | (S[(68 - 56) % 8] << (32 - 6))) ^ ((S[(68 - 56) % 8] >> 11) | (S[(68 - 56) % 8] << (32 - 11))) ^ ((S[(68 - 56) % 8] >> 25) | (S[(68 - 56) % 8] << (32 - 25)))) + ((S[(68 - 56) % 8] & (S[(69 - 56) % 8] ^ S[(70 - 56) % 8])) ^ S[(70 - 56) % 8]) + (W[56] + 0x748f82ee); t1 = (((S[(64 - 56) % 8] >> 2) | (S[(64 - 56) % 8] << (32 - 2))) ^ ((S[(64 - 56) % 8] >> 13) | (S[(64 - 56) % 8] << (32 - 13))) ^ ((S[(64 - 56) % 8] >> 22) | (S[(64 - 56) % 8] << (32 - 22)))) + ((S[(64 - 56) % 8] & (S[(65 - 56) % 8] | S[(66 - 56) % 8])) | (S[(65 - 56) % 8] & S[(66 - 56) % 8])); S[(67 - 56) % 8] += t0; S[(71 - 56) % 8] = t0 + t1;;
 t0 = S[(71 - 57) % 8] + (((S[(68 - 57) % 8] >> 6) | (S[(68 - 57) % 8] << (32 - 6))) ^ ((S[(68 - 57) % 8] >> 11) | (S[(68 - 57) % 8] << (32 - 11))) ^ ((S[(68 - 57) % 8] >> 25) | (S[(68 - 57) % 8] << (32 - 25)))) + ((S[(68 - 57) % 8] & (S[(69 - 57) % 8] ^ S[(70 - 57) % 8])) ^ S[(70 - 57) % 8]) + (W[57] + 0x78a5636f); t1 = (((S[(64 - 57) % 8] >> 2) | (S[(64 - 57) % 8] << (32 - 2))) ^ ((S[(64 - 57) % 8] >> 13) | (S[(64 - 57) % 8] << (32 - 13))) ^ ((S[(64 - 57) % 8] >> 22) | (S[(64 - 57) % 8] << (32 - 22)))) + ((S[(64 - 57) % 8] & (S[(65 - 57) % 8] | S[(66 - 57) % 8])) | (S[(65 - 57) % 8] & S[(66 - 57) % 8])); S[(67 - 57) % 8] += t0; S[(71 - 57) % 8] = t0 + t1;;
 t0 = S[(71 - 58) % 8] + (((S[(68 - 58) % 8] >> 6) | (S[(68 - 58) % 8] << (32 - 6))) ^ ((S[(68 - 58) % 8] >> 11) | (S[(68 - 58) % 8] << (32 - 11))) ^ ((S[(68 - 58) % 8] >> 25) | (S[(68 - 58) % 8] << (32 - 25)))) + ((S[(68 - 58) % 8] & (S[(69 - 58) % 8] ^ S[(70 - 58) % 8])) ^ S[(70 - 58) % 8]) + (W[58] + 0x84c87814); t1 = (((S[(64 - 58) % 8] >> 2) | (S[(64 - 58) % 8] << (32 - 2))) ^ ((S[(64 - 58) % 8] >> 13) | (S[(64 - 58) % 8] << (32 - 13))) ^ ((S[(64 - 58) % 8] >> 22) | (S[(64 - 58) % 8] << (32 - 22)))) + ((S[(64 - 58) % 8] & (S[(65 - 58) % 8] | S[(66 - 58) % 8])) | (S[(65 - 58) % 8] & S[(66 - 58) % 8])); S[(67 - 58) % 8] += t0; S[(71 - 58) % 8] = t0 + t1;;
 t0 = S[(71 - 59) % 8] + (((S[(68 - 59) % 8] >> 6) | (S[(68 - 59) % 8] << (32 - 6))) ^ ((S[(68 - 59) % 8] >> 11) | (S[(68 - 59) % 8] << (32 - 11))) ^ ((S[(68 - 59) % 8] >> 25) | (S[(68 - 59) % 8] << (32 - 25)))) + ((S[(68 - 59) % 8] & (S[(69 - 59) % 8] ^ S[(70 - 59) % 8])) ^ S[(70 - 59) % 8]) + (W[59] + 0x8cc70208); t1 = (((S[(64 - 59) % 8] >> 2) | (S[(64 - 59) % 8] << (32 - 2))) ^ ((S[(64 - 59) % 8] >> 13) | (S[(64 - 59) % 8] << (32 - 13))) ^ ((S[(64 - 59) % 8] >> 22) | (S[(64 - 59) % 8] << (32 - 22)))) + ((S[(64 - 59) % 8] & (S[(65 - 59) % 8] | S[(66 - 59) % 8])) | (S[(65 - 59) % 8] & S[(66 - 59) % 8])); S[(67 - 59) % 8] += t0; S[(71 - 59) % 8] = t0 + t1;;
 t0 = S[(71 - 60) % 8] + (((S[(68 - 60) % 8] >> 6) | (S[(68 - 60) % 8] << (32 - 6))) ^ ((S[(68 - 60) % 8] >> 11) | (S[(68 - 60) % 8] << (32 - 11))) ^ ((S[(68 - 60) % 8] >> 25) | (S[(68 - 60) % 8] << (32 - 25)))) + ((S[(68 - 60) % 8] & (S[(69 - 60) % 8] ^ S[(70 - 60) % 8])) ^ S[(70 - 60) % 8]) + (W[60] + 0x90befffa); t1 = (((S[(64 - 60) % 8] >> 2) | (S[(64 - 60) % 8] << (32 - 2))) ^ ((S[(64 - 60) % 8] >> 13) | (S[(64 - 60) % 8] << (32 - 13))) ^ ((S[(64 - 60) % 8] >> 22) | (S[(64 - 60) % 8] << (32 - 22)))) + ((S[(64 - 60) % 8] & (S[(65 - 60) % 8] | S[(66 - 60) % 8])) | (S[(65 - 60) % 8] & S[(66 - 60) % 8])); S[(67 - 60) % 8] += t0; S[(71 - 60) % 8] = t0 + t1;;
 t0 = S[(71 - 61) % 8] + (((S[(68 - 61) % 8] >> 6) | (S[(68 - 61) % 8] << (32 - 6))) ^ ((S[(68 - 61) % 8] >> 11) | (S[(68 - 61) % 8] << (32 - 11))) ^ ((S[(68 - 61) % 8] >> 25) | (S[(68 - 61) % 8] << (32 - 25)))) + ((S[(68 - 61) % 8] & (S[(69 - 61) % 8] ^ S[(70 - 61) % 8])) ^ S[(70 - 61) % 8]) + (W[61] + 0xa4506ceb); t1 = (((S[(64 - 61) % 8] >> 2) | (S[(64 - 61) % 8] << (32 - 2))) ^ ((S[(64 - 61) % 8] >> 13) | (S[(64 - 61) % 8] << (32 - 13))) ^ ((S[(64 - 61) % 8] >> 22) | (S[(64 - 61) % 8] << (32 - 22)))) + ((S[(64 - 61) % 8] & (S[(65 - 61) % 8] | S[(66 - 61) % 8])) | (S[(65 - 61) % 8] & S[(66 - 61) % 8])); S[(67 - 61) % 8] += t0; S[(71 - 61) % 8] = t0 + t1;;
 t0 = S[(71 - 62) % 8] + (((S[(68 - 62) % 8] >> 6) | (S[(68 - 62) % 8] << (32 - 6))) ^ ((S[(68 - 62) % 8] >> 11) | (S[(68 - 62) % 8] << (32 - 11))) ^ ((S[(68 - 62) % 8] >> 25) | (S[(68 - 62) % 8] << (32 - 25)))) + ((S[(68 - 62) % 8] & (S[(69 - 62) % 8] ^ S[(70 - 62) % 8])) ^ S[(70 - 62) % 8]) + (W[62] + 0xbef9a3f7); t1 = (((S[(64 - 62) % 8] >> 2) | (S[(64 - 62) % 8] << (32 - 2))) ^ ((S[(64 - 62) % 8] >> 13) | (S[(64 - 62) % 8] << (32 - 13))) ^ ((S[(64 - 62) % 8] >> 22) | (S[(64 - 62) % 8] << (32 - 22)))) + ((S[(64 - 62) % 8] & (S[(65 - 62) % 8] | S[(66 - 62) % 8])) | (S[(65 - 62) % 8] & S[(66 - 62) % 8])); S[(67 - 62) % 8] += t0; S[(71 - 62) % 8] = t0 + t1;;
 t0 = S[(71 - 63) % 8] + (((S[(68 - 63) % 8] >> 6) | (S[(68 - 63) % 8] << (32 - 6))) ^ ((S[(68 - 63) % 8] >> 11) | (S[(68 - 63) % 8] << (32 - 11))) ^ ((S[(68 - 63) % 8] >> 25) | (S[(68 - 63) % 8] << (32 - 25)))) + ((S[(68 - 63) % 8] & (S[(69 - 63) % 8] ^ S[(70 - 63) % 8])) ^ S[(70 - 63) % 8]) + (W[63] + 0xc67178f2); t1 = (((S[(64 - 63) % 8] >> 2) | (S[(64 - 63) % 8] << (32 - 2))) ^ ((S[(64 - 63) % 8] >> 13) | (S[(64 - 63) % 8] << (32 - 13))) ^ ((S[(64 - 63) % 8] >> 22) | (S[(64 - 63) % 8] << (32 - 22)))) + ((S[(64 - 63) % 8] & (S[(65 - 63) % 8] | S[(66 - 63) % 8])) | (S[(65 - 63) % 8] & S[(66 - 63) % 8])); S[(67 - 63) % 8] += t0; S[(71 - 63) % 8] = t0 + t1;;


 for (i = 0; i < 8; i++)
  state[i] += S[i];
}

static const unsigned char PAD[64] = {
 0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


static void
SHA256_Pad(SHA256_CTX * ctx)
{
 unsigned char len[8];
 uint32_t r, plen;






 vbe64enc(len, ctx->count << 3);


 r = ctx->count & 0x3f;
 plen = (r < 56) ? (56 - r) : (120 - r);
 SHA256_Update(ctx, PAD, (size_t)plen);


 SHA256_Update(ctx, len, 8);
}


void
SHA256_Init(SHA256_CTX * ctx)
{


 ctx->count = 0;


 ctx->state[0] = 0x6A09E667;
 ctx->state[1] = 0xBB67AE85;
 ctx->state[2] = 0x3C6EF372;
 ctx->state[3] = 0xA54FF53A;
 ctx->state[4] = 0x510E527F;
 ctx->state[5] = 0x9B05688C;
 ctx->state[6] = 0x1F83D9AB;
 ctx->state[7] = 0x5BE0CD19;
}


void
SHA256_Update(SHA256_CTX * ctx, const void *in, size_t len)
{
 uint32_t r, l;
 const unsigned char *src = in;


 r = ctx->count & 0x3f;
 while (len > 0) {
  l = 64 - r;
  if (l > len)
   l = len;
  memcpy(&ctx->buf[r], src, l);
  len -= l;
  src += l;
  ctx->count += l;
  r = ctx->count & 0x3f;
  if (r == 0)
   SHA256_Transform(ctx->state, ctx->buf);
 }
}





void
SHA256_Final(unsigned char digest[32], SHA256_CTX * ctx)
{


 SHA256_Pad(ctx);


 be32enc_vect(digest, ctx->state, 32);


 memset((void *)ctx, 0, sizeof(*ctx));
}





static const struct sha256test {
 const char *input;
 const unsigned char output[32];
} sha256test[] = {
    { "",
 {0xe3, 0xb0, 0xc4, 0x42, 0x98, 0xfc, 0x1c, 0x14, 0x9a, 0xfb, 0xf4,
  0xc8, 0x99, 0x6f, 0xb9, 0x24, 0x27, 0xae, 0x41, 0xe4, 0x64, 0x9b,
  0x93, 0x4c, 0xa4, 0x95, 0x99, 0x1b, 0x78, 0x52, 0xb8, 0x55} },
    { "message digest",
 {0xf7, 0x84, 0x6f, 0x55, 0xcf, 0x23, 0xe1, 0x4e, 0xeb, 0xea, 0xb5,
  0xb4, 0xe1, 0x55, 0x0c, 0xad, 0x5b, 0x50, 0x9e, 0x33, 0x48, 0xfb,
  0xc4, 0xef, 0xa3, 0xa1, 0x41, 0x3d, 0x39, 0x3c, 0xb6, 0x50} },
    { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
 {0xdb, 0x4b, 0xfc, 0xbd, 0x4d, 0xa0, 0xcd, 0x85, 0xa6, 0x0c, 0x3c,
  0x37, 0xd3, 0xfb, 0xd8, 0x80, 0x5c, 0x77, 0xf1, 0x5f, 0xc6, 0xb1,
  0xfd, 0xfe, 0x61, 0x4e, 0xe0, 0xa7, 0xc8, 0xfd, 0xb4, 0xc0} },
    { ((void *)0) }
};


void
SHA256_Test(void)
{
 struct SHA256Context c;
 const struct sha256test *p;
 unsigned char o[32];

 for (p = sha256test; p->input != ((void *)0); p++) {
  SHA256_Init(&c);
  SHA256_Update(&c, p->input, strlen(p->input));
  SHA256_Final(o, &c);
  do { do { if (!((memcmp(o, p->output, 32)) == 0)) { VAS_Fail(__func__, "../libvarnish/vsha256.c", 330, "(memcmp(o, p->output, 32)) == 0", VAS_ASSERT); } } while (0); } while (0);
 }
}
