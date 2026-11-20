#include "common.h"

INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D2B40);
INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D2CB0);
INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D2F10);
INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D3070);
INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D33E0);
extern u8 *D_00470594;
extern u8 *D_00470598;
extern u8 *D_0047059C;
extern u8 *D_004705A0;
extern u8 *D_004705B0;
extern u8 *D_004705B4;
extern u8 *D_004705B8;
extern u8 *D_0046FDB0;
extern void func_0013B160(s32);
extern void func_0013B960(u8 *);
extern void func_001D33E0(void);
void func_001D39D0(u8 *a0) {
    u8 *s4;
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 i;

    D_00470594 = a0;
    s4 = D_00470594;
    D_00470598 = *(u8 **)(a0 + 0xC);
    s3 = D_00470598;
    D_004705B0 = *(u8 **)(a0 + 0x0);
    s2 = D_004705B0;
    D_0047059C = *(u8 **)(a0 + 0x4);
    D_004705A0 = *(u8 **)(D_0047059C + 0x128);
    D_004705B4 = D_0047059C + 0x40;
    D_004705B8 = D_0047059C + 0xD0;
    for (i = 0; i < *(s16 *)(s3 + 0x1E); i++) {
        s1 = s3 + i * 32 + 0x80;
        func_0013B160(0);
        func_0013B960(*(u8 **)(s2 + 0x408) + (((s16 *)(s4 + 0x90))[i] << 6));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf1, $vf31, $vf0w ; sqc2 $vf1, 0x0(%1) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(s1), "r"(s4 + i * 16 + 0x10));
    }
    func_0013B160(0);
    if (*(s32 *)(D_00470598 + 0x18) & 0x40) {
        func_0013B960(*(u8 **)(D_004705B0 + 0x408) + (*(s16 *)(*(u8 **)(D_004705A0 + 0x40) + 0x48) << 6));
    } else {
        func_0013B960(*(u8 **)(D_004705B0 + 0x408) + (*(s16 *)(*(u8 **)(D_004705A0 + 0x40) + 0x48) << 6));
    }
    __asm__ volatile ("sqc2 $vf28, 0x0(%0) ; sqc2 $vf29, 0x10(%0) ; sqc2 $vf30, 0x20(%0) ; sqc2 $vf31, 0x30(%0) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(D_0046FDB0));
    func_001D33E0();
}
extern u8 *D_0046FDA0;
void func_001D3B60(u8 *a0) {
    u8 *s4;
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 i;

    D_00470594 = a0;
    s4 = D_00470594;
    D_00470598 = *(u8 **)(a0 + 0xC);
    s3 = D_00470598;
    D_004705B0 = *(u8 **)(a0 + 0x0);
    s2 = D_004705B0;
    D_0047059C = *(u8 **)(a0 + 0x4);
    for (i = 0; i < *(s16 *)(s3 + 0x1E); i++) {
        s1 = s3 + i * 32 + 0x80;
        func_0013B160(0);
        func_0013B960(*(u8 **)(s2 + 0x408) + (((s16 *)(s4 + 0x90))[i] << 6));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf1, $vf31, $vf0w ; sqc2 $vf1, 0x0(%1) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(s1), "r"(s4 + i * 16 + 0x10));
    }
    do {
        D_004705A0 = *(u8 **)(D_0047059C + 0x128);
        D_004705B4 = D_0047059C + 0x40;
        D_004705B8 = *(u8 **)(D_0047059C + 0x124) + 0x40;
        if (*(s32 *)(D_0047059C + 0x120) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; lqc2 $vf2, 0x10(%1) ; lqc2 $vf3, 0x20(%1) ; lqc2 $vf4, 0x30(%1) ; sqc2 $vf1, 0x0(%0) ; sqc2 $vf2, 0x10(%0) ; sqc2 $vf3, 0x20(%0) ; sqc2 $vf4, 0x30(%0)" : : "r"(D_0046FDB0), "r"(D_0046FDA0));
        } else {
            func_0013B160(0);
            func_0013B960(*(u8 **)(D_004705B0 + 0x408) + (*(s16 *)(*(u8 **)(D_004705A0 + 0x40) + 0x48) << 6));
            __asm__ volatile ("sqc2 $vf28, 0x0(%0) ; sqc2 $vf29, 0x10(%0) ; sqc2 $vf30, 0x20(%0) ; sqc2 $vf31, 0x30(%0) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(D_0046FDB0));
        }
        func_001D33E0();
        D_0047059C = *(u8 **)(D_0047059C + 0x124);
    } while (D_0047059C != NULL);
}
INCLUDE_ASM("asm/nonmatchings/battle/char_mant", func_001D3D10);
