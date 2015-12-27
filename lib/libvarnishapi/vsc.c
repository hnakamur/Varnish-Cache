# 1 "vsc.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/lib/libvarnishapi//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vsc.c"
# 31 "vsc.c"
# 1 "../../config.h" 1
# 32 "vsc.c" 2

# 1 "/usr/include/sys/types.h" 1 3 4
# 25 "/usr/include/sys/types.h" 3 4
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
# 26 "/usr/include/sys/types.h" 2 3 4



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
# 30 "/usr/include/sys/types.h" 2 3 4



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





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





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
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
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



# 34 "vsc.c" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 38 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 2 3 4
# 104 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __unused[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __unused[3];



  };
# 107 "/usr/include/sys/stat.h" 2 3 4
# 210 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 229 "/usr/include/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 254 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 277 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 400 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 433 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat (const char *__path, struct stat *__statbuf)
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat (const char *__path, struct stat *__statbuf)
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknod (const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat64 (const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat64 (const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat64 (int __fd, const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}







# 35 "vsc.c" 2

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
# 37 "vsc.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
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
# 108 "/usr/include/stdio.h" 3 4


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






# 38 "vsc.c" 2
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

# 235 "/usr/include/stdlib.h" 3 4
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
# 236 "/usr/include/stdlib.h" 2 3 4



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
# 321 "/usr/include/stdlib.h" 3 4
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

# 39 "vsc.c" 2
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




# 40 "vsc.c" 2

# 1 "../../include/vdef.h" 1
# 42 "vsc.c" 2
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
# 43 "vsc.c" 2
# 1 "../../include/miniobj.h" 1
# 44 "vsc.c" 2
# 1 "../../include/vqueue.h" 1
# 45 "vsc.c" 2

# 1 "../../include/vapi/vsc.h" 1
# 38 "../../include/vapi/vsc.h"
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
# 39 "../../include/vapi/vsc.h" 2

struct VSM_data;
struct VSM_fantom;
# 53 "../../include/vapi/vsc.h"
int VSC_Arg(struct VSM_data *vd, int arg, const char *opt);
# 62 "../../include/vapi/vsc.h"
struct VSC_C_mgt *VSC_Mgt(const struct VSM_data *vd,
    struct VSM_fantom *fantom);
struct VSC_C_main *VSC_Main(const struct VSM_data *vd,
    struct VSM_fantom *fantom);
# 85 "../../include/vapi/vsc.h"
void *VSC_Get(const struct VSM_data *vd, struct VSM_fantom *fantom,
    const char *type, const char *ident);
# 103 "../../include/vapi/vsc.h"
struct VSC_level_desc;
struct VSC_type_desc;
struct VSC_section;
struct VSC_desc;
struct VSC_point;

struct VSC_level_desc {
 unsigned verbosity;
 const char *label;
 const char *sdesc;
 const char *ldesc;
};

struct VSC_type_desc {
 const char *label;
 const char *sdesc;
 const char *ldesc;
};

struct VSC_section {
 const char *type;
 const char *ident;
 const struct VSC_type_desc *desc;
 struct VSM_fantom *fantom;
};


struct VSC_desc {
 const char *name;
 const char *ctype;
 int semantics;
 int format;
 const struct VSC_level_desc *level;
 const char *sdesc;
 const char *ldesc;
};

struct VSC_point {
 const struct VSC_desc *desc;
 const volatile void *ptr;
 const struct VSC_section *section;
};

typedef int VSC_iter_f(void *priv, const struct VSC_point *const pt);

int VSC_Iter(struct VSM_data *vd, struct VSM_fantom *fantom, VSC_iter_f *func,
    void *priv);
# 178 "../../include/vapi/vsc.h"
const struct VSC_level_desc *VSC_LevelDesc(unsigned level);







# 1 "../../include/tbl/vsc_levels.h" 1
# 39 "../../include/tbl/vsc_levels.h"
extern const struct VSC_level_desc VSC_level_desc_info;

extern const struct VSC_level_desc VSC_level_desc_diag;

extern const struct VSC_level_desc VSC_level_desc_debug;
# 187 "../../include/vapi/vsc.h" 2




# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
extern const struct VSC_type_desc VSC_type_desc_main;


extern const struct VSC_type_desc VSC_type_desc_mgt;


extern const struct VSC_type_desc VSC_type_desc_mempool;


extern const struct VSC_type_desc VSC_type_desc_sma;


extern const struct VSC_type_desc VSC_type_desc_smf;


extern const struct VSC_type_desc VSC_type_desc_vbe;


extern const struct VSC_type_desc VSC_type_desc_lck;
# 192 "../../include/vapi/vsc.h" 2





# 1 "../../include/tbl/vsc_all.h" 1
# 32 "../../include/tbl/vsc_all.h"
extern const struct VSC_desc VSC_desc_main[];
# 1 "../../include/tbl/vsc_f_main.h" 1
# 38 "../../include/tbl/vsc_f_main.h"

# 48 "../../include/tbl/vsc_f_main.h"











# 67 "../../include/tbl/vsc_f_main.h"


























# 101 "../../include/tbl/vsc_f_main.h"

# 110 "../../include/tbl/vsc_f_main.h"
































# 150 "../../include/tbl/vsc_f_main.h"









































# 201 "../../include/tbl/vsc_f_main.h"































































































































































































# 406 "../../include/tbl/vsc_f_main.h"
# 1 "../../include/tbl/sess_close.h" 1
# 33 "../../include/tbl/sess_close.h"















# 407 "../../include/tbl/vsc_f_main.h" 2
# 415 "../../include/tbl/vsc_f_main.h"




























































































































































































































# 34 "../../include/tbl/vsc_all.h" 2


extern const struct VSC_desc VSC_desc_mgt[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 68 "../../include/tbl/vsc_fields.h"


























# 39 "../../include/tbl/vsc_all.h" 2



extern const struct VSC_desc VSC_desc_mempool[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 230 "../../include/tbl/vsc_fields.h"









































# 45 "../../include/tbl/vsc_all.h" 2



extern const struct VSC_desc VSC_desc_sma[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"

























# 51 "../../include/tbl/vsc_all.h" 2



extern const struct VSC_desc VSC_desc_smf[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"

























# 164 "../../include/tbl/vsc_fields.h"









# 57 "../../include/tbl/vsc_all.h" 2



extern const struct VSC_desc VSC_desc_vbe[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 182 "../../include/tbl/vsc_fields.h"







































# 63 "../../include/tbl/vsc_all.h" 2



extern const struct VSC_desc VSC_desc_lck[];

# 1 "../../include/tbl/vsc_fields.h" 1
# 104 "../../include/tbl/vsc_fields.h"









# 69 "../../include/tbl/vsc_all.h" 2


# 198 "../../include/vapi/vsc.h" 2
# 47 "vsc.c" 2
# 1 "../../include/vapi/vsm.h" 1
# 39 "../../include/vapi/vsm.h"
# 1 "../../include/vapi/vsm_int.h" 1
# 40 "../../include/vapi/vsm.h" 2

struct VSM_chunk;
struct VSM_data;





struct VSM_fantom {
 struct VSM_chunk *chunk;
 void *b;
 void *e;
 uintptr_t priv;
 char class[8];
 char type[8];
 char ident[128];
};







struct VSM_data *VSM_New(void);
# 75 "../../include/vapi/vsm.h"
void VSM_Delete(struct VSM_data *vd);





const char *VSM_Error(const struct VSM_data *vd);




void VSM_ResetError(struct VSM_data *vd);






int VSM_n_Arg(struct VSM_data *vd, const char *n_arg);
# 105 "../../include/vapi/vsm.h"
int VSM_N_Arg(struct VSM_data *vd, const char *N_arg);
# 115 "../../include/vapi/vsm.h"
const char *VSM_Name(const struct VSM_data *vd);




int VSM_Open(struct VSM_data *vd);
# 129 "../../include/vapi/vsm.h"
int VSM_IsOpen(const struct VSM_data *vd);
# 138 "../../include/vapi/vsm.h"
int VSM_Abandoned(struct VSM_data *vd);
# 150 "../../include/vapi/vsm.h"
void VSM_Close(struct VSM_data *vd);
# 159 "../../include/vapi/vsm.h"
void VSM__iter0(const struct VSM_data *vd, struct VSM_fantom *vf);
int VSM__itern(const struct VSM_data *vd, struct VSM_fantom *vf);
# 170 "../../include/vapi/vsm.h"
enum VSM_valid_e {
 VSM_invalid,
 VSM_valid,
 VSM_similar,
};

enum VSM_valid_e VSM_StillValid(const struct VSM_data *vd,
    struct VSM_fantom *vf);
# 208 "../../include/vapi/vsm.h"
int VSM_Get(const struct VSM_data *vd, struct VSM_fantom *vf,
    const char *class, const char *type, const char *ident);
# 48 "vsc.c" 2

# 1 "vsm_api.h" 1
# 31 "vsm_api.h"
struct vsc;
struct vsb;

struct VSM_data {
 unsigned magic;


 struct vsb *diag;

 char *name;
 char *fname;
 int N_opt;

 struct stat fstat;

 int vsm_fd;
 struct VSM_head *head;
 char *b;
 char *e;

 uint64_t age_ok;
 double t_ok;

 struct vsc *vsc;
};

int vsm_diag(struct VSM_data *vd, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));
void VSC_Delete(struct VSM_data *vd);
# 50 "vsc.c" 2

enum {


# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
VSC_type_order_main,


VSC_type_order_mgt,


VSC_type_order_mempool,


VSC_type_order_sma,


VSC_type_order_smf,


VSC_type_order_vbe,


VSC_type_order_lck,
# 55 "vsc.c" 2

};

struct vsc_vf {
 unsigned magic;

 struct { struct vsc_vf *vtqe_next; struct vsc_vf **vtqe_prev; } list;
 struct VSM_fantom fantom;
 struct VSC_section section;
 int order;
};

struct vsc_pt {
 unsigned magic;

 struct { struct vsc_pt *vtqe_next; struct vsc_pt **vtqe_prev; } list;
 struct VSC_point point;
};

struct vsc_sf {
 unsigned magic;

 struct { struct vsc_sf *vtqe_next; struct vsc_sf **vtqe_prev; } list;
 int flags;




 char *type;
 char *ident;
 char *name;
};

struct vsc {
 unsigned magic;


 struct { struct vsc_vf *vtqh_first; struct vsc_vf **vtqh_last; } vf_list;
 struct { struct vsc_pt *vtqh_first; struct vsc_pt **vtqh_last; } pt_list;
 struct { struct vsc_sf *vtqh_first; struct vsc_sf **vtqh_last; } sf_list;
 struct VSM_fantom iter_fantom;
};




static struct vsc *
vsc_setup(struct VSM_data *vd)
{

 do { do { if (!((vd) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 105, "(vd) != NULL", VAS_ASSERT); } } while (0); do { if (!((vd)->magic == 0x6e3bd69b)) { VAS_Fail(__func__, "vsc.c", 105, "(vd)->magic == 0x6e3bd69b", VAS_ASSERT); } } while (0); } while (0);
 if (vd->vsc == ((void *)0)) {
  do { (vd->vsc) = calloc(sizeof *(vd->vsc), 1); if ((vd->vsc) != ((void *)0)) (vd->vsc)->magic = (0x3373554a); } while (0);
  do { (((&vd->vsc->vf_list))->vtqh_first) = ((void *)0); (&vd->vsc->vf_list)->vtqh_last = &(((&vd->vsc->vf_list))->vtqh_first); } while (0);
  do { (((&vd->vsc->pt_list))->vtqh_first) = ((void *)0); (&vd->vsc->pt_list)->vtqh_last = &(((&vd->vsc->pt_list))->vtqh_first); } while (0);
  do { (((&vd->vsc->sf_list))->vtqh_first) = ((void *)0); (&vd->vsc->sf_list)->vtqh_last = &(((&vd->vsc->sf_list))->vtqh_first); } while (0);
 }
 do { do { if (!((vd->vsc) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 112, "(vd->vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vd->vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "vsc.c", 112, "(vd->vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0);
 return (vd->vsc);
}



static void
vsc_delete_vf_list(struct vsc *vsc)
{
 struct vsc_vf *vf;

 while (!((&vsc->vf_list)->vtqh_first == ((void *)0))) {
  vf = ((&vsc->vf_list)->vtqh_first);
  do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 125, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "vsc.c", 125, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((vf))->list.vtqe_next)) != ((void *)0)) (((vf))->list.vtqe_next)->list.vtqe_prev = (vf)->list.vtqe_prev; else { (&vsc->vf_list)->vtqh_last = (vf)->list.vtqe_prev; } *(vf)->list.vtqe_prev = (((vf))->list.vtqe_next); ; ; } while (0);
  do { (vf)->magic = (0); free(vf); vf = ((void *)0); } while (0);
 }
}

static void
vsc_delete_pt_list(struct vsc *vsc)
{
 struct vsc_pt *pt;

 while (!((&vsc->pt_list)->vtqh_first == ((void *)0))) {
  pt = ((&vsc->pt_list)->vtqh_first);
  do { do { if (!((pt) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 138, "(pt) != NULL", VAS_ASSERT); } } while (0); do { if (!((pt)->magic == 0xa4ff159a)) { VAS_Fail(__func__, "vsc.c", 138, "(pt)->magic == 0xa4ff159a", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((pt))->list.vtqe_next)) != ((void *)0)) (((pt))->list.vtqe_next)->list.vtqe_prev = (pt)->list.vtqe_prev; else { (&vsc->pt_list)->vtqh_last = (pt)->list.vtqe_prev; } *(pt)->list.vtqe_prev = (((pt))->list.vtqe_next); ; ; } while (0);
  do { (pt)->magic = (0); free(pt); pt = ((void *)0); } while (0);
 }
}

static void
vsc_delete_sf_list(struct vsc *vsc)
{
 struct vsc_sf *sf;

 while (!((&vsc->sf_list)->vtqh_first == ((void *)0))) {
  sf = ((&vsc->sf_list)->vtqh_first);
  do { do { if (!((sf) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 151, "(sf) != NULL", VAS_ASSERT); } } while (0); do { if (!((sf)->magic == 0x558478dd)) { VAS_Fail(__func__, "vsc.c", 151, "(sf)->magic == 0x558478dd", VAS_ASSERT); } } while (0); } while (0);
  do { if (((((sf))->list.vtqe_next)) != ((void *)0)) (((sf))->list.vtqe_next)->list.vtqe_prev = (sf)->list.vtqe_prev; else { (&vsc->sf_list)->vtqh_last = (sf)->list.vtqe_prev; } *(sf)->list.vtqe_prev = (((sf))->list.vtqe_next); ; ; } while (0);
  free(sf->type);
  free(sf->ident);
  free(sf->name);
  do { (sf)->magic = (0); free(sf); sf = ((void *)0); } while (0);
 }
}

void
VSC_Delete(struct VSM_data *vd)
{
 struct vsc *vsc;

 do { do { if (!((vd) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 165, "(vd) != NULL", VAS_ASSERT); } } while (0); do { if (!((vd)->magic == 0x6e3bd69b)) { VAS_Fail(__func__, "vsc.c", 165, "(vd)->magic == 0x6e3bd69b", VAS_ASSERT); } } while (0); } while (0);
 vsc = vd->vsc;
 vd->vsc = ((void *)0);
 do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 168, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "vsc.c", 168, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0);
 vsc_delete_sf_list(vsc);
 vsc_delete_pt_list(vsc);
 vsc_delete_vf_list(vsc);
 do { (vsc)->magic = (0); free(vsc); vsc = ((void *)0); } while (0);
}



static int
vsc_f_arg(struct VSM_data *vd, const char *opt)
{
 struct vsc *vsc = vsc_setup(vd);
 struct vsc_sf *sf;
 const char *error = ((void *)0);
 const char *p, *q;
 char *r;
 int i;
 int flags = 0;
 char *parts[3];

 do { do { if (!((vd) != 0)) { VAS_Fail(__func__, "vsc.c", 189, "(vd) != 0", VAS_ASSERT); } } while (0); } while (0);
 do { do { if (!((opt) != 0)) { VAS_Fail(__func__, "vsc.c", 190, "(opt) != 0", VAS_ASSERT); } } while (0); } while (0);

 if (opt[0] == '^') {
  flags |= (1 << 0);
  opt++;
 }


 memset(parts, 0, sizeof parts);
 for (i = 0, p = opt; *p != '\0'; i++) {
  for (q = p; *q != '\0' && *q != '.'; q++)
   if (*q == '\\')
    q++;
  if (i < 3) {
   parts[i] = malloc(1 + q - p);
   do { do { if (!((parts[i]) != 0)) { VAS_Fail(__func__, "vsc.c", 205, "(parts[i]) != 0", VAS_ASSERT); } } while (0); } while (0);
   memcpy(parts[i], p, q - p);
   parts[i][q - p] = '\0';
   p = r = parts[i];


   while (1) {
    if (*p == '\\')
     p++;
    if (*p == '\0')
     break;
    *r++ = *p++;
   }
   *r = '\0';
  }
  p = q;
  if (*p == '.')
   p++;
 }
 if (i < 1 || i > 3) {
  (void)vsm_diag(vd, "-f: Wrong number of elements");
  for (i = 0; i < 3; i++)
   free(parts[i]);
  return (-1);
 }


 do { (sf) = calloc(sizeof *(sf), 1); if ((sf) != ((void *)0)) (sf)->magic = (0x558478dd); } while (0);
 do { do { if (!((sf) != 0)) { VAS_Fail(__func__, "vsc.c", 233, "(sf) != 0", VAS_ASSERT); } } while (0); } while (0);
 sf->flags = flags;
 do { do { if (!((parts[0]) != 0)) { VAS_Fail(__func__, "vsc.c", 235, "(parts[0]) != 0", VAS_ASSERT); } } while (0); } while (0);
 sf->type = parts[0];
 if (i == 2) {
  do { do { if (!((parts[1]) != 0)) { VAS_Fail(__func__, "vsc.c", 238, "(parts[1]) != 0", VAS_ASSERT); } } while (0); } while (0);
  sf->name = parts[1];
 } else if (i == 3) {
  do { do { if (!((parts[1]) != 0)) { VAS_Fail(__func__, "vsc.c", 241, "(parts[1]) != 0", VAS_ASSERT); } } while (0); } while (0);
  sf->ident = parts[1];
  do { do { if (!((parts[2]) != 0)) { VAS_Fail(__func__, "vsc.c", 243, "(parts[2]) != 0", VAS_ASSERT); } } while (0); } while (0);
  sf->name = parts[2];
 }


 if (sf->type != ((void *)0)) {
  r = (__extension__ (__builtin_constant_p ('*') && !__builtin_constant_p (sf->type) && ('*') == '\0' ? (char *) __rawmemchr (sf->type, '*') : __builtin_strchr (sf->type, '*')));
  if (r != ((void *)0) && r[1] == '\0') {
   *r = '\0';
   sf->flags |= (1 << 1);
  } else if (r != ((void *)0))
   error = "-f: Wildcard not last";
 }
 if (sf->ident != ((void *)0)) {
  r = (__extension__ (__builtin_constant_p ('*') && !__builtin_constant_p (sf->ident) && ('*') == '\0' ? (char *) __rawmemchr (sf->ident, '*') : __builtin_strchr (sf->ident, '*')));
  if (r != ((void *)0) && r[1] == '\0') {
   *r = '\0';
   sf->flags |= (1 << 2);
  } else if (r != ((void *)0))
   error = "-f: Wildcard not last";
 }
 if (sf->name != ((void *)0)) {
  r = (__extension__ (__builtin_constant_p ('*') && !__builtin_constant_p (sf->name) && ('*') == '\0' ? (char *) __rawmemchr (sf->name, '*') : __builtin_strchr (sf->name, '*')));
  if (r != ((void *)0) && r[1] == '\0') {
   *r = '\0';
   sf->flags |= (1 << 3);
  } else if (r != ((void *)0))
   error = "-f: Wildcard not last";
 }

 if (error != ((void *)0)) {
  (void)vsm_diag(vd, "%s", error);
  free(sf->type);
  free(sf->ident);
  free(sf->name);
  do { (sf)->magic = (0); free(sf); sf = ((void *)0); } while (0);
  return (-1);
 }

 do { (((sf))->list.vtqe_next) = ((void *)0); (sf)->list.vtqe_prev = (&vsc->sf_list)->vtqh_last; *(&vsc->sf_list)->vtqh_last = (sf); (&vsc->sf_list)->vtqh_last = &(((sf))->list.vtqe_next); } while (0);
 return (1);
}



int
VSC_Arg(struct VSM_data *vd, int arg, const char *opt)
{

 switch (arg) {
 case 'f': return (vsc_f_arg(vd, opt));
 case 'n': return (VSM_n_Arg(vd, opt));
 case 'N': return (VSM_N_Arg(vd, opt));
 default:
  return (0);
 }
}



struct VSC_C_mgt *
VSC_Mgt(const struct VSM_data *vd, struct VSM_fantom *fantom)
{

 return (VSC_Get(vd, fantom, VSC_type_mgt, ""));
}



struct VSC_C_main *
VSC_Main(const struct VSM_data *vd, struct VSM_fantom *fantom)
{

 return (VSC_Get(vd, fantom, VSC_type_main, ""));
}




void *
VSC_Get(const struct VSM_data *vd, struct VSM_fantom *fantom, const char *type,
    const char *ident)
{
 struct VSM_fantom f2 = { 0, 0, 0, 0, {0}, {0}, {0} };

 if (fantom == ((void *)0))
  fantom = &f2;
 if (VSM_invalid == VSM_StillValid(vd, fantom) &&
     !VSM_Get(vd, fantom, "Stat", type, ident))
  return (((void *)0));
 return ((void*)fantom->b);
}



static void
vsc_add_vf(struct vsc *vsc, const struct VSM_fantom *fantom,
    const struct VSC_type_desc *desc, int order)
{
 struct vsc_vf *vf, *vf2;

 do { (vf) = calloc(sizeof *(vf), 1); if ((vf) != ((void *)0)) (vf)->magic = (0x516519f8); } while (0);
 do { do { if (!((vf) != 0)) { VAS_Fail(__func__, "vsc.c", 345, "(vf) != 0", VAS_ASSERT); } } while (0); } while (0);
 vf->fantom = *fantom;
 vf->section.type = vf->fantom.type;
 vf->section.ident = vf->fantom.ident;
 vf->section.desc = desc;
 vf->section.fantom = &vf->fantom;
 vf->order = order;

 for ((vf2) = (((&vsc->vf_list))->vtqh_first); (vf2); (vf2) = (((vf2))->list.vtqe_next)) {
  if (vf->order < vf2->order)
   break;
 }
 if (vf2 != ((void *)0))
  do { (vf)->list.vtqe_prev = (vf2)->list.vtqe_prev; (((vf))->list.vtqe_next) = (vf2); *(vf2)->list.vtqe_prev = (vf); (vf2)->list.vtqe_prev = &(((vf))->list.vtqe_next); } while (0);
 else
  do { (((vf))->list.vtqe_next) = ((void *)0); (vf)->list.vtqe_prev = (&vsc->vf_list)->vtqh_last; *(&vsc->vf_list)->vtqh_last = (vf); (&vsc->vf_list)->vtqh_last = &(((vf))->list.vtqe_next); } while (0);
}


static void
vsc_add_pt(struct vsc *vsc, const volatile void *ptr,
    const struct VSC_desc *desc, const struct vsc_vf *vf)
{
 struct vsc_pt *pt;

 do { (pt) = calloc(sizeof *(pt), 1); if ((pt) != ((void *)0)) (pt)->magic = (0xa4ff159a); } while (0);
 do { do { if (!((pt) != 0)) { VAS_Fail(__func__, "vsc.c", 371, "(pt) != 0", VAS_ASSERT); } } while (0); } while (0);

 pt->point.desc = desc;
 pt->point.ptr = ptr;
 pt->point.section = &vf->section;

 do { (((pt))->list.vtqe_next) = ((void *)0); (pt)->list.vtqe_prev = (&vsc->pt_list)->vtqh_last; *(&vsc->pt_list)->vtqh_last = (pt); (&vsc->pt_list)->vtqh_last = &(((pt))->list.vtqe_next); } while (0);
}
# 396 "vsc.c"
# 1 "../../include/tbl/vsc_all.h" 1
# 32 "../../include/tbl/vsc_all.h"
static void iter_main(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_main *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 32, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 32, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;
# 1 "../../include/tbl/vsc_f_main.h" 1
# 38 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->uptime, descs++, vf);
# 48 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->sess_conn, descs++, vf);




vsc_add_pt(vsc, &st->sess_drop, descs++, vf);




vsc_add_pt(vsc, &st->sess_fail, descs++, vf);
# 67 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->client_req_400, descs++, vf);





vsc_add_pt(vsc, &st->client_req_417, descs++, vf);




vsc_add_pt(vsc, &st->client_req, descs++, vf);






vsc_add_pt(vsc, &st->cache_hit, descs++, vf);






vsc_add_pt(vsc, &st->cache_hitpass, descs++, vf);
# 101 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->cache_miss, descs++, vf);
# 110 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->backend_conn, descs++, vf);





vsc_add_pt(vsc, &st->backend_unhealthy, descs++, vf);



vsc_add_pt(vsc, &st->backend_busy, descs++, vf);



vsc_add_pt(vsc, &st->backend_fail, descs++, vf);



vsc_add_pt(vsc, &st->backend_reuse, descs++, vf);




vsc_add_pt(vsc, &st->backend_recycle, descs++, vf);







vsc_add_pt(vsc, &st->backend_retry, descs++, vf);
# 150 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->fetch_head, descs++, vf);



vsc_add_pt(vsc, &st->fetch_length, descs++, vf);



vsc_add_pt(vsc, &st->fetch_chunked, descs++, vf);



vsc_add_pt(vsc, &st->fetch_eof, descs++, vf);



vsc_add_pt(vsc, &st->fetch_bad, descs++, vf);



vsc_add_pt(vsc, &st->fetch_none, descs++, vf);



vsc_add_pt(vsc, &st->fetch_1xx, descs++, vf);



vsc_add_pt(vsc, &st->fetch_204, descs++, vf);



vsc_add_pt(vsc, &st->fetch_304, descs++, vf);



vsc_add_pt(vsc, &st->fetch_failed, descs++, vf);



vsc_add_pt(vsc, &st->fetch_no_thread, descs++, vf);
# 201 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->pools, descs++, vf);





vsc_add_pt(vsc, &st->threads, descs++, vf);






vsc_add_pt(vsc, &st->threads_limited, descs++, vf);






vsc_add_pt(vsc, &st->threads_created, descs++, vf);




vsc_add_pt(vsc, &st->threads_destroyed, descs++, vf);




vsc_add_pt(vsc, &st->threads_failed, descs++, vf);






vsc_add_pt(vsc, &st->thread_queue_len, descs++, vf);






vsc_add_pt(vsc, &st->busy_sleep, descs++, vf);





vsc_add_pt(vsc, &st->busy_wakeup, descs++, vf);





vsc_add_pt(vsc, &st->busy_killed, descs++, vf);





vsc_add_pt(vsc, &st->sess_queued, descs++, vf);





vsc_add_pt(vsc, &st->sess_dropped, descs++, vf);







vsc_add_pt(vsc, &st->n_object, descs++, vf);



vsc_add_pt(vsc, &st->n_vampireobject, descs++, vf);



vsc_add_pt(vsc, &st->n_objectcore, descs++, vf);



vsc_add_pt(vsc, &st->n_objecthead, descs++, vf);



vsc_add_pt(vsc, &st->n_waitinglist, descs++, vf);




vsc_add_pt(vsc, &st->n_backend, descs++, vf);




vsc_add_pt(vsc, &st->n_expired, descs++, vf);




vsc_add_pt(vsc, &st->n_lru_nuked, descs++, vf);




vsc_add_pt(vsc, &st->n_lru_moved, descs++, vf);




vsc_add_pt(vsc, &st->losthdr, descs++, vf);




vsc_add_pt(vsc, &st->s_sess, descs++, vf);



vsc_add_pt(vsc, &st->s_req, descs++, vf);



vsc_add_pt(vsc, &st->s_pipe, descs++, vf);



vsc_add_pt(vsc, &st->s_pass, descs++, vf);



vsc_add_pt(vsc, &st->s_fetch, descs++, vf);



vsc_add_pt(vsc, &st->s_synth, descs++, vf);



vsc_add_pt(vsc, &st->s_req_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->s_req_bodybytes, descs++, vf);



vsc_add_pt(vsc, &st->s_resp_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->s_resp_bodybytes, descs++, vf);



vsc_add_pt(vsc, &st->s_pipe_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->s_pipe_in, descs++, vf);




vsc_add_pt(vsc, &st->s_pipe_out, descs++, vf);





vsc_add_pt(vsc, &st->sess_closed, descs++, vf);



vsc_add_pt(vsc, &st->sess_closed_err, descs++, vf);




vsc_add_pt(vsc, &st->sess_readahead, descs++, vf);



vsc_add_pt(vsc, &st->sess_herd, descs++, vf);
# 406 "../../include/tbl/vsc_f_main.h"
# 1 "../../include/tbl/sess_close.h" 1
# 33 "../../include/tbl/sess_close.h"
vsc_add_pt(vsc, &st->sc_rem_close, descs++, vf);
vsc_add_pt(vsc, &st->sc_req_close, descs++, vf);
vsc_add_pt(vsc, &st->sc_req_http10, descs++, vf);
vsc_add_pt(vsc, &st->sc_rx_bad, descs++, vf);
vsc_add_pt(vsc, &st->sc_rx_body, descs++, vf);
vsc_add_pt(vsc, &st->sc_rx_junk, descs++, vf);
vsc_add_pt(vsc, &st->sc_rx_overflow, descs++, vf);
vsc_add_pt(vsc, &st->sc_rx_timeout, descs++, vf);
vsc_add_pt(vsc, &st->sc_tx_pipe, descs++, vf);
vsc_add_pt(vsc, &st->sc_tx_error, descs++, vf);
vsc_add_pt(vsc, &st->sc_tx_eof, descs++, vf);
vsc_add_pt(vsc, &st->sc_resp_close, descs++, vf);
vsc_add_pt(vsc, &st->sc_overload, descs++, vf);
vsc_add_pt(vsc, &st->sc_pipe_overflow, descs++, vf);
vsc_add_pt(vsc, &st->sc_range_short, descs++, vf);
# 407 "../../include/tbl/vsc_f_main.h" 2
# 415 "../../include/tbl/vsc_f_main.h"
vsc_add_pt(vsc, &st->shm_records, descs++, vf);



vsc_add_pt(vsc, &st->shm_writes, descs++, vf);



vsc_add_pt(vsc, &st->shm_flushes, descs++, vf);



vsc_add_pt(vsc, &st->shm_cont, descs++, vf);



vsc_add_pt(vsc, &st->shm_cycles, descs++, vf);






vsc_add_pt(vsc, &st->backend_req, descs++, vf);






vsc_add_pt(vsc, &st->n_vcl, descs++, vf);



vsc_add_pt(vsc, &st->n_vcl_avail, descs++, vf);



vsc_add_pt(vsc, &st->n_vcl_discard, descs++, vf);






vsc_add_pt(vsc, &st->bans, descs++, vf);




vsc_add_pt(vsc, &st->bans_completed, descs++, vf);




vsc_add_pt(vsc, &st->bans_obj, descs++, vf);




vsc_add_pt(vsc, &st->bans_req, descs++, vf);




vsc_add_pt(vsc, &st->bans_added, descs++, vf);



vsc_add_pt(vsc, &st->bans_deleted, descs++, vf);




vsc_add_pt(vsc, &st->bans_tested, descs++, vf);




vsc_add_pt(vsc, &st->bans_obj_killed, descs++, vf);



vsc_add_pt(vsc, &st->bans_lurker_tested, descs++, vf);




vsc_add_pt(vsc, &st->bans_tests_tested, descs++, vf);






vsc_add_pt(vsc, &st->bans_lurker_tests_tested, descs++, vf);






vsc_add_pt(vsc, &st->bans_lurker_obj_killed, descs++, vf);



vsc_add_pt(vsc, &st->bans_dups, descs++, vf);



vsc_add_pt(vsc, &st->bans_lurker_contention, descs++, vf);



vsc_add_pt(vsc, &st->bans_persisted_bytes, descs++, vf);



vsc_add_pt(vsc, &st->bans_persisted_fragmentation, descs++, vf);







vsc_add_pt(vsc, &st->n_purges, descs++, vf);



vsc_add_pt(vsc, &st->n_obj_purged, descs++, vf);






vsc_add_pt(vsc, &st->exp_mailed, descs++, vf);




vsc_add_pt(vsc, &st->exp_received, descs++, vf);






vsc_add_pt(vsc, &st->hcb_nolock, descs++, vf);



vsc_add_pt(vsc, &st->hcb_lock, descs++, vf);



vsc_add_pt(vsc, &st->hcb_insert, descs++, vf);






vsc_add_pt(vsc, &st->esi_errors, descs++, vf);



vsc_add_pt(vsc, &st->esi_warnings, descs++, vf);






vsc_add_pt(vsc, &st->vmods, descs++, vf);






vsc_add_pt(vsc, &st->n_gzip, descs++, vf);



vsc_add_pt(vsc, &st->n_gunzip, descs++, vf);






vsc_add_pt(vsc, &st->vsm_free, descs++, vf);





vsc_add_pt(vsc, &st->vsm_used, descs++, vf);





vsc_add_pt(vsc, &st->vsm_cooling, descs++, vf);






vsc_add_pt(vsc, &st->vsm_overflow, descs++, vf);






vsc_add_pt(vsc, &st->vsm_overflowed, descs++, vf);
# 34 "../../include/tbl/vsc_all.h" 2
}

static void iter_mgt(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_mgt *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 36, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 36, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 68 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->uptime, descs++, vf);



vsc_add_pt(vsc, &st->child_start, descs++, vf);



vsc_add_pt(vsc, &st->child_exit, descs++, vf);



vsc_add_pt(vsc, &st->child_stop, descs++, vf);




vsc_add_pt(vsc, &st->child_died, descs++, vf);



vsc_add_pt(vsc, &st->child_dump, descs++, vf);



vsc_add_pt(vsc, &st->child_panic, descs++, vf);
# 39 "../../include/tbl/vsc_all.h" 2

}

static void iter_mempool(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_mempool *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 42, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 42, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 230 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->live, descs++, vf);



vsc_add_pt(vsc, &st->pool, descs++, vf);



vsc_add_pt(vsc, &st->sz_wanted, descs++, vf);



vsc_add_pt(vsc, &st->sz_actual, descs++, vf);



vsc_add_pt(vsc, &st->allocs, descs++, vf);



vsc_add_pt(vsc, &st->frees, descs++, vf);



vsc_add_pt(vsc, &st->recycle, descs++, vf);



vsc_add_pt(vsc, &st->timeout, descs++, vf);



vsc_add_pt(vsc, &st->toosmall, descs++, vf);



vsc_add_pt(vsc, &st->surplus, descs++, vf);



vsc_add_pt(vsc, &st->randry, descs++, vf);
# 45 "../../include/tbl/vsc_all.h" 2

}

static void iter_sma(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_sma *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 48, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 48, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->c_req, descs++, vf);



vsc_add_pt(vsc, &st->c_fail, descs++, vf);



vsc_add_pt(vsc, &st->c_bytes, descs++, vf);



vsc_add_pt(vsc, &st->c_freed, descs++, vf);



vsc_add_pt(vsc, &st->g_alloc, descs++, vf);



vsc_add_pt(vsc, &st->g_bytes, descs++, vf);



vsc_add_pt(vsc, &st->g_space, descs++, vf);
# 51 "../../include/tbl/vsc_all.h" 2

}

static void iter_smf(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_smf *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 54, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 54, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->c_req, descs++, vf);



vsc_add_pt(vsc, &st->c_fail, descs++, vf);



vsc_add_pt(vsc, &st->c_bytes, descs++, vf);



vsc_add_pt(vsc, &st->c_freed, descs++, vf);



vsc_add_pt(vsc, &st->g_alloc, descs++, vf);



vsc_add_pt(vsc, &st->g_bytes, descs++, vf);



vsc_add_pt(vsc, &st->g_space, descs++, vf);
# 164 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->g_smf, descs++, vf);



vsc_add_pt(vsc, &st->g_smf_frag, descs++, vf);



vsc_add_pt(vsc, &st->g_smf_large, descs++, vf);
# 57 "../../include/tbl/vsc_all.h" 2

}

static void iter_vbe(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_vbe *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 60, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 60, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 182 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->happy, descs++, vf);



vsc_add_pt(vsc, &st->bereq_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->bereq_bodybytes, descs++, vf);



vsc_add_pt(vsc, &st->beresp_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->beresp_bodybytes, descs++, vf);



vsc_add_pt(vsc, &st->pipe_hdrbytes, descs++, vf);



vsc_add_pt(vsc, &st->pipe_out, descs++, vf);




vsc_add_pt(vsc, &st->pipe_in, descs++, vf);




vsc_add_pt(vsc, &st->conn, descs++, vf);



vsc_add_pt(vsc, &st->req, descs++, vf);
# 63 "../../include/tbl/vsc_all.h" 2

}

static void iter_lck(struct vsc *vsc, const struct VSC_desc *descs, struct vsc_vf *vf) { struct VSC_C_lck *st; do { do { if (!((vsc) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 66, "(vsc) != NULL", VAS_ASSERT); } } while (0); do { if (!((vsc)->magic == 0x3373554a)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 66, "(vsc)->magic == 0x3373554a", VAS_ASSERT); } } while (0); } while (0); st = vf->fantom.b;

# 1 "../../include/tbl/vsc_fields.h" 1
# 104 "../../include/tbl/vsc_fields.h"
vsc_add_pt(vsc, &st->creat, descs++, vf);



vsc_add_pt(vsc, &st->destroy, descs++, vf);



vsc_add_pt(vsc, &st->locks, descs++, vf);
# 69 "../../include/tbl/vsc_all.h" 2

}
# 397 "vsc.c" 2
# 406 "vsc.c"
static void
vsc_build_vf_list(struct VSM_data *vd)
{
 struct vsc *vsc = vsc_setup(vd);

 vsc_delete_pt_list(vsc);
 vsc_delete_vf_list(vsc);

 for(VSM__iter0((vd), (&vsc->iter_fantom)); VSM__itern((vd), (&vsc->iter_fantom));) {
  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.class) && __builtin_constant_p ("Stat") && (__s1_len = strlen (vsc->iter_fantom.class), __s2_len = strlen ("Stat"), (!((size_t)(const void *)((vsc->iter_fantom.class) + 1) - (size_t)(const void *)(vsc->iter_fantom.class) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("Stat") + 1) - (size_t)(const void *)("Stat") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.class, "Stat") : (__builtin_constant_p (vsc->iter_fantom.class) && ((size_t)(const void *)((vsc->iter_fantom.class) + 1) - (size_t)(const void *)(vsc->iter_fantom.class) == 1) && (__s1_len = strlen (vsc->iter_fantom.class), __s1_len < 4) ? (__builtin_constant_p ("Stat") && ((size_t)(const void *)(("Stat") + 1) - (size_t)(const void *)("Stat") == 1) ? __builtin_strcmp (vsc->iter_fantom.class, "Stat") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("Stat"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.class))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.class))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.class))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.class))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("Stat") && ((size_t)(const void *)(("Stat") + 1) - (size_t)(const void *)("Stat") == 1) && (__s2_len = strlen ("Stat"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.class) && ((size_t)(const void *)((vsc->iter_fantom.class) + 1) - (size_t)(const void *)(vsc->iter_fantom.class) == 1) ? __builtin_strcmp (vsc->iter_fantom.class, "Stat") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.class); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("Stat"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("Stat"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("Stat"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("Stat"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.class, "Stat")))); }))
   continue;




# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("MAIN") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("MAIN"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("MAIN") + 1) - (size_t)(const void *)("MAIN") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "MAIN") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("MAIN") && ((size_t)(const void *)(("MAIN") + 1) - (size_t)(const void *)("MAIN") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MAIN") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("MAIN"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("MAIN") && ((size_t)(const void *)(("MAIN") + 1) - (size_t)(const void *)("MAIN") == 1) && (__s2_len = strlen ("MAIN"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MAIN") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("MAIN"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("MAIN"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("MAIN"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("MAIN"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "MAIN")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_main, VSC_type_order_main);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("MGT") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("MGT"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("MGT") + 1) - (size_t)(const void *)("MGT") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "MGT") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("MGT") && ((size_t)(const void *)(("MGT") + 1) - (size_t)(const void *)("MGT") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MGT") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("MGT"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("MGT") && ((size_t)(const void *)(("MGT") + 1) - (size_t)(const void *)("MGT") == 1) && (__s2_len = strlen ("MGT"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MGT") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("MGT"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("MGT"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("MGT"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("MGT"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "MGT")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_mgt, VSC_type_order_mgt);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("MEMPOOL") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("MEMPOOL"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("MEMPOOL") + 1) - (size_t)(const void *)("MEMPOOL") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "MEMPOOL") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("MEMPOOL") && ((size_t)(const void *)(("MEMPOOL") + 1) - (size_t)(const void *)("MEMPOOL") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MEMPOOL") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("MEMPOOL"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("MEMPOOL") && ((size_t)(const void *)(("MEMPOOL") + 1) - (size_t)(const void *)("MEMPOOL") == 1) && (__s2_len = strlen ("MEMPOOL"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "MEMPOOL") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("MEMPOOL"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("MEMPOOL"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("MEMPOOL"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("MEMPOOL"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "MEMPOOL")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_mempool, VSC_type_order_mempool);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("SMA") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("SMA"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("SMA") + 1) - (size_t)(const void *)("SMA") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "SMA") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("SMA") && ((size_t)(const void *)(("SMA") + 1) - (size_t)(const void *)("SMA") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "SMA") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("SMA"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("SMA") && ((size_t)(const void *)(("SMA") + 1) - (size_t)(const void *)("SMA") == 1) && (__s2_len = strlen ("SMA"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "SMA") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("SMA"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("SMA"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("SMA"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("SMA"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "SMA")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_sma, VSC_type_order_sma);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("SMF") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("SMF"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("SMF") + 1) - (size_t)(const void *)("SMF") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "SMF") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("SMF") && ((size_t)(const void *)(("SMF") + 1) - (size_t)(const void *)("SMF") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "SMF") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("SMF"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("SMF") && ((size_t)(const void *)(("SMF") + 1) - (size_t)(const void *)("SMF") == 1) && (__s2_len = strlen ("SMF"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "SMF") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("SMF"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("SMF"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("SMF"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("SMF"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "SMF")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_smf, VSC_type_order_smf);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("VBE") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("VBE"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("VBE") + 1) - (size_t)(const void *)("VBE") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "VBE") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("VBE") && ((size_t)(const void *)(("VBE") + 1) - (size_t)(const void *)("VBE") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "VBE") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("VBE"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("VBE") && ((size_t)(const void *)(("VBE") + 1) - (size_t)(const void *)("VBE") == 1) && (__s2_len = strlen ("VBE"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "VBE") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("VBE"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("VBE"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("VBE"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("VBE"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "VBE")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_vbe, VSC_type_order_vbe);


