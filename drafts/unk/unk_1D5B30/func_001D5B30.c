/* Draft (not built): func_001D5B30 at 0x001D5B30, size 0x110, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0x110
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D5B30.s */

// src/unk/unk_1D5B30.c func_001D5B30 size diff=42/56
extern void func_0013B960(void *);
extern char D_003F0800[];
s32 func_00132D20(s32, void *, s32);
s32 func_00133DD0(void *, void *, void *, void *);
s32 func_0013B110(s32);
extern void func_0013B0B0(void *);
void func_001D5B30(u8 *arg0) {
    s32 sp40;
    s32 sp44;
    s32 var_s0;
    u8 *temp_s1;

    var_s0 = 1;
    temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350)) + 0x100;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(f32 *)((u8 *)temp_s1 + 4) = (f32) (*(f32 *)((u8 *)temp_s1 + 4) + 2.5f);
    func_0013B0B0(D_003F0800);
    func_0013B960(gBattle + 0x60);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    func_0013B110(1);
    *(f32 *)((u8 *)temp_s1 + 4) = (f32) -*(f32 *)((u8 *)temp_s1 + 4);
    *(f32 *)((u8 *)temp_s1 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 8);
    if (func_00132D20(0, temp_s1, 0) != 0) {
        var_s0 = 0;
    }
    func_00133DD0(temp_s1, temp_s1, temp_s1 + 4, temp_s1 + 8);
    *(f32 *)((u8 *)temp_s1 + 4) = (f32) (*(f32 *)((u8 *)temp_s1 + 4) - 16.0f);
    sp40 = *(s32 *)((u8 *)arg0 + 0x1350);
    sp44 = var_s0;
    A2d_CallHandler(0x33, &sp40);
}
