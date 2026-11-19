/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdlib/mprec.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member mprec.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>

#include <libc_internal.h>

int _hi0bits(unsigned int x);

/* newlib mprec.h Storeinc for a little-endian target: the two halves of the
   word go out as halfword stores. */
#define Storeinc(a, b, c)                                                                          \
    (((unsigned short *)(a))[1] = (unsigned short)(b),                                             \
     ((unsigned short *)(a))[0] = (unsigned short)(c), (a)++)

_Bigint *_pow5mult(Reent *ptr, _Bigint *b, int k);

/* newlib mprec.c ulp(): the double is one 64-bit register here, and the
   word0/word1 halves of the newlib source are a union, so gcc rewrites the
   halves as shifts and masks instead of a stack home. */
typedef union {
    double d;
    unsigned int i[2];
} MpDouble;

#define word0(x) ((x).i[1])

#define word1(x) ((x).i[0])

double _ulp(double xx);

_Bigint *_d2b(Reent *ptr, double dd, int *e, int *bits);

double _ratio(_Bigint *a, _Bigint *b);

#define __mprec_tens D_0045EC68
extern const double __mprec_tens[];




_Bigint *_Balloc(Reent *ptr, int k)
{
    _Bigint *rv;
    int x;

    if (ptr->freelist == 0) {
        ptr->freelist = (_Bigint **)_calloc_r(ptr, 4, 16);
        if (ptr->freelist == 0) {
            return 0;
        }
    }
    rv = ptr->freelist[k];
    if (rv != 0) {
        ptr->freelist[k] = rv->_next;
    } else {
        x = 1 << k;
        rv = (_Bigint *)_calloc_r(ptr, 1, sizeof(_Bigint) + (x - 1) * sizeof(int));
        if (rv == 0) {
            return 0;
        }
        rv->_k = k;
        rv->_maxwds = x;
    }
    rv->_sign = rv->_wds = 0;
    return rv;
}


void _Bfree(Reent *ptr, _Bigint *v)
{
    if (v) {
        v->_next = ptr->freelist[v->_k];
        ptr->freelist[v->_k] = v;
    }
}


_Bigint *_multadd(Reent *ptr, _Bigint *b, int m, int a)
{
    _Bigint *b1;
    unsigned int *x;
    unsigned int xi, y, z;
    int i, wds;

    wds = b->_wds;
    x = b->_x;
    i = 0;
    do {
        xi = *x;
        y = (xi & 0xFFFF) * m + a;
        z = (xi >> 16) * m + (y >> 16);
        a = (int)(z >> 16);
        *x++ = (z << 16) + (y & 0xFFFF);
    } while (++i < wds);
    if (a != 0) {
        if (wds >= b->_maxwds) {
            b1 = _Balloc(ptr, b->_k + 1);
            memcpy((char *)&b1->_sign, (char *)&b->_sign, b->_wds * 4 + 8);
            _Bfree(ptr, b);
            b = b1;
        }
        b->_x[wds++] = a;
        b->_wds = wds;
    }
    return b;
}


