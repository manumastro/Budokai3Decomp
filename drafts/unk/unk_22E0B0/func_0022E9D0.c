/* Draft (not built): func_0022E9D0 at 0x0022E9D0, size 0x194, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 53 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A4, original 0x194
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022E9D0.s */

// src/unk/unk_22E0B0.c func_0022E9D0 size diff=53/105
f32 func_001E52B0(s32);
s32 func_0022E9D0(u8 *arg0, s32 *arg1) {
    f32 temp_f0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s0;
    s32 var_t0;
    s32 var_t2;
    u16 temp_a0_2;
    u16 var_t1;
    u8 *temp_a0;
    u8 *var_t3;
    u8 *var_v0;
    u8 *var_v1;

    if (arg1 != NULL) {
        *arg1 = 0;
    }
    var_s0 = 0;
    if (*(s16 *)((u8 *)arg0 + 0xCAC) == 0xF) {
        temp_f0 = func_001E52B0(0);
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x17A0);
        var_v0 = NULL;
        if (temp_v1 != 0) {
            var_v0 = (u8 *)(temp_v1 + 0x20);
        }
        temp_a0 = *(u8 **)((u8 *)arg0 + 0xB74);
        var_t2 = 0;
        if (temp_a0 != NULL) {
            var_v1 = *(u8 **)((u8 *)temp_a0 + 0x2C);
            var_t0 = 0;
            if (*(s32 *)((u8 *)temp_a0 + 0x28) > 0) {
                do {
                    temp_a0_2 = *(u16 *)((u8 *)var_v1 + 0);
                    if (temp_a0_2 != 1) {
                        if (temp_a0_2 == 7) {
                            goto block_11;
                        }
                    } else {
block_11:
                        var_t3 = *(u8 **)((u8 *)var_v1 + 4);
                        var_a3 = 0;
                        if (*(s16 *)((u8 *)var_v1 + 2) > 0) {
                            do {
                                var_t1 = *(u16 *)((u8 *)var_t3 + 0);
                                if (*(s8 *)((u8 *)var_t3 + 3) == 0) {
                                    var_t1 -= 1;
                                }
                                if (var_t2 < (s32) var_t1) {
                                    var_t2 = (s32) var_t1;
                                }
                                if ((*(u16 *)((u8 *)var_v1 + 0) == 1) && (*(u16 *)((u8 *)var_t3 + 8) & 2) && (arg1 != NULL)) {
                                    *arg1 = 1;
                                }
                                var_a3 += 1;
                                var_t3 += 0x10;
                            } while (var_a3 < *(s16 *)((u8 *)var_v1 + 2));
                        }
                    }
                    var_t0 += 1;
                    var_v1 += 8;
                } while (var_t0 < *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x28));
            }
            if ((var_t2 != 0) && ((f32) var_t2 <= *(f32 *)((u8 *)arg0 + 0xC58))) {
                var_s0 = 1;
            }
        }
        if ((var_v0 != NULL) && !(temp_f0 <= (f32) *(s16 *)((u8 *)var_v0 + 0xA)) && (arg1 != NULL)) {
            *arg1 = 0;
        }
    }
    return var_s0;
}
