/* Draft (not built): func_0012E100 at 0x0012E100, size 0x540, segment sys/unk_12DE80 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'unsigned char *' to 'float' mwccps2.exe Compiler: @ 185: ((f32)(temp_a1))
 * Original: asm/nonmatchings/sys/unk_12DE80/func_0012E100.s */

// src/sys/unk_12DE80.c func_0012E100 cerr diff=-1/0
s32 amMotion_FindKey16(void *, f32, f32);
s32 amMotion_FindKey8(void *, void *, f32);
void func_0012E100(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s0_5;
    u8 *temp_s0_6;
    u8 *temp_s0_7;
    u8 *temp_s0_8;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;

    temp_s2 = (unsigned char *)(*(s32 *)((u8 *)arg1 + 0x14) + (arg2 * 0x10));
    temp_s1 = *(u8 **)((u8 *)temp_s2 + 0xC);
    if ((f32) (*(s32 *)((u8 *)temp_s2 + 8) - 1) <= fparg0) {
        temp_s0 = *(u8 **)((u8 *)temp_s1 + 0);
        temp_v1 = temp_s0 + ((*(s32 *)((u8 *)temp_s0 + 8) - 1) * 0x10);
        *(f32 *)((u8 *)arg0 + 0) = (f32) *(f32 *)((u8 *)temp_v1 + 0x10);
        *(f32 *)((u8 *)arg0 + 4) = (f32) *(f32 *)((u8 *)temp_v1 + 0x14);
        *(f32 *)((u8 *)arg0 + 8) = (f32) *(f32 *)((u8 *)temp_v1 + 0x18);
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
        temp_s0_2 = *(u8 **)((u8 *)temp_s1 + 4);
        temp_v1_2 = temp_s0_2 + ((*(s32 *)((u8 *)temp_s0_2 + 8) - 1) * 0x10);
        *(f32 *)((u8 *)arg0 + 0x10) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x10);
        *(f32 *)((u8 *)arg0 + 0x14) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x14);
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x18);
        *(s32 *)((u8 *)arg0 + 0x1C) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
        temp_s0_3 = *(u8 **)((u8 *)temp_s1 + 8);
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(f32 *)((u8 *)(temp_s0_3 + ((*(s32 *)((u8 *)temp_s0_3 + 8) - 1) * 8)) + 0x10);
        *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
        if (*(s32 *)((u8 *)temp_s2 + 0) & 0x10) {
            temp_s0_4 = *(u8 **)((u8 *)temp_s1 + 0xC);
            var_f1 = *(f32 *)((u8 *)(temp_s0_4 + ((*(s32 *)((u8 *)temp_s0_4 + 8) - 1) * 8)) + 0x10);
            if (var_f1 < 0.08726647f) {
                var_f1 = 0.08726647f;
            }
            if (!(var_f1 <= 3.0543263f)) {
                var_f1 = 3.0543263f;
            }
            *(f32 *)((u8 *)arg0 + 0x34) = var_f1;
        }
    } else {
        temp_s0_5 = *(u8 **)((u8 *)temp_s1 + 0);
        temp_v1_3 = temp_s0_5 + (amMotion_FindKey16(temp_s0_5, fparg0, 0) * 0x10);
        temp_a1 = temp_v1_3 + 0xC;
        *(f32 *)((u8 *)arg0 + 0) = (f32) *(f32 *)((u8 *)temp_v1_3 + 0x10);
        *(f32 *)((u8 *)arg0 + 4) = (f32) *(f32 *)((u8 *)temp_v1_3 + 0x14);
        *(f32 *)((u8 *)arg0 + 8) = (f32) *(f32 *)((u8 *)temp_v1_3 + 0x18);
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
        if ((f32) *(s32 *)((u8 *)temp_v1_3 + 0xC) != fparg0) {
            sp60 = *(f32 *)((u8 *)temp_a1 + 0x14);
            sp64 = *(f32 *)((u8 *)temp_a1 + 0x18);
            sp68 = *(f32 *)((u8 *)temp_a1 + 0x1C);
            sp6C = 0x3F800000;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
        }
        temp_s0_6 = *(u8 **)((u8 *)temp_s1 + 4);
        temp_v1_4 = temp_s0_6 + (amMotion_FindKey16(temp_s0_6, M2C_BITWISE(f32, temp_a1), fparg0) * 0x10);
        temp_a1_2 = temp_v1_4 + 0xC;
        *(f32 *)((u8 *)arg0 + 0x10) = (f32) *(f32 *)((u8 *)temp_v1_4 + 0x10);
        *(f32 *)((u8 *)arg0 + 0x14) = (f32) *(f32 *)((u8 *)temp_v1_4 + 0x14);
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1_4 + 0x18);
        *(s32 *)((u8 *)arg0 + 0x1C) = 0x3F800000;
        if ((f32) *(s32 *)((u8 *)temp_v1_4 + 0xC) != fparg0) {
            temp_a0 = temp_a1_2 + 0x10;
            sp60 = *(f32 *)((u8 *)temp_a0 + 4);
            sp64 = *(f32 *)((u8 *)temp_a0 + 8);
            sp68 = *(f32 *)((u8 *)temp_a0 + 0xC);
            sp6C = 0x3F800000;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
        temp_s0_7 = *(u8 **)((u8 *)temp_s1 + 8);
        temp_a0_2 = temp_s0_7 + (amMotion_FindKey8(temp_s0_7, temp_a1_2, fparg0) * 8);
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
        *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
        if ((f32) *(s32 *)((u8 *)temp_a0_2 + 0xC) != fparg0) {
            M2C_ERROR(/* unknown instruction: mula.s $f0, $f1 */);
            *(f32 *)((u8 *)arg0 + 0x30) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f2, $f3 */);
            *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
        }
        if (*(s32 *)((u8 *)temp_s2 + 0) & 0x10) {
            temp_s0_8 = *(u8 **)((u8 *)temp_s1 + 0xC);
            temp_v1_5 = temp_s0_8 + (amMotion_FindKey8(temp_s0_8, temp_a0_2 + 0xC, fparg0) * 8);
            var_f1_2 = *(f32 *)((u8 *)temp_v1_5 + 0x10);
            if (var_f1_2 < 0.08726647f) {
                var_f1_2 = 0.08726647f;
            }
            if (!(var_f1_2 <= 3.0543263f)) {
                var_f1_2 = 3.0543263f;
            }
            *(f32 *)((u8 *)arg0 + 0x34) = var_f1_2;
            if ((f32) *(s32 *)((u8 *)temp_v1_5 + 0xC) != fparg0) {
                M2C_ERROR(/* unknown instruction: mula.s $f0, $f1 */);
                var_f1_3 = M2C_ERROR(/* unknown instruction: madd.s $f1, $f2, $f3 */);
                if (var_f1_3 < 0.08726647f) {
                    var_f1_3 = 0.08726647f;
                }
                if (!(var_f1_3 <= 3.0543263f)) {
                    var_f1_3 = 3.0543263f;
                }
                *(f32 *)((u8 *)arg0 + 0x34) = var_f1_3;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) | 1);
}
