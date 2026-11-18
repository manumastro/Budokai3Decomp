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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121468);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_001216D0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00121FE0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgcc_0011F758", func_00122108);
