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

extern s32 D_004703A4;
extern s32 D_004703A8;

void func_00145B40(s32 a0) {
    s32 t0;
    s32 a3;
    s32 a2;
    s32 mode;
    s32 flg;
    s32 i;
    VramSlot *ptr;
    u8 *p;
    s32 *pg;
    u32 v;
    s32 m2;
    flg = a0;
    flg += 1;
    ptr = (VramSlot *)D_0047E4C0;
    for (i = 0; i < 2; i++, flg = flg >> 1, ptr++) {
        if (flg & 1) {
            mode = ptr->mode;
            if (mode != ptr->mode2) {
                if (i != 0) {
                    pg = &D_004703A8;
                } else {
                    pg = &D_004703A4;
                }
                v = *pg;
                m2 = ptr->mode2;
                switch (m2) {
                case 0:
                    v |= 0x20000000;
                    break;
                case 2:
                    v &= 0x0FFFFFFF;
                    break;
                }
                *pg = v;
                amVram_Apply(i);
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
                    if (a2 != a3) {
                        a2++;
                        p += 0x40;
                    } else {
                        a2 = 0;
                        p = (u8 *)ptr->w24;
                    }
                }
            }
        }
    }
}
extern u8 *gModelBlock;
extern u8 *gModelEnd;
extern void *gModelUser;

void amModel_SetCurrent(u8 *a0, void *a1) {
    gModelBlock = a0;
    gModelUser = a1;
    gModelEnd = a0 + *(s32 *)(a0 + 0x14);
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
    a1 = a1 - *(s32 *)(gModelBlock + 0x18);
    p = gModelBlock + *(s32 *)(gModelEnd + (a1 << 2));
    v = *(s32 *)p;
    a1 = v + (s32)gModelUser;
    r = func_001461D0((void *)a0, a1);
    if (r != 0) {
        *(s32 *)(r + 0x1C) |= a2 & 0x3000;
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_145B40", func_00145D70);
