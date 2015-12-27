# 1 "common/common_vsc.c"
# 1 "/builddir/build/BUILD/Varnish-Cache-37d738ea4c04629766e510daf3d440ac621d8156/bin/varnishd//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "common/common_vsc.c"
# 31 "common/common_vsc.c"
# 1 "common/common.h" 1
# 31 "common/common.h"
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
# 32 "common/common.h" 2

# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4


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
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/sys/types.h" 3 4
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
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
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



# 34 "common/common.h" 2

# 1 "../../include/miniobj.h" 1
# 36 "common/common.h" 2
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
# 37 "common/common.h" 2
# 1 "../../include/vcs.h" 1
# 32 "../../include/vcs.h"
extern const char *VCS_version;
void VCS_Message(const char *);
# 38 "common/common.h" 2
# 1 "../../include/vdef.h" 1
# 39 "common/common.h" 2
# 1 "../../include/vqueue.h" 1
# 40 "common/common.h" 2
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
# 41 "common/common.h" 2
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
# 42 "common/common.h" 2






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
# 56 "common/common.h" 2

};

enum obj_flags {

# 1 "../../include/tbl/obj_attr.h" 1
# 46 "../../include/tbl/obj_attr.h"
OF_GZIPED = (1<<1),
OF_CHGGZIP = (1<<2),
OF_IMSCAND = (1<<3),
OF_ESIPROC = (1<<4),
# 62 "common/common.h" 2

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
# 68 "common/common.h" 2

};

struct cli;
# 89 "common/common.h"
extern pid_t mgt_pid;



extern struct vsb *vident;
int Symbol_Lookup(struct vsb *vsb, void *ptr);



void mgt_child_inherit(int fd, const char *what);
# 107 "common/common.h"
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
# 32 "common/common_vsc.c" 2



# 1 "../../include/tbl/vsc_types.h" 1
# 44 "../../include/tbl/vsc_types.h"
const char *VSC_type_main = "MAIN";


const char *VSC_type_mgt = "MGT";


const char *VSC_type_mempool = "MEMPOOL";


const char *VSC_type_sma = "SMA";


const char *VSC_type_smf = "SMF";


const char *VSC_type_vbe = "VBE";


const char *VSC_type_lck = "LCK";
# 36 "common/common_vsc.c" 2
