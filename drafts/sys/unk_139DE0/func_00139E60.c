/* Draft (not built): func_00139E60 at 0x00139E60, size 0x380, segment sys/unk_139DE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 75: func_00139E60(a0, p, d);
 * Original: asm/nonmatchings/sys/unk_139DE0/func_00139E60.s */

// src/sys/unk_139DE0.c func_00139E60 cerr diff=-1/0
s32 amMotion_FindKey16(void *, f32, f32);
extern void func_00146F30(void *);
void func_00139E60(u8 *arg0, u8 *arg1, u8 *arg2, f32 fparg0) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;

    if ((f32) (*(s32 *)((u8 *)arg1 + 8) - 1) <= fparg0) {
        temp_s0 = *(u8 **)((u8 *)arg2 + 0);
        temp_v0 = temp_s0 + ((*(s32 *)((u8 *)temp_s0 + 8) - 1) * 0x10);
        sp70 = *(f32 *)((u8 *)temp_v0 + 0x10);
        sp74 = *(f32 *)((u8 *)temp_v0 + 0x14);
        sp78 = *(f32 *)((u8 *)temp_v0 + 0x18);
        sp7C = 0x3F800000;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_s0_2 = *(u8 **)((u8 *)arg2 + 4);
        temp_a1 = temp_s0_2 + ((*(s32 *)((u8 *)temp_s0_2 + 8) - 1) * 0x10) + 0xC;
        sp60 = *(f32 *)((u8 *)temp_a1 + 4);
        sp64 = *(f32 *)((u8 *)temp_a1 + 8);
        sp68 = *(f32 *)((u8 *)temp_a1 + 0xC);
        sp6C = 1.0f;
        sp6C = (0.114f * *(f32 *)((u8 *)temp_a1 + 0xC)) + ((0.299f * *(f32 *)((u8 *)temp_a1 + 4)) + (0.587f * *(f32 *)((u8 *)temp_a1 + 8)));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    } else {
        temp_s0_3 = *(u8 **)((u8 *)arg2 + 0);
        temp_v0_2 = temp_s0_3 + (amMotion_FindKey16(temp_s0_3, fparg0, 0) * 0x10);
        temp_a1_2 = temp_v0_2 + 0xC;
        sp50 = *(f32 *)((u8 *)temp_a1_2 + 4);
        sp54 = *(f32 *)((u8 *)temp_a1_2 + 8);
        sp58 = *(f32 *)((u8 *)temp_a1_2 + 0xC);
        sp5C = 1.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        if ((f32) *(s32 *)((u8 *)temp_v0_2 + 0xC) != fparg0) {
            temp_a0 = temp_a1_2 + 0x10;
            sp80 = *(f32 *)((u8 *)temp_a0 + 4);
            sp84 = *(f32 *)((u8 *)temp_a0 + 8);
            sp88 = *(f32 *)((u8 *)temp_a0 + 0xC);
            sp8C = 1.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
        temp_s0_4 = *(u8 **)((u8 *)arg2 + 4);
        temp_v1 = temp_s0_4 + (amMotion_FindKey16(temp_s0_4, M2C_BITWISE(f32, temp_a1_2), fparg0) * 0x10);
        *(f32 *)((u8 *)arg0 + 0x20) = (f32) *(f32 *)((u8 *)temp_v1 + 0x10);
        *(f32 *)((u8 *)arg0 + 0x24) = (f32) *(f32 *)((u8 *)temp_v1 + 0x14);
        *(f32 *)((u8 *)arg0 + 0x28) = (f32) *(f32 *)((u8 *)temp_v1 + 0x18);
        *(s32 *)((u8 *)arg0 + 0x2C) = 0x3F800000;
        if ((f32) *(s32 *)((u8 *)temp_v1 + 0xC) != fparg0) {
            temp_a0_2 = temp_v1 + 0xC + 0x10;
            sp80 = *(f32 *)((u8 *)temp_a0_2 + 4);
            sp84 = *(f32 *)((u8 *)temp_a0_2 + 8);
            sp88 = *(f32 *)((u8 *)temp_a0_2 + 0xC);
            sp8C = 1.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f0 */);
        *(s32 *)((u8 *)arg0 + 0x2C) = (s32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f1, $f0 */);
    }
    func_00146F30(arg0 + 0x10);
    *(s16 *)((u8 *)arg0 + 0x30) = 0;
}
