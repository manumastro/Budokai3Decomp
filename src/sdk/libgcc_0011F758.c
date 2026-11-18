#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_0011F758);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_0011FDF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", __udivdi3);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", __umoddi3);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00120F68);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121010);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_001210F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121210);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121288);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_001213B0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121538);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121610);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", dpmul);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121C78);
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121DB8);
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
