/* Draft (not built): func_002BEF00 at 0x002BEF00, size 0x100, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_status/func_002BEF00.s */

extern s32 D_0046FD18;
extern void func_00133780(s32, s32);
extern void func_00209E50(s32);
extern s32 amGs_SetReg32(s32, s32);
void func_002BEF00(u8 *arg0) {
    s32 var_s0;
    s32 temp_a0;
    s32 temp_s1;
    temp_s1 = D_0046FD18;
    func_00133780(2, 1);
    func_0013B0B0(*(s32 *)((u8 *)arg0 + 0x30) + 0x1A0);
    temp_a0 = *(s32 *)((u8 *)D_0047011C + 0xD0);
    D_00470238 = 0;
    if (temp_a0 == 0) {
        goto block_2;
    }
    amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)D_0047011C + 0xD8));
    block_2:
    var_s0 = 0;

    goto loop_6;
    block_3:
    func_0013B0B0(NULL);

    if (*(s32 *)((u8 *)(var_s0 * 4 + D_0047011C) + 0x160) == 0) {
        goto block_5;
    }
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    func_00209E50((s32)NULL);
    func_00208D70((s32)*(u8 **)((u8 *)(var_s0 * 4 + D_0047011C) + 0x160));
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
