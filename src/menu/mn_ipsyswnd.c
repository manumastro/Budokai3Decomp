#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4330);
extern void func_002F4330();

void func_002F4450(u8 *a0) {
    func_002F4330(*(void **)(a0 + 0x30));
}
extern f32 D_004703BC;
extern void func_002F4450();

void func_002F4460(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002F4330(s0);
    *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) - D_004703BC;
    if (*(f32 *)(s0 + 0x14) <= 0.0f) {
        *(s16 *)(s0 + 0xE) = 4;
        *(void **)(a0 + 0x1C) = ((void *)func_002F4450 == 0) ? 0 : (void *)func_002F4450;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F44E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4780);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4880);
s16 func_002F4A70(u8 *a0) {
    return *(s16 *)(*(u8 **)(a0 + 0x30) + 0x10);
}
s16 func_002F4A80(u8 *a0) {
    return *(s16 *)(*(u8 **)(a0 + 0x30) + 0xE);
}
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amTask_Kill(void *);

void func_002F4A90(u8 *a0) {
    u8 *s0;
    u8 *s1;
    void *p;
    s1 = a0;
    if (gInputName != 0) {
        s0 = *(u8 **)(s1 + 0x30);
        p = *(void **)(s0 + 0x0);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x0) = 0;
        }
        p = *(void **)(s0 + 0x4);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x4) = 0;
        }
        p = *(void **)(s0 + 0x8);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x8) = 0;
        }
        amHeap_Free(s0);
        amTask_Kill(s1);
    }
}
extern char D_0046F778[];
extern char D_0046F788[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_002F4880();

void *func_002F4B20(s16 a0) {
    u8 *s0;
    u8 *s1;
    s1 = amTask_Create(func_002F4880, 0, 0x6000, 8, 2, D_0046F778);
    *(void **)(s1 + 0x30) = s0 = amHeap_Alloc(0x18, 0, D_0046F788, 0x47);
    memset(s0, 0, 0x18);
    *(s16 *)(s0 + 0xC) = a0;
    return s1;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4BB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4D50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4F70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F5120);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F5260);
extern u8 *gOutputPass;

#if 0
// differs: the original reads gOutputPass into v0 and branches with bnez to the load, mine uses v1 and beqz with the move in the delay slot (tried if/else, return in each branch, local pointer)
s16 func_002F5480(void) {
    u8 *g = gOutputPass;
    if (*(u8 **)(g + 0x10) != 0) {
        return *(s16 *)(*(u8 **)(g + 0x30) + 0xC0);
    } else {
        return 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F5480);
extern u8 *gOutputPass;

void func_002F54B0(void) {
    gOutputPass = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F54C0);
void func_002F55E0(void) {
    u8 *s0;
    u8 *s3;
    s32 s1;
    u32 *s2;
    u8 *v1;

    s0 = gOutputPass;
    if (s0 != 0) {
        v1 = *(u8 **)(s0 + 0x10);
        if (v1 != 0) {
            s3 = *(u8 **)(v1 + 0x30);
            if (*(void **)s3 != 0) {
                func_0022D0E0(*(void **)s3, 1);
                *(void **)s3 = 0;
            }
            s1 = 0;
            s2 = (u32 *)s3;
            do {
                func_0022D4B0((void *)s2[1], 1);
                s1++;
                s2++;
            } while (s1 < 0x24);
            amHeap_Free(s3);
            amTask_Kill(*(void **)(s0 + 0x10));
            *(void **)(s0 + 0x10) = 0;
        }
    }
}
