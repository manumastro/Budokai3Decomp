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
