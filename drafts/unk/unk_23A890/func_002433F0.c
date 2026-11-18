/* Draft (not built): func_002433F0 at 0x002433F0, size 0x210, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); c_002433F0()' redeclared was declared as: 'void ()' now declared as: 'void (int)' @ 1366: void func_002433F0(s32 arg0) {
 * Original: asm/nonmatchings/unk/unk_23A890/func_002433F0.s */

// src/unk/unk_23A890.c func_002433F0 cerr diff=-1/0
f32 func_00146E30(s32, s32);
void func_002433F0(s32 arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_v0;

    temp_s5 = D_0046FE44 + (arg0 << 7);
    temp_s4 = func_00240F40(0, 0);
    temp_v0 = func_00240F40(arg0, 1);
    temp_s1 = *(u8 **)((u8 *)temp_v0 + 0x24);
    temp_s2 = *(u8 **)((u8 *)temp_s4 + 0x24);
    temp_s3 = temp_v0;
    temp_s0 = func_00240EF0(*(s8 *)((u8 *)temp_s5 + 0x3A));
    func_00241710(arg0);
    temp_f2 = *(f32 *)((u8 *)temp_s5 + 0x24);
    var_f0 = 0.0f;
    if (!(temp_f2 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s4 + 0x60) = (f32) (*(f32 *)((u8 *)temp_s0 + 0) + (*(f32 *)((u8 *)temp_s0 + 4) * temp_f2));
        var_f0 = *(f32 *)((u8 *)temp_s0 + 0x1C) + (*(f32 *)((u8 *)temp_s0 + 0x20) * *(f32 *)((u8 *)temp_s5 + 0x24));
    } else {
        *(f32 *)((u8 *)temp_s4 + 0x60) = 0.0f;
    }
    *(f32 *)((u8 *)temp_s3 + 0x60) = var_f0;
    temp_v1 = *(s32 *)((u8 *)temp_s5 + 0x2C);
    if (temp_v1 & 2) {
        *(s32 *)((u8 *)temp_s4 + 0x54) = 0x40800000;
        *(f32 *)((u8 *)temp_s4 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 0xC);
        *(f32 *)((u8 *)temp_s4 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x10);
        *(f32 *)((u8 *)temp_s2 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x14);
        *(s32 *)((u8 *)temp_s3 + 0x54) = 0x40800000;
        *(f32 *)((u8 *)temp_s3 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 0x28);
        *(f32 *)((u8 *)temp_s3 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x2C);
        *(f32 *)((u8 *)temp_s1 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x30);
    } else if (temp_v1 & 0x10) {
        *(s32 *)((u8 *)temp_s4 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)temp_s4 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 0xC);
        *(f32 *)((u8 *)temp_s4 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x10);
        *(f32 *)((u8 *)temp_s2 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x14);
        *(s32 *)((u8 *)temp_s3 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)temp_s3 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 0x28);
        *(f32 *)((u8 *)temp_s3 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x2C);
        *(f32 *)((u8 *)temp_s1 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x30);
    } else {
        *(s32 *)((u8 *)temp_s4 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)temp_s4 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 8);
        *(f32 *)((u8 *)temp_s2 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x18);
        *(s32 *)((u8 *)temp_s3 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)temp_s3 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s0 + 0x24);
        *(f32 *)((u8 *)temp_s1 + 0x60) = (f32) *(f32 *)((u8 *)temp_s0 + 0x34);
    }
    temp_f0 = func_00146E30(*(s32 *)((u8 *)gBattle + 0x264), *(s32 *)((u8 *)temp_s5 + 0x20));
    if (temp_f0 < 30.0f) {
        temp_f1 = 1.0f - ((30.0f - temp_f0) / 30.0f);
        temp_f1_2 = temp_f1 * temp_f1;
        *(f32 *)((u8 *)temp_s4 + 0x60) = (f32) (*(f32 *)((u8 *)temp_s4 + 0x60) * temp_f1_2);
        *(f32 *)((u8 *)temp_s3 + 0x60) = (f32) (*(f32 *)((u8 *)temp_s3 + 0x60) * temp_f1_2);
        *(f32 *)((u8 *)temp_s5 + 0x28) = (f32) (*(f32 *)((u8 *)temp_s5 + 0x28) * temp_f1_2);
    }
}
