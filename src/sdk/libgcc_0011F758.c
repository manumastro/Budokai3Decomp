#include "common.h"

typedef int SItype_x0011F758;
typedef unsigned int USItype_x0011F758;
typedef long DItype_x0011F758;
struct DIstruct_x0011F758 { SItype_x0011F758 low, high; };
typedef union { struct DIstruct_x0011F758 s; DItype_x0011F758 ll; } DIunion_x0011F758;
typedef unsigned char UQItype_x0011F758;
typedef unsigned long UDItype_x0011F758;
typedef int word_type_x0011F758;
extern const UQItype_x0011F758 __clz_tab_x0011F758[] __asm__("D_0045E690");
static inline DItype_x0011F758
__negdi2_x0011F758 (DItype_x0011F758 u)
{
  DIunion_x0011F758 w;
  DIunion_x0011F758 uu;
  uu.ll = u;
  w.s.low = -uu.s.low;
  w.s.high = -uu.s.high - ((USItype_x0011F758) w.s.low > 0);
  return w.ll;
}
static inline UDItype_x0011F758
__udivmoddi4_x0011F758 (UDItype_x0011F758 n, UDItype_x0011F758 d, UDItype_x0011F758 *rp)
{
  DIunion_x0011F758 ww;
  DIunion_x0011F758 nn, dd;
  DIunion_x0011F758 rr;
  USItype_x0011F758 d0, d1, n0, n1, n2;
  USItype_x0011F758 q0, q1;
  USItype_x0011F758 b, bm;
  nn.ll = n;
  dd.ll = d;
  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;
  if (d1 == 0)
    {
      if (d0 > n1)
        {
          do { USItype_x0011F758 __xr = (d0); USItype_x0011F758 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011F758)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011F758)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011F758)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x0011F758[__xr >> __a] + __a); } while (0);
          if (bm != 0)
            {
              d0 = d0 << bm;
              n1 = (n1 << bm) | (n0 >> (32 - bm));
              n0 = n0 << bm;
            }
          do { USItype_x0011F758 __d1, __d0, __q1, __q0; USItype_x0011F758 __r1, __r0, __m; __d1 = ((USItype_x0011F758) (d0) / ((USItype_x0011F758) 1 << (32 / 2))); __d0 = ((USItype_x0011F758) (d0) % ((USItype_x0011F758) 1 << (32 / 2))); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x0011F758) __q1 * __d0; __r1 = __r1 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n0) / ((USItype_x0011F758) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011F758) __q0 * __d0; __r0 = __r0 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n0) % ((USItype_x0011F758) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x0011F758) __q1 * ((USItype_x0011F758) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
          q1 = 0;
        }
      else
        {
          if (d0 == 0)
            d0 = 1 / d0;
          do { USItype_x0011F758 __xr = (d0); USItype_x0011F758 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011F758)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011F758)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011F758)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x0011F758[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              n1 -= d0;
              q1 = 1;
            }
          else
            {
              b = 32 - bm;
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x0011F758 __d1, __d0, __q1, __q0; USItype_x0011F758 __r1, __r0, __m; __d1 = ((USItype_x0011F758) (d0) / ((USItype_x0011F758) 1 << (32 / 2))); __d0 = ((USItype_x0011F758) (d0) % ((USItype_x0011F758) 1 << (32 / 2))); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x0011F758) __q1 * __d0; __r1 = __r1 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n1) / ((USItype_x0011F758) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011F758) __q0 * __d0; __r0 = __r0 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n1) % ((USItype_x0011F758) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q1) = (USItype_x0011F758) __q1 * ((USItype_x0011F758) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
            }
          do { USItype_x0011F758 __d1, __d0, __q1, __q0; USItype_x0011F758 __r1, __r0, __m; __d1 = ((USItype_x0011F758) (d0) / ((USItype_x0011F758) 1 << (32 / 2))); __d0 = ((USItype_x0011F758) (d0) % ((USItype_x0011F758) 1 << (32 / 2))); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x0011F758) __q1 * __d0; __r1 = __r1 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n0) / ((USItype_x0011F758) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011F758) __q0 * __d0; __r0 = __r0 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n0) % ((USItype_x0011F758) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x0011F758) __q1 * ((USItype_x0011F758) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
        }
      if (rp != 0)
        {
          rr.s.low = n0 >> bm;
          rr.s.high = 0;
          *rp = rr.ll;
        }
    }
  else
    {
      if (d1 > n1)
        {
          q0 = 0;
          q1 = 0;
          if (rp != 0)
            {
              rr.s.low = n0;
              rr.s.high = n1;
              *rp = rr.ll;
            }
        }
      else
        {
          do { USItype_x0011F758 __xr = (d1); USItype_x0011F758 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011F758)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011F758)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011F758)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x0011F758[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              if (n1 > d1 || n0 >= d0)
                {
                  q0 = 1;
                  do { USItype_x0011F758 __x; __x = (n0) - (d0); (n1) = (n1) - (d1) - (__x > (n0)); (n0) = __x; } while (0);
                }
              else
                q0 = 0;
              q1 = 0;
              if (rp != 0)
                {
                  rr.s.low = n0;
                  rr.s.high = n1;
                  *rp = rr.ll;
                }
            }
          else
            {
              USItype_x0011F758 m1, m0;
              b = 32 - bm;
              d1 = (d1 << bm) | (d0 >> b);
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x0011F758 __d1, __d0, __q1, __q0; USItype_x0011F758 __r1, __r0, __m; __d1 = ((USItype_x0011F758) (d1) / ((USItype_x0011F758) 1 << (32 / 2))); __d0 = ((USItype_x0011F758) (d1) % ((USItype_x0011F758) 1 << (32 / 2))); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x0011F758) __q1 * __d0; __r1 = __r1 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n1) / ((USItype_x0011F758) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d1); if (__r1 >= (d1)) if (__r1 < __m) __q1--, __r1 += (d1); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011F758) __q0 * __d0; __r0 = __r0 * ((USItype_x0011F758) 1 << (32 / 2)) | ((USItype_x0011F758) (n1) % ((USItype_x0011F758) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d1); if (__r0 >= (d1)) if (__r0 < __m) __q0--, __r0 += (d1); } __r0 -= __m; (q0) = (USItype_x0011F758) __q1 * ((USItype_x0011F758) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
              __asm__ ("multu %2,%3" : "=l" ((USItype_x0011F758) m0), "=h" ((USItype_x0011F758) m1) : "d" ((USItype_x0011F758) q0), "d" ((USItype_x0011F758) d0));
              if (m1 > n1 || (m1 == n1 && m0 > n0))
                {
                  q0--;
                  do { USItype_x0011F758 __x; __x = (m0) - (d0); (m1) = (m1) - (d1) - (__x > (m0)); (m0) = __x; } while (0);
                }
              q1 = 0;
              if (rp != 0)
                {
                  do { USItype_x0011F758 __x; __x = (n0) - (m0); (n1) = (n1) - (m1) - (__x > (n0)); (n0) = __x; } while (0);
                  rr.s.low = (n1 << b) | (n0 >> bm);
                  rr.s.high = n1 >> bm;
                  *rp = rr.ll;
                }
            }
        }
    }
  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}
