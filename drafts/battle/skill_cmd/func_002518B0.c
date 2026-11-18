/* Draft (not built): func_002518B0 at 0x002518B0, size 0x1AC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'unsigned char *' mwccps2.exe Compiler: @ 1171: *(u8 **)((u8 *)D_0046FE54 + 0x5C) = func_00209540(temp_v0, var_a1, 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002518B0.s */

// src/battle/skill_cmd.c func_002518B0 cerr diff=-1/0
s32 func_002183F0(s32, void **);
s32 func_0025BD40(s32 *, void *);
extern s128 D_004502B0;
extern void func_0020D780(void *);
void func_002518B0(u8 *arg0) {
    s32 sp30;
    s128 sp40;
    s32 sp50;
    s32 sp60;
    s32 sp70;
    u8 *sp80;
    s16 sp84;
    s16 sp86;
    u8 *sp90;
    s32 *sp94;
    s16 spB0;
    s16 spB2;
    s32 var_a1;
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    u8 *temp_a1;

    sp40 = D_004502B0;
    temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1350);
    temp_a0 = *(s16 *)((u8 *)D_0046FE54 + 0x60);
    if (temp_a0 & 0x20) {
        memset(&sp90, 0, 0x2C);
        func_0020D780(&sp60);
        sp90 = arg0 + 0x20;
        spB2 = 0;
        sp94 = &sp60;
        spB0 = 0x18;
        func_002183F0(1, (void **)(&sp90));
        return;
    }
    if (!(temp_a0 & 0x40)) {
        *(s16 *)((u8 *)D_0046FE54 + 0x62) = (s16) temp_s0;
        memset(&sp90, 0, 0x2C);
        func_0020D780(&sp60);
        sp94 = &sp60;
        spB2 = 0;
        spB0 = 0x18;
        sp90 = D_0046FE4C;
        func_002183F0(1, (void **)(&sp90));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        temp_a1 = *(u8 **)((u8 *)arg0 + 8);
        sp80 = temp_a1;
        sp84 = 7;
        sp86 = 0x1A;
        func_0025BD40(&sp70, temp_a1);
        temp_v0 = func_0020B020(temp_s0, 7, 0x19);
        if (temp_s0 != 0) {
            var_a1 = 0x04000020;
        } else {
            var_a1 = 0x04000010;
        }
        *(u8 **)((u8 *)D_0046FE54 + 0x5C) = func_00209540(temp_v0, var_a1, 0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        func_00146F30(&sp50);
        func_00141C30((void *)(&sp30), (void *)(&sp40), (void *)(&sp50));
        func_00209850((void *)(*(u8 **)((u8 *)D_0046FE54 + 0x5C)), (void *)(&sp30));
        *(s16 *)((u8 *)D_0046FE54 + 0x60) = (s16) (*(s16 *)((u8 *)D_0046FE54 + 0x60) | 0x40);
    }
}
