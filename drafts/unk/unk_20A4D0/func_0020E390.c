/* Draft (not built): func_0020E390 at 0x0020E390, size 0x1A0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x1A0
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020E390.s */

// src/unk/unk_20A4D0.c func_0020E390 size diff=60/86
extern s128 D_0044BA40;
extern s128 D_0044BA50;
void func_0020E390(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp40;
    s32 sp50;
    s128 sp60;
    s128 sp70;
    s32 sp80;
    s32 sp90;
    s128 spA0;
    s128 spB0;
    u8 *temp_s0;
    u8 *temp_s0_2;

    switch (arg2) {                                 /* irregular */
    case 0:
        spB0 = D_0044BA40;
        temp_s0 = &D_00568C90 + (arg0 * 0x2140);
        spA0 = D_0044BA50;
        if (arg3 & 2) {
            func_00141C30(&sp90, &spA0, arg1);
        }
        if (arg3 & 4) {
            func_00141C30(&sp90, &spB0, arg1);
        }
        func_0013B160(temp_s0 + 0x40);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_00141CF0(temp_s0 + 0x40, &sp90, &sp80);
        return;
    case 1:
        temp_s0_2 = &D_0058A090 + (arg0 * 0xC0);
        sp70 = D_0044BA40;
        sp60 = D_0044BA50;
        if (arg3 & 2) {
            func_00141C30(&sp50, &sp60, arg1);
        }
        if (arg3 & 4) {
            func_00141C30(&sp50, &sp70, arg1);
        }
        func_0013B160(temp_s0_2 + 0x50);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_00141CF0(temp_s0_2 + 0x50, &sp50, &sp40);
        return;
    }
}