if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vsc->iter_fantom.type) && __builtin_constant_p ("LCK") && (__s1_len = strlen (vsc->iter_fantom.type), __s2_len = strlen ("LCK"), (!((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("LCK") + 1) - (size_t)(const void *)("LCK") == 1) || __s2_len >= 4)) ? __builtin_strcmp (vsc->iter_fantom.type, "LCK") : (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) && (__s1_len = strlen (vsc->iter_fantom.type), __s1_len < 4) ? (__builtin_constant_p ("LCK") && ((size_t)(const void *)(("LCK") + 1) - (size_t)(const void *)("LCK") == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "LCK") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("LCK"); register int __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vsc->iter_fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("LCK") && ((size_t)(const void *)(("LCK") + 1) - (size_t)(const void *)("LCK") == 1) && (__s2_len = strlen ("LCK"), __s2_len < 4) ? (__builtin_constant_p (vsc->iter_fantom.type) && ((size_t)(const void *)((vsc->iter_fantom.type) + 1) - (size_t)(const void *)(vsc->iter_fantom.type) == 1) ? __builtin_strcmp (vsc->iter_fantom.type, "LCK") : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vsc->iter_fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) ("LCK"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) ("LCK"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) ("LCK"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) ("LCK"))[3]); } } __result; }))) : __builtin_strcmp (vsc->iter_fantom.type, "LCK")))); })) vsc_add_vf(vsc, &vsc->iter_fantom, &VSC_type_desc_lck, VSC_type_order_lck);
# 422 "vsc.c" 2

 }
}

