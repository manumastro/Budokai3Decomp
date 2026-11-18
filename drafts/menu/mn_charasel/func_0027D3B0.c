/* Draft (not built): func_0027D3B0 at 0x0027D3B0, size 0x468, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

extern M2C_UNK D_0046B610;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern M2C_UNK D_0058F660;

s64 func_0027D3B0(s64 arg0, s64 arg1) {
    s32 var_t3;
    s32 var_t3_2;
    s64 temp_a2;
    s64 temp_a2_2;
    s64 temp_a3_2;
    s64 temp_t0;
    s64 temp_t1_2;
    s64 temp_v0;
    s64 temp_v1;
    s64 var_a0;
    s64 var_a1;
    s64 var_a2;
    s64 var_a3;
    s64 var_t4;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v0_3;
    s64 var_v1;
    s64 var_v1_2;
    s64 var_v1_3;
    s64 var_v1_4;
    s8 temp_a1;
    s8 temp_t1;
    s8 temp_t5;
    void *temp_a3;

    temp_a2 = (s64) (arg0 << 0x30) >> 0x30;
    temp_a3 = temp_a2 + &D_0058F660;
    temp_t1 = M2C_FIELD(temp_a3, s8 *, 8);
    var_v0_2 = 0;
    if (arg1 != 0) {
        var_a3 = (s64) (arg1 << 0x30) >> 0x30;
    } else {
        var_a3 = 1;
    }
    temp_a3_2 = (s64) ((s64) *(&D_0046B610 + M2C_FIELD(((temp_a2 * 2) + &D_0058F660), s16 *, 4)) << 0x30) >> 0x30;
    temp_t0 = (s64) (var_a3 << 0x30) >> 0x30;
    if (temp_a3_2 < 2) {
        return 0;
    }
    if (M2C_FIELD(&D_0058F660, s16 *, 4) != M2C_FIELD(&D_0058F660, s16 *, 6)) {
        var_v1_4 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
        if (var_v1_4 < 0) {
            var_v1_4 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
        } else if ((temp_a3_2 - 1) < var_v1_4) {
            var_v1_4 = 0;
        }
        M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_v1_4;
        return (s64) (var_v1_4 << 0x38) >> 0x38;
    }
    switch (D_004B4B41) {                           /* irregular */
    case 5:
    case 3:
    case 1:
    case 0:
        var_v1 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
        if (var_v1 < 0) {
            var_v1 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
        } else if ((temp_a3_2 - 1) < var_v1) {
            var_v1 = 0;
        }
        M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_v1;
        return (s64) (var_v1 << 0x38) >> 0x38;
    case 6:
        if (D_004B4B59 != 1) {
            if (D_004B4B59 == 2) {
                goto block_25;
            }
        default:
            temp_v1 = (s64) (((s64) ((arg0 == 0) << 0x30) >> 0x30) << 0x30) >> 0x30;
            temp_t5 = M2C_FIELD((temp_v1 + &D_0058F660), s8 *, 0xA);
            if (temp_t5 == -2) {
                var_v1_3 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
                if (var_v1_3 < 0) {
                    var_v1_3 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
                } else if ((temp_a3_2 - 1) < var_v1_3) {
                    var_v1_3 = 0;
                }
                M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_v1_3;
                return (s64) (var_v1_3 << 0x38) >> 0x38;
            }
            if ((M2C_FIELD((temp_a2 + &D_0058F660), s8 *, 0xA) != -1) && (temp_t5 == -1)) {
                var_v0_2 = 1;
            }
            if (((s64) (var_v0_2 << 0x30) >> 0x30) == 0) {
                var_a2 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
                if (var_a2 < 0) {
                    var_a2 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
                } else if ((temp_a3_2 - 1) < var_a2) {
                    var_a2 = 0;
                }
                var_a1 = (s64) (var_a2 << 0x30) >> 0x30;
                var_t3 = 0;
                if (temp_a3_2 > 0) {
                    temp_a2_2 = temp_a3_2 - 1;
loop_47:
                    temp_v0 = (s64) (var_a1 << 0x30) >> 0x30;
                    if (temp_v0 != M2C_FIELD((&D_0058F660 + temp_v1), s8 *, 8)) {
                        M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_a1;
                        return (s64) (var_a1 << 0x38) >> 0x38;
                    }
                    var_v0_3 = (s64) ((temp_v0 + temp_t0) << 0x30) >> 0x30;
                    if (var_v0_3 < 0) {
                        var_v0_3 = (s64) (temp_a2_2 << 0x30) >> 0x30;
                    } else if (temp_a2_2 < var_v0_3) {
                        var_v0_3 = 0;
                    }
                    var_t3 += 1;
                    var_a1 = (s64) (var_v0_3 << 0x30) >> 0x30;
                    if (var_t3 >= temp_a3_2) {
                        goto block_76;
                    }
                    goto loop_47;
                }
                goto block_76;
            }
            var_v0 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
            if (var_v0 < 0) {
                var_v0 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
            } else if ((temp_a3_2 - 1) < var_v0) {
                var_v0 = 0;
            }
            M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_v0;
            temp_a1 = M2C_FIELD((temp_v1 + &D_0058F660), s8 *, 8);
            if (temp_a1 == ((s64) (var_v0 << 0x30) >> 0x30)) {
                var_t4 = (s64) ((s64) temp_a1 << 0x30) >> 0x30;
                var_t3_2 = 0;
                if (temp_a3_2 > 0) {
                    temp_t1_2 = temp_a3_2 - 1;
loop_65:
                    var_a0 = (s64) ((((s64) (var_t4 << 0x30) >> 0x30) + temp_t0) << 0x30) >> 0x30;
                    if (var_a0 < 0) {
                        var_a0 = (s64) (temp_t1_2 << 0x30) >> 0x30;
                    } else if (temp_t1_2 < var_a0) {
                        var_a0 = 0;
                    }
                    var_t4 = (s64) (var_a0 << 0x30) >> 0x30;
                    if (var_t4 != M2C_FIELD((&D_0058F660 + temp_a2), s8 *, 8)) {
                        M2C_FIELD((temp_v1 + &D_0058F660), s8 *, 0xC) = (s8) var_a0;
                        return var_v0;
                    }
                    var_t3_2 += 1;
                    if (var_t3_2 >= temp_a3_2) {
                        goto block_76;
                    }
                    goto loop_65;
                }
block_76:
                return 0;
            }
            return var_v0;
        }
block_25:
        var_v1_2 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
        if (var_v1_2 < 0) {
            var_v1_2 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
        } else if ((temp_a3_2 - 1) < var_v1_2) {
            var_v1_2 = 0;
        }
        M2C_FIELD(temp_a3, s8 *, 8) = (s8) var_v1_2;
        return (s64) (var_v1_2 << 0x38) >> 0x38;
    }
}
