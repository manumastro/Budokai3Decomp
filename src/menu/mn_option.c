#include "common.h"

extern s8 D_004703F4;
extern u8 *D_00470934;
extern void func_002DDF00();

void func_002DE250(void) {
    u8 *a1;
    f32 f2;
    a1 = D_00470934;
    if (D_004703F4 != 3) {
        f2 = 1.0f;
    } else {
        f2 = 1.2f;
    }
    *(f32 *)(a1 + 0x39C) = *(f32 *)(a1 + 0x39C) + f2;
    if (!(*(f32 *)(a1 + 0x39C) < 75.0f)) {
        *(s32 *)(a1 + 0x39C) = 0;
        *(void **)(a1 + 0x344) = (void *)func_002DDF00;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE2C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE460);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE5A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE910);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEA00);
/* Empty callback: nothing to do. */
void Option_Nop1(void) {
}

/* Empty callback: nothing to do. */
void func_002DEFE0(void) {
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEFF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF100);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF3D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF4E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF5D0);
extern void func_0022DB30(s32);
extern void func_0022C700(void);

extern u8 *D_00470934;
extern s16 D_004E05F8[];

void func_002DF6E0(void) {
    u8 *s0;
    void (*f)(void);
    s0 = (u8 *)D_00470934;
    func_0022DB30(D_004E05F8[0]);
    f = *(void (**)(void))(s0 + 0x344);
    if (f != 0) {
        f();
    }
    f = *(void (**)(void))(s0 + 0x370);
    if (f != 0) {
        f();
    }
    func_0022C700();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF740);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFBC0);
/* Reads the sound status (channel 0), then runs func_002DFBC0. */
void Option_ReadSound(void) {
    amAdx_GetStat(0);
    func_002DFBC0();
}
extern s8 D_004703F4;

void func_002DFE20(u8 *a0) {
    u8 *s0;
    f32 f2;
    s0 = D_00470934;
    func_002DFBC0();
    if (D_004703F4 != 3) {
        f2 = 1.0f;
    } else {
        f2 = 1.2f;
    }
    *(f32 *)(s0 + 0x388) = *(f32 *)(s0 + 0x388) + f2;
    if (!(*(f32 *)(s0 + 0x388) < 60.0f)) {
        *(s32 *)(s0 + 0x388) = 0;
        *(void **)(a0 + 0x1C) = ((void *)Option_ReadSound == 0) ? 0 : (void *)Option_ReadSound;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFEC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0050);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0170);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0260);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E06A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0800);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E08F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0B70);
extern void *D_00470938;

typedef struct OptionState {
    char pad0[8];
    s32 f8;
} OptionState;

/* Clears the option screen's state word D_00470938. */
void Option_ClearState(void) {
    D_00470938 = 0;
}
/* Frees the option state block D_00470938 (if any) and clears the pointer. */
void func_002E0C40(void) {
    if (D_00470938 != 0) {
        amHeap_Free(D_00470938);
        D_00470938 = 0;
    }
}
/* The field at 0x8 of the option state, or 0 when there is no state. */
s32 func_002E0C70(void) {
    return D_00470938 == 0 ? 0 : ((OptionState *)D_00470938)->f8;
}
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create();
extern char D_0046F3E0[];
extern void func_002E0B70();

void func_002E0C90(void) {
    u8 *s0;
    s0 = (u8 *)D_00470938;
    *(s32 *)(s0 + 0x4) = *(s32 *)(*(u8 **)s0 + 0x54);
    *(s32 *)(*(u8 **)s0 + 0x54) = 0;
    amCdFs_Close(*(void **)s0, 0);
    *(s32 *)s0 = 0;
    *(u8 *)(s0 + 0x14) = 1;
    *(s32 *)(s0 + 0x8) = 3;
    *(void **)(s0 + 0x18) = amTask_Create(func_002E0B70, 0, 0x5000, 0x4000, 2, D_0046F3E0);
}
// GIVEN UP: func_002E0D10 (true when the block has 3 at offset 4): the compiler folds the test into xori / sltiu,
// the original keeps a branch (tried: ternary, if/return, if/else with a variable).

#if 0
// differs: the original hoists li 3 before the two loads and compares with beq, mine folds the compare to xori/sltiu (tried if/else and r=0/r=1)
s32 func_002E0D10(void) {
    s32 r;
    if (*(s16 *)(*(u8 **)D_00470938 + 4) != 3) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0D10);
extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);

void func_002E0D40(void) {
    u8 *s0;
    void *p;
    if (D_00470938 != 0) {
        amHeap_Free(D_00470938);
        D_00470938 = 0;
    }
    D_00470938 = amHeap_Alloc(0x1C, 0, D_0046F3C8, 0x74A);
    memset(D_00470938, 0, 0x1C);
    s0 = D_00470938;
    *(s32 *)s0 = amCdFs_ReadFileId(0x10803, 0, 0);
    *(s32 *)((u8 *)D_00470938 + 0x8) = 1;
}
