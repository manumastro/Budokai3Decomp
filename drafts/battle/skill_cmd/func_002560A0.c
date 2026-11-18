/* Draft (not built): func_002560A0 at 0x002560A0, size 0x2BC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); exe Compiler: 2619: temp_v0 = (var_s1 * 4) + sp; @ 2618: func_00136870(2, 0x40008934, (var_s1 * 0x10) + sp + 0x70, 0xE);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002560A0.s */

// src/battle/skill_cmd.c func_002560A0 cerr diff=-1/0
s32 func_00136870(s32, s32, void *, s32);
s32 func_00137440(s32, s32);
extern s32 D_00452A80;
extern s32 D_00452AA0;
extern s32 D_00452AD0;
extern s32 D_00452AE0;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002560A0(s32 arg1, s32 arg2, f32 fparg0) {
    f32 sp50;
    s32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    s32 sp70;
    f32 spA0;
    s32 spC0;
    s32 spD0;
    s32 var_s1;
    u8 *temp_v0;

    var_s1 = arg2;
    *(s128 *)((u8 *)(&spA0) + 0) = (s128) *(s128 *)((u8 *)(&D_00452A80) + 0);
    *(s128 *)((u8 *)(&spA0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452A80) + 0x10);
    *(s128 *)((u8 *)(&sp70) + 0) = (s128) *(s128 *)((u8 *)(&D_00452AA0) + 0);
    *(s128 *)((u8 *)(&sp70) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452AA0) + 0x10);
    *(s128 *)((u8 *)(&sp70) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00452AA0) + 0x20);
    *(s64 *)((u8 *)(&spD0) + 0) = (s64) *(s64 *)((u8 *)(&D_00452AD0) + 0);
    *(f32 *)((u8 *)(&spD0) + 8) = (f32) *(f32 *)((u8 *)(&D_00452AD0) + 8);
    *(s64 *)((u8 *)(&spC0) + 0) = (s64) *(s64 *)((u8 *)(&D_00452AE0) + 0);
    *(f32 *)((u8 *)(&spC0) + 8) = (f32) *(f32 *)((u8 *)(&D_00452AE0) + 8);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t4) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    sp58 = 1.0f;
    if (var_s1 >= 3) {
        var_s1 = 2;
    }
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)gBtlSys + 0xE60), 0x04000000);
    func_00136870(2, 0x40008934, (var_s1 * 0x10) + sp + 0x70, 0xE);
    temp_v0 = (var_s1 * 4) + sp;
    func_00137440(*(s32 *)((u8 *)temp_v0 + 0xD0), *(s32 *)((u8 *)temp_v0 + 0xC0));
    if (arg1 & 1) {
        sp54 = 0x3F000000;
        sp64 = spB4;
        sp50 = 1.0f + fparg0;
        sp60 = spB0 - fparg0;
        func_00137560(&sp60, &sp50);
        sp54 = 0x41780000;
        sp60 += 9.0f;
        sp64 += 9.0f;
        func_00137560(&sp60, &sp50);
        sp50 = 1.0f;
        sp60 = 9.0f + spB0;
        func_00137560(&sp60, &sp50);
        sp54 = 0x3F000000;
        sp60 = spB0;
        sp64 = spB4;
        func_00137560(&sp60, &sp50);
    } else {
        sp50 = 1.0f;
        sp54 = 0x3F000000;
        sp60 = spA0;
        sp64 = spA4;
        func_00137560(&sp60, &sp50);
        sp54 = 0x41780000;
        sp60 -= 9.0f;
        sp64 += 9.0f;
        func_00137560(&sp60, &sp50);
        sp60 += fparg0;
        sp50 += fparg0;
        func_00137560(&sp60, &sp50);
        sp54 = 0x3F000000;
        sp64 = spA4;
        sp60 = spA0 + fparg0;
        func_00137560(&sp60, &sp50);
    }
    amDraw_FlushPacket();
}
