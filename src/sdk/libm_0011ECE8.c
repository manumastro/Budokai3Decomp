#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011ECE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011EE78);
typedef int __int32_t_x0011F108;
typedef unsigned int __uint32_t_x0011F108;
typedef union {
    float value;
    unsigned int word;
} IeeeFloatWord_x0011F108;
float func_0011F108_x0011F108(float x) __asm__("func_0011F108");
/* ceilf: from https://github.com/crashbashash/DW4_Decomp (src/newlib/sf_ceil.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
float func_0011F108_x0011F108(float x)
{
        __int32_t_x0011F108 i0,j0;
        __uint32_t_x0011F108 i,ix;
        do { IeeeFloatWord_x0011F108 gf_u; gf_u.value = (x); (i0) = gf_u.word; } while (0);
        ix = (i0&0x7fffffff);
        j0 = (ix>>23)-0x7f;
        if(j0<23) {
            if(j0<0) {
                if(((float)1.0e30)+x>(float)0.0) {
                    if(i0<0) {i0=0x80000000;}
                    else if(!((ix)<0x00800000L)) { i0=0x3f800000;}
                }
            } else {
                i = (0x007fffff)>>j0;
                if((i0&i)==0) return x;
                if(((float)1.0e30)+x>(float)0.0) {
                    if(i0>0) i0 += (0x00800000)>>j0;
                    i0 &= (~i);
                }
            }
        } else {
            if(!1) return x+x;
            else return x;
        }
        do { IeeeFloatWord_x0011F108 sf_u; sf_u.word = (i0); (x) = sf_u.value; } while (0);
        return x;
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F1E0;
float func_0011F1E0_x0011F1E0(float x, float y) __asm__("func_0011F1E0");
/* copysignf: from https://github.com/nathanialf/ico-pc (sce/libm/common/sf_copysign.c, MIT); ee-gcc 2.96 -O2 -G0 */
float func_0011F1E0_x0011F1E0(float x, float y)
{
    unsigned int ix, iy;
    do { ieee_float_shape_type_x0011F1E0 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    do { ieee_float_shape_type_x0011F1E0 gf_u; gf_u.value = (y); (iy) = gf_u.word; } while (0);
    do { ieee_float_shape_type_x0011F1E0 sf_u; sf_u.word = ((ix & 0x7fffffff) | (iy & 0x80000000)); (x) = sf_u.value; } while (0);
    return x;
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F220;
extern float __kernel_sinf_x0011F220(float x, float y, int iy) __asm__("func_0011E1B8");
extern float __kernel_cosf_x0011F220(float x, float y) __asm__("func_0011D800");
extern int __ieee754_rem_pio2f_x0011F220(float x, float *y) __asm__("func_0011D380");
float func_0011F220_x0011F220(float x) __asm__("func_0011F220");
/* cosf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/cosf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011F220_x0011F220(float x)
{
    float y[2], z = 0.0f;
    int n, ix;
    do { ieee_float_shape_type_x0011F220 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    ix &= 0x7fffffff;
    if (ix <= 0x3f490fd8) {
        return __kernel_cosf_x0011F220(x, z);
    } else {
        n = __ieee754_rem_pio2f_x0011F220(x, y);
        switch (n & 3) {
        case 0:
            return __kernel_cosf_x0011F220(y[0], y[1]);
        case 1:
            return -__kernel_sinf_x0011F220(y[0], y[1], 1);
        case 2:
            return -__kernel_cosf_x0011F220(y[0], y[1]);
        default:
            return __kernel_sinf_x0011F220(y[0], y[1], 1);
        }
    }
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F2F8;
float func_0011F2F8_x0011F2F8(float x) __asm__("func_0011F2F8");
/* fabsf: from https://github.com/nathanialf/ico-pc (sce/libm/math/sf_fabs.c, MIT); ee-gcc 2.96 -O2 -G0 */
float func_0011F2F8_x0011F2F8(float x)
{
    unsigned int ix;
    do { ieee_float_shape_type_x0011F2F8 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    do { ieee_float_shape_type_x0011F2F8 sf_u; sf_u.word = (ix & 0x7fffffff); (x) = sf_u.value; } while (0);
    return x;
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F320;
float func_0011F320_x0011F320(float x) __asm__("func_0011F320");
/* floorf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/floorf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011F320_x0011F320(float x)
{
    int i0, j0;
    unsigned int i, ix;
    do { ieee_float_shape_type_x0011F320 gf_u; gf_u.value = (x); (i0) = gf_u.word; } while (0);
    ix = (i0 & 0x7fffffff);
    j0 = (ix >> 23) - 0x7f;
    if (j0 < 23) {
        if (j0 < 0) {
            if ((1.0e30f) + x > (float)0.0) {
                if (i0 >= 0) {
                    i0 = 0;
                } else if (!(ix < 0x00800000)) {
                    i0 = 0xbf800000;
                }
            }
        } else {
            i = (0x007fffff) >> j0;
            if ((i0 & i) == 0) {
                return x;
            }
            if ((1.0e30f) + x > (float)0.0) {
                if (i0 < 0) {
                    i0 += (0x00800000) >> j0;
                }
                i0 &= (~i);
            }
        }
    } else {
        return x;
    }
    do { ieee_float_shape_type_x0011F320 sf_u; sf_u.word = (i0); (x) = sf_u.value; } while (0);
    return x;
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F3F8;
extern float copysignf_x0011F3F8(float x, float y) __asm__("func_0011F1E0");
float func_0011F3F8_x0011F3F8(float x, int n) __asm__("func_0011F3F8");
/* scalbnf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/scalbnf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011F3F8_x0011F3F8(float x, int n)
{
    int k, ix;
    unsigned int hx;
    do { ieee_float_shape_type_x0011F3F8 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    hx = ix & 0x7fffffff;
    k = hx >> 23;
    if (hx < 0x00800000) {
        return x;
    }
    k = k + n;
    if (k > 0xff) {
        return (1.0e+30f) * copysignf_x0011F3F8((1.0e+30f), x);
    }
    if (k > 0) {
        do { ieee_float_shape_type_x0011F3F8 sf_u; sf_u.word = ((ix & 0x807fffff) | (k << 23)); (x) = sf_u.value; } while (0);
        return x;
    }
    if (n > 50000) {
        return (1.0e+30f) * copysignf_x0011F3F8((1.0e+30f), x);
    } else {
        return (1.0e-30f) * copysignf_x0011F3F8((1.0e-30f), x);
    }
}
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011F4C0;
extern float __kernel_sinf_x0011F4C0(float x, float y, int iy) __asm__("func_0011E1B8");
extern float __kernel_cosf_x0011F4C0(float x, float y) __asm__("func_0011D800");
extern int __ieee754_rem_pio2f_x0011F4C0(float x, float *y) __asm__("func_0011D380");
float func_0011F4C0_x0011F4C0(float x) __asm__("func_0011F4C0");
/* sinf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/sinf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011F4C0_x0011F4C0(float x)
{
    float y[2], z = 0.0f;
    int n, ix;
    do { ieee_float_shape_type_x0011F4C0 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    ix &= 0x7fffffff;
    if (ix <= 0x3f490fd8) {
        return __kernel_sinf_x0011F4C0(x, z, 0);
    } else {
        n = __ieee754_rem_pio2f_x0011F4C0(x, y);
        switch (n & 3) {
        case 0:
            return __kernel_sinf_x0011F4C0(y[0], y[1], 1);
        case 1:
            return __kernel_cosf_x0011F4C0(y[0], y[1]);
        case 2:
            return -__kernel_sinf_x0011F4C0(y[0], y[1], 1);
        default:
            return -__kernel_cosf_x0011F4C0(y[0], y[1]);
        }
    }
}
typedef int __int32_t_x0011F5A8;
typedef union {
    float value;
    unsigned int word;
} IeeeFloatWord_x0011F5A8;
int __ieee754_rem_pio2f_x0011F5A8(float x, float *y) __asm__("func_0011D380");
float __kernel_tanf_x0011F5A8(float x, float y, int iy) __asm__("func_0011E2C0");
float func_0011F5A8_x0011F5A8(float x) __asm__("func_0011F5A8");
/* tanf: from https://github.com/crashbashash/DW4_Decomp (src/newlib/sf_tan.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
float func_0011F5A8_x0011F5A8(float x)
{
        float y[2],z=0.0;
        __int32_t_x0011F5A8 n,ix;
        do { IeeeFloatWord_x0011F5A8 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        ix &= 0x7fffffff;
        if(ix <= 0x3f490fda) return __kernel_tanf_x0011F5A8(x,z,1);
        else if (!1) return x-x;
        else {
            n = __ieee754_rem_pio2f_x0011F5A8(x,y);
            return __kernel_tanf_x0011F5A8(y[0],y[1],1-((n&1)<<1));
        }
}
