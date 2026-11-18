/* Draft (not built): func_001CF100 at 0x001CF100, size 0x1C0, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'float' to 'unsigned char *' mwccps2.exe Compiler: @ 1493: ((u8 *)(*(f32 *)((u8 *)temp_s1 + 0x17A4)))
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CF100.s */

// src/unk/unk_1CBD90.c func_001CF100 cerr diff=-1/0
extern void func_0013B160(void *);
extern char D_003F0800[];
extern void func_0013B620(void *);
extern void func_0013AFA0(void *);
s32 func_001CF100(u8 *arg1) {
    s32 sp40;
    s32 sp50;
    f32 temp_f0;
    s32 temp_a1_2;
    u8 *temp_a1;
    u8 *temp_s1;

    temp_a1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a1_2 = *(s32 *)((u8 *)temp_a1 + 4) & 0xF0000;
    temp_f0 = 65536.0f * (*(f32 *)((u8 *)temp_a1 + 0) / 360.0f);
    temp_s1 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a1 + 8) * 4) + gBattle) + 0x8934);
    switch (temp_a1_2) {                            /* irregular */
    case 0x10000:
    case 0x0:
        *(f32 *)((u8 *)temp_s1 + 0x17A4) = temp_f0;
        break;
    case 0x20000:
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xB88)) + 0x40C) < 0) {

        }
        func_0013B160(D_003F0800);
        func_0013B620(M2C_BITWISE(u8 *, *(f32 *)((u8 *)temp_s1 + 0x17A4)));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_0013AFA0(NULL);
        func_0013B620(M2C_BITWISE(u8 *, temp_f0));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(f32 *)((u8 *)temp_s1 + 0x17A4) = M2C_BITWISE(f32, ((M2C_BITWISE(s32, *(f32 *)((u8 *)temp_s1 + 0x17A4)) + M2C_BITWISE(s32, temp_f0)) & 0xFFFF));
        break;
    case 0x30000:
        *(f32 *)((u8 *)temp_s1 + 0x17A4) = M2C_BITWISE(f32, ((*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x17A4) + M2C_BITWISE(s32, temp_f0)) & 0xFFFF));
        break;
    }
    func_001E4FA0(temp_s1, -1);
    func_001E4820(temp_s1, 0, 0);
    return 1;
}
