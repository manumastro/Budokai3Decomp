#include "common.h"

extern void *_impure_ptr;

void srand(s64 arg0) {
    *(u64 *)((u8 *)_impure_ptr + 0xA8) = (u64) ((u64) (arg0 << 0x20) >> 0x20);
}
typedef unsigned int __uint32_t_x00126B88;
typedef unsigned int size_t_x00126B88;
typedef __uint32_t_x00126B88 __ULong_x00126B88;
struct _glue_x00126B88
{
  struct _glue_x00126B88 *_next;
  int _niobs;
  struct __sFILE_x00126B88 *_iobs;
};
struct _Bigint_x00126B88
{
  struct _Bigint_x00126B88 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x00126B88 _x[1];
};
struct __tm_x00126B88
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};
struct _atexit_x00126B88 {
        struct _atexit_x00126B88 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x00126B88 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x00126B88;
struct __sFILE_x00126B88 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x00126B88 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x00126B88 (*_seek) (void * _cookie, _fpos_t_x00126B88 _offset, int _whence);
  int (*_close) (void * _cookie);
  struct __sbuf_x00126B88 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x00126B88 _lb;
  int _blksize;
  int _offset;
  struct _reent_x00126B88 *_data;
};
struct _rand48_x00126B88 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x00126B88
{
  int _errno;
  struct __sFILE_x00126B88 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x00126B88 *);
  struct _Bigint_x00126B88 *_result;
  int _result_k;
  struct _Bigint_x00126B88 *_p5s;
  struct _Bigint_x00126B88 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x00126B88 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x00126B88 _r48;
        } _reent_x00126B88;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x00126B88 *_atexit_x00126B88;
  struct _atexit_x00126B88 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x00126B88 __sglue;
  struct __sFILE_x00126B88 __sf[3];
};
extern struct _reent_x00126B88 *_impure_ptr_x00126B88 __asm__("_impure_ptr");
extern int atexit (void (*__func_x00126B88)(void)) __asm__("__func");
extern void * bsearch (const void * __key,
                       const void * __base,
                       size_t_x00126B88 __nmemb,
                       size_t_x00126B88 __size,
                       int (* _compar_x00126B88) (const void *, const void *)) __asm__("_compar");