static void
vsc_build_pt_list(struct VSM_data *vd)
{
 struct vsc *vsc = vsc_setup(vd);
 struct vsc_vf *vf;

 vsc_delete_pt_list(vsc);

 for ((vf) = (((&vsc->vf_list))->vtqh_first); (vf); (vf) = (((vf))->list.vtqe_next)) {






# 1 "../../include/tbl/vsc_all.h" 1
# 32 "../../include/tbl/vsc_all.h"
do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 32, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 32, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_main) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_main), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_main) + 1) - (size_t)(const void *)(VSC_type_main) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_main) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_main) && ((size_t)(const void *)((VSC_type_main) + 1) - (size_t)(const void *)(VSC_type_main) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_main) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_main); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_main) && ((size_t)(const void *)((VSC_type_main) + 1) - (size_t)(const void *)(VSC_type_main) == 1) && (__s2_len = strlen (VSC_type_main), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_main) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_main))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_main))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_main))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_main))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_main)))); })) iter_main(vsc, VSC_desc_main, vf);
# 1 "../../include/tbl/vsc_f_main.h" 1
# 38 "../../include/tbl/vsc_f_main.h"

# 48 "../../include/tbl/vsc_f_main.h"











# 67 "../../include/tbl/vsc_f_main.h"


























# 101 "../../include/tbl/vsc_f_main.h"

