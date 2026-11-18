/* Draft (not built): func_002BEF00 at 0x002BEF00, size 0x100, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xEC, original 0x100
 * Original: asm/nonmatchings/story/str_status/func_002BEF00.s */

// src/story/str_status.c func_002BEF00 size diff=33/59
extern s32 D_0046FD18;
extern void func_00133780(s32, s32);
extern void func_00209E50(s32);
extern s32 amGs_SetReg32(s32, s32);
void func_002BEF00(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = D_0046FD18;
    func_00133780(2, 1);
    func_0013B0B0(*(s32 *)((u8 *)arg0 + 0x30) + 0x1A0);
    D_00470238 = 0;
    temp_a0 = *(s32 *)((u8 *)D_0047011C + 0xD0);
    if (temp_a0 == 0) {
        goto block_2;
    }
    amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)D_0047011C + 0xD8));
block_2:
    var_s0 = 0;
    goto loop_6;
block_3:
    func_0013B0B0(NULL);
    if (*(s32 *)((u8 *)((var_s0 * 4) + D_0047011C) + 0x160) == 0) {
        goto block_5;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_00209E50((s32)((void *)(NULL)));
    func_00208D70((s32)((void *)(*(u8 **)((u8 *)((var_s0 * 4) + D_0047011C) + 0x160))));
block_5:
    func_0013B110(1);
    var_s0 += 1;
loop_6:
    if (var_s0 < 8) {
        goto block_3;
    }
    func_0013B110(1);
    func_00133780(2, 0);
    amGs_SetReg32(0, temp_s1);
    return;
}