extern void qsort (void * __base, size_t_x00126B88 __nmemb, size_t_x00126B88 __size, int(*_compar_x00126B88)(const void *, const void *)) __asm__("_compar");
int
rand_x00126B88(void) __asm__("rand");
/* rand_x00126B88: from newlib 1.10.0 (sourceware.org) (libc/stdlib/rand_x00126B88.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
int
rand_x00126B88(void)
{
  _impure_ptr_x00126B88->_new._reent_x00126B88._rand_next =
     _impure_ptr_x00126B88->_new._reent_x00126B88._rand_next * __extension__ 6364136223846793005LL + 1;
  return (int)((_impure_ptr_x00126B88->_new._reent_x00126B88._rand_next >> 32) & 0x7fffffff);
}
s32 read_x00126BF0(s32, s32, s32) __asm__("read");
extern s32 errno_x00126BF0 __asm__("errno");
volatile unsigned long _read_r_x00126BF0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("_read_r");
volatile unsigned long _read_r_x00126BF0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_v0;
  unsigned long new_var;
  errno_x00126BF0 = 0;
  temp_v0 = read_x00126BF0(arg1, arg2, arg3);
  new_var = -1;
  if ((temp_v0 == new_var) && (errno_x00126BF0 != 0))
  {
    *arg0 = errno_x00126BF0;
  }
  if (1)
  {
  }
  return temp_v0;
}
void *memcpy_x00126C50( void *dst, const void *src, unsigned int n) __asm__("func_00125740");
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00126C50;
struct Reent_x00126C50;
typedef struct Glue_x00126C50 {
    struct Glue_x00126C50 *next;
    int niobs;
    struct Fil_x00126C50 *iobs;
} Glue_x00126C50;
typedef struct Fil_x00126C50 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00126C50 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x00126C50 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00126C50 lb;
    int blksize;
    int offset;
    struct Reent_x00126C50 *data;
} Fil_x00126C50;
struct _Bigint_x00126C50 {
    struct _Bigint_x00126C50 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00126C50 {
    int err;
    Fil_x00126C50 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00126C50 *result;
    int result_k;
    struct _Bigint_x00126C50 *p5s;
    struct _Bigint_x00126C50 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00126C50 glue;
    Fil_x00126C50 sf[3];
} Reent_x00126C50;
struct Reent_x00126C50;
void *_malloc_r_x00126C50(struct Reent_x00126C50 *reent_ptr, int bytes) __asm__("func_00124E68");
void _free_r_x00126C50(struct Reent_x00126C50 *reent_ptr, void *mem) __asm__("func_00123D60");
typedef struct _Bigint_x00126C50 _Bigint_x00126C50;
typedef unsigned int INTERNAL_SIZE_T_x00126C50;
struct malloc_chunk_x00126C50 {
    INTERNAL_SIZE_T_x00126C50 prev_size;
    INTERNAL_SIZE_T_x00126C50 size;
    struct malloc_chunk_x00126C50 *fd;
    struct malloc_chunk_x00126C50 *bk;
};
typedef struct malloc_chunk_x00126C50 *mchunkptr_x00126C50;
extern struct malloc_chunk_x00126C50 *__malloc_av__x00126C50[] __asm__("__malloc_av_");
void __malloc_lock_x00126C50(Reent_x00126C50 *ptr) __asm__("func_001259B8");
void __malloc_unlock_x00126C50(Reent_x00126C50 *ptr) __asm__("func_00125A38");
void *func_00126C50_x00126C50(Reent_x00126C50 *reent_ptr, void *oldmem, unsigned int bytes) __asm__("func_00126C50");
/* _realloc_r: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/reallocr.c, MIT); ee-gcc 2.96 -O2 -G0 */
void *func_00126C50_x00126C50(Reent_x00126C50 *reent_ptr, void *oldmem, unsigned int bytes)
{
    INTERNAL_SIZE_T_x00126C50 nb;
    mchunkptr_x00126C50 oldp;
    INTERNAL_SIZE_T_x00126C50 oldsize;
    mchunkptr_x00126C50 newp;
    INTERNAL_SIZE_T_x00126C50 newsize;
    void *newmem;
    mchunkptr_x00126C50 next;
    INTERNAL_SIZE_T_x00126C50 nextsize;
    mchunkptr_x00126C50 prev;
    INTERNAL_SIZE_T_x00126C50 prevsize;
    mchunkptr_x00126C50 remainder;
    INTERNAL_SIZE_T_x00126C50 remainder_size;
    mchunkptr_x00126C50 bck;
    mchunkptr_x00126C50 fwd;
    if (oldmem == 0)
        return _malloc_r_x00126C50(reent_ptr, bytes);
    __malloc_lock_x00126C50(reent_ptr);
    newp = oldp = ((mchunkptr_x00126C50)((char *)(oldmem) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
    newsize = oldsize = ((oldp)->size & ~(0x3));
    nb = (((long)((bytes) + ((sizeof(INTERNAL_SIZE_T_x00126C50)) + (16 - 1))) < (long)((sizeof(struct malloc_chunk_x00126C50)) + (16 - 1))) ? (((sizeof(struct malloc_chunk_x00126C50)) + (16 - 1)) & ~((16 - 1))) : (((bytes) + ((sizeof(INTERNAL_SIZE_T_x00126C50)) + (16 - 1))) & ~((16 - 1))));
    if ((long)(oldsize) < (long)(nb)) {
        next = ((mchunkptr_x00126C50)(((char *)(oldp)) + (oldsize)));
        if (next == (((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd) || !((((mchunkptr_x00126C50)(((char *)(next)) + ((next)->size & ~0x1)))->size) & 0x1)) {
            nextsize = ((next)->size & ~(0x3));
            if (next == (((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd)) {
                if ((long)(nextsize + newsize) >= (long)(nb + (sizeof(struct malloc_chunk_x00126C50)))) {
                    newsize += nextsize;
                    (((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd) = ((mchunkptr_x00126C50)(((char *)(oldp)) + (nb)));
                    (((((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd))->size = ((newsize - nb) | 0x1));
                    ((oldp)->size = (((oldp)->size & 0x1) | (nb)));
                    __malloc_unlock_x00126C50(reent_ptr);
                    return ((void *)((char *)(oldp) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
                }
            }
            else if (((long)(nextsize + newsize) >= (long)(nb))) {
                { bck = next->bk; fwd = next->fd; fwd->bk = bck; bck->fd = fwd; };
                newsize += nextsize;
                goto split;
            }
        } else {
            next = 0;
            nextsize = 0;
        }
        if (!((oldp)->size & 0x1)) {
            prev = ((mchunkptr_x00126C50)(((char *)(oldp)) - ((oldp)->prev_size)));
            prevsize = ((prev)->size & ~(0x3));
            if (next != 0) {
                if (next == (((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd)) {
                    if ((long)(nextsize + prevsize + newsize) >= (long)(nb + (sizeof(struct malloc_chunk_x00126C50)))) {
                        { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                        newp = prev;
                        newsize += prevsize + nextsize;
                        newmem = ((void *)((char *)(newp) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
                        do { INTERNAL_SIZE_T_x00126C50 mcsz = (oldsize - (sizeof(INTERNAL_SIZE_T_x00126C50))); if (mcsz <= 9 * sizeof(mcsz)) { INTERNAL_SIZE_T_x00126C50 *mcsrc = (INTERNAL_SIZE_T_x00126C50 *)(oldmem); INTERNAL_SIZE_T_x00126C50 *mcdst = (INTERNAL_SIZE_T_x00126C50 *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else memcpy_x00126C50(newmem, oldmem, mcsz); } while (0);
                        (((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd) = ((mchunkptr_x00126C50)(((char *)(newp)) + (nb)));
                        (((((mchunkptr_x00126C50)((char *)&(__malloc_av__x00126C50[2 * (0) + 2]) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))->fd))->size = ((newsize - nb) | 0x1));
                        ((newp)->size = (((newp)->size & 0x1) | (nb)));
                        __malloc_unlock_x00126C50(reent_ptr);
                        return newmem;
                    }
                }
                else if (((long)(nextsize + prevsize + newsize) >= (long)(nb))) {
                    { bck = next->bk; fwd = next->fd; fwd->bk = bck; bck->fd = fwd; };
                    { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                    newp = prev;
                    newsize += nextsize + prevsize;
                    newmem = ((void *)((char *)(newp) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
                    do { INTERNAL_SIZE_T_x00126C50 mcsz = (oldsize - (sizeof(INTERNAL_SIZE_T_x00126C50))); if (mcsz <= 9 * sizeof(mcsz)) { INTERNAL_SIZE_T_x00126C50 *mcsrc = (INTERNAL_SIZE_T_x00126C50 *)(oldmem); INTERNAL_SIZE_T_x00126C50 *mcdst = (INTERNAL_SIZE_T_x00126C50 *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else memcpy_x00126C50(newmem, oldmem, mcsz); } while (0);
                    goto split;
                }
            }
            if (prev != 0 && (long)(prevsize + newsize) >= (long)nb) {
                { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                newp = prev;
                newsize += prevsize;
                newmem = ((void *)((char *)(newp) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
                do { INTERNAL_SIZE_T_x00126C50 mcsz = (oldsize - (sizeof(INTERNAL_SIZE_T_x00126C50))); if (mcsz <= 9 * sizeof(mcsz)) { INTERNAL_SIZE_T_x00126C50 *mcsrc = (INTERNAL_SIZE_T_x00126C50 *)(oldmem); INTERNAL_SIZE_T_x00126C50 *mcdst = (INTERNAL_SIZE_T_x00126C50 *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else memcpy_x00126C50(newmem, oldmem, mcsz); } while (0);
                goto split;
            }
        }
        newmem = _malloc_r_x00126C50(reent_ptr, bytes);
        if (newmem == 0) {
            __malloc_unlock_x00126C50(reent_ptr);
            return 0;
        }
        if ((newp = ((mchunkptr_x00126C50)((char *)(newmem) - 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))))) == ((mchunkptr_x00126C50)(((char *)(oldp)) + ((oldp)->size & ~0x1)))) {
            newsize += ((newp)->size & ~(0x3));
            newp = oldp;
            goto split;
        }
        do { INTERNAL_SIZE_T_x00126C50 mcsz = (oldsize - (sizeof(INTERNAL_SIZE_T_x00126C50))); if (mcsz <= 9 * sizeof(mcsz)) { INTERNAL_SIZE_T_x00126C50 *mcsrc = (INTERNAL_SIZE_T_x00126C50 *)(oldmem); INTERNAL_SIZE_T_x00126C50 *mcdst = (INTERNAL_SIZE_T_x00126C50 *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else memcpy_x00126C50(newmem, oldmem, mcsz); } while (0);
        _free_r_x00126C50(reent_ptr, oldmem);
        __malloc_unlock_x00126C50(reent_ptr);
        return newmem;
    }
split:
    remainder_size = ((newsize < nb) ? -((long)(nb - newsize)) : (newsize - nb));;
    if (remainder_size >= (long)(sizeof(struct malloc_chunk_x00126C50))) {
        remainder = ((mchunkptr_x00126C50)(((char *)(newp)) + (nb)));
        ((newp)->size = (((newp)->size & 0x1) | (nb)));
        ((remainder)->size = (remainder_size | 0x1));
        (((mchunkptr_x00126C50)(((char *)(remainder)) + (remainder_size)))->size |= 0x1);
        _free_r_x00126C50(reent_ptr, ((void *)((char *)(remainder) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50)))));
    } else {
        ((newp)->size = (((newp)->size & 0x1) | (newsize)));
        (((mchunkptr_x00126C50)(((char *)(newp)) + (newsize)))->size |= 0x1);
    }
    __malloc_unlock_x00126C50(reent_ptr);
    return ((void *)((char *)(newp) + 2 * (sizeof(INTERNAL_SIZE_T_x00126C50))));
}
s32 fflush_x001271F0() __asm__("fflush");
s32 func_001271F0_x001271F0(u8 *arg0) __asm__("func_001271F0");
s32 func_001271F0_x001271F0(u8 *arg0) {
    if ((*(u16 *)((u8 *)arg0 + 0xC) & 9) == 9) {
        return fflush_x001271F0();
    }
    return 0;
}
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00127228;
struct Reent_x00127228;
typedef struct Glue_x00127228 {
    struct Glue_x00127228 *next;
    int niobs;
    struct Fil_x00127228 *iobs;
} Glue_x00127228;
typedef struct Fil_x00127228 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00127228 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x00127228 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00127228 lb;
    int blksize;
    int offset;
    struct Reent_x00127228 *data;
} Fil_x00127228;
struct _Bigint_x00127228 {
    struct _Bigint_x00127228 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00127228 {
    int err;
    Fil_x00127228 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00127228 *result;
    int result_k;
    struct _Bigint_x00127228 *p5s;
    struct _Bigint_x00127228 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00127228 glue;
    Fil_x00127228 sf[3];
} Reent_x00127228;
extern Reent_x00127228 *_impure_ptr_x00127228 __asm__("_impure_ptr");
struct Reent_x00127228;
void _free_r_x00127228(struct Reent_x00127228 *reent_ptr, void *mem) __asm__("func_00123D60");
typedef struct _Bigint_x00127228 _Bigint_x00127228;
void __sinit_x00127228(Reent_x00127228 *s) __asm__("func_00123BB0");
void __smakebuf_x00127228(Fil_x00127228 *fp) __asm__("func_001247E8");
struct Fil_x00127228;
int fflush_x00127228(struct Fil_x00127228 *fp) __asm__("func_00123888");
int lflush_x00127228(Fil_x00127228 *fp) __asm__("func_001271F0");
int __srefill_x00127228(Fil_x00127228 *fp) __asm__("__srefill");
/* __srefill_x00127228: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/refill.c, MIT); ee-gcc 2.96 -O2 -G0 */
int __srefill_x00127228(Fil_x00127228 *fp)
{
    do {
        if (fp->data == 0)
            fp->data = _impure_ptr_x00127228;
        if (!fp->data->sdidinit)
            __sinit_x00127228(fp->data);
    } while (0);
    fp->r = 0;
    if (fp->flags & 0x20)
        return -1;
    if ((fp->flags & 0x4) == 0) {
        if ((fp->flags & 0x10) == 0)
            return -1;
        if (fp->flags & 0x8) {
            if (fflush_x00127228(fp))
                return -1;
            fp->flags &= ~0x8;
            fp->w = 0;
            fp->lbfsize = 0;
        }
        fp->flags |= 0x4;
    } else {
        if (fp->ub.base != 0) {
            if (fp->ub.base != fp->ubuf)
                _free_r_x00127228(fp->data, fp->ub.base);
            fp->ub.base = 0;
            if ((fp->r = fp->ur) != 0) {
                fp->p = fp->up;
                return 0;
            }
        }
    }
    if (fp->bf.base == 0)
        __smakebuf_x00127228(fp);
    if (fp->flags & 3)
        _fwalk(fp->data, lflush_x00127228);
    fp->p = fp->bf.base;
    fp->r = (*fp->read)(fp->cookie, (char *)fp->p, fp->bf.size);
    fp->flags &= ~0x2000;
    if (fp->r <= 0) {
        if (fp->r == 0)
            fp->flags |= 0x20;
        else {
            fp->r = 0;
            fp->flags |= 0x40;
        }
        return -1;
    }
    return 0;
}
struct _reent_x001273A8 { int _errno; };
extern int errno_x001273A8 __asm__("errno");
void *sbrk_x001273A8 (int) __asm__("sbrk");
void *_sbrk_r_x001273A8 (struct _reent_x001273A8 *ptr, int incr) __asm__("_sbrk_r");
/* _sbrk_r: newlib's libc/reent/sbrkr.c (SCE3010 build: calls sbrk, errno a global); ee-gcc 2.96 -O2 -G0.
   Copyright (c) 1994, 1997 Cygnus Solutions (newlib, see LICENSES/THIRD_PARTY.md) */
void *
_sbrk_r_x001273A8 (struct _reent_x001273A8 *ptr, int incr)
{
  char *ret;

  errno_x001273A8 = 0;
  if ((ret = (char *)(sbrk_x001273A8 (incr))) == (void *) -1 && errno_x001273A8 != 0)
    ptr->_errno = errno_x001273A8;
  return ret;
}
