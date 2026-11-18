/* Draft (not built): func_00224BB0 at 0x00224BB0, size 0x3D8, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 176 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x420, original 0x3D8
 * Original: asm/nonmatchings/unk/unk_21D260/func_00224BB0.s */

// src/unk/unk_21D260.c func_00224BB0 size diff=176/264
s32 memset(s32, s32);
extern s8 D_004680E0;
extern s32 D_0049302E;
extern s32 D_00493032;
extern char D_00492FCE[];
void func_00224BB0(u8 *arg0) {
    s32 *var_s4;
    s16 temp_a1;
    s16 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    u16 temp_v1;
    u16 var_a0;
    u16 var_a1;
    u16 var_a2;
    u16 var_a3;
    u8 *temp_s0;
    u8 *temp_v1_2;

    temp_s0 = (u8 *)(gBtlSys);
    memset(0, 8);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
        temp_a3 = *(s16 *)((u8 *)temp_s0 + 0xE40);
        if (temp_a3 != -1) {
            temp_a3_2 = temp_a3 * 0xB8;
            temp_v1 = *(&D_00492FD2 + temp_a3_2);
            if (temp_v1 & 0x10) {
                *(s8 *)((u8 *)arg0 + 0) = (s8) (*(s8 *)((u8 *)arg0 + 0) + 1);
            }
            if (temp_v1 & 0x40) {
                *(s8 *)((u8 *)arg0 + 0) = (s8) (*(s8 *)((u8 *)arg0 + 0) - 1);
            }
            if (temp_v1 & 0x80) {
                *(s8 *)((u8 *)arg0 + 1) = (s8) (*(s8 *)((u8 *)arg0 + 1) - 1);
            }
            if (temp_v1 & 0x20) {
                *(s8 *)((u8 *)arg0 + 1) = (s8) (*(s8 *)((u8 *)arg0 + 1) + 1);
            }
            temp_a3_3 = *(D_00492FCE + temp_a3_2) & 0xFFFF;
            if (temp_a3_3 & 0x4000) {
                *(s8 *)((u8 *)arg0 + 2) = 1;
            }
            if (temp_a3_3 & 0x1000) {
                *(s8 *)((u8 *)arg0 + 3) = 1;
            }
            if (temp_a3_3 & 8) {
                *(s8 *)((u8 *)arg0 + 4) = 1;
            }
            if (temp_a3_3 & 1) {
                *(s8 *)((u8 *)arg0 + 5) = 1;
            }
            if (((*(&D_0049302E + temp_a3_2) & 0xFFFF) | ((*(&D_00493032 + temp_a3_2) & 0xFFFF) | (temp_v1 | temp_a3_3))) == 0) {
                *(s8 *)((u8 *)arg0 + 6) = 1;
            } else {
                *(s8 *)((u8 *)arg0 + 6) = 0;
            }
        } else {
            var_s1 = 1;
            *(s8 *)((u8 *)arg0 + 6) = 1;
            var_s0 = 0;
            if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
loop_23:
                if (*(s16 *)((u8 *)(func_0021C3E0(var_s0)) + 0x1A) != -1) {
                    var_s1 = 0;
                } else {
                    var_s0 += 1;
                    if (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
                        goto loop_23;
                    }
                }
            }
            if (var_s1 != 0) {
                var_s0_2 = (D_004680E0 == 0) ? 2 : 8;
            } else {
                var_s0_2 = *(s32 *)((u8 *)gBattle + 0x88D8);
            }
            var_s3 = 0;
            if (var_s0_2 > 0) {
                var_s4 = (s32 *)(&D_00492FC0);
                do {
                    if (var_s1 != 0) {
                        var_a3 = *(u16 *)((u8 *)var_s4 + 0xE);
                        var_a1 = *(u16 *)((u8 *)var_s4 + 0x72);
                        var_a0 = *(u16 *)((u8 *)var_s4 + 0x6E);
                        var_a2 = *(u16 *)((u8 *)var_s4 + 0x12);
                    } else {
                        temp_a1 = *(s16 *)((u8 *)(func_0021C3E0(var_s3)) + 0x1A);
                        if (temp_a1 != -1) {
                            temp_v1_2 = &D_00492FC0 + (temp_a1 * 0xB8);
                            var_a3 = *(u16 *)((u8 *)temp_v1_2 + 0xE);
                            var_a1 = *(u16 *)((u8 *)temp_v1_2 + 0x72);
                            var_a0 = *(u16 *)((u8 *)temp_v1_2 + 0x6E);
                            var_a2 = *(u16 *)((u8 *)temp_v1_2 + 0x12);
                        } else {
                            var_a2 = 0;
                            var_a3 = 0;
                            var_a1 = 0;
                            var_a0 = 0;
                        }
                    }
                    temp_v1_3 = var_a2 & 0xFFFF;
                    if (temp_v1_3 & 0x10) {
                        *(s8 *)((u8 *)arg0 + 0) = (s8) (*(s8 *)((u8 *)arg0 + 0) + 1);
                    }
                    if (temp_v1_3 & 0x40) {
                        *(s8 *)((u8 *)arg0 + 0) = (s8) (*(s8 *)((u8 *)arg0 + 0) - 1);
                    }
                    if (temp_v1_3 & 0x80) {
                        *(s8 *)((u8 *)arg0 + 1) = (s8) (*(s8 *)((u8 *)arg0 + 1) - 1);
                    }
                    if (temp_v1_3 & 0x20) {
                        *(s8 *)((u8 *)arg0 + 1) = (s8) (*(s8 *)((u8 *)arg0 + 1) + 1);
                    }
                    temp_a3_4 = var_a3 & 0xFFFF;
                    if (temp_a3_4 & 0x4000) {
                        *(s8 *)((u8 *)arg0 + 2) = 1;
                    }
                    if (temp_a3_4 & 0x1000) {
                        *(s8 *)((u8 *)arg0 + 3) = 1;
                    }
                    if (temp_a3_4 & 8) {
                        *(s8 *)((u8 *)arg0 + 4) = 1;
                    }
                    if (temp_a3_4 & 1) {
                        *(s8 *)((u8 *)arg0 + 5) = 1;
                    }
                    if (((var_a1 & 0xFFFF) | ((var_a0 & 0xFFFF) | (temp_a3_4 | temp_v1_3))) != 0) {
                        *(s8 *)((u8 *)arg0 + 6) = 0;
                    }
                    var_s3 += 1;
                    var_s4 += 0xB8;
                } while (var_s3 < var_s0_2);
            }
        }
        if (*(s8 *)((u8 *)arg0 + 0) > 0) {
            *(s8 *)((u8 *)arg0 + 0) = 1;
        }
        if (*(s8 *)((u8 *)arg0 + 0) < 0) {
            *(s8 *)((u8 *)arg0 + 0) = -1;
        }
        if (*(s8 *)((u8 *)arg0 + 1) > 0) {
            *(s8 *)((u8 *)arg0 + 1) = 1;
        }
        if (*(s8 *)((u8 *)arg0 + 1) < 0) {
            *(s8 *)((u8 *)arg0 + 1) = -1;
        }
    }
}