# 110 "../../include/tbl/vsc_f_main.h"
































# 150 "../../include/tbl/vsc_f_main.h"









































# 201 "../../include/tbl/vsc_f_main.h"































































































































































































# 406 "../../include/tbl/vsc_f_main.h"
# 1 "../../include/tbl/sess_close.h" 1
# 33 "../../include/tbl/sess_close.h"















# 407 "../../include/tbl/vsc_f_main.h" 2
# 415 "../../include/tbl/vsc_f_main.h"




























































































































































































































# 34 "../../include/tbl/vsc_all.h" 2


do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 36, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 36, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_mgt) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_mgt), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_mgt) + 1) - (size_t)(const void *)(VSC_type_mgt) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_mgt) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_mgt) && ((size_t)(const void *)((VSC_type_mgt) + 1) - (size_t)(const void *)(VSC_type_mgt) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_mgt) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_mgt); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_mgt) && ((size_t)(const void *)((VSC_type_mgt) + 1) - (size_t)(const void *)(VSC_type_mgt) == 1) && (__s2_len = strlen (VSC_type_mgt), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_mgt) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_mgt))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_mgt))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_mgt))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_mgt))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_mgt)))); })) iter_mgt(vsc, VSC_desc_mgt, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 68 "../../include/tbl/vsc_fields.h"


























# 39 "../../include/tbl/vsc_all.h" 2



do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 42, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 42, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_mempool) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_mempool), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_mempool) + 1) - (size_t)(const void *)(VSC_type_mempool) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_mempool) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_mempool) && ((size_t)(const void *)((VSC_type_mempool) + 1) - (size_t)(const void *)(VSC_type_mempool) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_mempool) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_mempool); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_mempool) && ((size_t)(const void *)((VSC_type_mempool) + 1) - (size_t)(const void *)(VSC_type_mempool) == 1) && (__s2_len = strlen (VSC_type_mempool), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_mempool) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_mempool))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_mempool))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_mempool))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_mempool))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_mempool)))); })) iter_mempool(vsc, VSC_desc_mempool, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 230 "../../include/tbl/vsc_fields.h"









































# 45 "../../include/tbl/vsc_all.h" 2



do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 48, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 48, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_sma) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_sma), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_sma) + 1) - (size_t)(const void *)(VSC_type_sma) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_sma) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_sma) && ((size_t)(const void *)((VSC_type_sma) + 1) - (size_t)(const void *)(VSC_type_sma) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_sma) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_sma); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_sma) && ((size_t)(const void *)((VSC_type_sma) + 1) - (size_t)(const void *)(VSC_type_sma) == 1) && (__s2_len = strlen (VSC_type_sma), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_sma) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_sma))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_sma))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_sma))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_sma))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_sma)))); })) iter_sma(vsc, VSC_desc_sma, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"

























# 51 "../../include/tbl/vsc_all.h" 2



do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 54, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 54, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_smf) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_smf), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_smf) + 1) - (size_t)(const void *)(VSC_type_smf) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_smf) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_smf) && ((size_t)(const void *)((VSC_type_smf) + 1) - (size_t)(const void *)(VSC_type_smf) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_smf) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_smf); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_smf) && ((size_t)(const void *)((VSC_type_smf) + 1) - (size_t)(const void *)(VSC_type_smf) == 1) && (__s2_len = strlen (VSC_type_smf), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_smf) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_smf))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_smf))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_smf))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_smf))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_smf)))); })) iter_smf(vsc, VSC_desc_smf, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"

























# 164 "../../include/tbl/vsc_fields.h"









# 57 "../../include/tbl/vsc_all.h" 2



do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 60, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 60, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_vbe) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_vbe), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_vbe) + 1) - (size_t)(const void *)(VSC_type_vbe) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_vbe) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_vbe) && ((size_t)(const void *)((VSC_type_vbe) + 1) - (size_t)(const void *)(VSC_type_vbe) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_vbe) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_vbe); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_vbe) && ((size_t)(const void *)((VSC_type_vbe) + 1) - (size_t)(const void *)(VSC_type_vbe) == 1) && (__s2_len = strlen (VSC_type_vbe), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_vbe) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_vbe))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_vbe))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_vbe))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_vbe))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_vbe)))); })) iter_vbe(vsc, VSC_desc_vbe, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 182 "../../include/tbl/vsc_fields.h"







































# 63 "../../include/tbl/vsc_all.h" 2



do { do { if (!((vf) != ((void *)0))) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 66, "(vf) != NULL", VAS_ASSERT); } } while (0); do { if (!((vf)->magic == 0x516519f8)) { VAS_Fail(__func__, "../../include/tbl/vsc_all.h", 66, "(vf)->magic == 0x516519f8", VAS_ASSERT); } } while (0); } while (0); if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (vf->fantom.type) && __builtin_constant_p (VSC_type_lck) && (__s1_len = strlen (vf->fantom.type), __s2_len = strlen (VSC_type_lck), (!((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((VSC_type_lck) + 1) - (size_t)(const void *)(VSC_type_lck) == 1) || __s2_len >= 4)) ? __builtin_strcmp (vf->fantom.type, VSC_type_lck) : (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) && (__s1_len = strlen (vf->fantom.type), __s1_len < 4) ? (__builtin_constant_p (VSC_type_lck) && ((size_t)(const void *)((VSC_type_lck) + 1) - (size_t)(const void *)(VSC_type_lck) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_lck) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (VSC_type_lck); register int __result = (((const unsigned char *) (const char *) (vf->fantom.type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (vf->fantom.type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (vf->fantom.type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (VSC_type_lck) && ((size_t)(const void *)((VSC_type_lck) + 1) - (size_t)(const void *)(VSC_type_lck) == 1) && (__s2_len = strlen (VSC_type_lck), __s2_len < 4) ? (__builtin_constant_p (vf->fantom.type) && ((size_t)(const void *)((vf->fantom.type) + 1) - (size_t)(const void *)(vf->fantom.type) == 1) ? __builtin_strcmp (vf->fantom.type, VSC_type_lck) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (vf->fantom.type); register int __result = __s1[0] - ((const unsigned char *) (const char *) (VSC_type_lck))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (VSC_type_lck))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (VSC_type_lck))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (VSC_type_lck))[3]); } } __result; }))) : __builtin_strcmp (vf->fantom.type, VSC_type_lck)))); })) iter_lck(vsc, VSC_desc_lck, vf);

# 1 "../../include/tbl/vsc_fields.h" 1
# 104 "../../include/tbl/vsc_fields.h"









# 69 "../../include/tbl/vsc_all.h" 2


# 442 "vsc.c" 2



 }
}




static inline int
iter_test(const char *s1, const char *s2, int wc)
{

 if (s1 == ((void *)0))
  return (0);
 if (!wc)
  return (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (s1) && __builtin_constant_p (s2) && (__s1_len = strlen (s1), __s2_len = strlen (s2), (!((size_t)(const void *)((s1) + 1) - (size_t)(const void *)(s1) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((s2) + 1) - (size_t)(const void *)(s2) == 1) || __s2_len >= 4)) ? __builtin_strcmp (s1, s2) : (__builtin_constant_p (s1) && ((size_t)(const void *)((s1) + 1) - (size_t)(const void *)(s1) == 1) && (__s1_len = strlen (s1), __s1_len < 4) ? (__builtin_constant_p (s2) && ((size_t)(const void *)((s2) + 1) - (size_t)(const void *)(s2) == 1) ? __builtin_strcmp (s1, s2) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (s2); register int __result = (((const unsigned char *) (const char *) (s1))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (s1))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (s1))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (s1))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (s2) && ((size_t)(const void *)((s2) + 1) - (size_t)(const void *)(s2) == 1) && (__s2_len = strlen (s2), __s2_len < 4) ? (__builtin_constant_p (s1) && ((size_t)(const void *)((s1) + 1) - (size_t)(const void *)(s1) == 1) ? __builtin_strcmp (s1, s2) : (__extension__ ({ const unsigned char *__s1 = (const unsigned char *) (const char *) (s1); register int __result = __s1[0] - ((const unsigned char *) (const char *) (s2))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((const unsigned char *) (const char *) (s2))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((const unsigned char *) (const char *) (s2))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((const unsigned char *) (const char *) (s2))[3]); } } __result; }))) : __builtin_strcmp (s1, s2)))); }));
 for (; *s1 != '\0' && *s1 == *s2; s1++, s2++)
  continue;
 return (*s1 != '\0');
}

