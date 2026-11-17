#include "common.h"

extern f32 D_004703BC;
extern s32 func_0022BC30(s32, f32);
extern void func_0027A1C0(s32, s32);
extern void func_00272B70(void);
extern void func_0026D6A0(void);
extern s32 D_004707FC;
extern void *amTask_Create();
extern void func_00272510(void);
extern char D_0046B500[];
extern char D_0046B510[];
extern void func_002700E0(void);

INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00271AF0);
void func_00272380(u8 *a0) {
    u8 *s1;
    s32 s0;
    u8 *v;
    f32 f;

    s1 = a0;
    s0 = -1;
    v = (u8 *)D_004707FC;
    f = (f32)*(s32 *)(v + 0x7C);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(*(u8 **)(v + 0x20) + 0x1C) + *(s32 *)(v + 0x74) * 4), f * D_004703BC);
    if (s0 == 0xFF) {
        v = (u8 *)D_004707FC;
        switch (*(s32 *)(v + 0x40)) {
        case 0:
            func_0026D6A0();
            *(s32 *)(s1 + 0x1C) = 0;
            break;
        case 1:
            func_0027A1C0(*(s32 *)(v + 0x4C), *(s32 *)(v + 0x48));
            func_00272B70();
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272440);
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272510);
extern s32 D_00470804;
extern s32 D_00470800;

void func_00272650(void) {
    D_00470804 = 0;
    D_00470800 = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272660);
#if 0
// differs: same instructions except the register of the constant 0x3C and of the global pointer after memset (the original uses v1, mine v0)
void func_00272A20(s32 a0, s32 a1, s32 a2) {
    s32 s2;
    s32 s1;
    s32 s0;
    u8 *s3;
    u8 *p;
    u8 *q;
    u8 *d;

    s2 = a0;
    s1 = a1;
    s0 = a2;
    *(void **)((u8 *)D_004707FC + 0x18) = amTask_Create(func_00272510, 0, 0x3200, 0x200, 8, D_0046B500);
    *(void **)((u8 *)D_004707FC + 0x1C) = amTask_Create(0, 0, 0x3200, 0x200, 8, D_0046B510);
    s3 = *(u8 **)((u8 *)D_004707FC + 0x18) + 0x30;
    memset(s3, 0, 0x1C);
    *(s32 *)s3 = 0x3C;
    d = (u8 *)D_004707FC;
    *(s32 *)(d + 0x40) = s2;
    d = (u8 *)D_004707FC;
    *(s32 *)(d + 0x48) = s0;
    d = (u8 *)D_004707FC;
    *(s32 *)(d + 0x4C) = s1;
    func_002700E0();
    d = (u8 *)D_004707FC;
    *(s32 *)(d + 0x74) = 0;
    p = (u8 *)D_004707FC + 0xA4;
    if (s1 > 0) {
        *(s32 *)p = 2;
    } else {
        *(s32 *)p = 3;
        *(s32 *)(p + 8) = 0x2710;
    }
    q = (u8 *)D_004707FC + 0xD4;
    if (s1 + s0 + 9 < *(s32 *)(D_004707FC + 0x58)) {
        *(s32 *)q = 4;
    } else {
        *(s32 *)q = 5;
        *(s32 *)(q + 8) = 0x2710;
    }
    *(s32 *)(D_004707FC + 0x104) = 8;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272A20);
extern s32 D_00470800;
extern s32 D_004707FC;
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);

#if 0
// differs: the register order matches now; the gp-relative accesses to D_004707FC differ (no relocation seen for that global), the rest of the function matches
void func_00272B70(void) {
    s32 i;
    s32 k;
    s32 *p;
    s32 off;
    void *c;
    amTask_KillGroup(0x200, 8, 0);
    p = &D_00470800;
    for (i = 0; i < 2; i++) {
        D_004707FC = *p;
        if (D_004707FC != 0) {
            for (k = 0, off = 0; k < 3; k++, off += 4) {
                c = *(void **)((u8 *)D_004707FC + off);
                if (c != 0) {
                    amCdFs_Close(c, 0);
                }
            }
            amHeap_Free((void *)D_004707FC);
            *p = 0;
        }
        p++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272B70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272C30);
