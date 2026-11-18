/* Draft (not built): func_002CFEB0 at 0x002CFEB0, size 0x258, segment unk/unk_2CF8F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'unsigned char *' to 'float' mwccps2.exe Compiler: @ 289: ((f32)(var_a0))
 * Original: asm/nonmatchings/unk/unk_2CF8F0/func_002CFEB0.s */

// src/unk/unk_2CF8F0.c func_002CFEB0 cerr diff=-1/0
s32 func_0011ECE8(s32, s32 *);
s32 func_001214F8(f32, void *, s32, void *, f32);
f32 func_001220B0(s32);
void func_002CFEB0(u8 *arg0, s32 arg1, f32 *arg2, f32 fparg0) {
    s32 sp28;
    f32 *var_s0;
    f32 *var_v1;
    f32 var_f0;
    f32 var_f1;
    s32 *var_t4;
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_t3_2;
    u8 *temp_a3;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_s0 = arg2;
    if (var_s0 == NULL) {
        var_s0 = &D_005C2100 + (D_00470928 << 9);
    }
    temp_a3 = (u8 *)(*(s32 *)((u8 *)var_a0 + 8) + (var_a1 << 7));
    var_a2 = 0;
    if (*(s32 *)((u8 *)temp_a3 + 0x60) > 0) {
        var_a1 = (s32) temp_a3;
        var_v1 = var_s0;
        temp_v0 = M2C_ERROR(/* Read from unset register $f0 */);
        do {
            temp_a0 = *(s32 *)((u8 *)var_a1 + 8);
            var_t0 = temp_v0;
            if (temp_a0 != 0) {
                if (temp_v0 < 0) {
                    var_f0 = *(f32 *)((u8 *)var_a1 + 0xC);
                } else {
                    temp_t2 = *(s32 *)((u8 *)var_a1 + 4);
                    var_f1 = 0.0f;
                    if (temp_t2 < temp_v0) {
                        var_f1 = fparg0 - (f32) temp_v0;
                        var_t0 = temp_v0 % temp_t2;
                    }
                    temp_t1 = *(s32 *)((u8 *)var_a1 + 0);
                    var_t4 = (s32 *)(temp_a0 + 0x10);
                    var_t3 = 1;
                    if (temp_t1 >= 2) {
loop_11:
                        var_t0_2 = 1;
                        if ((f32) *var_t4 <= ((f32) var_t0 + var_f1)) {
                            var_t0_2 = 0;
                        }
                        if ((var_t0_2 ^ 1) == 0) {
                            var_t3_2 = var_t3 - 1;
                        } else {
                            var_t3 += 1;
                            var_t4 += 0x10;
                            if (var_t3 >= *(s32 *)((u8 *)var_a1 + 0)) {
                                goto block_18;
                            }
                            goto loop_11;
                        }
                    } else {
block_18:
                        var_t3_2 = temp_t1 - 1;
                    }
                    if (var_t3_2 == (temp_t1 - 1)) {

                    }
                    M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                    var_f0 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f5 */);
                }
            } else {
                var_f0 = *(f32 *)((u8 *)var_a1 + 0xC);
            }
            var_a2 += 1;
            *var_v1 = var_f0;
            var_a1 += 0x10;
            var_a0 = (u8 *) (var_a2 < *(s32 *)((u8 *)temp_a3 + 0x60));
            var_v1 += 4;
        } while (var_a0 != NULL);
    }
    *(f32 *)((u8 *)var_s0 + 0x18) = (f32) (*(f32 *)((u8 *)var_s0 + 0x18) + *(f32 *)((u8 *)var_s0 + 0x10));
    *(f32 *)((u8 *)var_s0 + 0x1C) = (f32) (*(f32 *)((u8 *)var_s0 + 0x1C) + *(f32 *)((u8 *)var_s0 + 0x14));
    *(f32 *)((u8 *)var_s0 + 0x18) = func_001220B0(func_0011ECE8(func_001214F8(M2C_BITWISE(f32, var_a0), (u8 *) var_a1, var_a2, temp_a3, *(f32 *)((u8 *)var_s0 + 0x18)), &sp28));
    *(f32 *)((u8 *)var_s0 + 0x1C) = func_001220B0(func_0011ECE8(func_001214F8(*(f32 *)((u8 *)var_s0 + 0x1C), 0, 0, 0, 0), &sp28));
}
