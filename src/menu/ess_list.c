#include "common.h"

extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_0027A1C0(s32, s32);
extern void func_00272B70(void);
extern void func_0026D6A0(void);
extern s32 D_004707FC;
extern void *amTask_Create();
extern void func_00272510(u8 *a0);
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
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(*(u8 **)(v + 0x20) + 0x1C) + *(s32 *)(v + 0x74) * 4), f * gFrameDelta);
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
extern void func_00271AF0();

void func_00272440(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    u8 *v;
    f32 f;
    void *fp;
    s3 = a0;
    s2 = s3 + 0x30;
    s0 = -1;
    v = (u8 *)D_004707FC;
    s1 = *(u8 **)(v + 0x20);
    f = (f32)*(s32 *)(v + 0x7C);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(v + 0x74) * 4), f * gFrameDelta);
    v = (u8 *)D_004707FC;
    f = (f32)*(s32 *)(v + 0x10C);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(v + 0x104) * 4), f * gFrameDelta);
    if (s0 == 0xFF) {
        *(s32 *)s2 = 0x3C;
        *(void **)(s3 + 0x1C) = ((void *)func_00271AF0 == 0) ? 0 : (void *)func_00271AF0;
    }
}
#if 0
// differs: 10 of 79: the loop and the three field copies match; the global reloads are placed as in the original, but the loop counter and offset registers are swapped (s0/s1) and the last pointer store loads the global's field in a different order
extern void amCdFs_Close(void *, s32);
extern void amFile_Load(s32);
extern void func_0026D610();
extern void func_00272440();
extern void func_00271580();

void func_00272510(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *p;
    u8 *q;
    s32 i;
    s32 off;
    void *fp;
    void *fq;
    s3 = a0;
    s2 = a0 + 0x30;
    if (*(s16 *)(*(u8 **)((u8 *)D_004707FC + 0x8) + 0x4) == 3) {
        off = 0;
        i = 0;
        do {
            p = (u8 *)D_004707FC + off;
            *(s32 *)(p + 0xC) = *(s32 *)(*(u8 **)((u8 *)D_004707FC + off) + 0x40);
            *(s32 *)(*(u8 **)((u8 *)D_004707FC + off) + 0x40) = 0;
            amCdFs_Close(*(void **)((u8 *)D_004707FC + off), 0);
            *(s32 *)((u8 *)D_004707FC + off) = 0;
            amFile_Load(*(s32 *)(*(u8 **)((u8 *)D_004707FC + off + 0xC) + 0x50));
            func_0026D610(*(void **)((u8 *)D_004707FC + off + 0xC));
            i++;
            off += 4;
        } while (i < 3);
        *(s32 *)((u8 *)D_004707FC + 0x20) = *(s32 *)(*(u8 **)((u8 *)D_004707FC + 0xC) + 0x50);
        *(s32 *)((u8 *)D_004707FC + 0x24) = *(s32 *)(*(u8 **)((u8 *)D_004707FC + 0x10) + 0x50);
        *(s32 *)((u8 *)D_004707FC + 0x28) = *(s32 *)(*(u8 **)((u8 *)D_004707FC + 0x14) + 0x50);
        *(s32 *)(s2) = 0x3C;
        *(void **)(s3 + 0x1C) = ((void *)func_00272440 == 0) ? 0 : (void *)func_00272440;
        *(void **)(*(u8 **)((u8 *)D_004707FC + 0x1C) + 0x1C) = ((void *)func_00271580 == 0) ? 0 : (void *)func_00271580;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272510);
extern s32 D_00470804;
extern s32 D_00470800;

void EssList_Clear(void) {
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
void func_00272B70(void) {
    s32 s3;
    s32 s2;
    void **s1;
    s32 s0;

    amTask_KillGroup(0x200, 8, 0);
    s3 = 0;
    s1 = (void **)&D_00470800;
    do {
        D_004707FC = (s32)*s1;
        if (D_004707FC != 0) {
            s2 = 0;
            s0 = 0;
            do {
                if (*(void **)((u8 *)D_004707FC + s0) != 0) {
                    amCdFs_Close(*(void **)((u8 *)D_004707FC + s0), 0);
                }
                s2++;
                s0 += 4;
            } while (s2 < 3);
            amHeap_Free((void *)D_004707FC);
            *s1 = 0;
        }
        s3++;
        s1++;
    } while (s3 < 2);
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272C30);
