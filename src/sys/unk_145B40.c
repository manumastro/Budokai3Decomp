#include "common.h"

typedef struct VramSlot {
    s8 mode;
    s8 mode2;
    s16 h2;
    s16 h4;
    char pad6[0xC];
    s16 h12;
    char pad14[0x10];
    s32 w24;
    char pad28[0x18];
} VramSlot;

extern char D_0047E4C0[];
extern void amVram_Apply(s32);

#if 0
/* differs: 30 of 96 instructions; the registers of the counter and the flags (s0 / s2) and the test order of the
 * mode (a1) are not reproduced yet. */
void func_00145B40(s32 a0) {
    s32 flg;
    s32 s1;
    VramSlot *ptr;
    s32 mode;
    s32 a2;
    s32 a3;
    s32 t0;
    u8 *p;
    u32 *pg;
    u32 v;
    flg = a0 + 1;
    ptr = (VramSlot *)D_0047E4C0;
    for (s1 = 0; s1 < 2; s1++, flg = flg >> 1, ptr++) {
        if (flg & 1) {
            mode = ptr->mode;
            if (mode != ptr->mode2) {
                if (s1 != 0) {
                    pg = &D_004703A8;
                } else {
                    pg = &D_004703A4;
                }
                v = *pg;
                if (ptr->mode2 == 2) {
                    v = (v << 4) >> 4;
                } else if (ptr->mode2 == 0) {
                    v |= 0x20000000;
                }
                *pg = v;
                amVram_Apply(s1);
                ptr->mode = ptr->mode2;
            } else if (mode != 0) {
                a2 = ptr->h12;
                p = (u8 *)ptr->w24 + (a2 << 6);
                a3 = ptr->h4 - 1;
                for (t0 = 0; t0 < ptr->h2; t0++) {
                    *(s32 *)(p + 0x14) = 0;
                    *(s32 *)(p + 0x18) = 0;
                    *(s32 *)(p + 0x28) = 0;
                    if (mode == 1) {
                        *(s32 *)(p + 0x8) = 0;
                    }
                    if (a2 == a3) {
                        a2 = 0;
                        p = (u8 *)ptr->w24;
                    } else {
                        a2++;
                        p += 0x40;
                    }
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/sys/unk_145B40", func_00145B40);
extern u8 *D_00470390;
extern u8 *D_00470394;
extern void *D_00470398;

void func_00145CC0(u8 *a0, void *a1) {
    D_00470390 = a0;
    D_00470398 = a1;
    D_00470394 = a0 + *(s32 *)(a0 + 0x14);
}

extern s32 D_0047038C;
extern char D_0047E4C0[];
extern u8 *func_001461D0(void *, s32);

void func_00145CE0(s32 a0, s32 a1, u32 a2) {
    u8 *r;
    u8 *p;
    s32 v;
    a0 = a0 & D_0047038C;
    a0 = (s32)(D_0047E4C0 + (a0 << 6));
    a1 = a1 - *(s32 *)(D_00470390 + 0x18);
    p = D_00470390 + *(s32 *)(D_00470394 + (a1 << 2));
    v = *(s32 *)p;
    a1 = v + (s32)D_00470398;
    r = func_001461D0((void *)a0, a1);
    if (r != 0) {
        *(s32 *)(r + 0x1C) |= a2 & 0x3000;
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_145B40", func_00145D70);
