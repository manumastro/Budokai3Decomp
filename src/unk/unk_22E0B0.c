#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E0B0);
void func_0022E630(s8 *a0)
{
    u32 *p;
    u32 *r;
    s32 k;
    u32 *t;
    s32 n;
    s32 m;
    s32 i;
    u32 *w;
    u32 *q;
    if ((a0[0] == 0x21))
    {
        return;
    }
    a0[0] = 0x21;
    w = ((u32 *)a0);
    w[2] = (((s32)a0) + *((s32 *)((a0 + 8))));
    n = ((s32)1[w]);
    t = ((u32 *)w[2]);
    i = 0;
    if ((0 < n))
    {
        do
        {
            *t += ((u32)a0);
            r = ((u32 *)*t);
            if ((((s32)r[3]) < ((s32)a0)))
            {
                *((s32 *)((((u8 *)r) + 12))) = (((s32)a0) + *((u32 *)((((u8 *)r) + 12))));
                p = ((u32 *)r[3]);
                if ((*((u8 *)p) != 0))
                {
                    do
                    {
                        if ((((s32)p[1]) < ((s32)a0)))
                        {
                            *((s32 *)((((u8 *)p) + 4))) = (((s32)a0) + *((s32 *)((((s32)((u8 *)p)) + ((s32)4)))));
                        }
                        p += 2;
                    }
                    while ((*((u8 *)p) != 0));
                }
            }
            i++;
            t++;
        }
        while ((i < ((s32)w[1])));
    }
    w[4] = (((s32)a0) + *((s32 *)((16 + a0))));
    n = ((s32)w[3]);
    p = ((u32 *)w[4]);
    k = 0;
    if ((0 < n))
    {
        do
        {
            p[0] += ((u32)a0);
            k++;
            p++;
        }
        while ((k < ((s32)w[3])));
    }
    q = &w[5];
    m = 0;
    do
    {
        q[0] += ((u32)a0);
        q[1] += ((u32)a0);
        q[2] += ((u32)a0);
        q[3] += ((u32)a0);
        q[4] += ((u32)a0);
        q[5] += ((u32)a0);
        m += 6;
        q += 6;
    }
    while ((m < 13));
    q[0] += ((u32)a0);
}
/* differs: size 0xD8 vs 0x120. The original keeps the range test as two compares (`< 0x30`, `< 0x3A`, then a
   second `< 0x30`/`>= 0x3A` test on the digit path), sign-extends the char and the dot flag with dsll32/dsra32, and
   holds 10.0f in $f3. Draft below is the plain shape. */
#if 0
extern f32 D_0044FB70[];

f32 func_0022E7A0(s8 *a0, s32 *a1) {
    f32 f;
    s32 dot;
    s32 c;
    s32 d;

    f = 0.0f;
    dot = 0;
    for (;;) {
        c = *a0;
        if (c < 0x30 || c >= 0x3A) {
            if (c != 0x2E) {
                if (a1 != 0) {
                    *a1 = (s32)a0;
                }
                return -1.0f;
            }
            if (dot != 0) {
                if (a1 != 0) {
                    *a1 = (s32)a0;
                }
                return f;
            }
            dot = 1;
        } else {
            d = c - 0x30;
            if (dot == 0) {
                f = f * 10.0f + (f32)d;
            } else {
                f += (f32)d * D_0044FB70[dot];
                dot++;
            }
        }
        a0++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E8C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E9D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022EB70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F520);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_002300E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_002316D0);
