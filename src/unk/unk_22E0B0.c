#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E0B0);
#if 0
// differs: 8 of 90 instructions. The two table pointers (w[2] and w[4]) are loaded by the original before the
// `slt`/`beqz` test, ours sinks them into the delay slot; and two `a0 + field` adds inside the block come out as
// `field + a0`. Register picks are right after the declaration order search (see notes).
void func_0022E630(s8 *a0) {
    u32 *p;
    u32 *r;
    s32 k;
    s32 n;
    u32 *t;
    s32 m;
    s32 i;
    u32 *w;
    u32 *q;

    if (a0[0] == 0x21) {
        return;
    }
    a0[0] = 0x21;
    w = (u32 *)a0;
    w[2] = (s32)a0 + *(s32 *)(a0 + 8);
    n = (s32)w[1];
    t = (u32 *)w[2];
    if (0 < n) {
        i = 0;
        do {
            *t += (u32)a0;
            r = (u32 *)*t;
            if ((s32)r[3] < (s32)a0) {
                *(s32 *)((u8 *)r + 12) = (s32)a0 + *(s32 *)((u8 *)r + 12);
                p = (u32 *)r[3];
                if (*(u8 *)p != 0) {
                    do {
                        if ((s32)p[1] < (s32)a0) {
                            *(s32 *)((u8 *)p + 4) = (s32)a0 + *(s32 *)((u8 *)p + 4);
                        }
                        p += 2;
                    } while (*(u8 *)p != 0);
                }
            }
            i++;
            t++;
        } while (i < (s32)w[1]);
    }
    w[4] = (s32)a0 + *(s32 *)(a0 + 16);
    n = (s32)w[3];
    p = (u32 *)w[4];
    if (0 < n) {
        k = 0;
        do {
            p[0] += (u32)a0;
            k++;
            p++;
        } while (k < (s32)w[3]);
    }
    q = &w[5];
    m = 0;
    do {
        q[0] += (u32)a0;
        q[1] += (u32)a0;
        q[2] += (u32)a0;
        q[3] += (u32)a0;
        q[4] += (u32)a0;
        q[5] += (u32)a0;
        m += 6;
        q += 6;
    } while (m < 13);
    q[0] += (u32)a0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E630);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E8C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022E9D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022EB70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F520);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_0022F900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_002300E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_22E0B0", func_002316D0);
