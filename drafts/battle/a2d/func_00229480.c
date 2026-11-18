/* Draft (not built): func_00229480 at 0x00229480, size 0x374, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 715: func_00229480(n[2], t);
 * Original: asm/nonmatchings/battle/a2d/func_00229480.s */

// src/battle/a2d.c func_00229480 cerr diff=-1/0
void func_00229480(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    f32 temp_f0;
    f32 var_f12;
    s16 temp_a3;
    s32 temp_v1;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_v1_2;

    var_a2 = arg2;
    var_f12 = fparg0;
    if ((arg0 != NULL) && (temp_v1 = *(s32 *)((u8 *)arg0 + 0x10), (temp_v1 != 0))) {
        if ((arg0 == NULL) || (temp_v1 == 0)) {
            var_f12 = 0.0f;
        } else if (*(s32 *)((u8 *)arg0 + 0) & 1) {
            var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 6)) + (var_f12 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
        } else {
            temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 6);
            if (!(var_f12 < temp_f0)) {
                var_f12 = temp_f0;
            }
        }
        if (var_a2 < 0) {
            if (var_f12 == (f32) *(s16 *)((u8 *)arg0 + 6)) {
                var_a2 = *(s16 *)((u8 *)arg0 + 4) - 1;
            } else {
                var_a2 = func_002270B0(*(s32 *)((u8 *)arg0 + 0x10), *(s16 *)((u8 *)arg0 + 4), -1, var_f12);
            }
        }
        temp_a0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x10) + (var_a2 * 4));
        temp_v1_2 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x14) + (var_a2 << 5));
        temp_a3 = *(s16 *)((u8 *)temp_a0 + 2);
        switch (temp_a3) {                          /* irregular */
        case 0:
            *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_v1_2 + 0);
            *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_v1_2 + 4);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
            return;
        case 1:
            *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_v1_2 + 0);
            *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_v1_2 + 4);
            if (var_a2 == (*(s16 *)((u8 *)arg0 + 4) - 1)) {
                if (*(s32 *)((u8 *)arg0 + 0) & 1) {
                    if (((f32) *(s16 *)((u8 *)arg0 + 6) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                        return;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
                    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($t2) */);
                    return;
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                return;
            }
            if (((f32) *(s16 *)((u8 *)temp_a0 + 4) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                return;
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a3) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($t1) */);
            return;
        }
    } else {
        *(s32 *)((u8 *)arg1 + 0) = -1;
        *(s32 *)((u8 *)arg1 + 4) = 5;
    case 3:
    case 2:
    }
}
