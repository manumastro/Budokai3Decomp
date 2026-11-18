/* Draft (not built): func_002E4BF0 at 0x002E4BF0, size 0x168, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xAC, original 0x168
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E4BF0.s */

// src/unk/unk_2E4030.c func_002E4BF0 size diff=72/43
s32 func_0013B110(s32);
s32 func_0013B500(s32);
s32 func_0013BC00(s32, s32, s32);
extern s128 D_00456E10;
extern void func_0013B0B0(void *);
extern char D_003F0800[];
extern void func_0013B620(void *);
void func_002E4BF0(u8 *arg0, s64 arg1) {
    s128 sp30;
    s32 sp40;
    f32 sp48;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_s0;

    temp_s0 = arg0 + (((s64) (arg1 << 0x30) >> 0x30) * 0xC) + 0x30;
    sp30 = D_00456E10;
    func_0013B0B0(D_003F0800);
    func_0013BC00(0, 0x43E60000, 0xC57A0000);
    func_0013B500(0x1600);
    func_0013B620((void *)(*(s32 *)((u8 *)temp_s0 + 4) - *(s32 *)((u8 *)arg0 + 0xF8)));
    func_0013BC00(0, 0, 0x44AA0000);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    temp_f1 = sp48 + 4000.0f;
    sp48 = temp_f1;
    temp_f1_2 = temp_f1 * 2.0f;
    sp48 = temp_f1_2;
    sp48 = temp_f1_2 - 4000.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
    func_002E46A0(arg0, *(s16 *)((u8 *)temp_s0 + 8));
    sp48 += 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
    func_002E4AC0(arg0);
    func_0013B110(1);
}