static void
vsc_filter_pt_list(struct VSM_data *vd)
{
 struct vsc *vsc = vsc_setup(vd);
 struct vsc_sf *sf;
 struct vsc_pt *pt, *pt2;
 struct { struct vsc_pt *vtqh_first; struct vsc_pt **vtqh_last; } pt_list;

 if (((&vsc->sf_list)->vtqh_first == ((void *)0)))
  return;

 do { (((&pt_list))->vtqh_first) = ((void *)0); (&pt_list)->vtqh_last = &(((&pt_list))->vtqh_first); } while (0);
 for ((sf) = (((&vsc->sf_list))->vtqh_first); (sf); (sf) = (((sf))->list.vtqe_next)) {
  do { do { if (!((sf) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 477, "(sf) != NULL", VAS_ASSERT); } } while (0); do { if (!((sf)->magic == 0x558478dd)) { VAS_Fail(__func__, "vsc.c", 477, "(sf)->magic == 0x558478dd", VAS_ASSERT); } } while (0); } while (0);
  for ((pt) = (((&vsc->pt_list))->vtqh_first); (pt) && ((pt2) = (((pt))->list.vtqe_next), 1); (pt) = (pt2)) {
   do { do { if (!((pt) != ((void *)0))) { VAS_Fail(__func__, "vsc.c", 479, "(pt) != NULL", VAS_ASSERT); } } while (0); do { if (!((pt)->magic == 0xa4ff159a)) { VAS_Fail(__func__, "vsc.c", 479, "(pt)->magic == 0xa4ff159a", VAS_ASSERT); } } while (0); } while (0);
   if (iter_test(sf->type, pt->point.section->type,
       sf->flags & (1 << 1)))
    continue;
   if (iter_test(sf->ident, pt->point.section->ident,
       sf->flags & (1 << 2)))
    continue;
   if (iter_test(sf->name, pt->point.desc->name,
       sf->flags & (1 << 3)))
    continue;
   do { if (((((pt))->list.vtqe_next)) != ((void *)0)) (((pt))->list.vtqe_next)->list.vtqe_prev = (pt)->list.vtqe_prev; else { (&vsc->pt_list)->vtqh_last = (pt)->list.vtqe_prev; } *(pt)->list.vtqe_prev = (((pt))->list.vtqe_next); ; ; } while (0);
   if (sf->flags & (1 << 0)) {
    do { (pt)->magic = (0); free(pt); pt = ((void *)0); } while (0);
   } else {
    do { (((pt))->list.vtqe_next) = ((void *)0); (pt)->list.vtqe_prev = (&pt_list)->vtqh_last; *(&pt_list)->vtqh_last = (pt); (&pt_list)->vtqh_last = &(((pt))->list.vtqe_next); } while (0);
   }
  }
 }
 vsc_delete_pt_list(vsc);
 do { if (!((&pt_list)->vtqh_first == ((void *)0))) { *(&vsc->pt_list)->vtqh_last = (&pt_list)->vtqh_first; (&pt_list)->vtqh_first->list.vtqe_prev = (&vsc->pt_list)->vtqh_last; (&vsc->pt_list)->vtqh_last = (&pt_list)->vtqh_last; do { ((((&pt_list)))->vtqh_first) = ((void *)0); ((&pt_list))->vtqh_last = &((((&pt_list)))->vtqh_first); } while (0); } } while (0);
}




int
VSC_Iter(struct VSM_data *vd, struct VSM_fantom *fantom, VSC_iter_f *func,
    void *priv)
{
 struct vsc *vsc = vsc_setup(vd);
 struct vsc_pt *pt;
 int i;

 if (VSM_valid != VSM_StillValid(vd, &vsc->iter_fantom)) {

  (void)func(priv, ((void *)0));
  vsc_build_vf_list(vd);
  vsc_build_pt_list(vd);
  vsc_filter_pt_list(vd);
 }
 if (fantom != ((void *)0))
  *fantom = vsc->iter_fantom;
 for ((pt) = (((&vsc->pt_list))->vtqh_first); (pt); (pt) = (((pt))->list.vtqe_next)) {
  i = func(priv, &pt->point);
  if (i)
   return (i);
 }
 return (0);
}




const struct VSC_level_desc *
VSC_LevelDesc(unsigned level)
{
 switch (level) {



# 1 "../../include/tbl/vsc_levels.h" 1
# 39 "../../include/tbl/vsc_levels.h"
case VSC_level_info: return (&VSC_level_desc_info);

case VSC_level_diag: return (&VSC_level_desc_diag);

case VSC_level_debug: return (&VSC_level_desc_debug);
# 540 "vsc.c" 2

 default:
  return (((void *)0));
 }
}
# 553 "vsc.c"
# 1 "../../include/tbl/vsc_levels.h" 1
# 39 "../../include/tbl/vsc_levels.h"
const struct VSC_level_desc VSC_level_desc_info = {VSC_level_info, "INFO", "Informational counters", "Counters giving runtime information"};

const struct VSC_level_desc VSC_level_desc_diag = {VSC_level_diag, "DIAG", "Diagnostic counters", "Counters giving diagnostic information"};

const struct VSC_level_desc VSC_level_desc_debug = {VSC_level_debug, "DEBUG", "Debug counters", "Counters giving Varnish internals debug information"};
# 554 "vsc.c" 2



# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
const char *VSC_type_main = "MAIN";


const char *VSC_type_mgt = "MGT";


const char *VSC_type_mempool = "MEMPOOL";


const char *VSC_type_sma = "SMA";


const char *VSC_type_smf = "SMF";


const char *VSC_type_vbe = "VBE";


const char *VSC_type_lck = "LCK";
# 558 "vsc.c" 2




# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
const struct VSC_type_desc VSC_type_desc_main = {"","Child","Child process main counters"};


const struct VSC_type_desc VSC_type_desc_mgt = {"MGT","Master","Management process counters"};


const struct VSC_type_desc VSC_type_desc_mempool = {"MEMPOOL","Memory pool","Memory pool counters"};


const struct VSC_type_desc VSC_type_desc_sma = {"SMA","Storage malloc","Malloc storage counters"};


const struct VSC_type_desc VSC_type_desc_smf = {"SMF","Storage file","File storage counters"};


const struct VSC_type_desc VSC_type_desc_vbe = {"VBE","Backend","Backend counters"};


const struct VSC_type_desc VSC_type_desc_lck = {"LCK","Lock","Mutex lock counters"};
# 563 "vsc.c" 2





