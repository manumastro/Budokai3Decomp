/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdlib/dtoa.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member dtoa.o */
#include <stdlib.h>

#include <reent.h>

#include <string.h>

#include <libc_internal.h>

/* newlib mprec.h, IEEE little-endian: the double's high word is i[1]. */
union double_union {
    double d;
    unsigned int i[2];
};

#define word0(x) ((x).i[1])

#define word1(x) ((x).i[0])

#define Exp_shift1 20

#define Exp_msk1 0x100000

#define Exp_mask 0x7ff00000

#define P 53

#define Bias 1023

#define Exp_11 0x3ff00000

#define Frac_mask 0xfffff

#define Frac_mask1 0xfffff

#define Ten_pmax 22

#define Bletch 0x10

#define Bndry_mask 0xfffff

#define Log2P 1

#define Quick_max 14

#define Int_max 14

#define Sign_bit 0x80000000

#define n_bigtens 5

char *_dtoa_r(Reent *ptr, double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);




int quorem(_Bigint *b, _Bigint *S)
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
    if (__mcmp(b, S) >= 0) {
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
INCLUDE_PAD(4);
