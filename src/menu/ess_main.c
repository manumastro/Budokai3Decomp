#include "common.h"

extern u8 *D_004707E0;

INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269A00);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269AC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269B90);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269CC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A4F0);
extern void func_00269B90(void);
extern void func_00269CC0(void);

/* A state step of the Ess mode: runs the two per-frame parts. */
void EssMain_TickA(void) {
    func_00269B90();
    func_00269CC0();
}
/* The same two parts, another state step. */
void EssMain_TickB(void) {
    func_00269B90();
    func_00269CC0();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A680);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026ADC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026AEB0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B100);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B250);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B310);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B460);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B560);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B770);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B880);
extern void func_0026B880(void);

void func_0026BD10(void) {
    func_0026B880();
}
extern void func_0026B770(void);
extern void func_0026B880(void);

/* Runs the two steps at 0x26B770 and 0x26B880 of the Ess mode. */
void EssMain_TickC(void) {
    func_0026B770();
    func_0026B880();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026BD50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C7C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C910);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C9F0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CB30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CC30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CD50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CF80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D030);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D150);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D320);
extern u8 D_0058F680[];
extern u8 D_004E0660[];

#if 0
// differs: the logic matches; the registers differ: the original keeps the struct pointer in a3, the loop index in a0 (the parameter's register) and the counts in a1/a2
s32 func_0026D480(s32 p) {
    s32 i;
    s32 n1;
    s32 n2;
    u8 *a3;
    u8 *v3;
    a3 = D_004E0660;
    n2 = 0;
    n1 = 0;
    v3 = D_0058F680 + p * 0xD680 + 0xD41D;
    for (i = 0; i < 2; i++) {
        if (a3[0xD] > 0) {
            n1++;
            if (v3[0] != 0) {
                n2++;
            }
        }
        a3 += 0x28;
        v3++;
    }
    return (100 * n2) / n1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D480);
/* The byte at 0x5D of the block that D_004707E0 points to: bit 0 as a flag. */
u8 EssMain_GetFlag(void) {
    return D_004707E0[0x5D] & 1;
}
/* Sets the byte at 0x5C of that block. */
void EssMain_SetByte(u8 v) {
    D_004707E0[0x5C] = v;
}
void func_0026D530(s32 a0, s32 a1) {
    u8 *g;
    switch (a0) {
    case 1:
        a1 += 0x10;
        break;
    case 2:
        a1 += 0x30;
        break;
    }
    g = D_004707E0;
    *(s32 *)(g + 0x190) = a1;
    *(s32 *)(g + 0x188) = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D570);
extern s32 D_0058F5D0[];
extern s32 D_0058F5D4[];
extern void amCdFs_ReleaseCache(s32);

#if 0
// differs: the original keeps the loop count in a1 and tests 0 < n before setting up the walking pointer; mine orders the pointer and index set-up differently (tried for, do-while and walking pointer forms)
void func_0026D610(s32 a0) {
    s32 i;
    s32 *p;
    s32 n;
    n = D_0058F5D0[0];
    if (0 < n) {
        i = 0;
        p = D_0058F5D0;
        do {
            if (p[1] == a0) {
                amCdFs_ReleaseCache(a0);
                return;
            }
            i++;
            p++;
        } while (i < n);
    }
    D_0058F5D4[n] = a0;
    D_0058F5D0[0] = n + 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D6A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D8A0);
