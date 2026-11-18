/* Draft (not built): func_0029FA90 at 0x0029FA90, size 0x384, segment battle/char_disp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); from 'unsigned char *' to 'int' @ 1038: amModel_SetCurrent(*(u8 **)((u8 *)arg1 + 0), *(s32 *)((u8 *)arg1 + 4), temp_a2);
 * Original: asm/nonmatchings/battle/char_disp/func_0029FA90.s */

// src/battle/char_disp.c func_0029FA90 cerr diff=-1/0
s32 amGs_SetReg64(s32, s32);
s32 func_0013B110(s32);
extern void func_0013B0B0(void *);
void func_0029FA90(u8 *arg0, u8 *arg1) {
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    f32 sp9C;
    s32 spA0;
    f32 spAC;
    f32 temp_f2;
    f32 var_f3;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_s0;

    temp_s0 = arg0 + 4;
    sp30 = *(s32 *)((u8 *)arg0 + 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp50 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0);
    temp_a2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0)) + 0x18);
    if ((temp_v1 < temp_a2) || (((temp_a2 + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0)) + 0x10)) - 1) < temp_v1)) {
        *(s32 *)((u8 *)arg0 + 0) = temp_a2;
    }
    D_00470238 = 0;
    amModel_SetCurrent(*(u8 **)((u8 *)arg1 + 0), *(s32 *)((u8 *)arg1 + 4), temp_a2);
    DrawFlags_Apply(0x800, 0, 0, 0x800, 0);
    DrawFlags_Apply(0x20000000, 0, 0, 0x20000000, 0);
    amGs_SetReg64(0, sp50);
    func_0013B0B0(NULL);
    temp_v1_2 = *(s32 *)((u8 *)temp_s0 + 0x10);
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0029F830((u8 *)(&sp30));
        break;
    case 1:
        temp_f2 = *(f32 *)((u8 *)temp_s0 + 8);
        var_f3 = 0.0f;
        if (!(temp_f2 < 0.0f)) {
            var_f3 = (*(f32 *)((u8 *)temp_s0 + 0xC) - *(f32 *)((u8 *)arg0 + 4)) / temp_f2;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp9C = (*(f32 *)((u8 *)arg0 + 0x7C) * (1.0f - var_f3)) + (*(f32 *)((u8 *)arg0 + 0xCC) * var_f3);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        spAC = (*(f32 *)((u8 *)arg0 + 0x8C) * (1.0f - var_f3)) + (*(f32 *)((u8 *)arg0 + 0xDC) * var_f3);
        func_0029F830((u8 *)(&sp30));
        break;
    default:
    case 2:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0029F830((u8 *)(&sp30));
        break;
    }
    DrawFlags_Apply(0, 0x800, 0, 0, 0);
    DrawFlags_Apply(0, 0x20000000, 0, 0, 0);
    func_0013B110(1);
    func_0012F2C0();
}
