#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011ECE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011EE78);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F108);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F220);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F320);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F3F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F4C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libm_0011ECE8", func_0011F5A8);