DItype_x0011F758
func_0011F758_x0011F758 (DItype_x0011F758 u, DItype_x0011F758 v) __asm__("func_0011F758");
/* Libgcc_Divdi3: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_119F58.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
DItype_x0011F758
func_0011F758_x0011F758 (DItype_x0011F758 u, DItype_x0011F758 v)
{
  word_type_x0011F758 c = 0;
  DIunion_x0011F758 uu, vv;
  DItype_x0011F758 w;
  uu.ll = u;
  vv.ll = v;
  if (uu.s.high < 0)
    c = ~c,
    uu.ll = __negdi2_x0011F758 (uu.ll);
  if (vv.s.high < 0)
    c = ~c,
    vv.ll = __negdi2_x0011F758 (vv.ll);
  w = __udivmoddi4_x0011F758 (uu.ll, vv.ll, (UDItype_x0011F758 *) 0);
  if (c)
    w = __negdi2_x0011F758 (w);
  return w;
}
typedef int SItype_x0011FDF0;
typedef unsigned int USItype_x0011FDF0;
typedef long DItype_x0011FDF0;
typedef unsigned long UDItype_x0011FDF0;
typedef int word_type_x0011FDF0;
struct DIstruct_x0011FDF0 { SItype_x0011FDF0 low, high; };
typedef union { struct DIstruct_x0011FDF0 s; DItype_x0011FDF0 ll; } DIunion_x0011FDF0;
extern unsigned char D_00498F70_x0011FDF0[256] __asm__("D_0045E790");
static inline DItype_x0011FDF0
__negdi2_x0011FDF0 (DItype_x0011FDF0 u)
{
  DIunion_x0011FDF0 w;
  DIunion_x0011FDF0 uu;
  uu.ll = u;
  w.s.low = -uu.s.low;
  w.s.high = -uu.s.high - ((USItype_x0011FDF0) w.s.low > 0);
  return w.ll;
}
static inline UDItype_x0011FDF0
__udivmoddi4_x0011FDF0 (UDItype_x0011FDF0 n, UDItype_x0011FDF0 d, UDItype_x0011FDF0 *rp)
{
  DIunion_x0011FDF0 ww;
  DIunion_x0011FDF0 nn, dd;
  DIunion_x0011FDF0 rr;
  USItype_x0011FDF0 d0, d1, n0, n1, n2;
  USItype_x0011FDF0 q0, q1;
  USItype_x0011FDF0 b, bm;
  nn.ll = n;
  dd.ll = d;
  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;
  if (d1 == 0)
    {
      if (d0 > n1)
        {
          do { USItype_x0011FDF0 __xr = (d0); USItype_x0011FDF0 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011FDF0)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011FDF0)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011FDF0)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00498F70_x0011FDF0[__xr >> __a] + __a); } while (0);
          if (bm != 0)
            {
              d0 = d0 << bm;
              n1 = (n1 << bm) | (n0 >> (32 - bm));
              n0 = n0 << bm;
            }
          do { USItype_x0011FDF0 __d1, __d0, __q1, __q0; USItype_x0011FDF0 __r1, __r0, __m; __d1 = ((USItype_x0011FDF0) (d0) >> (32 / 2)); __d0 = ((USItype_x0011FDF0) (d0) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x0011FDF0) __q1 * __d0; __r1 = __r1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n0) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011FDF0) __q0 * __d0; __r0 = __r0 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n0) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x0011FDF0) __q1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
          q1 = 0;
        }
      else
        {
          if (d0 == 0)
            d0 = 1 / d0;
          do { USItype_x0011FDF0 __xr = (d0); USItype_x0011FDF0 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011FDF0)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011FDF0)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011FDF0)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00498F70_x0011FDF0[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              n1 -= d0;
              q1 = 1;
            }
          else
            {
              b = 32 - bm;
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x0011FDF0 __d1, __d0, __q1, __q0; USItype_x0011FDF0 __r1, __r0, __m; __d1 = ((USItype_x0011FDF0) (d0) >> (32 / 2)); __d0 = ((USItype_x0011FDF0) (d0) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x0011FDF0) __q1 * __d0; __r1 = __r1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n1) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011FDF0) __q0 * __d0; __r0 = __r0 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n1) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q1) = (USItype_x0011FDF0) __q1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
            }
          do { USItype_x0011FDF0 __d1, __d0, __q1, __q0; USItype_x0011FDF0 __r1, __r0, __m; __d1 = ((USItype_x0011FDF0) (d0) >> (32 / 2)); __d0 = ((USItype_x0011FDF0) (d0) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x0011FDF0) __q1 * __d0; __r1 = __r1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n0) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011FDF0) __q0 * __d0; __r0 = __r0 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n0) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x0011FDF0) __q1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
        }
      if (rp != 0)
        {
          rr.s.low = n0 >> bm;
          rr.s.high = 0;
          *rp = rr.ll;
        }
    }
  else
    {
      if (d1 > n1)
        {
          q0 = 0;
          q1 = 0;
          if (rp != 0)
            {
              rr.s.low = n0;
              rr.s.high = n1;
              *rp = rr.ll;
            }
        }
      else
        {
          do { USItype_x0011FDF0 __xr = (d1); USItype_x0011FDF0 __a; if (32 <= 32) { __a = __xr < ((USItype_x0011FDF0)1<<2*(32 / 4)) ? (__xr < ((USItype_x0011FDF0)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x0011FDF0)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00498F70_x0011FDF0[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              if (n1 > d1 || n0 >= d0)
                {
                  q0 = 1;
                  do { USItype_x0011FDF0 __x; __x = (n0) - (d0); (n1) = (n1) - (d1) - (__x > (n0)); (n0) = __x; } while (0);
                }
              else
                q0 = 0;
              q1 = 0;
              if (rp != 0)
                {
                  rr.s.low = n0;
                  rr.s.high = n1;
                  *rp = rr.ll;
                }
            }
          else
            {
              USItype_x0011FDF0 m1, m0;
              b = 32 - bm;
              d1 = (d1 << bm) | (d0 >> b);
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x0011FDF0 __d1, __d0, __q1, __q0; USItype_x0011FDF0 __r1, __r0, __m; __d1 = ((USItype_x0011FDF0) (d1) >> (32 / 2)); __d0 = ((USItype_x0011FDF0) (d1) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x0011FDF0) __q1 * __d0; __r1 = __r1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n1) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d1); if (__r1 >= (d1)) if (__r1 < __m) __q1--, __r1 += (d1); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x0011FDF0) __q0 * __d0; __r0 = __r0 * ((USItype_x0011FDF0) 1 << (32 / 2)) | ((USItype_x0011FDF0) (n1) & (((USItype_x0011FDF0) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d1); if (__r0 >= (d1)) if (__r0 < __m) __q0--, __r0 += (d1); } __r0 -= __m; (q0) = (USItype_x0011FDF0) __q1 * ((USItype_x0011FDF0) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
              __asm__ ("multu %2,%3" : "=l" ((USItype_x0011FDF0) m0), "=h" ((USItype_x0011FDF0) m1) : "d" ((USItype_x0011FDF0) q0), "d" ((USItype_x0011FDF0) d0));
              if (m1 > n1 || (m1 == n1 && m0 > n0))
                {
                  q0--;
                  do { USItype_x0011FDF0 __x; __x = (m0) - (d0); (m1) = (m1) - (d1) - (__x > (m0)); (m0) = __x; } while (0);
                }
              q1 = 0;
              if (rp != 0)
                {
                  do { USItype_x0011FDF0 __x; __x = (n0) - (m0); (n1) = (n1) - (m1) - (__x > (n0)); (n0) = __x; } while (0);
                  rr.s.low = (n1 << b) | (n0 >> bm);
                  rr.s.high = n1 >> bm;
                  *rp = rr.ll;
                }
            }
        }
    }
  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}
DItype_x0011FDF0
func_0011FDF0_x0011FDF0 (DItype_x0011FDF0 u, DItype_x0011FDF0 v) __asm__("func_0011FDF0");
/* Libgcc_Moddi3: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11A668.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
DItype_x0011FDF0
func_0011FDF0_x0011FDF0 (DItype_x0011FDF0 u, DItype_x0011FDF0 v)
{
  word_type_x0011FDF0 c = 0;
  DIunion_x0011FDF0 uu, vv;
  DItype_x0011FDF0 w;
  uu.ll = u;
  vv.ll = v;
  if (uu.s.high < 0)
    c = ~c,
    uu.ll = __negdi2_x0011FDF0 (uu.ll);
  if (vv.s.high < 0)
    vv.ll = __negdi2_x0011FDF0 (vv.ll);
  (void) __udivmoddi4_x0011FDF0 (uu.ll, vv.ll, &w);
  if (c)
    w = __negdi2_x0011FDF0 (w);
  return w;
}
typedef unsigned char UQItype_x00120480;
typedef int SItype_x00120480;
typedef unsigned int USItype_x00120480;
typedef long DItype_x00120480;
typedef unsigned long UDItype_x00120480;
struct DIstruct_x00120480 { SItype_x00120480 low, high; };
typedef union { struct DIstruct_x00120480 s; DItype_x00120480 ll; } DIunion_x00120480;
extern const UQItype_x00120480 __clz_tab_x00120480[] __asm__("D_0045E890");
static inline UDItype_x00120480
__udivmoddi4_x00120480 (UDItype_x00120480 n, UDItype_x00120480 d, UDItype_x00120480 *rp)
{
  DIunion_x00120480 ww;
  DIunion_x00120480 nn, dd;
  DIunion_x00120480 rr;
  USItype_x00120480 d0, d1, n0, n1, n2;
  USItype_x00120480 q0, q1;
  USItype_x00120480 b, bm;
  nn.ll = n;
  dd.ll = d;
  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;
  if (d1 == 0)
    {
      if (d0 > n1)
        {
          do { USItype_x00120480 __xr = (d0); USItype_x00120480 __a; if (32 <= 32) { __a = __xr < ((USItype_x00120480)1<<2*(32 / 4)) ? (__xr < ((USItype_x00120480)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x00120480)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x00120480[__xr >> __a] + __a); } while (0);
          if (bm != 0)
            {
              d0 = d0 << bm;
              n1 = (n1 << bm) | (n0 >> (32 - bm));
              n0 = n0 << bm;
            }
          do { USItype_x00120480 __d1, __d0, __q1, __q0; USItype_x00120480 __r1, __r0, __m; __d1 = ((USItype_x00120480) (d0) / ((USItype_x00120480) 1 << (32 / 2))); __d0 = ((USItype_x00120480) (d0) % ((USItype_x00120480) 1 << (32 / 2))); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x00120480) __q1 * __d0; __r1 = __r1 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n0) / ((USItype_x00120480) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x00120480) __q0 * __d0; __r0 = __r0 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n0) % ((USItype_x00120480) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x00120480) __q1 * ((USItype_x00120480) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
          q1 = 0;
        }
      else
        {
          if (d0 == 0)
            d0 = 1 / d0;
          do { USItype_x00120480 __xr = (d0); USItype_x00120480 __a; if (32 <= 32) { __a = __xr < ((USItype_x00120480)1<<2*(32 / 4)) ? (__xr < ((USItype_x00120480)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x00120480)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x00120480[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              n1 -= d0;
              q1 = 1;
            }
          else
            {
              b = 32 - bm;
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x00120480 __d1, __d0, __q1, __q0; USItype_x00120480 __r1, __r0, __m; __d1 = ((USItype_x00120480) (d0) / ((USItype_x00120480) 1 << (32 / 2))); __d0 = ((USItype_x00120480) (d0) % ((USItype_x00120480) 1 << (32 / 2))); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x00120480) __q1 * __d0; __r1 = __r1 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n1) / ((USItype_x00120480) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x00120480) __q0 * __d0; __r0 = __r0 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n1) % ((USItype_x00120480) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q1) = (USItype_x00120480) __q1 * ((USItype_x00120480) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
            }
          do { USItype_x00120480 __d1, __d0, __q1, __q0; USItype_x00120480 __r1, __r0, __m; __d1 = ((USItype_x00120480) (d0) / ((USItype_x00120480) 1 << (32 / 2))); __d0 = ((USItype_x00120480) (d0) % ((USItype_x00120480) 1 << (32 / 2))); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (USItype_x00120480) __q1 * __d0; __r1 = __r1 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n0) / ((USItype_x00120480) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x00120480) __q0 * __d0; __r0 = __r0 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n0) % ((USItype_x00120480) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (USItype_x00120480) __q1 * ((USItype_x00120480) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
        }
      if (rp != 0)
        {
          rr.s.low = n0 >> bm;
          rr.s.high = 0;
          *rp = rr.ll;
        }
    }
  else
    {
      if (d1 > n1)
        {
          q0 = 0;
          q1 = 0;
          if (rp != 0)
            {
              rr.s.low = n0;
              rr.s.high = n1;
              *rp = rr.ll;
            }
        }
      else
        {
          do { USItype_x00120480 __xr = (d1); USItype_x00120480 __a; if (32 <= 32) { __a = __xr < ((USItype_x00120480)1<<2*(32 / 4)) ? (__xr < ((USItype_x00120480)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((USItype_x00120480)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (__clz_tab_x00120480[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              if (n1 > d1 || n0 >= d0)
                {
                  q0 = 1;
                  do { USItype_x00120480 __x; __x = (n0) - (d0); (n1) = (n1) - (d1) - (__x > (n0)); (n0) = __x; } while (0);
                }
              else
                q0 = 0;
              q1 = 0;
              if (rp != 0)
                {
                  rr.s.low = n0;
                  rr.s.high = n1;
                  *rp = rr.ll;
                }
            }
          else
            {
              USItype_x00120480 m1, m0;
              b = 32 - bm;
              d1 = (d1 << bm) | (d0 >> b);
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { USItype_x00120480 __d1, __d0, __q1, __q0; USItype_x00120480 __r1, __r0, __m; __d1 = ((USItype_x00120480) (d1) / ((USItype_x00120480) 1 << (32 / 2))); __d0 = ((USItype_x00120480) (d1) % ((USItype_x00120480) 1 << (32 / 2))); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (USItype_x00120480) __q1 * __d0; __r1 = __r1 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n1) / ((USItype_x00120480) 1 << (32 / 2))); if (__r1 < __m) { __q1--, __r1 += (d1); if (__r1 >= (d1)) if (__r1 < __m) __q1--, __r1 += (d1); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (USItype_x00120480) __q0 * __d0; __r0 = __r0 * ((USItype_x00120480) 1 << (32 / 2)) | ((USItype_x00120480) (n1) % ((USItype_x00120480) 1 << (32 / 2))); if (__r0 < __m) { __q0--, __r0 += (d1); if (__r0 >= (d1)) if (__r0 < __m) __q0--, __r0 += (d1); } __r0 -= __m; (q0) = (USItype_x00120480) __q1 * ((USItype_x00120480) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
              __asm__ ("multu %2,%3" : "=l" ((USItype_x00120480) m0), "=h" ((USItype_x00120480) m1) : "d" ((USItype_x00120480) q0), "d" ((USItype_x00120480) d0));
              if (m1 > n1 || (m1 == n1 && m0 > n0))
                {
                  q0--;
                  do { USItype_x00120480 __x; __x = (m0) - (d0); (m1) = (m1) - (d1) - (__x > (m0)); (m0) = __x; } while (0);
                }
              q1 = 0;
              if (rp != 0)
                {
                  do { USItype_x00120480 __x; __x = (n0) - (m0); (n1) = (n1) - (m1) - (__x > (n0)); (n0) = __x; } while (0);
                  rr.s.low = (n1 << b) | (n0 >> bm);
                  rr.s.high = n1 >> bm;
                  *rp = rr.ll;
                }
            }
        }
    }
  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}
UDItype_x00120480
__udivdi3_x00120480 (UDItype_x00120480 n, UDItype_x00120480 d) __asm__("__udivdi3");
/* Libgcc_Udivdi3: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11ACF8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
UDItype_x00120480
__udivdi3_x00120480 (UDItype_x00120480 n, UDItype_x00120480 d)
{
  return __udivmoddi4_x00120480 (n, d, (UDItype_x00120480 *) 0);
}
typedef int SItype_x00120A00;
typedef unsigned int USItype_x00120A00;
typedef long DItype_x00120A00;
typedef unsigned long UDItype_x00120A00;
typedef SItype_x00120A00 Wtype_x00120A00;
typedef USItype_x00120A00 UWtype_x00120A00;
typedef DItype_x00120A00 DWtype_x00120A00;
typedef UDItype_x00120A00 UDWtype_x00120A00;
struct DWstruct_x00120A00 { Wtype_x00120A00 low, high; };
typedef union { struct DWstruct_x00120A00 s; DWtype_x00120A00 ll; } DWunion_x00120A00;
extern const unsigned char D_00499170_x00120A00[] __asm__("D_0045E990");
static inline UDWtype_x00120A00
__udivmoddi4_0011B278_x00120A00 (UDWtype_x00120A00 n, UDWtype_x00120A00 d, UDWtype_x00120A00 *rp)
{
  DWunion_x00120A00 ww;
  DWunion_x00120A00 nn, dd;
  DWunion_x00120A00 rr;
  UWtype_x00120A00 d0, d1, n0, n1, n2;
  UWtype_x00120A00 q0, q1;
  UWtype_x00120A00 b, bm;
  nn.ll = n;
  dd.ll = d;
  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;
  if (d1 == 0)
    {
      if (d0 > n1)
        {
          do { UWtype_x00120A00 __xr = (d0); UWtype_x00120A00 __a; if (32 <= 32) { __a = __xr < ((UWtype_x00120A00)1<<2*(32 / 4)) ? (__xr < ((UWtype_x00120A00)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((UWtype_x00120A00)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00499170_x00120A00[__xr >> __a] + __a); } while (0);
          if (bm != 0)
            {
              d0 = d0 << bm;
              n1 = (n1 << bm) | (n0 >> (32 - bm));
              n0 = n0 << bm;
            }
          do { UWtype_x00120A00 __d1, __d0, __q1, __q0; UWtype_x00120A00 __r1, __r0, __m; __d1 = ((UWtype_x00120A00) (d0) >> (32 / 2)); __d0 = ((UWtype_x00120A00) (d0) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (UWtype_x00120A00) __q1 * __d0; __r1 = __r1 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n0) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (UWtype_x00120A00) __q0 * __d0; __r0 = __r0 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n0) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (UWtype_x00120A00) __q1 * ((UWtype_x00120A00) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
          q1 = 0;
        }
      else
        {
          if (d0 == 0)
            d0 = 1 / d0;
          do { UWtype_x00120A00 __xr = (d0); UWtype_x00120A00 __a; if (32 <= 32) { __a = __xr < ((UWtype_x00120A00)1<<2*(32 / 4)) ? (__xr < ((UWtype_x00120A00)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((UWtype_x00120A00)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00499170_x00120A00[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              n1 -= d0;
              q1 = 1;
            }
          else
            {
              b = 32 - bm;
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { UWtype_x00120A00 __d1, __d0, __q1, __q0; UWtype_x00120A00 __r1, __r0, __m; __d1 = ((UWtype_x00120A00) (d0) >> (32 / 2)); __d0 = ((UWtype_x00120A00) (d0) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (UWtype_x00120A00) __q1 * __d0; __r1 = __r1 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n1) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (UWtype_x00120A00) __q0 * __d0; __r0 = __r0 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n1) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q1) = (UWtype_x00120A00) __q1 * ((UWtype_x00120A00) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
            }
          do { UWtype_x00120A00 __d1, __d0, __q1, __q0; UWtype_x00120A00 __r1, __r0, __m; __d1 = ((UWtype_x00120A00) (d0) >> (32 / 2)); __d0 = ((UWtype_x00120A00) (d0) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); __r1 = (n1) % __d1; __q1 = (n1) / __d1; __m = (UWtype_x00120A00) __q1 * __d0; __r1 = __r1 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n0) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d0); if (__r1 >= (d0)) if (__r1 < __m) __q1--, __r1 += (d0); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (UWtype_x00120A00) __q0 * __d0; __r0 = __r0 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n0) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d0); if (__r0 >= (d0)) if (__r0 < __m) __q0--, __r0 += (d0); } __r0 -= __m; (q0) = (UWtype_x00120A00) __q1 * ((UWtype_x00120A00) 1 << (32 / 2)) | __q0; (n0) = __r0; } while (0);
        }
      if (rp != 0)
        {
          rr.s.low = n0 >> bm;
          rr.s.high = 0;
          *rp = rr.ll;
        }
    }
  else
    {
      if (d1 > n1)
        {
          q0 = 0;
          q1 = 0;
          if (rp != 0)
            {
              rr.s.low = n0;
              rr.s.high = n1;
              *rp = rr.ll;
            }
        }
      else
        {
          do { UWtype_x00120A00 __xr = (d1); UWtype_x00120A00 __a; if (32 <= 32) { __a = __xr < ((UWtype_x00120A00)1<<2*(32 / 4)) ? (__xr < ((UWtype_x00120A00)1<<(32 / 4)) ? 0 : (32 / 4)) : (__xr < ((UWtype_x00120A00)1<<3*(32 / 4)) ? 2*(32 / 4) : 3*(32 / 4)); } else { for (__a = 32 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; } (bm) = 32 - (D_00499170_x00120A00[__xr >> __a] + __a); } while (0);
          if (bm == 0)
            {
              if (n1 > d1 || n0 >= d0)
                {
                  q0 = 1;
                  do { UWtype_x00120A00 __x; __x = (n0) - (d0); (n1) = (n1) - (d1) - (__x > (n0)); (n0) = __x; } while (0);
                }
              else
                q0 = 0;
              q1 = 0;
              if (rp != 0)
                {
                  rr.s.low = n0;
                  rr.s.high = n1;
                  *rp = rr.ll;
                }
            }
          else
            {
              UWtype_x00120A00 m1, m0;
              b = 32 - bm;
              d1 = (d1 << bm) | (d0 >> b);
              d0 = d0 << bm;
              n2 = n1 >> b;
              n1 = (n1 << bm) | (n0 >> b);
              n0 = n0 << bm;
              do { UWtype_x00120A00 __d1, __d0, __q1, __q0; UWtype_x00120A00 __r1, __r0, __m; __d1 = ((UWtype_x00120A00) (d1) >> (32 / 2)); __d0 = ((UWtype_x00120A00) (d1) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); __r1 = (n2) % __d1; __q1 = (n2) / __d1; __m = (UWtype_x00120A00) __q1 * __d0; __r1 = __r1 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n1) >> (32 / 2)); if (__r1 < __m) { __q1--, __r1 += (d1); if (__r1 >= (d1)) if (__r1 < __m) __q1--, __r1 += (d1); } __r1 -= __m; __r0 = __r1 % __d1; __q0 = __r1 / __d1; __m = (UWtype_x00120A00) __q0 * __d0; __r0 = __r0 * ((UWtype_x00120A00) 1 << (32 / 2)) | ((UWtype_x00120A00) (n1) & (((UWtype_x00120A00) 1 << (32 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (d1); if (__r0 >= (d1)) if (__r0 < __m) __q0--, __r0 += (d1); } __r0 -= __m; (q0) = (UWtype_x00120A00) __q1 * ((UWtype_x00120A00) 1 << (32 / 2)) | __q0; (n1) = __r0; } while (0);
              __asm__ ("multu %2,%3" : "=l" ((USItype_x00120A00) (m0)), "=h" ((USItype_x00120A00) (m1)) : "d" ((USItype_x00120A00) (q0)), "d" ((USItype_x00120A00) (d0)));
              if (m1 > n1 || (m1 == n1 && m0 > n0))
                {
                  q0--;
                  do { UWtype_x00120A00 __x; __x = (m0) - (d0); (m1) = (m1) - (d1) - (__x > (m0)); (m0) = __x; } while (0);
                }
              q1 = 0;
              if (rp != 0)
                {
                  do { UWtype_x00120A00 __x; __x = (n0) - (m0); (n1) = (n1) - (m1) - (__x > (n0)); (n0) = __x; } while (0);
                  rr.s.low = (n1 << b) | (n0 >> bm);
                  rr.s.high = n1 >> bm;
                  *rp = rr.ll;
                }
            }
        }
    }
  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}
UDWtype_x00120A00
__umoddi3_x00120A00 (UDWtype_x00120A00 u, UDWtype_x00120A00 v) __asm__("__umoddi3");
/* Libgcc_Umoddi3: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11ACF8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
UDWtype_x00120A00
__umoddi3_x00120A00 (UDWtype_x00120A00 u, UDWtype_x00120A00 v)
{
  UDWtype_x00120A00 w;
  (void) __udivmoddi4_0011B278_x00120A00 (u, v, &w);
  return w;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00120F68);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121010);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_001210F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121210);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121288);
typedef signed int s32_x001213B0;
typedef unsigned int u32_x001213B0;
typedef float f32_x001213B0;
typedef struct fp_number_type_x001213B0 {
    s32_x001213B0 class;
    s32_x001213B0 sign;
    s32_x001213B0 normal_exp;
    u32_x001213B0 fraction;
} fp_number_type_x001213B0;
typedef union f32_bits_x001213B0 {
    f32_x001213B0 f;
    u32_x001213B0 u;
    struct {
        u32_x001213B0 fraction : 23;
        u32_x001213B0 exponent : 8;
        u32_x001213B0 sign : 1;
    } fields;
} f32_bits_x001213B0;
static inline s32_x001213B0 sfIsZero_x001213B0(const fp_number_type_x001213B0 *number) {
    return number->class == 2;
}
f32_x001213B0 func_001213B0_x001213B0(const fp_number_type_x001213B0 *number) __asm__("func_001213B0");
/* sdfPackFloat: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libgcc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
f32_x001213B0 func_001213B0_x001213B0(const fp_number_type_x001213B0 *number) {
    f32_bits_x001213B0 result;
    s32_x001213B0 zero = sfIsZero_x001213B0(number);
    u32_x001213B0 fraction;
    s32_x001213B0 exponent;
    u32_x001213B0 sign;
    exponent = 0;
    fraction = number->fraction;
    sign = number->sign;
    if (zero) {
        fraction = 0;
    } else if (fraction != 0) {
        if (number->normal_exp < -126) {
            fraction = 0;
        } else if (number->normal_exp > 128 ||
                   (number->normal_exp == 128 && fraction >= 0x80000000U)) {
            exponent = 255;
            fraction = 0;
        } else {
            exponent = number->normal_exp + 127;
            fraction >>= 7;
        }
    }
    result.fields.fraction = fraction;
    result.fields.exponent = exponent;
    result.fields.sign = sign;
    return result.f;
}
void func_00121468_x00121468(u32 *arg0, u8 *arg1) __asm__("func_00121468");
void func_00121468_x00121468(u32 *arg0, u8 *arg1)
{
  int new_var;
  s32 temp_v0;
  u32 temp_v1;
  temp_v1 = *arg0;
  new_var = temp_v1 & 0x7FFFFF;
  temp_v0 = (temp_v1 >> 0x17) & 0xFF;
  *((u32 *) (((u8 *) arg1) + 4)) = (u32) (temp_v1 >> 0x1F);
  if (temp_v0 == 0)
  {
    *((s32 *) (((u8 *) arg1) + 0)) = 2;
    return;
  }
  *((s32 *) (((u8 *) arg1) + 8)) = (s32) (temp_v0 - 0x7F);
  *((s32 *) (((u8 *) arg1) + 0)) = 3;
  *((s32 *) (((u8 *) arg1) + 0xC)) = (s32) ((new_var << 7) | 0x40000000);
}
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type_x001214C8;
float __pack_f_x001214C8(void *s) __asm__("func_001213B0");
void func_001214C8_x001214C8(int class, int sign, int exp, int frac) __asm__("func_001214C8");
/* __make_fp: from https://github.com/nathanialf/ico-pc (sce/libgcc/fp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001214C8_x001214C8(int class, int sign, int exp, int frac)
{
    fp_number_type_x001214C8 buf;
    buf.class = class;
    buf.sign = sign;
    buf.normal_exp = exp;
    buf.fraction = frac;
    __pack_f_x001214C8(&buf);
}
int __make_dp_x001214F8(int class, int sign, int exp, long long frac) __asm__("func_00122080");
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type_x001214F8;
void __unpack_f_x001214F8(void *in, void *out) __asm__("func_00121468");
int func_001214F8_x001214F8(float arg_a) __asm__("func_001214F8");
/* fptodp: from https://github.com/nathanialf/ico-pc (sce/libgcc/fp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001214F8_x001214F8(float arg_a)
{
    fp_number_type_x001214F8 in;
    float local1[4];
    long long a3_val;
    local1[0] = arg_a;
    __unpack_f_x001214F8(local1, &in);
    a3_val = (long long)in.fraction << 32;
    return __make_dp_x001214F8(in.class, in.sign, in.normal_exp,
                     (long long)((unsigned long long)a3_val >> 2));
}
typedef signed int s32_x00121538;
typedef unsigned int u32_x00121538;
typedef unsigned long long u64_x00121538;
typedef double f64_x00121538;
typedef union sdfDoubleBits_t_x00121538 {
    double value;
    struct {
        u64_x00121538 fraction : 52;
        u32_x00121538 exponent : 11;
        u32_x00121538 sign : 1;
    } fields;
} sdfDoubleBits_t_x00121538;
typedef struct fp_number_type_df_x00121538 {
    s32_x00121538 class;
    s32_x00121538 sign;
    s32_x00121538 normal_exp;
    u64_x00121538 fraction;
} fp_number_type_df_x00121538;
static inline s32_x00121538 dfIsNaN_x00121538(const fp_number_type_df_x00121538 *number) {
    return (u32_x00121538)number->class < 2;
}
static inline s32_x00121538 dfIsZero_x00121538(const fp_number_type_df_x00121538 *number) {
    return number->class == 2;
}
static inline s32_x00121538 dfIsInfinity_x00121538(const fp_number_type_df_x00121538 *number) {
    return number->class == 4;
}
f64_x00121538 func_00121538_x00121538(const fp_number_type_df_x00121538 *u) __asm__("func_00121538");
/* __pack_df: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libgcc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
f64_x00121538 func_00121538_x00121538(const fp_number_type_df_x00121538 *u) {
    sdfDoubleBits_t_x00121538 result;
    u64_x00121538 fraction = u->fraction;
    u32_x00121538 exponent = 0;
    u32_x00121538 sign = u->sign;
    if (dfIsNaN_x00121538(u)) {
        fraction |= (u64_x00121538)1 << 51;
        exponent = 0x7FF;
    } else if (dfIsInfinity_x00121538(u)) {
        exponent = 0x7FF;
        fraction = 0;
    } else if (dfIsZero_x00121538(u)) {
        fraction = 0;
    } else if (fraction != 0) {
        if (u->normal_exp < -1022) {
            fraction = 0;
        } else if (u->normal_exp > 1023) {
            exponent = 0x7FF;
            fraction = 0;
        } else {
            exponent = u->normal_exp + 1023;
            fraction >>= 8;
        }
    }
    result.fields.fraction = fraction;
    result.fields.exponent = exponent;
    result.fields.sign = sign;
    return result.value;
}
typedef unsigned int UDItype_x00121610 __attribute__((mode(DI)));
typedef float DFtype_x00121610 __attribute__((mode(DF)));
typedef enum { CLASS_SNAN_x00121610, CLASS_QNAN_x00121610, CLASS_ZERO_x00121610, CLASS_NUMBER_x00121610, CLASS_INFINITY_x00121610 } fp_class_type_x00121610;
typedef UDItype_x00121610 fractype_x00121610;
typedef DFtype_x00121610 FLO_type_x00121610;
typedef struct {
    fp_class_type_x00121610 class;
    unsigned int sign;
    int normal_exp;
    union {
        fractype_x00121610 ll;
    } fraction;
} fp_number_type_x00121610;
typedef union {
    FLO_type_x00121610 value;
    struct {
        fractype_x00121610 fraction : 52 __attribute__((packed));
        unsigned int exp : 11 __attribute__((packed));
        unsigned int sign : 1 __attribute__((packed));
    } bits;
} FLO_union_type_x00121610;
void func_00121610_x00121610(FLO_union_type_x00121610 *src, fp_number_type_x00121610 *dst) __asm__("func_00121610");
/* __unpack_d: from https://github.com/crashbashash/DW4_Decomp (src/libgcc/dp_bit.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00121610_x00121610(FLO_union_type_x00121610 *src, fp_number_type_x00121610 *dst) {
    fractype_x00121610 fraction;
    int exp;
    int sign;
    fraction = src->bits.fraction;
    exp = src->bits.exp;
    sign = src->bits.sign;
    dst->sign = sign;
    if (exp == 0) {
        dst->class = CLASS_ZERO_x00121610;
    } else if (exp == (0x7ff)) {
        dst->normal_exp = 1023;
        if (fraction == 0) {
            dst->class = CLASS_INFINITY_x00121610;
            dst->fraction.ll = (1LL << (52 + 8L));
        } else {
            if (fraction & 0x8000000000000LL) {
                dst->class = CLASS_QNAN_x00121610;
            } else {
                dst->class = CLASS_SNAN_x00121610;
            }
            dst->fraction.ll = fraction;
        }
    } else {
        dst->normal_exp = exp - 1023;
        dst->class = CLASS_NUMBER_x00121610;
        dst->fraction.ll = (fraction << 8L) | (1LL << (52 + 8L));
    }
}
typedef signed int s32_x001216D0;
typedef unsigned int u32_x001216D0;
typedef signed long long s64_x001216D0;
typedef unsigned long long u64_x001216D0;
typedef struct FpNumber_x001216D0 {
    s32_x001216D0 class;
    u32_x001216D0 sign;
    s32_x001216D0 normal_exp;
    s32_x001216D0 alignment_padding;
    u64_x001216D0 fraction;
} FpNumber_x001216D0;
extern FpNumber_x001216D0 D_001596F0_x001216D0 __asm__("D_0045EA90");
FpNumber_x001216D0 *func_001216D0_x001216D0(FpNumber_x001216D0 *left_operand, FpNumber_x001216D0 *right_operand, FpNumber_x001216D0 *result_storage) __asm__("func_001216D0");
/* This is a software floating point library which can be used instead of
   the floating point routines in libgcc1.c for targets without hardware
   floating point. 
 Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
/* _fpadd_parts: from https://github.com/lombyte-project/Lombyte (src/sdk/soft_float/fpadd_parts.c, GPL-3.0); ee-gcc 2.96 -O2 -G0 */
FpNumber_x001216D0 *func_001216D0_x001216D0(FpNumber_x001216D0 *left_operand, FpNumber_x001216D0 *right_operand, FpNumber_x001216D0 *result_storage) {
    s64_x001216D0 tfraction;
    s32_x001216D0 a_normal_exp;
    s32_x001216D0 b_normal_exp;
    u64_x001216D0 a_fraction;
    u64_x001216D0 b_fraction;
    if ((u32_x001216D0)left_operand->class < 2) {
        return left_operand;
    }
    if ((u32_x001216D0)right_operand->class < 2) {
        return right_operand;
    }
    if ((left_operand->class ^ 4) == 0) {
        if ((right_operand->class ^ 4) == 0 && left_operand->sign != right_operand->sign) {
            return &D_001596F0_x001216D0;
        }
        return left_operand;
    }
    if ((right_operand->class ^ 4) == 0) {
        return right_operand;
    }
    if ((right_operand->class ^ 2) == 0) {
        if ((left_operand->class ^ 2) == 0) {
            *result_storage = *left_operand;
            result_storage->sign = left_operand->sign & right_operand->sign;
            return result_storage;
        }
        return left_operand;
    }
    if ((left_operand->class ^ 2) == 0) {
        return right_operand;
    }
    a_normal_exp = left_operand->normal_exp;
    b_normal_exp = right_operand->normal_exp;
    a_fraction = left_operand->fraction;
    b_fraction = right_operand->fraction;
    {
        s32_x001216D0 exponent_difference;
        exponent_difference = a_normal_exp - b_normal_exp;
        if (exponent_difference < 0) {
            exponent_difference = -exponent_difference;
        }
        if (exponent_difference < 64) {
            while (a_normal_exp > b_normal_exp) {
                b_normal_exp++;
                { b_fraction = (b_fraction & 1) | (b_fraction >> 1); };
            }
            while (b_normal_exp > a_normal_exp) {
                a_normal_exp++;
                { a_fraction = (a_fraction & 1) | (a_fraction >> 1); };
            }
        } else {
            if (a_normal_exp > b_normal_exp) {
                b_normal_exp = a_normal_exp;
                b_fraction = 0;
            } else {
                a_normal_exp = b_normal_exp;
                a_fraction = 0;
            }
        }
    }
    if (left_operand->sign != right_operand->sign) {
        if (left_operand->sign) {
            tfraction = -a_fraction + b_fraction;
        } else {
            tfraction = a_fraction - b_fraction;
        }
        if (tfraction >= 0) {
            result_storage->sign = 0;
            result_storage->normal_exp = a_normal_exp;
            result_storage->fraction = tfraction;
        } else {
            result_storage->sign = 1;
            result_storage->normal_exp = a_normal_exp;
            result_storage->fraction = -tfraction;
        }
        while (result_storage->fraction < 0x1000000000000000ULL && result_storage->fraction) {
            result_storage->fraction <<= 1;
            result_storage->normal_exp--;
        }
    } else {
        result_storage->sign = left_operand->sign;
        result_storage->normal_exp = a_normal_exp;
        result_storage->fraction = a_fraction + b_fraction;
    }
    result_storage->class = 3;
    if (result_storage->fraction >= 0x2000000000000000ULL) {
        { result_storage->fraction = (result_storage->fraction & 1) | (result_storage->fraction >> 1); };
        result_storage->normal_exp++;
    }
    return result_storage;
}
void __unpack_d_x00121930(void *in, void *out) __asm__("func_00121610");
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x00121930;
long long __pack_d_x00121930(void *s) __asm__("func_00121538");
void __unpack_d_x00121930(void *in, void *out) __asm__("func_00121610");
fp_number_type_d_x00121930 *_fpadd_parts_x00121930(fp_number_type_d_x00121930 *a, fp_number_type_d_x00121930 *b, fp_number_type_d_x00121930 *tmp) __asm__("func_001216D0");
void func_00121930_x00121930(long arg_a, long arg_b) __asm__("func_00121930");
/* dpadd: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00121930_x00121930(long arg_a, long arg_b)
{
    fp_number_type_d_x00121930 x, y, z;
    __unpack_d_x00121930(&arg_a, &x);
    __unpack_d_x00121930(&arg_b, &y);
    __pack_d_x00121930(_fpadd_parts_x00121930(&x, &y, &z));
}
void __unpack_d_x00121988(void *in, void *out) __asm__("func_00121610");
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x00121988;
long long __pack_d_x00121988(void *s) __asm__("func_00121538");
void __unpack_d_x00121988(void *in, void *out) __asm__("func_00121610");
fp_number_type_d_x00121988 *_fpadd_parts_x00121988(fp_number_type_d_x00121988 *a, fp_number_type_d_x00121988 *b, fp_number_type_d_x00121988 *tmp) __asm__("func_001216D0");
long long func_00121988_x00121988(long arg_a, long arg_b) __asm__("func_00121988");
/* dpsub: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
long long func_00121988_x00121988(long arg_a, long arg_b)
{
    fp_number_type_d_x00121988 x, y, z;
    __unpack_d_x00121988(&arg_a, &x);
    __unpack_d_x00121988(&arg_b, &y);
    y.sign ^= 1;
    return __pack_d_x00121988(_fpadd_parts_x00121988(&x, &y, &z));
}
typedef signed int s32_x001219F0;
typedef unsigned int u32_x001219F0;
typedef unsigned long long u64_x001219F0;
typedef double f64_x001219F0;
typedef struct fp_number_type_df_x001219F0 {
    s32_x001219F0 class;
    s32_x001219F0 sign;
    s32_x001219F0 normal_exp;
    u64_x001219F0 fraction;
} fp_number_type_df_x001219F0;
extern f64_x001219F0 __pack_df_x001219F0(const fp_number_type_df_x001219F0 *u) __asm__("func_00121538");
extern void sdfUnpackDouble_x001219F0(const double *x, fp_number_type_df_x001219F0 *u) __asm__("func_00121610");
extern const fp_number_type_df_x001219F0 libgccDfInvalidResult_x001219F0 __asm__("D_0045EA90");
static inline s32_x001219F0 dfIsNaN_x001219F0(const fp_number_type_df_x001219F0 *number) {
    return (u32_x001219F0)number->class < 2;
}
static inline s32_x001219F0 dfIsZero_x001219F0(const fp_number_type_df_x001219F0 *number) {
    return number->class == 2;
}
static inline s32_x001219F0 dfIsInfinity_x001219F0(const fp_number_type_df_x001219F0 *number) {
    return number->class == 4;
}
static inline const fp_number_type_df_x001219F0 *dfMultiplyParts_x001219F0(fp_number_type_df_x001219F0 *left,
                                                       fp_number_type_df_x001219F0 *right,
                                                       fp_number_type_df_x001219F0 *result) {
    u64_x001219F0 leftLow;
    u64_x001219F0 leftHigh;
    u64_x001219F0 rightLow;
    u64_x001219F0 rightHigh;
    u64_x001219F0 lowProduct;
    u64_x001219F0 crossLeft;
    u64_x001219F0 crossRight;
    u64_x001219F0 cross;
    u64_x001219F0 low;
    u64_x001219F0 high;
    u64_x001219F0 highProduct;
    if (dfIsNaN_x001219F0(left)) {
        left->sign = left->sign != right->sign;
        return left;
    }
    if (dfIsNaN_x001219F0(right)) {
        right->sign = left->sign != right->sign;
        return right;
    }
    if (dfIsInfinity_x001219F0(left)) {
        if (dfIsZero_x001219F0(right)) {
            return &libgccDfInvalidResult_x001219F0;
        }
        left->sign = left->sign != right->sign;
        return left;
    }
    if (dfIsInfinity_x001219F0(right)) {
        if (dfIsZero_x001219F0(left)) {
            return &libgccDfInvalidResult_x001219F0;
        }
        right->sign = left->sign != right->sign;
        return right;
    }
    if (dfIsZero_x001219F0(left)) {
        left->sign = left->sign != right->sign;
        return left;
    }
    if (dfIsZero_x001219F0(right)) {
        right->sign = left->sign != right->sign;
        return right;
    }
    leftLow = (u64_x001219F0)left->fraction & 0xFFFFFFFFULL;
    leftHigh = (u64_x001219F0)left->fraction >> 32;
    rightLow = (u64_x001219F0)right->fraction & 0xFFFFFFFFULL;
    rightHigh = (u64_x001219F0)right->fraction >> 32;
    lowProduct = rightLow * leftLow;
    crossLeft = rightHigh * leftLow;
    crossRight = rightLow * leftHigh;
    highProduct = rightHigh * leftHigh;
    {
        u64_x001219F0 upperAccum = 0;
        u64_x001219F0 lowerAccum;
        u64_x001219F0 shiftedCross;
        cross = crossLeft + crossRight;
        if (cross < crossLeft) {
            upperAccum += (u64_x001219F0)1 << 32;
        }
        shiftedCross = (cross << 32) & 0xFFFFFFFF00000000ULL;
        lowerAccum = lowProduct + shiftedCross;
        if (lowerAccum < lowProduct) {
            upperAccum++;
        }
        upperAccum += ((cross >> 32) & 0xFFFFFFFFULL) + highProduct;
        high = upperAccum;
        low = lowerAccum;
    }
    result->normal_exp = left->normal_exp + right->normal_exp;
    result->sign = left->sign != right->sign;
    result->normal_exp += 4;
    while (high > (~(u64_x001219F0)0 >> 3)) {
        result->normal_exp++;
        if (high & 1) {
            low >>= 1;
            low |= (u64_x001219F0)1 << 63;
        }
        high >>= 1;
    }
    while (high <= (~(u64_x001219F0)0 >> 4)) {
        result->normal_exp--;
        high <<= 1;
        if (low & ((u64_x001219F0)1 << 63)) {
            high |= 1;
        }
        low <<= 1;
    }
    result->class = 3;
    result->fraction = high;
    return result;
}
f64_x001219F0 __pack_df_x001219F0(const fp_number_type_df_x001219F0 *u) __asm__("func_00121538");
void sdfUnpackDouble_x001219F0(const double *x, fp_number_type_df_x001219F0 *u) __asm__("func_00121610");
f64_x001219F0 dpmul_x001219F0(f64_x001219F0 a, f64_x001219F0 b) __asm__("dpmul");
/* dpmul_x001219F0: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libgcc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
f64_x001219F0 dpmul_x001219F0(f64_x001219F0 a, f64_x001219F0 b) {
    fp_number_type_df_x001219F0 left;
    fp_number_type_df_x001219F0 right;
    fp_number_type_df_x001219F0 result;
    sdfUnpackDouble_x001219F0(&a, &left);
    sdfUnpackDouble_x001219F0(&b, &right);
    return __pack_df_x001219F0(dfMultiplyParts_x001219F0(&left, &right, &result));
}
typedef signed int s32_x00121C78;
typedef unsigned int u32_x00121C78;
typedef unsigned long long u64_x00121C78;
typedef double f64_x00121C78;
typedef struct fp_number_type_df_x00121C78 {
    s32_x00121C78 class;
    s32_x00121C78 sign;
    s32_x00121C78 normal_exp;
    long fraction;
} fp_number_type_df_x00121C78;
extern void sdfUnpackDouble_x00121C78(const double *value, fp_number_type_df_x00121C78 *parts) __asm__("func_00121610");
extern f64_x00121C78 __pack_df_x00121C78(const fp_number_type_df_x00121C78 *parts) __asm__("func_00121538");
extern const fp_number_type_df_x00121C78 libgccDfInvalidResult_x00121C78 __asm__("D_0045EA90");
static inline s32_x00121C78 dfIsNaN_x00121C78(const fp_number_type_df_x00121C78 *number)
{
    return (u32_x00121C78)number->class < 2;
}
static inline s32_x00121C78 dfIsZero_x00121C78(const fp_number_type_df_x00121C78 *number)
{
    return number->class == 2;
}
static inline s32_x00121C78 dfIsInfinity_x00121C78(const fp_number_type_df_x00121C78 *number)
{
    return number->class == 4;
}
static inline const fp_number_type_df_x00121C78 *dfDivideParts_x00121C78(fp_number_type_df_x00121C78 *numerator,
                                                    fp_number_type_df_x00121C78 *denominator)
{
    u64_x00121C78 remainder;
    u64_x00121C78 divisor;
    u64_x00121C78 quotient;
    u64_x00121C78 bit;
    if (dfIsNaN_x00121C78(numerator)) return numerator;
    if (dfIsNaN_x00121C78(denominator)) return denominator;
    numerator->sign ^= denominator->sign;
    if (dfIsInfinity_x00121C78(numerator) || dfIsZero_x00121C78(numerator)) {
        if (numerator->class == denominator->class) return &libgccDfInvalidResult_x00121C78;
        return numerator;
    }
    if (dfIsInfinity_x00121C78(denominator)) {
        numerator->fraction = 0;
        numerator->normal_exp = 0;
        return numerator;
    }
    if (dfIsZero_x00121C78(denominator)) {
        numerator->class = 4;
        return numerator;
    }
    numerator->normal_exp -= denominator->normal_exp;
    remainder = (u64_x00121C78)numerator->fraction;
    divisor = (u64_x00121C78)denominator->fraction;
    if (remainder < divisor) {
        numerator->normal_exp--;
        remainder <<= 1;
    }
    bit = 1ULL << 60;
    quotient = 0;
    while (bit != 0) {
        u64_x00121C78 nextRemainder;
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient |= bit;
        }
        nextRemainder = remainder << 1;
        bit >>= 1;
        remainder = nextRemainder;
    }
    numerator->fraction = quotient;
    return numerator;
}
f64_x00121C78 func_00121C78_x00121C78(f64_x00121C78 a, f64_x00121C78 b) __asm__("func_00121C78");
/* dpdiv: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libgcc_dpdiv.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
f64_x00121C78 func_00121C78_x00121C78(f64_x00121C78 a, f64_x00121C78 b)
{
    fp_number_type_df_x00121C78 numerator;
    fp_number_type_df_x00121C78 denominator;
    const fp_number_type_df_x00121C78 *result;
    sdfUnpackDouble_x00121C78(&a, &numerator);
    sdfUnpackDouble_x00121C78(&b, &denominator);
    result = dfDivideParts_x00121C78(&numerator, &denominator);
    return __pack_df_x00121C78(result);
}
typedef enum {
    CLASS_SNAN_x00121DB8,
    CLASS_QNAN_x00121DB8,
    CLASS_ZERO_x00121DB8,
    CLASS_NUMBER_x00121DB8,
    CLASS_INFINITY_x00121DB8
} fp_class_type_x00121DB8;
typedef unsigned long fractype_x00121DB8;
typedef struct {
    fp_class_type_x00121DB8 class;
    unsigned int sign;
    int normal_exp;
    union {
        fractype_x00121DB8 ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_x00121DB8;
static __inline__ int fp_isnan_x00121DB8(fp_number_type_x00121DB8 *x)
{
    return x->class == CLASS_SNAN_x00121DB8 || x->class == CLASS_QNAN_x00121DB8;
}
static __inline__ int fp_isinf_x00121DB8(fp_number_type_x00121DB8 *x)
{
    return x->class == CLASS_INFINITY_x00121DB8;
}
static __inline__ int fp_iszero_x00121DB8(fp_number_type_x00121DB8 *x)
{
    return x->class == CLASS_ZERO_x00121DB8;
}
int func_00121DB8_x00121DB8(fp_number_type_x00121DB8 *a, fp_number_type_x00121DB8 *b) __asm__("func_00121DB8");
/* __fpcmp_parts_d: from https://github.com/new-coke/rez-decomp (src/libc/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00121DB8_x00121DB8(fp_number_type_x00121DB8 *a, fp_number_type_x00121DB8 *b)
{
    if (fp_isnan_x00121DB8(a) || fp_isnan_x00121DB8(b))
        return 1;
    if (fp_isinf_x00121DB8(a) && fp_isinf_x00121DB8(b))
        return b->sign - a->sign;
    if (fp_isinf_x00121DB8(a))
        return a->sign ? -1 : 1;
    if (fp_isinf_x00121DB8(b))
        return b->sign ? 1 : -1;
    if (fp_iszero_x00121DB8(a) && fp_iszero_x00121DB8(b))
        return 0;
    if (fp_iszero_x00121DB8(a)) {
        if (b->sign)
            return 1;
        return -1;
    }
    if (fp_iszero_x00121DB8(b))
        return a->sign ? -1 : 1;
    if (a->sign != b->sign)
        return a->sign ? -1 : 1;
    if (a->normal_exp > b->normal_exp)
        return a->sign ? -1 : 1;
    if (a->normal_exp < b->normal_exp)
        return a->sign ? 1 : -1;
    if (a->fraction.ll > b->fraction.ll)
        return a->sign ? -1 : 1;
    if (a->fraction.ll < b->fraction.ll)
        return a->sign ? 1 : -1;
    return 0;
}
void __unpack_d_x00121ED8(void *in, void *out) __asm__("func_00121610");
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x00121ED8;
void __unpack_d_x00121ED8(void *in, void *out) __asm__("func_00121610");
int __fpcmp_parts_d_x00121ED8(fp_number_type_d_x00121ED8 *a, fp_number_type_d_x00121ED8 *b) __asm__("func_00121DB8");
int func_00121ED8_x00121ED8(long arg_a, long arg_b) __asm__("func_00121ED8");
/* dpcmp: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00121ED8_x00121ED8(long arg_a, long arg_b)
{
    fp_number_type_d_x00121ED8 x, y;
    __unpack_d_x00121ED8(&arg_a, &x);
    __unpack_d_x00121ED8(&arg_b, &y);
    return __fpcmp_parts_d_x00121ED8(&x, &y);
}
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x00121F28;
long long __pack_d_x00121F28(void *s) __asm__("func_00121538");
long long func_00121F28_x00121F28(int arg_a) __asm__("func_00121F28");
/* litodp: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
long long func_00121F28_x00121F28(int arg_a)
{
    fp_number_type_d_x00121F28 in;
    in.class = 3;
    in.sign = arg_a < 0;
    if (!arg_a) {
        in.class = 2;
    } else {
        in.normal_exp = 60;
        if (in.sign) {
            if (arg_a == (-0x7FFFFFFF) - 1) {
                return 0xC1E0000000000000LL;
            }
            in.fraction.ll = -arg_a;
        } else {
            in.fraction.ll = arg_a;
        }
        while (in.fraction.ll < 0x1000000000000000ULL) {
            in.fraction.ll <<= 1;
            in.normal_exp--;
        }
    }
    return __pack_d_x00121F28(&in);
}
typedef signed int s32_x00121FE0;
typedef unsigned int u32_x00121FE0;
typedef unsigned long long u64_x00121FE0;
typedef double f64_x00121FE0;
s32_x00121FE0 __unpack_d_x00121FE0() __asm__("func_00121610");
typedef struct FpNumber_x00121FE0 {
    s32_x00121FE0 class;
    u32_x00121FE0 sign;
    s32_x00121FE0 normal_exp;
    s32_x00121FE0 alignment_padding;
    u64_x00121FE0 fraction;
} FpNumber_x00121FE0;
typedef union {
    f64_x00121FE0 value;
    u64_x00121FE0 value_raw;
} FLOUnion_x00121FE0;
s32_x00121FE0 func_00121FE0_x00121FE0(u64_x00121FE0 arg_a) __asm__("func_00121FE0");
/* dptoli: from https://github.com/lombyte-project/Lombyte (src/sdk/soft_float/dptoli.c, GPL-3.0); ee-gcc 2.96 -O2 -G0 */
s32_x00121FE0 func_00121FE0_x00121FE0(u64_x00121FE0 arg_a) {
    FpNumber_x00121FE0 unpacked_value;
    s32_x00121FE0 integer_magnitude;
    __unpack_d_x00121FE0((FLOUnion_x00121FE0 *)&arg_a, &unpacked_value);
    if ((unpacked_value.class ^ 2) == 0) {
        return 0;
    }
    if ((u32_x00121FE0)unpacked_value.class < 2) {
        return 0;
    }
    if ((unpacked_value.class ^ 4) == 0) {
        return unpacked_value.sign ? 0x80000000 : 0x7FFFFFFF;
    }
    if (unpacked_value.normal_exp < 0) {
        return 0;
    }
    if (unpacked_value.normal_exp > 30) {
        return unpacked_value.sign ? 0x80000000 : 0x7FFFFFFF;
    }
    integer_magnitude = (s32_x00121FE0)(unpacked_value.fraction >> (60 - unpacked_value.normal_exp));
    return unpacked_value.sign ? -integer_magnitude : integer_magnitude;
}
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x00122080;
long long __pack_d_x00122080(void *s) __asm__("func_00121538");
int func_00122080_x00122080(int class, int sign, int exp, long long frac) __asm__("func_00122080");
/* __make_dp: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00122080_x00122080(int class, int sign, int exp, long long frac)
{
    fp_number_type_d_x00122080 s;
    s.class = class;
    s.sign = sign;
    s.normal_exp = exp;
    s.fraction.ll = frac;
    __pack_d_x00122080(&s);
}
void __unpack_d_x001220B0(void *in, void *out) __asm__("func_00121610");
void __make_fp_x001220B0(int class, int sign, int exp, int frac) __asm__("func_001214C8");
typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d_x001220B0;
void __unpack_d_x001220B0(void *in, void *out) __asm__("func_00121610");
float func_001220B0_x001220B0(double arg_a) __asm__("func_001220B0");
/* dptofp: from https://github.com/nathanialf/ico-pc (sce/libgcc/dp-bit.c, MIT); ee-gcc 2.96 -O2 -G0 */
float func_001220B0_x001220B0(double arg_a)
{
    fp_number_type_d_x001220B0 buf;
    long long m;
    int hi, t;
    __unpack_d_x001220B0(&arg_a, &buf);
    m = buf.fraction.ll;
    hi = (int)(m >> 30);
    t = hi | 1;
    if ((m & 0x3FFFFFFF) == 0)
        t = hi;
    __make_fp_x001220B0(buf.class, buf.sign, buf.normal_exp, t);
}
typedef signed int s32_x00122108;
typedef unsigned int u32_x00122108;
typedef unsigned long long u64_x00122108;
typedef double f64_x00122108;
s32_x00122108 __unpack_d_x00122108() __asm__("func_00121610");
typedef struct FpNumber_x00122108 {
    s32_x00122108 class;
    u32_x00122108 sign;
    s32_x00122108 normal_exp;
    s32_x00122108 alignment_padding;
    u64_x00122108 fraction;
} FpNumber_x00122108;
typedef union {
    f64_x00122108 value;
    u64_x00122108 value_raw;
} FLOUnion_x00122108;
u32_x00122108 func_00122108_x00122108(u64_x00122108 arg_a) __asm__("func_00122108");
/* dptoul: from https://github.com/lombyte-project/Lombyte (src/sdk/soft_float/dptoul.c, GPL-3.0); ee-gcc 2.96 -O2 -G0 */
u32_x00122108 func_00122108_x00122108(u64_x00122108 arg_a) {
    FpNumber_x00122108 unpacked_value;
    __unpack_d_x00122108((FLOUnion_x00122108 *)&arg_a, &unpacked_value);
    if ((unpacked_value.class ^ 2) == 0) {
        return 0;
    }
    if ((u32_x00122108)unpacked_value.class < 2) {
        return 0;
    }
    if (unpacked_value.sign) {
        return 0;
    }
    if ((unpacked_value.class ^ 4) == 0) {
        return 0xFFFFFFFF;
    }
    if (unpacked_value.normal_exp < 0) {
        return 0;
    }
    if (unpacked_value.normal_exp > 31) {
        return 0xFFFFFFFF;
    } else if (unpacked_value.normal_exp > 60) {
        return (s32_x00122108)(unpacked_value.fraction << (unpacked_value.normal_exp - 60));
    } else {
        return (s32_x00122108)(unpacked_value.fraction >> (60 - unpacked_value.normal_exp));
    }
}