# 1 "../../include/tbl/vsc_all.h" 1
# 32 "../../include/tbl/vsc_all.h"
const struct VSC_desc VSC_desc_main[] = {
# 1 "../../include/tbl/vsc_f_main.h" 1
# 38 "../../include/tbl/vsc_f_main.h"
{"uptime","uint64_t",'c','d',&VSC_level_desc_info,"Child process uptime","How long the child process has been running."},
# 48 "../../include/tbl/vsc_f_main.h"
{"sess_conn","uint64_t",'c','i',&VSC_level_desc_info,"Sessions accepted","Count of sessions successfully accepted"},




{"sess_drop","uint64_t",'c','i',&VSC_level_desc_info,"Sessions dropped","Count of sessions silently dropped due to lack of worker thread."},




{"sess_fail","uint64_t",'c','i',&VSC_level_desc_info,"Session accept failures","Count of failures to accept TCP connection." "  Either the client changed its mind, or the kernel ran out of" " some resource like file descriptors."},
# 67 "../../include/tbl/vsc_f_main.h"
{"client_req_400","uint64_t",'c','i',&VSC_level_desc_info,"Client requests received, subject to 400 errors","400 means we couldn't make sense of the request, it was" " malformed in some drastic way."},





{"client_req_417","uint64_t",'c','i',&VSC_level_desc_info,"Client requests received, subject to 417 errors","417 means that something went wrong with an Expect: header."},




{"client_req","uint64_t",'c','i',&VSC_level_desc_info,"Good client requests received","The count of parseable client requests seen."},






{"cache_hit","uint64_t",'c','i',&VSC_level_desc_info,"Cache hits","Count of cache hits. " "  A cache hit indicates that an object has been delivered to a" "  client without fetching it from a backend server."},






{"cache_hitpass","uint64_t",'c','i',&VSC_level_desc_info,"Cache hits for pass","Count of hits for pass" "  A cache hit for pass indicates that Varnish is going to" "  pass the request to the backend and this decision has been " "  cached in it self. This counts how many times the cached " "  decision is being used."},
# 101 "../../include/tbl/vsc_f_main.h"
{"cache_miss","uint64_t",'c','i',&VSC_level_desc_info,"Cache misses","Count of misses" "  A cache miss indicates the object was fetched from the" "  backend before delivering it to the backend."},
# 110 "../../include/tbl/vsc_f_main.h"
{"backend_conn","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. success","How many backend connections have successfully been" " established."},





{"backend_unhealthy","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. not attempted",""},



{"backend_busy","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. too many",""},



{"backend_fail","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. failures",""},



{"backend_reuse","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. reuses","Count of backend connection reuses" "  This counter is increased whenever we reuse a recycled connection."},




{"backend_recycle","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. recycles","Count of backend connection recycles" "  This counter is increased whenever we have a keep-alive" "  connection that is put back into the pool of connections." "  It has not yet been used, but it might be, unless the backend" "  closes it."},







{"backend_retry","uint64_t",'c','i',&VSC_level_desc_info,"Backend conn. retry",""},
# 150 "../../include/tbl/vsc_f_main.h"
{"fetch_head","uint64_t",'c','i',&VSC_level_desc_info,"Fetch no body (HEAD)","beresp with no body because the request is HEAD."},



{"fetch_length","uint64_t",'c','i',&VSC_level_desc_info,"Fetch with Length","beresp.body with Content-Length."},



{"fetch_chunked","uint64_t",'c','i',&VSC_level_desc_info,"Fetch chunked","beresp.body with Chunked."},



{"fetch_eof","uint64_t",'c','i',&VSC_level_desc_info,"Fetch EOF","beresp.body with EOF."},



{"fetch_bad","uint64_t",'c','i',&VSC_level_desc_info,"Fetch bad T-E","beresp.body length/fetch could not be determined."},



{"fetch_none","uint64_t",'c','i',&VSC_level_desc_info,"Fetch no body","beresp.body empty"},



{"fetch_1xx","uint64_t",'c','i',&VSC_level_desc_info,"Fetch no body (1xx)","beresp with no body because of 1XX response."},



{"fetch_204","uint64_t",'c','i',&VSC_level_desc_info,"Fetch no body (204)","beresp with no body because of 204 response."},



{"fetch_304","uint64_t",'c','i',&VSC_level_desc_info,"Fetch no body (304)","beresp with no body because of 304 response."},



{"fetch_failed","uint64_t",'c','i',&VSC_level_desc_info,"Fetch failed (all causes)","beresp fetch failed."},



{"fetch_no_thread","uint64_t",'c','i',&VSC_level_desc_info,"Fetch failed (no thread)","beresp fetch failed, no thread available."},
# 201 "../../include/tbl/vsc_f_main.h"
{"pools","uint64_t",'g','i',&VSC_level_desc_info,"Number of thread pools","Number of thread pools.  See also parameter thread_pools." "  NB: Presently pools cannot be removed once created."},





{"threads","uint64_t",'g','i',&VSC_level_desc_info,"Total number of threads","Number of threads in all pools." "  See also parameters thread_pools, thread_pool_min and" " thread_pool_max."},






{"threads_limited","uint64_t",'c','i',&VSC_level_desc_info,"Threads hit max","Number of times more threads were needed, but limit was reached" " in a thread pool." "  See also parameter thread_pool_max."},






{"threads_created","uint64_t",'c','i',&VSC_level_desc_info,"Threads created","Total number of threads created in all pools."},




{"threads_destroyed","uint64_t",'c','i',&VSC_level_desc_info,"Threads destroyed","Total number of threads destroyed in all pools."},




{"threads_failed","uint64_t",'c','i',&VSC_level_desc_info,"Thread creation failed","Number of times creating a thread failed." "  See VSL::Debug for diagnostics." "  See also parameter thread_fail_delay."},






{"thread_queue_len","uint64_t",'g','i',&VSC_level_desc_info,"Length of session queue","Length of session queue waiting for threads." "  NB: Only updates once per second." "  See also parameter queue_max."},






{"busy_sleep","uint64_t",'c','i',&VSC_level_desc_info,"Number of requests sent to sleep on busy objhdr","Number of requests sent to sleep without a worker thread because" " they found a busy object."},





{"busy_wakeup","uint64_t",'c','i',&VSC_level_desc_info,"Number of requests woken after sleep on busy objhdr","Number of requests taken of the busy object sleep list and" " and rescheduled."},





{"busy_killed","uint64_t",'c','i',&VSC_level_desc_info,"Number of requests killed after sleep on busy objhdr","Number of requests killed from the busy object sleep list" " due to lack of resources."},





{"sess_queued","uint64_t",'c','i',&VSC_level_desc_info,"Sessions queued for thread","Number of times session was queued waiting for a thread." "  See also parameter queue_max."},





{"sess_dropped","uint64_t",'c','i',&VSC_level_desc_info,"Sessions dropped for thread","Number of times session was dropped because the queue were too" " long already. See also parameter queue_max."},







{"n_object","uint64_t",'g','i',&VSC_level_desc_info,"object structs made","Number of object structs made"},



{"n_vampireobject","uint64_t",'g','i',&VSC_level_desc_diag,"unresurrected objects","Number of unresurrected objects"},



{"n_objectcore","uint64_t",'g','i',&VSC_level_desc_info,"objectcore structs made","Number of objectcore structs made"},



{"n_objecthead","uint64_t",'g','i',&VSC_level_desc_info,"objecthead structs made","Number of objecthead structs made"},



{"n_waitinglist","uint64_t",'g','i',&VSC_level_desc_debug,"waitinglist structs made","Number of waitinglist structs made"},




{"n_backend","uint64_t",'g','i',&VSC_level_desc_info,"Number of backends","Number of backends known to us."},




{"n_expired","uint64_t",'g','i',&VSC_level_desc_info,"Number of expired objects","Number of objects that expired from cache" " because of old age."},




{"n_lru_nuked","uint64_t",'g','i',&VSC_level_desc_info,"Number of LRU nuked objects","How many objects have been forcefully evicted" " from storage to make room for a new object."},




{"n_lru_moved","uint64_t",'g','i',&VSC_level_desc_diag,"Number of LRU moved objects","Number of move operations done on the LRU list."},




{"losthdr","uint64_t",'c','i',&VSC_level_desc_info,"HTTP header overflows",""},




{"s_sess","uint64_t",'c','i',&VSC_level_desc_info,"Total sessions seen",""},



{"s_req","uint64_t",'c','i',&VSC_level_desc_info,"Total requests seen",""},



{"s_pipe","uint64_t",'c','i',&VSC_level_desc_info,"Total pipe sessions seen",""},



{"s_pass","uint64_t",'c','i',&VSC_level_desc_info,"Total pass-ed requests seen",""},



{"s_fetch","uint64_t",'c','i',&VSC_level_desc_info,"Total backend fetches initiated",""},



{"s_synth","uint64_t",'c','i',&VSC_level_desc_info,"Total synthethic responses made",""},



{"s_req_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Request header bytes","Total request header bytes received"},



{"s_req_bodybytes","uint64_t",'c','B',&VSC_level_desc_info,"Request body bytes","Total request body bytes received"},



{"s_resp_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Response header bytes","Total response header bytes transmitted"},



{"s_resp_bodybytes","uint64_t",'c','B',&VSC_level_desc_info,"Response body bytes","Total response body bytes transmitted"},



{"s_pipe_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Pipe request header bytes","Total request bytes received for piped sessions"},



{"s_pipe_in","uint64_t",'c','B',&VSC_level_desc_info,"Piped bytes from client","Total number of bytes forwarded from clients in" " pipe sessions"},




{"s_pipe_out","uint64_t",'c','B',&VSC_level_desc_info,"Piped bytes to client","Total number of bytes forwarded to clients in" " pipe sessions"},





{"sess_closed","uint64_t",'c','i',&VSC_level_desc_info,"Session Closed",""},



{"sess_closed_err","uint64_t",'c','i',&VSC_level_desc_info,"Session Closed with error","Total number of sessions closed with errors." " See sc_* diag counters for detailed breakdown"},




{"sess_readahead","uint64_t",'c','i',&VSC_level_desc_info,"Session Read Ahead",""},



{"sess_herd","uint64_t",'c','i',&VSC_level_desc_diag,"Session herd",""},
# 406 "../../include/tbl/vsc_f_main.h"
# 1 "../../include/tbl/sess_close.h" 1
# 33 "../../include/tbl/sess_close.h"
{"sc_rem_close","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "OK  " "REM_CLOSE","Number of session closes with " "" "REM_CLOSE" " (" "Client Closed" ")"},
{"sc_req_close","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "OK  " "REQ_CLOSE","Number of session closes with " "" "REQ_CLOSE" " (" "Client requested close" ")"},
{"sc_req_http10","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "REQ_HTTP10","Number of session closes with " "Error " "REQ_HTTP10" " (" "Proto < HTTP/1.1" ")"},
{"sc_rx_bad","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RX_BAD","Number of session closes with " "Error " "RX_BAD" " (" "Received bad req/resp" ")"},
{"sc_rx_body","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RX_BODY","Number of session closes with " "Error " "RX_BODY" " (" "Failure receiving req.body" ")"},
{"sc_rx_junk","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RX_JUNK","Number of session closes with " "Error " "RX_JUNK" " (" "Received junk data" ")"},
{"sc_rx_overflow","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RX_OVERFLOW","Number of session closes with " "Error " "RX_OVERFLOW" " (" "Received buffer overflow" ")"},
{"sc_rx_timeout","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RX_TIMEOUT","Number of session closes with " "Error " "RX_TIMEOUT" " (" "Receive timeout" ")"},
{"sc_tx_pipe","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "OK  " "TX_PIPE","Number of session closes with " "" "TX_PIPE" " (" "Piped transaction" ")"},
{"sc_tx_error","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "TX_ERROR","Number of session closes with " "Error " "TX_ERROR" " (" "Error transaction" ")"},
{"sc_tx_eof","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "OK  " "TX_EOF","Number of session closes with " "" "TX_EOF" " (" "EOF transmission" ")"},
{"sc_resp_close","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "OK  " "RESP_CLOSE","Number of session closes with " "" "RESP_CLOSE" " (" "Backend/VCL requested close" ")"},
{"sc_overload","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "OVERLOAD","Number of session closes with " "Error " "OVERLOAD" " (" "Out of some resource" ")"},
{"sc_pipe_overflow","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "PIPE_OVERFLOW","Number of session closes with " "Error " "PIPE_OVERFLOW" " (" "Session pipe overflow" ")"},
{"sc_range_short","uint64_t",'c','i',&VSC_level_desc_diag,"Session " "Err " "RANGE_SHORT","Number of session closes with " "Error " "RANGE_SHORT" " (" "Insufficient data for range" ")"},
# 407 "../../include/tbl/vsc_f_main.h" 2
# 415 "../../include/tbl/vsc_f_main.h"
{"shm_records","uint64_t",'c','i',&VSC_level_desc_diag,"SHM records",""},



{"shm_writes","uint64_t",'c','i',&VSC_level_desc_diag,"SHM writes",""},



{"shm_flushes","uint64_t",'c','i',&VSC_level_desc_diag,"SHM flushes due to overflow",""},



{"shm_cont","uint64_t",'c','i',&VSC_level_desc_diag,"SHM MTX contention",""},



{"shm_cycles","uint64_t",'c','i',&VSC_level_desc_diag,"SHM cycles through buffer",""},






{"backend_req","uint64_t",'c','i',&VSC_level_desc_info,"Backend requests made",""},






{"n_vcl","uint64_t",'c','i',&VSC_level_desc_info,"Number of loaded VCLs in total",""},



{"n_vcl_avail","uint64_t",'c','i',&VSC_level_desc_diag,"Number of VCLs available",""},



{"n_vcl_discard","uint64_t",'c','i',&VSC_level_desc_diag,"Number of discarded VCLs",""},






{"bans","uint64_t",'g','i',&VSC_level_desc_info,"Count of bans","Number of all bans in system, including bans superseded" " by newer bans and bans already checked by the ban-lurker."},




{"bans_completed","uint64_t",'g','i',&VSC_level_desc_diag,"Number of bans marked 'completed'","Number of bans which are no longer active, either because they" " got checked by the ban-lurker or superseded by newer identical bans."},




{"bans_obj","uint64_t",'g','i',&VSC_level_desc_diag,"Number of bans using obj.*","Number of bans which use obj.* variables.  These bans can possibly" " be washed by the ban-lurker."},




{"bans_req","uint64_t",'g','i',&VSC_level_desc_diag,"Number of bans using req.*","Number of bans which use req.* variables.  These bans can not" " be washed by the ban-lurker."},




{"bans_added","uint64_t",'c','i',&VSC_level_desc_diag,"Bans added","Counter of bans added to ban list."},



{"bans_deleted","uint64_t",'c','i',&VSC_level_desc_diag,"Bans deleted","Counter of bans deleted from ban list."},




{"bans_tested","uint64_t",'c','i',&VSC_level_desc_diag,"Bans tested against objects (lookup)","Count of how many bans and objects have been tested against" " each other during hash lookup."},




{"bans_obj_killed","uint64_t",'c','i',&VSC_level_desc_diag,"Objects killed by bans (lookup)","Number of objects killed by bans during object lookup."},



{"bans_lurker_tested","uint64_t",'c','i',&VSC_level_desc_diag,"Bans tested against objects (lurker)","Count of how many bans and objects have been tested against" " each other by the ban-lurker."},




{"bans_tests_tested","uint64_t",'c','i',&VSC_level_desc_diag,"Ban tests tested against objects (lookup)","Count of how many tests and objects have been tested against" " each other during lookup." "  'ban req.url == foo && req.http.host == bar'" " counts as one in 'bans_tested' and as two in 'bans_tests_tested'"},






{"bans_lurker_tests_tested","uint64_t",'c','i',&VSC_level_desc_diag,"Ban tests tested against objects (lurker)","Count of how many tests and objects have been tested against" " each other by the ban-lurker." "  'ban req.url == foo && req.http.host == bar'" " counts as one in 'bans_tested' and as two in 'bans_tests_tested'"},






{"bans_lurker_obj_killed","uint64_t",'c','i',&VSC_level_desc_diag,"Objects killed by bans (lurker)","Number of objects killed by ban-lurker."},



{"bans_dups","uint64_t",'c','i',&VSC_level_desc_diag,"Bans superseded by other bans","Count of bans replaced by later identical bans."},



{"bans_lurker_contention","uint64_t",'c','i',&VSC_level_desc_diag,"Lurker gave way for lookup","Number of times the ban-lurker had to wait for lookups."},



{"bans_persisted_bytes","uint64_t",'g','B',&VSC_level_desc_diag,"Bytes used by the persisted ban lists","Number of bytes used by the persisted ban lists."},



{"bans_persisted_fragmentation","uint64_t",'g','B',&VSC_level_desc_diag,"Extra bytes in persisted ban lists due to fragmentation","Number of extra bytes accumulated through dropped and" " completed bans in the persistent ban lists."},







{"n_purges","uint64_t",'g','i',&VSC_level_desc_info,"Number of purge operations executed",""},



{"n_obj_purged","uint64_t",'g','i',&VSC_level_desc_info,"Number of purged objects",""},






{"exp_mailed","uint64_t",'c','i',&VSC_level_desc_diag,"Number of objects mailed to expiry thread","Number of objects mailed to expiry thread for handling."},




{"exp_received","uint64_t",'c','i',&VSC_level_desc_diag,"Number of objects received by expiry thread","Number of objects received by expiry thread for handling."},






{"hcb_nolock","uint64_t",'c','i',&VSC_level_desc_debug,"HCB Lookups without lock",""},



{"hcb_lock","uint64_t",'c','i',&VSC_level_desc_debug,"HCB Lookups with lock",""},



{"hcb_insert","uint64_t",'c','i',&VSC_level_desc_debug,"HCB Inserts",""},






{"esi_errors","uint64_t",'c','i',&VSC_level_desc_diag,"ESI parse errors (unlock)",""},



{"esi_warnings","uint64_t",'c','i',&VSC_level_desc_diag,"ESI parse warnings (unlock)",""},






{"vmods","uint64_t",'g','i',&VSC_level_desc_info,"Loaded VMODs",""},






{"n_gzip","uint64_t",'c','i',&VSC_level_desc_info,"Gzip operations",""},



{"n_gunzip","uint64_t",'c','i',&VSC_level_desc_info,"Gunzip operations",""},






{"vsm_free","uint64_t",'g','B',&VSC_level_desc_diag,"Free VSM space","Number of bytes free in the shared memory used to communicate" " with tools like varnishstat, varnishlog etc."},





{"vsm_used","uint64_t",'g','B',&VSC_level_desc_diag,"Used VSM space","Number of bytes used in the shared memory used to communicate" " with tools like varnishstat, varnishlog etc."},





{"vsm_cooling","uint64_t",'g','B',&VSC_level_desc_debug,"Cooling VSM space","Number of bytes which will soon (max 1 minute) be freed" " in the shared memory used to communicate" " with tools like varnishstat, varnishlog etc."},






{"vsm_overflow","uint64_t",'g','B',&VSC_level_desc_diag,"Overflow VSM space","Number of bytes which does not fit" " in the shared memory used to communicate" " with tools like varnishstat, varnishlog etc."},






{"vsm_overflowed","uint64_t",'c','B',&VSC_level_desc_diag,"Overflowed VSM space","Total number of bytes which did not fit" " in the shared memory used to communicate" " with tools like varnishstat, varnishlog etc."},
# 34 "../../include/tbl/vsc_all.h" 2
};

const struct VSC_desc VSC_desc_mgt[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 68 "../../include/tbl/vsc_fields.h"
{"uptime","uint64_t",'c','d',&VSC_level_desc_info,"Management process uptime","Uptime in seconds of the management process"},



{"child_start","uint64_t",'c','i',&VSC_level_desc_diag,"Child process started","Number of times the child process has been started"},



{"child_exit","uint64_t",'c','i',&VSC_level_desc_diag,"Child process normal exit","Number of times the child process has been cleanly stopped"},



{"child_stop","uint64_t",'c','i',&VSC_level_desc_diag,"Child process unexpected exit","Number of times the child process has exited with an unexpected" " return code"},




{"child_died","uint64_t",'c','i',&VSC_level_desc_diag,"Child process died (signal)","Number of times the child process has died due to signals"},



{"child_dump","uint64_t",'c','i',&VSC_level_desc_diag,"Child process core dumped","Number of times the child process has produced core dumps"},



{"child_panic","uint64_t",'c','i',&VSC_level_desc_diag,"Child process panic","Number of times the management process has caught a child panic"},
# 39 "../../include/tbl/vsc_all.h" 2

};

const struct VSC_desc VSC_desc_mempool[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 230 "../../include/tbl/vsc_fields.h"
{"live","uint64_t",'g','i',&VSC_level_desc_debug,"In use",""},



{"pool","uint64_t",'g','i',&VSC_level_desc_debug,"In Pool",""},



{"sz_wanted","uint64_t",'g','B',&VSC_level_desc_debug,"Size requested",""},



{"sz_actual","uint64_t",'g','B',&VSC_level_desc_debug,"Size allocated",""},



{"allocs","uint64_t",'c','i',&VSC_level_desc_debug,"Allocations",""},



{"frees","uint64_t",'c','i',&VSC_level_desc_debug,"Frees",""},



{"recycle","uint64_t",'c','i',&VSC_level_desc_debug,"Recycled from pool",""},



{"timeout","uint64_t",'c','i',&VSC_level_desc_debug,"Timed out from pool",""},



{"toosmall","uint64_t",'c','i',&VSC_level_desc_debug,"Too small to recycle",""},



{"surplus","uint64_t",'c','i',&VSC_level_desc_debug,"Too many for pool",""},



{"randry","uint64_t",'c','i',&VSC_level_desc_debug,"Pool ran dry",""},
# 45 "../../include/tbl/vsc_all.h" 2

};

const struct VSC_desc VSC_desc_sma[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
{"c_req","uint64_t",'c','i',&VSC_level_desc_info,"Allocator requests","Number of times the storage has been asked to provide a storage segment."},



{"c_fail","uint64_t",'c','i',&VSC_level_desc_info,"Allocator failures","Number of times the storage has failed to provide a storage segment."},



{"c_bytes","uint64_t",'c','B',&VSC_level_desc_info,"Bytes allocated","Number of total bytes allocated by this storage."},



{"c_freed","uint64_t",'c','B',&VSC_level_desc_info,"Bytes freed","Number of total bytes returned to this storage."},



{"g_alloc","uint64_t",'g','i',&VSC_level_desc_info,"Allocations outstanding","Number of storage allocations outstanding."},



{"g_bytes","uint64_t",'g','B',&VSC_level_desc_info,"Bytes outstanding","Number of bytes allocated from the storage."},



{"g_space","uint64_t",'g','B',&VSC_level_desc_info,"Bytes available","Number of bytes left in the storage."},
# 51 "../../include/tbl/vsc_all.h" 2

};

const struct VSC_desc VSC_desc_smf[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 124 "../../include/tbl/vsc_fields.h"
{"c_req","uint64_t",'c','i',&VSC_level_desc_info,"Allocator requests","Number of times the storage has been asked to provide a storage segment."},



{"c_fail","uint64_t",'c','i',&VSC_level_desc_info,"Allocator failures","Number of times the storage has failed to provide a storage segment."},



{"c_bytes","uint64_t",'c','B',&VSC_level_desc_info,"Bytes allocated","Number of total bytes allocated by this storage."},



{"c_freed","uint64_t",'c','B',&VSC_level_desc_info,"Bytes freed","Number of total bytes returned to this storage."},



{"g_alloc","uint64_t",'g','i',&VSC_level_desc_info,"Allocations outstanding","Number of storage allocations outstanding."},



{"g_bytes","uint64_t",'g','B',&VSC_level_desc_info,"Bytes outstanding","Number of bytes allocated from the storage."},



{"g_space","uint64_t",'g','B',&VSC_level_desc_info,"Bytes available","Number of bytes left in the storage."},
# 164 "../../include/tbl/vsc_fields.h"
{"g_smf","uint64_t",'g','i',&VSC_level_desc_info,"N struct smf",""},



{"g_smf_frag","uint64_t",'g','i',&VSC_level_desc_info,"N small free smf",""},



{"g_smf_large","uint64_t",'g','i',&VSC_level_desc_info,"N large free smf",""},
# 57 "../../include/tbl/vsc_all.h" 2

};

const struct VSC_desc VSC_desc_vbe[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 182 "../../include/tbl/vsc_fields.h"
{"happy","uint64_t",'b','b',&VSC_level_desc_info,"Happy health probes",""},



{"bereq_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Request header bytes","Total backend request header bytes sent"},



{"bereq_bodybytes","uint64_t",'c','B',&VSC_level_desc_info,"Request body bytes","Total backend request body bytes sent"},



{"beresp_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Response header bytes","Total backend response header bytes received"},



{"beresp_bodybytes","uint64_t",'c','B',&VSC_level_desc_info,"Response body bytes","Total backend response body bytes received"},



{"pipe_hdrbytes","uint64_t",'c','B',&VSC_level_desc_info,"Pipe request header bytes","Total request bytes sent for piped sessions"},



{"pipe_out","uint64_t",'c','B',&VSC_level_desc_info,"Piped bytes to backend","Total number of bytes forwarded to backend in" " pipe sessions"},




{"pipe_in","uint64_t",'c','B',&VSC_level_desc_info,"Piped bytes from backend","Total number of bytes forwarded from backend in" " pipe sessions"},




{"conn","uint64_t",'g','i',&VSC_level_desc_info,"Concurrent connections to backend",""},



{"req","uint64_t",'c','i',&VSC_level_desc_info,"Backend requests sent",""},
# 63 "../../include/tbl/vsc_all.h" 2

};

const struct VSC_desc VSC_desc_lck[] = {

# 1 "../../include/tbl/vsc_fields.h" 1
# 104 "../../include/tbl/vsc_fields.h"
{"creat","uint64_t",'c','i',&VSC_level_desc_debug,"Created locks",""},



{"destroy","uint64_t",'c','i',&VSC_level_desc_debug,"Destroyed locks",""},



{"locks","uint64_t",'c','i',&VSC_level_desc_debug,"Lock Operations",""},
# 69 "../../include/tbl/vsc_all.h" 2

};
# 569 "vsc.c" 2
