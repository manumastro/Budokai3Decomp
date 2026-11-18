/* Draft (not built): func_0022A880 at 0x0022A880, size 0x46C, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 750: func_0022A880(n[1], t);
 * Original: asm/nonmatchings/battle/a2d/func_0022A880.s */

// src/battle/a2d.c func_0022A880 cerr diff=-1/0
void func_0022A880(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    f32 temp_f0;
    f32 var_f12;
    s16 temp_a3;
    s32 temp_a0;
    s32 var_a2;
    u8 *temp_a0_2;
    u8 *temp_t2;
    u8 *temp_v1;

    var_a2 = arg2;
    var_f12 = fparg0;
    if ((arg0 != NULL) && (temp_a0 = *(s32 *)((u8 *)arg0 + 0x10), (temp_a0 != 0))) {
        if ((arg0 == NULL) || (temp_a0 == 0)) {
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
                var_a2 = func_002270B0(temp_a0, *(s16 *)((u8 *)arg0 + 4), -1, var_f12);
            }
        }
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x14);
        temp_t2 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x10) + (var_a2 * 4));
        temp_a3 = *(s16 *)((u8 *)temp_t2 + 2);
        temp_a0_2 = temp_v1 + (var_a2 << 5);
        switch (temp_a3) {                          /* irregular */
        case 0:
            *(s3232 *)((u8 *)arg1 + 0) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0);
            *(s3232 *)((u8 *)arg1 + 4) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 4);
            *(s3232 *)((u8 *)arg1 + 8) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 8);
            *(f32 *)((u8 *)arg1 + 0xC) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0xC);
            *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
            *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x14);
            *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x18);
            *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x1C);
            return;
        case 1:
            if ((M2C_ERROR(/* Read from unset register $f12 */) - (f32) *(s16 *)((u8 *)temp_t2 + 0)) < 0.00001f) {
                *(s3232 *)((u8 *)arg1 + 0) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0);
                *(s3232 *)((u8 *)arg1 + 4) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 4);
                *(s3232 *)((u8 *)arg1 + 8) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 8);
                *(f32 *)((u8 *)arg1 + 0xC) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0xC);
                *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
                *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x14);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x18);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x1C);
                return;
            }
            if (var_a2 == (*(s16 *)((u8 *)arg0 + 4) - 1)) {
                if (*(s32 *)((u8 *)arg0 + 0) & 1) {
                    if (((f32) *(s16 *)((u8 *)arg0 + 6) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                        *(s3232 *)((u8 *)arg1 + 0) = (s3232) *(s3232 *)((u8 *)temp_v1 + 0);
                        *(s3232 *)((u8 *)arg1 + 4) = (s3232) *(s3232 *)((u8 *)temp_v1 + 4);
                        *(s3232 *)((u8 *)arg1 + 8) = (s3232) *(s3232 *)((u8 *)temp_v1 + 8);
                        *(f32 *)((u8 *)arg1 + 0xC) = (f32) *(f32 *)((u8 *)temp_v1 + 0xC);
                        *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_v1 + 0x10);
                        *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_v1 + 0x14);
                        *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1 + 0x18);
                        *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_v1 + 0x1C);
                        return;
                    }
                    M2C_ERROR(/* unknown instruction: mula.s $f6, $f4 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f5, $f2, $f4 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
                    *(s3232 *)((u8 *)arg1 + 0) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f0 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
                    *(s3232 *)((u8 *)arg1 + 4) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f0 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f6, $f2 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f4, $f2, $f4 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
                    *(s3232 *)((u8 *)arg1 + 8) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
                    return;
                }
                *(s3232 *)((u8 *)arg1 + 0) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0);
                *(s3232 *)((u8 *)arg1 + 4) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 4);
                *(s3232 *)((u8 *)arg1 + 8) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 8);
                *(f32 *)((u8 *)arg1 + 0xC) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0xC);
                *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
                *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x14);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x18);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x1C);
                return;
            }
            if (((f32) *(s16 *)((u8 *)temp_t2 + 4) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                *(s3232 *)((u8 *)arg1 + 0) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0x20);
                *(s3232 *)((u8 *)arg1 + 4) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0x24);
                *(s3232 *)((u8 *)arg1 + 8) = (s3232) *(s3232 *)((u8 *)temp_a0_2 + 0x28);
                *(f32 *)((u8 *)arg1 + 0xC) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x2C);
                *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x30);
                *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x34);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x38);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x3C);
                return;
            }
            M2C_ERROR(/* unknown instruction: mula.s $f6, $f4 */);
            M2C_ERROR(/* unknown instruction: madd.s $f5, $f2, $f4 */);
            M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
            *(s3232 *)((u8 *)arg1 + 0) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f0 */);
            M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
            *(s3232 *)((u8 *)arg1 + 4) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f0 */);
            M2C_ERROR(/* unknown instruction: mula.s $f6, $f2 */);
            M2C_ERROR(/* unknown instruction: madd.s $f4, $f2, $f4 */);
            M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
            *(s3232 *)((u8 *)arg1 + 8) = (s3232) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
            return;
        }
    } else {
        *(s3232 *)((u8 *)arg1 + 0) = 0x3F800000;
        *(s3232 *)((u8 *)arg1 + 4) = 0x3F800000;
        *(s3232 *)((u8 *)arg1 + 8) = 0;
    case 3:
    case 2:
    }
}
