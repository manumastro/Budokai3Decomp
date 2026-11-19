/* newlib objects were assembled without delay-slot filling: as-flags: -O1 */
#include "common.h"

s32 func_00128288(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

typedef unsigned int size_t_x00128288;
typedef unsigned int __uint32_t_x00128288;
typedef unsigned int __ULong_x00128288;
typedef int __Long_x00128288;
struct _Bigint_x00128288 { struct _Bigint_x00128288 *_next; int _k, _maxwds, _sign, _wds; __ULong_x00128288 _x[1]; };
struct _reent_x00128288 { int _errno; char _pad[0x3C]; struct _Bigint_x00128288 *_result; int _result_k; struct _Bigint_x00128288 *_p5s; struct _Bigint_x00128288 **_freelist; };
extern void *memcpy_x00128288(void *, const void *, size_t_x00128288) __asm__("func_00125740");
union double_union_x00128288
{
  double d;
  __uint32_t_x00128288 i[2];
};
typedef struct _Bigint_x00128288 _Bigint_x00128288;
_Bigint_x00128288 *Newlib_Balloc_x00128288(struct _reent_x00128288 *p, int k) __asm__("func_00125A88");
void Newlib_Bfree_x00128288(struct _reent_x00128288 *p, _Bigint_x00128288 *v) __asm__("func_00125B30");
_Bigint_x00128288 *Newlib_I2b_x00128288(struct _reent_x00128288 *, int) __asm__("func_00125ED8");
_Bigint_x00128288 *Newlib_Multiply_x00128288(struct _reent_x00128288 *, _Bigint_x00128288 *, _Bigint_x00128288 *) __asm__("func_00125F10");
_Bigint_x00128288 *Newlib_Pow5mult_x00128288(struct _reent_x00128288 *, _Bigint_x00128288 *, int k) __asm__("func_00126120");
_Bigint_x00128288 *Newlib_D2b_x00128288(struct _reent_x00128288 *p, double d, int *e, int *bits) __asm__("func_001267D8");
_Bigint_x00128288 *Newlib_Lshift_x00128288(struct _reent_x00128288 *p, _Bigint_x00128288 *b, int k) __asm__("func_00126220");
_Bigint_x00128288 *Newlib_Mdiff_x00128288(struct _reent_x00128288 *p, _Bigint_x00128288 *a, _Bigint_x00128288 *b) __asm__("func_001263E0");
int Newlib_Mcmp_x00128288(_Bigint_x00128288 *a, _Bigint_x00128288 *b) __asm__("func_00126378");
_Bigint_x00128288 *Newlib_S2b_x00128288(struct _reent_x00128288 *, const char *, int, int, __ULong_x00128288) __asm__("func_00125C68");
double Newlib_Ulp_x00128288(double x) __asm__("func_00126570");
double Newlib_Ratio_x00128288(_Bigint_x00128288 *a, _Bigint_x00128288 *b) __asm__("func_00126960");
extern const double D_00499BB0_x00128288[] __asm__("D_0045E630");
extern const double D_00499F28_x00128288[] __asm__("D_0045ED58");
extern const double D_00499F00_x00128288[] __asm__("D_0045ED30");
extern const double D_00499E38_x00128288[] __asm__("D_0045EC68");
double
func_00128288_x00128288(struct _reent_x00128288 *ptr ,
        const char *s00 ,
        char **se) __asm__("func_00128288");
/* _strtod_r: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/strtod/strtod.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
double
func_00128288_x00128288(struct _reent_x00128288 *ptr ,
        const char *s00 ,
        char **se)
{
  int bb2, bb5, bbe, bd2, bd5, bbbits, bs2, c, dsign, e1, esign, i, j,
    k, nd, nd0, nf, nz, nz0, sign;
  long e;
  const char *s, *s0, *s1;
  double aadj, aadj1, adj;
  long L;
  unsigned long z;
  __ULong_x00128288 y;
  union double_union_x00128288 rv, rv0;
  _Bigint_x00128288 *bb, *bb1, *bd, *bd0, *bs, *delta;
  sign = nz0 = nz = 0;
  rv.d = 0.;
  for (s = s00;; s++)
    switch (*s)
      {
      case '-':
        sign = 1;
      case '+':
        if (*++s)
          goto break2;
      case 0:
        s = s00;
        goto ret;
      case '\t':
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case ' ':
        continue;
      default:
        goto break2;
      }
break2:
  if (*s == '0')
    {
      nz0 = 1;
      while (*++s == '0');
      if (!*s)
        goto ret;
    }
  s0 = s;
  y = z = 0;
  for (nd = nf = 0; (c = *s) >= '0' && c <= '9'; nd++, s++)
    if (nd < 9)
      y = 10 * y + c - '0';
    else if (nd < 16)
      z = 10 * z + c - '0';
  nd0 = nd;
  if (c == '.')
    {
      c = *++s;
      if (!nd)
        {
          for (; c == '0'; c = *++s)
            nz++;
          if (c > '0' && c <= '9')
            {
              s0 = s;
              nf += nz;
              nz = 0;
              goto have_dig;
            }
          goto dig_done;
        }
      for (; c >= '0' && c <= '9'; c = *++s)
        {
        have_dig:
          nz++;
          if (c -= '0')
            {
              nf += nz;
              for (i = 1; i < nz; i++)
                if (nd++ < 9)
                  y *= 10;
                else if (nd <= 15 + 1)
                  z *= 10;
              if (nd++ < 9)
                y = 10 * y + c;
              else if (nd <= 15 + 1)
                z = 10 * z + c;
              nz = 0;
            }
        }
    }
dig_done:
  e = 0;
  if (c == 'e' || c == 'E')
    {
      if (!nd && !nz && !nz0)
        {
          s = s00;
          goto ret;
        }
      s00 = s;
      esign = 0;
      switch (c = *++s)
        {
        case '-':
          esign = 1;
        case '+':
          c = *++s;
        }
      if (c >= '0' && c <= '9')
        {
          while (c == '0')
            c = *++s;
          if (c > '0' && c <= '9')
            {
              e = c - '0';
              s1 = s;
              while ((c = *++s) >= '0' && c <= '9')
                e = 10 * e + c - '0';
              if (s - s1 > 8)
                e = 9999999L;
              if (esign)
                e = -e;
            }
          else
            e = 0;
        }
      else
        s = s00;
    }
  if (!nd)
    {
      if (!nz && !nz0)
        s = s00;
      goto ret;
    }
  e1 = e -= nf;
  if (!nd0)
    nd0 = nd;
  k = nd < 15 + 1 ? nd : 15 + 1;
  rv.d = y;
  if (k > 9)
    rv.d = D_00499E38_x00128288[k - 9] * rv.d + z;
  bd0 = 0;
  if (nd <= 15
      && 0 == 1
    )
    {
      if (!e)
        goto ret;
      if (e > 0)
        {
          if (e <= 22)
            {
                           rv.d *= D_00499E38_x00128288[e];
              goto ret;
            }
          i = 15 - nd;
          if (e <= 22 + i)
            {
              e -= i;
              rv.d *= D_00499E38_x00128288[i];
                           rv.d *= D_00499E38_x00128288[e];
              goto ret;
            }
        }
      else if (e >= -22)
        {
                       rv.d /= D_00499E38_x00128288[-e];
          goto ret;
        }
    }
  e1 += nd - k;
  if (e1 > 0)
    {
      if ((i = e1 & 15) != 0)
        rv.d *= D_00499E38_x00128288[i];
      if (e1 &= ~15)
        {
          if (e1 > 308)
            {
            ovfl:
              ptr->_errno = 34;
              rv.d = (D_00499BB0_x00128288[0]);
              if (bd0)
                goto retfree;
              goto ret;
            }
          if (e1 >>= 4)
            {
              for (j = 0; e1 > 1; j++, e1 >>= 1)
                if (e1 & 1)
                  rv.d *= D_00499F00_x00128288[j];
              (rv.i[1]) -= 53 * ((__uint32_t_x00128288)0x100000L);
              rv.d *= D_00499F00_x00128288[j];
              if ((z = (rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L))
                  > ((__uint32_t_x00128288)0x100000L) * (1024 + 1023 - 53))
                goto ovfl;
              if (z > ((__uint32_t_x00128288)0x100000L) * (1024 + 1023 - 1 - 53))
                {
                  (rv.i[1]) = (((__uint32_t_x00128288)0xfffffL) | ((__uint32_t_x00128288)0x100000L)*(1024+1023-1));
                  (rv.i[0]) = ((__uint32_t_x00128288)0xffffffffL);
                }
              else
                (rv.i[1]) += 53 * ((__uint32_t_x00128288)0x100000L);
            }
        }
    }
  else if (e1 < 0)
    {
      e1 = -e1;
      if ((i = e1 & 15) != 0)
        rv.d /= D_00499E38_x00128288[i];
      if (e1 &= ~15)
        {
          e1 >>= 4;
          if (e1 >= 1 << 5)
            goto undfl;
          for (j = 0; e1 > 1; j++, e1 >>= 1)
            if (e1 & 1)
              rv.d *= D_00499F28_x00128288[j];
          rv0.d = rv.d;
          rv.d *= D_00499F28_x00128288[j];
          if (!rv.d)
            {
              rv.d = 2. * rv0.d;
              rv.d *= D_00499F28_x00128288[j];
              if (!rv.d)
                {
                undfl:
                  rv.d = 0.;
                  ptr->_errno = 34;
                  if (bd0)
                    goto retfree;
                  goto ret;
                }
              (rv.i[1]) = 0;
              (rv.i[0]) = 1;
            }
        }
    }
  bd0 = Newlib_S2b_x00128288 (ptr, s0, nd0, nd, y);
  for (;;)
    {
      bd = Newlib_Balloc_x00128288 (ptr, bd0->_k);
      memcpy_x00128288((char *)&bd->_sign, (char *)&bd0->_sign, bd0->_wds*sizeof(__Long_x00128288) + 2*sizeof(int));
      bb = Newlib_D2b_x00128288 (ptr, rv.d, &bbe, &bbbits);
      bs = Newlib_I2b_x00128288 (ptr, 1);
      if (e >= 0)
        {
          bb2 = bb5 = 0;
          bd2 = bd5 = e;
        }
      else
        {
          bb2 = bb5 = -e;
          bd2 = bd5 = 0;
        }
      if (bbe >= 0)
        bb2 += bbe;
      else
        bd2 -= bbe;
      bs2 = bb2;
      i = bbe + bbbits - 1;
      if (i < (-1022))
        j = bbe + (53 - (-1022));
      else
        j = 53 + 1 - bbbits;
      bb2 += j;
      bd2 += j;
      i = bb2 < bd2 ? bb2 : bd2;
      if (i > bs2)
        i = bs2;
      if (i > 0)
        {
          bb2 -= i;
          bd2 -= i;
          bs2 -= i;
        }
      if (bb5 > 0)
        {
          bs = Newlib_Pow5mult_x00128288 (ptr, bs, bb5);
          bb1 = Newlib_Multiply_x00128288 (ptr, bs, bb);
          Newlib_Bfree_x00128288 (ptr, bb);
          bb = bb1;
        }
      if (bb2 > 0)
        bb = Newlib_Lshift_x00128288 (ptr, bb, bb2);
      if (bd5 > 0)
        bd = Newlib_Pow5mult_x00128288 (ptr, bd, bd5);
      if (bd2 > 0)
        bd = Newlib_Lshift_x00128288 (ptr, bd, bd2);
      if (bs2 > 0)
        bs = Newlib_Lshift_x00128288 (ptr, bs, bs2);
      delta = Newlib_Mdiff_x00128288 (ptr, bb, bd);
      dsign = delta->_sign;
      delta->_sign = 0;
      i = Newlib_Mcmp_x00128288 (delta, bs);
      if (i < 0)
        {
          if (dsign || (rv.i[0]) || (rv.i[1]) & ((__uint32_t_x00128288)0xfffffL))
            break;
          delta = Newlib_Lshift_x00128288 (ptr, delta, 1);
          if (Newlib_Mcmp_x00128288 (delta, bs) > 0)
            goto drop_down;
          break;
        }
      if (i == 0)
        {
          if (dsign)
            {
              if (((rv.i[1]) & ((__uint32_t_x00128288)0xfffffL)) == ((__uint32_t_x00128288)0xfffffL)
                  && (rv.i[0]) == 0xffffffff)
                {
                  (rv.i[1]) = ((rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L))
                    + ((__uint32_t_x00128288)0x100000L)
                    ;
                  (rv.i[0]) = 0;
                  break;
                }
            }
          else if (!((rv.i[1]) & ((__uint32_t_x00128288)0xfffffL)) && !(rv.i[0]))
            {
            drop_down:
              L = ((rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L)) - ((__uint32_t_x00128288)0x100000L);
              (rv.i[1]) = L | ((__uint32_t_x00128288)0xfffffL);
              (rv.i[0]) = 0xffffffff;
              break;
            }
          if (!((rv.i[0]) & 1))
            break;
          if (dsign)
            rv.d += Newlib_Ulp_x00128288 (rv.d);
          else
            {
              rv.d -= Newlib_Ulp_x00128288 (rv.d);
              if (!rv.d)
                goto undfl;
            }
          break;
        }
      if ((aadj = Newlib_Ratio_x00128288 (delta, bs)) <= 2.)
        {
          if (dsign)
            aadj = aadj1 = 1.;
          else if ((rv.i[0]) || (rv.i[1]) & ((__uint32_t_x00128288)0xfffffL))
            {
              if ((rv.i[0]) == 1 && !(rv.i[1]))
                goto undfl;
              aadj = 1.;
              aadj1 = -1.;
            }
          else
            {
              if (aadj < 2. / 2)
                aadj = 1. / 2;
              else
                aadj *= 0.5;
              aadj1 = -aadj;
            }
        }
      else
        {
          aadj *= 0.5;
          aadj1 = dsign ? aadj : -aadj;
          if (0 == 0)
            aadj1 += 0.5;
        }
      y = (rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L);
      if (y == ((__uint32_t_x00128288)0x100000L) * (1024 + 1023 - 1))
        {
          rv0.d = rv.d;
          (rv.i[1]) -= 53 * ((__uint32_t_x00128288)0x100000L);
          adj = aadj1 * Newlib_Ulp_x00128288 (rv.d);
          rv.d += adj;
          if (((rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L)) >=
              ((__uint32_t_x00128288)0x100000L) * (1024 + 1023 - 53))
            {
              if ((rv0.i[1]) == (((__uint32_t_x00128288)0xfffffL) | ((__uint32_t_x00128288)0x100000L)*(1024+1023-1)) && (rv0.i[0]) == ((__uint32_t_x00128288)0xffffffffL))
                goto ovfl;
              (rv.i[1]) = (((__uint32_t_x00128288)0xfffffL) | ((__uint32_t_x00128288)0x100000L)*(1024+1023-1));
              (rv.i[0]) = ((__uint32_t_x00128288)0xffffffffL);
              goto cont;
            }
          else
            (rv.i[1]) += 53 * ((__uint32_t_x00128288)0x100000L);
        }
      else
        {
          if (y <= (53 - 1) * ((__uint32_t_x00128288)0x100000L) && aadj >= 1.)
            {
              aadj1 = (double) (int) (aadj + 0.5);
              if (!dsign)
                aadj1 = -aadj1;
            }
          adj = aadj1 * Newlib_Ulp_x00128288 (rv.d);
          rv.d += adj;
        }
      z = (rv.i[1]) & ((__uint32_t_x00128288)0x7ff00000L);
      if (y == z)
        {
          L = aadj;
          aadj -= L;
          if (dsign || (rv.i[0]) || (rv.i[1]) & ((__uint32_t_x00128288)0xfffffL))
            {
              if (aadj < .4999999 || aadj > .5000001)
                break;
            }
          else if (aadj < .4999999 / 2)
            break;
        }
    cont:
      Newlib_Bfree_x00128288 (ptr, bb);
      Newlib_Bfree_x00128288 (ptr, bd);
      Newlib_Bfree_x00128288 (ptr, bs);
      Newlib_Bfree_x00128288 (ptr, delta);
    }
retfree:
  Newlib_Bfree_x00128288 (ptr, bb);
  Newlib_Bfree_x00128288 (ptr, bd);
  Newlib_Bfree_x00128288 (ptr, bs);
  Newlib_Bfree_x00128288 (ptr, bd0);
  Newlib_Bfree_x00128288 (ptr, delta);
ret:
  if (se)
    *se = (char *) s;
  return sign ? -rv.d : rv.d;
}
__asm__("# rebind func_00128288 0x00128288");
void func_001291A0(s32 arg0, s32 arg1) {
    func_00128288(_impure_ptr, arg0, arg1);
}
double strtod_x001291C8(const char *s00, char **se) __asm__("func_001291A0");
double strtod_x001291C8(const char *s00, char **se) __attribute__((weak, section(".b3stub")));
double strtod_x001291C8(const char *s00, char **se) {}
float func_001291C8_x001291C8(const char *s00, char **se) __asm__("func_001291C8");
/* strtodf: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/strtod_x001291C8/strtod_x001291C8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_001291C8_x001291C8(const char *s00, char **se)
{
    return strtod_x001291C8(s00, se);
}
