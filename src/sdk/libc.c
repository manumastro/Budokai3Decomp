/* newlib objects were assembled without delay-slot filling: as-flags: -O1 */
#include "common.h"

extern s32 _impure_ptr;

s32 func_001221A8_x001221A8(s32 arg0) __asm__("func_001221A8");
s32 func_001221A8_x001221A8(s32 arg0)
{
  s32 var_v0;
  int new_var;
  new_var = arg0 < 0;
  var_v0 = arg0;
  if (new_var)
  {
    var_v0 = -var_v0;
  }
  return var_v0;
}
s32 func_001291A0_x001221C0(s32, s32) __asm__("func_001291A0");
void func_001221C0_x001221C0(s32 arg0) __asm__("func_001221C0");
void func_001221C0_x001221C0(s32 arg0) {
    func_001291A0_x001221C0(arg0, 0);
}
long strtol_x001221D8(const char *s, char **ptr, int base) __asm__("func_00129428");
int func_001221D8_x001221D8(void *str) __asm__("func_001221D8");
/* atoi: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/atoi.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001221D8_x001221D8(void *str)
{
    return (int)strtol_x001221D8(str, 0, 0xA);
}
typedef unsigned int size_t_x00122200;
extern int atexit (void (*__func_x00122200)(void)) __asm__("__func");
extern void * bsearch (const void * __key,
                       const void * __base,
                       size_t_x00122200 __nmemb,
                       size_t_x00122200 __size,
                       int (* _compar_x00122200) (const void *, const void *)) __asm__("_compar");
extern void qsort (void * __base, size_t_x00122200 __nmemb, size_t_x00122200 __size, int(*_compar_x00122200)(const void *, const void *)) __asm__("_compar");
long strtol_x00122200 (const char *__n, char **__end_PTR, int __base) __asm__("func_00129428");
long
func_00122200_x00122200(const char *s) __asm__("func_00122200");
/* atol: from newlib 1.10.0 (sourceware.org) (libc/stdlib/atol.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
long
func_00122200_x00122200(const char *s)
{
  return strtol_x00122200 (s, ((void*)0), 10);
}
void *memset_x00122220(void *dst, int c, unsigned int n) __asm__("memset");
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00122220;
struct Reent_x00122220;
typedef struct Glue_x00122220 {
    struct Glue_x00122220 *next;
    int niobs;
    struct Fil_x00122220 *iobs;
} Glue_x00122220;
typedef struct Fil_x00122220 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00122220 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x00122220 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00122220 lb;
    int blksize;
    int offset;
    struct Reent_x00122220 *data;
} Fil_x00122220;
struct _Bigint_x00122220 {
    struct _Bigint_x00122220 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00122220 {
    int err;
    Fil_x00122220 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00122220 *result;
    int result_k;
    struct _Bigint_x00122220 *p5s;
    struct _Bigint_x00122220 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00122220 glue;
    Fil_x00122220 sf[3];
} Reent_x00122220;
struct Reent_x00122220;
void *_malloc_r_x00122220(struct Reent_x00122220 *reent_ptr, int bytes) __asm__("func_00124E68");
typedef struct _Bigint_x00122220 _Bigint_x00122220;
typedef unsigned int INTERNAL_SIZE_T_x00122220;
struct malloc_chunk_x00122220 {
    INTERNAL_SIZE_T_x00122220 prev_size;
    INTERNAL_SIZE_T_x00122220 size;
    struct malloc_chunk_x00122220 *fd;
    struct malloc_chunk_x00122220 *bk;
};
typedef struct malloc_chunk_x00122220 *mchunkptr_x00122220;
void *_calloc_r_x00122220(Reent_x00122220 *rptr, unsigned int n, unsigned int elem_size) __asm__("_calloc_r");
/* _calloc_r_x00122220: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/callocr.c, MIT); ee-gcc 2.96 -O2 -G0 */
void *_calloc_r_x00122220(Reent_x00122220 *rptr, unsigned int n, unsigned int elem_size)
{
    mchunkptr_x00122220 p;
    INTERNAL_SIZE_T_x00122220 csz;
    INTERNAL_SIZE_T_x00122220 sz = n * elem_size;
    void *mem = _malloc_r_x00122220(rptr, sz);
    if (mem == 0) {
        return 0;
    } else {
        p = ((mchunkptr_x00122220)((char *)(mem) - 2 * (sizeof(INTERNAL_SIZE_T_x00122220))));
        csz = ((p)->size & ~(0x3));
        do { INTERNAL_SIZE_T_x00122220 mzsz = (csz - (sizeof(INTERNAL_SIZE_T_x00122220))); if (mzsz <= 9 * sizeof(mzsz)) { INTERNAL_SIZE_T_x00122220 *mz = (INTERNAL_SIZE_T_x00122220 *)(mem); if (mzsz >= 5 * sizeof(mzsz)) { *mz++ = 0; *mz++ = 0; if (mzsz >= 7 * sizeof(mzsz)) { *mz++ = 0; *mz++ = 0; if (mzsz >= 9 * sizeof(mzsz)) { *mz++ = 0; *mz++ = 0; } } } *mz++ = 0; *mz++ = 0; *mz = 0; } else memset_x00122220((mem), 0, mzsz); } while (0);
        return mem;
    }
}
struct _reent_x001222D8 { int _errno; };
extern int errno_x001222D8 __asm__("errno");
int close_x001222D8 (int) __asm__("close");
int _close_r_x001222D8 (struct _reent_x001222D8 *ptr, int fd) __asm__("_close_r");
/* _close_r: newlib's libc/reent/closer.c (SCE3010 build: calls close, errno a global); ee-gcc 2.96 -O2 -G0.
   Copyright (c) 1994, 1997 Cygnus Solutions (newlib, see LICENSES/THIRD_PARTY.md) */