_Bigint *_s2b(Reent *ptr, const char *s, int nd0, int nd, unsigned int y9)
{
    _Bigint *b;
    int i, k;
    int x, y;

    x = (nd + 8) / 9;
    for (k = 0, y = 1; x > y; y <<= 1, k++)
        ;
    b = _Balloc(ptr, k);
    b->_x[0] = y9;
    b->_wds = 1;
    i = 9;
    if (9 < nd0) {
        s += 9;
        do
            b = _multadd(ptr, b, 10, *s++ - '0');
        while (++i < nd0);
        s++;
    } else
        s += 10;
    for (; i < nd; i++)
        b = _multadd(ptr, b, 10, *s++ - '0');
    return b;
}
typedef unsigned int __uint32_t_x00125D98;
typedef __uint32_t_x00125D98 __ULong_x00125D98;
int
_hi0bits_x00125D98(register __ULong_x00125D98 x) __asm__("_hi0bits");
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
/* _hi0bits_x00125D98: from newlib 1.10.0 (sourceware.org) (libc/stdlib/mprec.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
int
_hi0bits_x00125D98(register __ULong_x00125D98 x)
{
  register int k = 0;
  if (!(x & 0xffff0000))
    {
      k = 16;
      x <<= 16;
    }
  if (!(x & 0xff000000))
    {
      k += 8;
      x <<= 8;
    }
  if (!(x & 0xf0000000))
    {
      k += 4;
      x <<= 4;
    }
  if (!(x & 0xc0000000))
    {
      k += 2;
      x <<= 2;
    }
  if (!(x & 0x80000000))
    {
      k++;
      if (!(x & 0x40000000))
        return 32;
    }
  return k;
}


int _lo0bits(unsigned int *y)
{
    unsigned int v = *y;
    int n;
    if (v & 7) {
        if (v & 1) {
            return 0;
        }
        if (v & 2) {
            *y = v >> 1;
            return 1;
        }
        *y = v >> 2;
        return 2;
    }
    n = 0;
    if ((v & 0xFFFF) == 0) {
        n = 0x10;
        v >>= 16;
    }
    if ((v & 0xFF) == 0) {
        n += 8;
        v >>= 8;
    }
    if ((v & 0xF) == 0) {
        n += 4;
        v >>= 4;
    }
    if ((v & 3) == 0) {
        n += 2;
        v >>= 2;
    }
    if (v & 1) {
        *y = v;
    } else {
        v >>= 1;
        n += 1;
        if (v == 0) {
            return 0x20;
        }
        *y = v;
    }
    return n;
}


_Bigint *_i2b(Reent *ptr, int i)
{
    _Bigint *b;

    b = _Balloc(ptr, 1);
    b->_x[0] = i;
    b->_wds = 1;
    return b;
}


_Bigint *_multiply(Reent *ptr, _Bigint *a, _Bigint *b)
{
    _Bigint *c;
    int k, wa, wb, wc;
    unsigned int carry, *x, *xa, *xae, *xb, *xbe, *xc, *xc0, y, z;
    unsigned int z2;

    if (a->_wds < b->_wds) {
        c = a;
        a = b;
        b = c;
    }
    k = a->_k;
    wa = a->_wds;
    wb = b->_wds;
    wc = wa + wb;
    if (wc > a->_maxwds) {
        k++;
    }
    c = _Balloc(ptr, k);
    for (x = c->_x, xa = x + wc; x < xa; x++) {
        *x = 0;
    }
    xa = a->_x;
    xae = xa + wa;
    xb = b->_x;
    xbe = xb + wb;
    xc0 = c->_x;
    for (; xb < xbe; xb++, xc0++) {
        if ((y = *xb & 0xFFFF) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            do {
                z = (*x & 0xFFFF) * y + (*xc & 0xFFFF) + carry;
                carry = z >> 16;
                z2 = (*x++ >> 16) * y + (*xc >> 16) + carry;
                carry = z2 >> 16;
                Storeinc(xc, z2, z);
            } while (x < xae);
            *xc = carry;
        }
        if ((y = *xb >> 16) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            z2 = *xc;
            do {
                z = (*x & 0xFFFF) * y + (*xc >> 16) + carry;
                carry = z >> 16;
                Storeinc(xc, z, z2);
                z2 = (*x++ >> 16) * y + (*xc & 0xFFFF) + carry;
                carry = z2 >> 16;
            } while (x < xae);
            *xc = z2;
        }
    }
    for (xc0 = c->_x, xc = xc0 + wc; wc > 0 && *--xc == 0; wc--) {
        ;
    }
    c->_wds = wc;
    return c;
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libc/kfiv_mprec", func_00126120);


_Bigint *_lshift(Reent *ptr, _Bigint *b, int k)
{
    int i, k1, n, n1;
    _Bigint *b1;
    unsigned int *x, *x1, *xe, z;

    n = k >> 5;
    k1 = b->_k;
    n1 = n + b->_wds + 1;
    for (i = b->_maxwds; n1 > i; i <<= 1) {
        k1++;
    }
    b1 = _Balloc(ptr, k1);
    x1 = b1->_x;
    for (i = 0; i < n; i++) {
        *x1++ = 0;
    }
    x = b->_x;
    xe = x + b->_wds;
    if (k &= 0x1F) {
        k1 = 32 - k;
        z = 0;
        do {
            *x1++ = *x << k | z;
            z = *x++ >> k1;
        } while (x < xe);
        if ((*x1 = z) != 0) {
            ++n1;
        }
    } else {
        do {
            *x1++ = *x++;
        } while (x < xe);
    }
    b1->_wds = n1 - 1;
    _Bfree(ptr, b);
    return b1;
}


int __mcmp(_Bigint *a, _Bigint *b)
{
    unsigned int *xa, *xa0, *xb, *xb0;
    int i, j;

    i = a->_wds;
    j = b->_wds;
    if (i -= j)
        return i;
    xa0 = a->_x;
    xa = xa0 + j;
    xb0 = b->_x;
    xb = xb0 + j;
    for (;;) {
        if (*--xa != *--xb)
            return *xa < *xb ? -1 : 1;
        if (xa <= xa0)
            break;
    }
    return 0;
}


_Bigint *__mdiff(Reent *ptr, _Bigint *a, _Bigint *b)
{
    _Bigint *c;
    int i, wa, wb;
    int borrow, y, z;
    unsigned int *xa, *xae, *xb, *xbe, *xc;

    i = __mcmp(a, b);
    if (i == 0) {
        c = _Balloc(ptr, 0);
        c->_wds = 1;
        c->_x[0] = 0;
        return c;
    }
    if (i < 0) {
        c = a;
        a = b;
        b = c;
        i = 1;
    } else {
        i = 0;
    }
    c = _Balloc(ptr, a->_k);
    c->_sign = i;
    wa = a->_wds;
    xa = a->_x;
    xae = xa + wa;
    wb = b->_wds;
    xb = b->_x;
    xbe = xb + wb;
    xc = c->_x;
    borrow = 0;
    do {
        y = (*xa & 0xFFFF) - (*xb & 0xFFFF) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) - (*xb++ >> 16) + borrow;
        borrow = z >> 16;
        Storeinc(xc, z, y);
    } while (xb < xbe);
    while (xa < xae) {
        y = (*xa & 0xFFFF) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) + borrow;
        borrow = z >> 16;
        Storeinc(xc, z, y);
    }
    while (*--xc == 0) {
        wa--;
    }
    c->_wds = wa;
    return c;
}
union double_union_x00126570 { double d; unsigned int i[2]; };
double func_00126570_x00126570(double _x) __asm__("func_00126570");
/* Newlib_Ulp: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libc/libc_126BD8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
double func_00126570_x00126570(double _x)
{
    int L;
    union double_union_x00126570 x, a;
    x.d = _x;
    L = ((x.i[1]) & 0x7ff00000) - (53 - 1) * 0x100000;
    if (L > 0) {
        (a.i[1]) = L;
        (a.i[0]) = 0;
    } else {
        L = -L >> 20;
        if (L < 20) {
            (a.i[1]) = 0x80000 >> L;
            (a.i[0]) = 0;
        } else {
            (a.i[1]) = 0;
            L -= 20;
            (a.i[0]) = L >= 31 ? 1 : 1 << (31 - L);
        }
    }
    {
        register double r __asm__("$2") = a.d;
        __asm__ __volatile__("1:" : "+r"(r));
        return r;
    }
}


double _b2d(_Bigint *a, int *e)
{
    unsigned int *xa, *xa0, w, y, z;
    int k;
    MpDouble d;

    xa0 = a->_x;
    xa = xa0 + a->_wds;
    y = *--xa;
    k = _hi0bits(y);
    *e = 32 - k;
    if (k < 11) {
        word0(d) = 0x3FF00000 | y >> (11 - k);
        w = xa > xa0 ? *--xa : 0;
        word1(d) = y << (21 + k) | w >> (11 - k);
    } else {
        z = xa > xa0 ? *--xa : 0;
        k -= 11;
        if (k != 0) {
            word0(d) = 0x3FF00000 | y << k | z >> (32 - k);
            y = xa > xa0 ? *--xa : 0;
            word1(d) = z << k | y >> (32 - k);
        } else {
            word0(d) = 0x3FF00000 | y;
            word1(d) = z;
        }
    }
    return d.d;
}
typedef unsigned int __uint32_t_x001267D8;
typedef unsigned int size_t_x001267D8;
typedef __uint32_t_x001267D8 __ULong_x001267D8;
struct _glue_x001267D8
{
  struct _glue_x001267D8 *_next;
  int _niobs;
  struct __sFILE_x001267D8 *_iobs;
};
struct _Bigint_x001267D8
{
  struct _Bigint_x001267D8 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x001267D8 _x[1];
};
struct __tm_x001267D8
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
struct _atexit_x001267D8 {
        struct _atexit_x001267D8 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x001267D8 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x001267D8;
struct __sFILE_x001267D8 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x001267D8 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x001267D8 (*_seek) (void * _cookie, _fpos_t_x001267D8 _offset, int _whence);
  int (*_close) (void * _cookie);
  struct __sbuf_x001267D8 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x001267D8 _lb;
  int _blksize;
  int _offset;
  struct _reent_x001267D8 *_data;
};
struct _rand48_x001267D8 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x001267D8
{
  int _errno;
  struct __sFILE_x001267D8 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x001267D8 *);
  struct _Bigint_x001267D8 *_result;
  int _result_k;
  struct _Bigint_x001267D8 *_p5s;
  struct _Bigint_x001267D8 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x001267D8 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x001267D8 _r48;
        } _reent_x001267D8;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x001267D8 *_atexit_x001267D8;
  struct _atexit_x001267D8 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x001267D8 __sglue;
  struct __sFILE_x001267D8 __sf[3];
};
extern int atexit (void (*__func_x001267D8)(void)) __asm__("__func");
extern void * bsearch (const void * __key,
                       const void * __base,
                       size_t_x001267D8 __nmemb,
                       size_t_x001267D8 __size,
                       int (* _compar_x001267D8) (const void *, const void *)) __asm__("_compar");
extern void qsort (void * __base, size_t_x001267D8 __nmemb, size_t_x001267D8 __size, int(*_compar_x001267D8)(const void *, const void *)) __asm__("_compar");
union double_union_x001267D8
{
  double d;
  __uint32_t_x001267D8 i[2];
};
typedef struct _Bigint_x001267D8 _Bigint_x001267D8;
struct _reent_x001267D8 ;
_Bigint_x001267D8 * _Balloc_x001267D8 (struct _reent_x001267D8 *p, int k) __asm__("func_00125A88");
int _hi0bits_x001267D8 (__ULong_x001267D8) __asm__("func_00125D98");
int _lo0bits_x001267D8 (__ULong_x001267D8 *) __asm__("func_00125E18");
_Bigint_x001267D8 *
_Balloc_x001267D8(struct _reent_x001267D8 *ptr , int k) __asm__("func_00125A88");
int
_hi0bits_x001267D8(register __ULong_x001267D8 x) __asm__("func_00125D98");
int
_lo0bits_x001267D8(__ULong_x001267D8 *y) __asm__("func_00125E18");
_Bigint_x001267D8 *
func_001267D8_x001267D8(struct _reent_x001267D8 * ptr ,
        double _d ,
        int *e ,
        int *bits) __asm__("func_001267D8");
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
/* _d2b: from newlib 1.10.0 (sourceware.org) (libc/stdlib/mprec.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
_Bigint_x001267D8 *
func_001267D8_x001267D8(struct _reent_x001267D8 * ptr ,
        double _d ,
        int *e ,
        int *bits)
{
  union double_union_x001267D8 d;
  _Bigint_x001267D8 *b;
  int de, i, k;
  __ULong_x001267D8 *x, y, z;
  d.d = _d;
  d.d = _d;
  b = _Balloc_x001267D8 (ptr, 1);
  x = b->_x;
  z = (d.i[1]) & ((__uint32_t_x001267D8)0xfffffL);
  (d.i[1]) &= 0x7fffffff;
  if ((de = (int) ((d.i[1]) >> 20)) != 0)
    z |= ((__uint32_t_x001267D8)0x100000L);
  if ((d.i[0]))
    {
      y = (d.i[0]);
      k = _lo0bits_x001267D8 (&y);
      if (k)
        {
         x[0] = y | z << (32 - k);
          z >>= k;
        }
      else
        x[0] = y;
      i = b->_wds = (x[1] = z) ? 2 : 1;
    }
  else
    {
      k = _lo0bits_x001267D8 (&z);
      x[0] = z;
      i = b->_wds = 1;
      k += 32;
    }
  if (de)
    {
      *e = de - 1023 - (53 - 1) + k;
      *bits = 53 - k;
    }
  else
    {
      *e = de - 1023 - (53 - 1) + 1 + k;
      *bits = 32 * i - _hi0bits_x001267D8 (x[i - 1]);
    }
  return b;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc/kfiv_mprec", func_00126960);


double _mprec_log10(int dig)
{
    double v = 1.0;

    if (dig < 24) {
        return __mprec_tens[dig];
    }
    while (dig > 0) {
        v *= 10;
        dig--;
    }
    return v;
}