int
_close_r_x001222D8 (struct _reent_x001222D8 *ptr, int fd)
{
  int ret;

  errno_x001222D8 = 0;
  if ((ret = close_x001222D8 (fd)) == -1 && errno_x001222D8 != 0)
    ptr->_errno = errno_x001222D8;
  return ret;
}
struct _Bigint_x00122330 {
    struct _Bigint_x00122330 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct _Bigint_x00122330 _Bigint_x00122330;
int __mcmp_x00122330(_Bigint_x00122330 *a, _Bigint_x00122330 *b) __asm__("func_00126378");
int func_00122330_x00122330(_Bigint_x00122330 *b, _Bigint_x00122330 *S) __asm__("func_00122330");
/* quorem: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/dtoa.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00122330_x00122330(_Bigint_x00122330 *b, _Bigint_x00122330 *S)
{
    int n;
    int borrow, y;
    unsigned int carry, q, ys;
    unsigned int *bx, *bxe, *sx, *sxe;
    int z;
    unsigned int si, zs;
    n = S->_wds;
    if (b->_wds < n) {
        return 0;
    }
    sx = S->_x;
    sxe = sx + --n;
    bx = b->_x;
    bxe = bx + n;
    q = *bxe / (*sxe + 1);
    if (q) {
        borrow = 0;
        carry = 0;
        do {
            si = *sx++;
            ys = (si & 0xFFFF) * q + carry;
            zs = (si >> 16) * q + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xFFFF) - (ys & 0xFFFF) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xFFFF) + borrow;
            borrow = z >> 16;
            ((unsigned short *)bx)[1] = (unsigned short)z;
            ((unsigned short *)bx)[0] = (unsigned short)y;
            bx++;
        } while (sx <= sxe);
        if (!*bxe) {
            bx = b->_x;
            while (--bxe > bx && !*bxe) {
                --n;
            }
            b->_wds = n;
        }
    }
    if (__mcmp_x00122330(b, S) >= 0) {
        q++;
        borrow = 0;
        carry = 0;
        bx = b->_x;
        sx = S->_x;
        do {
            si = *sx++;
            ys = (si & 0xFFFF) + carry;
            zs = (si >> 16) + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xFFFF) - (ys & 0xFFFF) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xFFFF) + borrow;
            borrow = z >> 16;
            ((unsigned short *)bx)[1] = (unsigned short)z;
            ((unsigned short *)bx)[0] = (unsigned short)y;
            bx++;
        } while (sx <= sxe);
        bx = b->_x;
        bxe = bx + n;
        if (!*bxe) {
            while (--bxe > bx && !*bxe) {
                --n;
            }
            b->_wds = n;
        }
    }
    return q;
}
typedef unsigned int size_t_x00122560;
typedef unsigned int __uint32_t_x00122560;
typedef unsigned int __ULong_x00122560;
typedef int __Long_x00122560;
struct _Bigint_x00122560 { struct _Bigint_x00122560 *_next; int _k, _maxwds, _sign, _wds; __ULong_x00122560 _x[1]; };
struct _reent_x00122560 { char _pad[0x40]; struct _Bigint_x00122560 *_result; int _result_k; struct _Bigint_x00122560 *_p5s; struct _Bigint_x00122560 **_freelist; };
extern void *memcpy_x00122560(void *, const void *, size_t_x00122560) __asm__("func_00125740");
union double_union_x00122560
{
  double d;
  __uint32_t_x00122560 i[2];
};
typedef struct _Bigint_x00122560 _Bigint_x00122560;
_Bigint_x00122560 *Newlib_Balloc_x00122560(struct _reent_x00122560 *p, int k) __asm__("func_00125A88");
void Newlib_Bfree_x00122560(struct _reent_x00122560 *p, _Bigint_x00122560 *v) __asm__("func_00125B30");
_Bigint_x00122560 *Newlib_Multadd_x00122560(struct _reent_x00122560 *p, _Bigint_x00122560 *, int, int) __asm__("func_00125B60");
_Bigint_x00122560 *Newlib_I2b_x00122560(struct _reent_x00122560 *, int) __asm__("func_00125ED8");
_Bigint_x00122560 *Newlib_Multiply_x00122560(struct _reent_x00122560 *, _Bigint_x00122560 *, _Bigint_x00122560 *) __asm__("func_00125F10");
_Bigint_x00122560 *Newlib_Pow5mult_x00122560(struct _reent_x00122560 *, _Bigint_x00122560 *, int k) __asm__("func_00126120");
int Newlib_Hi0bits_x00122560(__ULong_x00122560) __asm__("func_00125D98");
_Bigint_x00122560 *Newlib_D2b_x00122560(struct _reent_x00122560 *p, double d, int *e, int *bits) __asm__("func_001267D8");
_Bigint_x00122560 *Newlib_Lshift_x00122560(struct _reent_x00122560 *p, _Bigint_x00122560 *b, int k) __asm__("func_00126220");
_Bigint_x00122560 *Newlib_Mdiff_x00122560(struct _reent_x00122560 *p, _Bigint_x00122560 *a, _Bigint_x00122560 *b) __asm__("func_001263E0");
int Newlib_Mcmp_x00122560(_Bigint_x00122560 *a, _Bigint_x00122560 *b) __asm__("func_00126378");
int Newlib_Quorem_x00122560(_Bigint_x00122560 *b, _Bigint_x00122560 *S) __asm__("func_00122330");
extern const double D_00499F00_x00122560[] __asm__("D_0045ED30");
extern const double D_00499E38_x00122560[] __asm__("D_0045EC68");
char *
func_00122560_x00122560(struct _reent_x00122560 *ptr ,
        double _d ,
        int mode ,
        int ndigits ,
        int *decpt ,
        int *sign ,
        char **rve) __asm__("func_00122560");
/* _dtoa_r: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_1220A8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
char *
func_00122560_x00122560(struct _reent_x00122560 *ptr ,
        double _d ,
        int mode ,
        int ndigits ,
        int *decpt ,
        int *sign ,
        char **rve)
{
  int bbits, b2, b5, be, dig, i, ieps, ilim, ilim0, ilim1, j, j1, k, k0,
    k_check, leftright, m2, m5, s2, s5, spec_case, try_quick;
  union double_union_x00122560 d, d2, eps;
  __Long_x00122560 L;
  int denorm;
  __ULong_x00122560 x;
  _Bigint_x00122560 *b, *b1, *delta, *mlo, *mhi, *S;
  double ds;
  char *s, *s0;
  d.d = _d;
  if (ptr->_result)
    {
      ptr->_result->_k = ptr->_result_k;
      ptr->_result->_maxwds = 1 << ptr->_result_k;
      Newlib_Bfree_x00122560 (ptr, ptr->_result);
      ptr->_result = 0;
    }
  if ((d.i[1]) & ((__uint32_t_x00122560)0x80000000L))
    {
      *sign = 1;
      (d.i[1]) &= ~((__uint32_t_x00122560)0x80000000L);
    }
  else
    *sign = 0;
  if (((d.i[1]) & ((__uint32_t_x00122560)0x7ff00000L)) == ((__uint32_t_x00122560)0x7ff00000L))
    {
      *decpt = 9999;
      s =
        !(d.i[0]) && !((d.i[1]) & 0xfffff) ? "Infinity" :
        "NaN";
      if (rve)
        *rve =
          s[3] ? s + 8 :
          s + 3;
      return s;
    }
  if (!d.d)
    {
      *decpt = 1;
      s = "0";
      if (rve)
        *rve = s + 1;
      return s;
    }
  b = Newlib_D2b_x00122560 (ptr, d.d, &be, &bbits);
  if ((i = (int) ((d.i[1]) >> 20 & (((__uint32_t_x00122560)0x7ff00000L) >> 20))) != 0)
    {
      d2.d = d.d;
      (d2.i[1]) &= ((__uint32_t_x00122560)0xfffffL);
      (d2.i[1]) |= ((__uint32_t_x00122560)0x3ff00000L);
      i -= 1023;
      denorm = 0;
    }
  else
    {
      i = bbits + be + (1023 + (53 - 1) - 1);
      x = (i > 32) ? ((d.i[1]) << (64 - i)) | ((d.i[0]) >> (i - 32))
       : ((d.i[0]) << (32 - i));
      d2.d = x;
      (d2.i[1]) -= 31 * ((__uint32_t_x00122560)0x100000L);
      i -= (1023 + (53 - 1) - 1) + 1;
      denorm = 1;
    }
  ds = (d2.d - 1.5) * 0.289529654602168 + 0.1760912590558 + i * 0.301029995663981;
  k = (int) ds;
  if (ds < 0. && ds != k)
    k--;
  k_check = 1;
  if (k >= 0 && k <= 22)
    {
      if (d.d < D_00499E38_x00122560[k])
        k--;
      k_check = 0;
    }
  j = bbits - i - 1;
  if (j >= 0)
    {
      b2 = 0;
      s2 = j;
    }
  else
    {
      b2 = -j;
      s2 = 0;
    }
  if (k >= 0)
    {
      b5 = 0;
      s5 = k;
      s2 += k;
    }
  else
    {
      b2 -= k;
      b5 = -k;
      s5 = 0;
    }
  if (mode < 0 || mode > 9)
    mode = 0;
  try_quick = 1;
  if (mode > 5)
    {
      mode -= 4;
      try_quick = 0;
    }
  leftright = 1;
  ilim = ilim1 = -1;
  switch (mode)
    {
    case 0:
    case 1:
      i = 18;
      ndigits = 0;
      break;
    case 2:
      leftright = 0;
    case 4:
      if (ndigits <= 0)
        ndigits = 1;
      ilim = ilim1 = i = ndigits;
      break;
    case 3:
      leftright = 0;
    case 5:
      i = ndigits + k + 1;
      ilim = i;
      ilim1 = i - 1;
      if (i <= 0)
        i = 1;
    }
  j = sizeof (__ULong_x00122560);
  for (ptr->_result_k = 0; sizeof (_Bigint_x00122560) - sizeof (__ULong_x00122560) + j <= i;
       j <<= 1)
    ptr->_result_k++;
  ptr->_result = Newlib_Balloc_x00122560 (ptr, ptr->_result_k);
  s = s0 = (char *) ptr->_result;
  if (ilim >= 0 && ilim <= 14 && try_quick)
    {
      i = 0;
      d2.d = d.d;
      k0 = k;
      ilim0 = ilim;
      ieps = 2;
      if (k > 0)
        {
          ds = D_00499E38_x00122560[k & 0xf];
          j = k >> 4;
          if (j & 0x10)
            {
              j &= 0x10 - 1;
              d.d /= D_00499F00_x00122560[5 - 1];
              ieps++;
            }
          for (; j; j >>= 1, i++)
            if (j & 1)
              {
                ieps++;
                ds *= D_00499F00_x00122560[i];
              }
          d.d /= ds;
        }
      else if ((j1 = -k) != 0)
        {
          d.d *= D_00499E38_x00122560[j1 & 0xf];
          for (j = j1 >> 4; j; j >>= 1, i++)
            if (j & 1)
              {
                ieps++;
                d.d *= D_00499F00_x00122560[i];
              }
        }
      if (k_check && d.d < 1. && ilim > 0)
        {
          if (ilim1 <= 0)
            goto fast_failed;
          ilim = ilim1;
          k--;
          d.d *= 10.;
          ieps++;
        }
      eps.d = ieps * d.d + 7.;
      (eps.i[1]) -= (53 - 1) * ((__uint32_t_x00122560)0x100000L);
      if (ilim == 0)
        {
          S = mhi = 0;
          d.d -= 5.;
          if (d.d > eps.d)
            goto one_digit;
          if (d.d < -eps.d)
            goto no_digits;
          goto fast_failed;
        }
      if (leftright)
        {
          eps.d = 0.5 / D_00499E38_x00122560[ilim - 1] - eps.d;
          for (i = 0;;)
            {
              L = d.d;
              d.d -= L;
              *s++ = '0' + (int) L;
              if (d.d < eps.d)
                goto ret1;
              if (1. - d.d < eps.d)
                goto bump_up;
              if (++i >= ilim)
                break;
              eps.d *= 10.;
              d.d *= 10.;
            }
        }
      else
        {
          eps.d *= D_00499E38_x00122560[ilim - 1];
          for (i = 1;; i++, d.d *= 10.)
            {
              L = d.d;
              d.d -= L;
              *s++ = '0' + (int) L;
              if (i == ilim)
                {
                  if (d.d > 0.5 + eps.d)
                    goto bump_up;
                  else if (d.d < 0.5 - eps.d)
                    {
                      while (*--s == '0');
                      s++;
                      goto ret1;
                    }
                  break;
                }
            }
        }
    fast_failed:
      s = s0;
      d.d = d2.d;
      k = k0;
      ilim = ilim0;
    }
  if (be >= 0 && k <= 14)
    {
      ds = D_00499E38_x00122560[k];
      if (ndigits < 0 && ilim <= 0)
        {
          S = mhi = 0;
          if (ilim < 0 || d.d <= 5 * ds)
            goto no_digits;
          goto one_digit;
        }
      for (i = 1;; i++)
        {
          L = d.d / ds;
          d.d -= L * ds;
          *s++ = '0' + (int) L;
          if (i == ilim)
            {
              d.d += d.d;
             if ((d.d > ds) || ((d.d == ds) && (L & 1)))
                {
                bump_up:
                  while (*--s == '9')
                    if (s == s0)
                      {
                        k++;
                        *s = '0';
                        break;
                      }
                  ++*s++;
                }
              break;
            }
          if (!(d.d *= 10.))
            break;
        }
      goto ret1;
    }
  m2 = b2;
  m5 = b5;
  mhi = mlo = 0;
  if (leftright)
    {
      if (mode < 2)
        {
          i =
            denorm ? be + (1023 + (53 - 1) - 1 + 1) :
            1 + 53 - bbits;
        }
      else
        {
          j = ilim - 1;
          if (m5 >= j)
            m5 -= j;
          else
            {
              s5 += j -= m5;
              b5 += j;
              m5 = 0;
            }
          if ((i = ilim) < 0)
            {
              m2 -= i;
              i = 0;
            }
        }
      b2 += i;
      s2 += i;
      mhi = Newlib_I2b_x00122560 (ptr, 1);
    }
  if (m2 > 0 && s2 > 0)
    {
      i = m2 < s2 ? m2 : s2;
      b2 -= i;
      m2 -= i;
      s2 -= i;
    }
  if (b5 > 0)
    {
      if (leftright)
        {
          if (m5 > 0)
            {
              mhi = Newlib_Pow5mult_x00122560 (ptr, mhi, m5);
              b1 = Newlib_Multiply_x00122560 (ptr, mhi, b);
              Newlib_Bfree_x00122560 (ptr, b);
              b = b1;
            }
         if ((j = b5 - m5) != 0)
            b = Newlib_Pow5mult_x00122560 (ptr, b, j);
        }
      else
        b = Newlib_Pow5mult_x00122560 (ptr, b, b5);
    }
  S = Newlib_I2b_x00122560 (ptr, 1);
  if (s5 > 0)
    S = Newlib_Pow5mult_x00122560 (ptr, S, s5);
  spec_case = 0;
  if (mode < 2)
    {
      if (!(d.i[0]) && !((d.i[1]) & ((__uint32_t_x00122560)0xfffffL))
          && (d.i[1]) & ((__uint32_t_x00122560)0x7ff00000L)
        )
        {
          b2 += 1;
          s2 += 1;
          spec_case = 1;
        }
    }
  if ((i = ((s5 ? 32 - Newlib_Hi0bits_x00122560 (S->_x[S->_wds - 1]) : 1) + s2) & 0x1f) != 0)
    i = 32 - i;
  if (i > 4)
    {
      i -= 4;
      b2 += i;
      m2 += i;
      s2 += i;
    }
  else if (i < 4)
    {
      i += 28;
      b2 += i;
      m2 += i;
      s2 += i;
    }
  if (b2 > 0)
    b = Newlib_Lshift_x00122560 (ptr, b, b2);
  if (s2 > 0)
    S = Newlib_Lshift_x00122560 (ptr, S, s2);
  if (k_check)
    {
      if (Newlib_Mcmp_x00122560 (b, S) < 0)
        {
          k--;
          b = Newlib_Multadd_x00122560 (ptr, b, 10, 0);
          if (leftright)
            mhi = Newlib_Multadd_x00122560 (ptr, mhi, 10, 0);
          ilim = ilim1;
        }
    }
  if (ilim <= 0 && mode > 2)
    {
      if (ilim < 0 || Newlib_Mcmp_x00122560 (b, S = Newlib_Multadd_x00122560 (ptr, S, 5, 0)) <= 0)
        {
        no_digits:
          k = -1 - ndigits;
          goto ret;
        }
    one_digit:
      *s++ = '1';
      k++;
      goto ret;
    }
  if (leftright)
    {
      if (m2 > 0)
        mhi = Newlib_Lshift_x00122560 (ptr, mhi, m2);
      mlo = mhi;
      if (spec_case)
        {
          mhi = Newlib_Balloc_x00122560 (ptr, mhi->_k);
          memcpy_x00122560((char *)&mhi->_sign, (char *)&mlo->_sign, mlo->_wds*sizeof(__Long_x00122560) + 2*sizeof(int));
          mhi = Newlib_Lshift_x00122560 (ptr, mhi, 1);
        }
      for (i = 1;; i++)
        {
          dig = Newlib_Quorem_x00122560 (b, S) + '0';
          j = Newlib_Mcmp_x00122560 (b, mlo);
          delta = Newlib_Mdiff_x00122560 (ptr, S, mhi);
          j1 = delta->_sign ? 1 : Newlib_Mcmp_x00122560 (b, delta);
          Newlib_Bfree_x00122560 (ptr, delta);
          if (j1 == 0 && !mode && !((d.i[0]) & 1))
            {
              if (dig == '9')
                goto round_9_up;
              if (j > 0)
                dig++;
              *s++ = dig;
              goto ret;
            }
         if ((j < 0) || ((j == 0) && !mode
              && !((d.i[0]) & 1)
           ))
            {
              if (j1 > 0)
                {
                  b = Newlib_Lshift_x00122560 (ptr, b, 1);
                  j1 = Newlib_Mcmp_x00122560 (b, S);
                 if (((j1 > 0) || ((j1 == 0) && (dig & 1)))
                      && dig++ == '9')
                    goto round_9_up;
                }
              *s++ = dig;
              goto ret;
            }
          if (j1 > 0)
            {
              if (dig == '9')
                {
                round_9_up:
                  *s++ = '9';
                  goto roundoff;
                }
              *s++ = dig + 1;
              goto ret;
            }
          *s++ = dig;
          if (i == ilim)
            break;
          b = Newlib_Multadd_x00122560 (ptr, b, 10, 0);
          if (mlo == mhi)
            mlo = mhi = Newlib_Multadd_x00122560 (ptr, mhi, 10, 0);
          else
            {
              mlo = Newlib_Multadd_x00122560 (ptr, mlo, 10, 0);
              mhi = Newlib_Multadd_x00122560 (ptr, mhi, 10, 0);
            }
        }
    }
  else
    for (i = 1;; i++)
      {
        *s++ = dig = Newlib_Quorem_x00122560 (b, S) + '0';
        if (i >= ilim)
          break;
        b = Newlib_Multadd_x00122560 (ptr, b, 10, 0);
      }
  b = Newlib_Lshift_x00122560 (ptr, b, 1);
  j = Newlib_Mcmp_x00122560 (b, S);
  if ((j > 0) || ((j == 0) && (dig & 1)))
    {
    roundoff:
      while (*--s == '9')
        if (s == s0)
          {
            k++;
            *s++ = '1';
            goto ret;
          }
      ++*s++;
    }
  else
    {
      while (*--s == '0');
      s++;
    }
ret:
  Newlib_Bfree_x00122560 (ptr, S);
  if (mhi)
    {
      if (mlo && mlo != mhi)
        Newlib_Bfree_x00122560 (ptr, mlo);
      Newlib_Bfree_x00122560 (ptr, mhi);
    }
ret1:
  Newlib_Bfree_x00122560 (ptr, b);
  *s = 0;
  *decpt = k + 1;
  if (rve)
    *rve = s;
  return s0;
}
__asm__("# rebind func_00122560 0x00122560");
s32 __errno(void) {
    return _impure_ptr;
}
typedef struct A00123330_x001237D8 { struct A00123330_x001237D8 *_next; int _ind; void (*_fns[32])(void); } A00123330_x001237D8;
typedef struct { char p[0x3C]; void (*__cleanup)(void *); char q[0x108]; A00123330_x001237D8 *_atexit; } R00123330_x001237D8;
extern R00123330_x001237D8 *D_00489738_x001237D8 __asm__("_impure_ptr");
extern void Newlib_SysExit_Thunk_x001237D8(int) __asm__("func_00100218");
void func_001237D8_x001237D8(int code) __asm__("func_001237D8");
/* Libc_Exit: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libc/libc_123330.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_001237D8_x001237D8(int code)
{
    A00123330_x001237D8 *p;
    int n;
    for (p = D_00489738_x001237D8->_atexit; p; p = p->_next)
        for (n = p->_ind; --n >= 0;)
            (*p->_fns[n])();
    if (D_00489738_x001237D8->__cleanup) (*D_00489738_x001237D8->__cleanup)(D_00489738_x001237D8);
    Newlib_SysExit_Thunk_x001237D8(code);
}
typedef unsigned int __uint32_t_x00123888;
typedef unsigned int size_t_x00123888;
typedef __uint32_t_x00123888 __ULong_x00123888;
struct _glue_x00123888
{
  struct _glue_x00123888 *_next;
  int _niobs;
  struct __sFILE_x00123888 *_iobs;
};
struct _Bigint_x00123888
{
  struct _Bigint_x00123888 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x00123888 _x[1];
};
struct __tm_x00123888
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
struct _atexit_x00123888 {
        struct _atexit_x00123888 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x00123888 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x00123888;
struct __sFILE_x00123888 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x00123888 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read_x00123888) (void * _cookie, char *_buf, int _n);
  int (*_write_x00123888) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x00123888 (*_seek) (void * _cookie, _fpos_t_x00123888 _offset, int _whence);
  int (*_close_x00123888) (void * _cookie);
  struct __sbuf_x00123888 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x00123888 _lb;
  int _blksize;
  int _offset;
  struct _reent_x00123888 *_data;
};
struct _rand48_x00123888 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x00123888
{
  int _errno;
  struct __sFILE_x00123888 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x00123888 *);
  struct _Bigint_x00123888 *_result;
  int _result_k;
  struct _Bigint_x00123888 *_p5s;
  struct _Bigint_x00123888 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x00123888 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x00123888 _r48;
        } _reent_x00123888;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x00123888 *_atexit_x00123888;
  struct _atexit_x00123888 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x00123888 __sglue;
  struct __sFILE_x00123888 __sf[3];
};
extern struct _reent_x00123888 *_impure_ptr_x00123888 __asm__("_impure_ptr");
typedef _fpos_t_x00123888 fpos_t_x00123888;
typedef struct __sFILE_x00123888 FILE_x00123888;
extern FILE_x00123888 *funopen (const void * _cookie,
                int (*readfn_x00123888)(void * _cookie, char *_buf, int _n),
                int (*writefn)(void * _cookie, const char *_buf, int _n),
                fpos_t_x00123888 (*seekfn)(void * _cookie, fpos_t_x00123888 _off, int _whence),
                int (*closefn)(void * _cookie)) __asm__("readfn");
int _close_x00123888 (int __fildes ) __asm__("_close");
int _read_x00123888 (int __fd, void *__buf, size_t_x00123888 __nbyte ) __asm__("_read");
int _write_x00123888 (int __fd, const void *__buf, size_t_x00123888 __nbyte ) __asm__("_write");
extern void __sinit_x00123888 (struct _reent_x00123888 *) __asm__("func_00123BB0");
extern int _fwalk_x00123888 (struct _reent_x00123888 *, int (*)(FILE_x00123888 *)) __asm__("func_00124608");
int
fflush_x00123888(register FILE_x00123888 * fp) __asm__("fflush");
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
/* fflush_x00123888: from newlib 1.10.0 (sourceware.org) (libc/stdio/fflush_x00123888.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
int
fflush_x00123888(register FILE_x00123888 * fp)
{
  register unsigned char *p;
  register int n, t;
  if (fp == ((void*)0))
    return _fwalk_x00123888 (_impure_ptr_x00123888, fflush_x00123888);
  do { if ((fp)->_data == 0) (fp)->_data = _impure_ptr_x00123888; if (!(fp)->_data->__sdidinit) __sinit_x00123888 ((fp)->_data); } while (0);
  t = fp->_flags;
  if ((t & 0x0008) == 0 || (p = fp->_bf._base) == ((void*)0))
    return 0;
  n = fp->_p - p;
  fp->_p = p;
  fp->_w = t & (0x0001 | 0x0002) ? 0 : fp->_bf._size;
  while (n > 0)
    {
      t = (*fp->_write_x00123888) (fp->_cookie, (char *) p, n);
      if (t <= 0)
        {
          fp->_flags |= 0x0040;
          return (-1);
        }
      p += t;
      n -= t;
    }
  return 0;
}
extern s32 __sclose_x001239A0 __asm__("__sclose");
extern s32 __sread_x001239A0 __asm__("__sread");
extern s32 __sseek_x001239A0 __asm__("__sseek");
extern s32 __swrite_x001239A0 __asm__("__swrite");
void func_001239A0_x001239A0(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) __asm__("func_001239A0");
void func_001239A0_x001239A0(u8 *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  *((s32 *) (((u8 *) arg0) + 0x54)) = arg3;
  *((s16 *) (((u8 *) arg0) + 0xC)) = arg1;
  *((s16 *) (((u8 *) arg0) + 0xE)) = arg2;
  *((s32 **) (((u8 *) arg0) + 0x20)) = &__sread_x001239A0;
  *((s32 **) (((u8 *) arg0) + 0x24)) = &__swrite_x001239A0;
  *((s32 **) (((u8 *) arg0) + 0x28)) = &__sseek_x001239A0;
  *((s32 **) (((u8 *) arg0) + 0x2C)) = &__sclose_x001239A0;
 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0x14)) = 0; *((s32 *) (((u8 *) arg0) + 0x18)) = 0; } while (0);
  *((u8 **) (((u8 *) arg0) + 0x1C)) = arg0;
}
