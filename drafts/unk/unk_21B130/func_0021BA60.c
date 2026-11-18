/* Draft (not built): func_0021BA60 at 0x0021BA60, size 0x438, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); es not match 'memcpy(int *, int *, int, int *)' mwccps2.exe Compiler: @ 531: memcpy(var_s5 + 0x4C, var_s6 + 0x4C, 0x14);
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021BA60.s */

// src/unk/unk_21B130.c func_0021BA60 cerr diff=-1/0
s32 func_0023FC80();
s32 memcpy(s32 *, s32 *, s32, s32 *);
void func_0021BA60(void) {
    s32 sp80;
    s32 *temp_a3;
    s32 *temp_s1;
    s32 *temp_s4;
    s32 *var_a3;
    s16 temp_a1;
    s16 temp_a2;
    s32 *var_a1;
    s32 temp_a0;
    s32 var_s3;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_s2;
    s8 temp_v1_2;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_t0;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_s5;
    u8 *var_s6;

    temp_s4 = (s32 *)(gBtlSys);
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        if (*(s32 *)((u8 *)temp_s4 + 0xE30) & 4) {
            var_v0 = 0;
            if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
                var_a3 = temp_s4;
                do {
                    var_t1 = 0;
                    if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
loop_6:
                        if (*(s8 *)((u8 *)(gBtlSys + var_t1) + 0xCA0) == *(s32 *)((u8 *)var_a3 + 0xE34)) {

                        } else {
                            var_t1 += 1;
                            if (var_t1 >= *(s32 *)((u8 *)gBattle + 0x88D8)) {
                                goto block_10;
                            }
                            goto loop_6;
                        }
                    } else {
block_10:
                        var_t1 = -1;
                    }
                    if (var_t1 == -1) {
                        var_a1 = NULL;
                    } else {
                        var_a1 = (s32 *)(gBtlSys + (var_t1 * 0x190) + 0x110);
                    }
                    var_v0 += 1;
                    var_a3 += 4;
                    *var_a1 |= 0x80;
                } while (var_v0 < 2);
                *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) ^ 4);
                *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) | 8);
            }
        }
        if (*(s32 *)((u8 *)temp_s4 + 0xE30) & 8) {
            temp_a0 = *(s32 *)((u8 *)gBattle + 0x88D8);
            var_s3 = 0;
            if (temp_a0 > 0) {
loop_19:
                if (*(s8 *)((u8 *)(gBtlSys + var_s3) + 0xCA0) == *(s32 *)((u8 *)temp_s4 + 0xE34)) {

                } else {
                    var_s3 += 1;
                    if (var_s3 >= *(s32 *)((u8 *)gBattle + 0x88D8)) {
                        goto block_23;
                    }
                    goto loop_19;
                }
            } else {
block_23:
                var_s3 = -1;
            }
            var_v0_2 = 0;
            if (temp_a0 > 0) {
loop_26:
                if (*(s8 *)((u8 *)(gBtlSys + var_v0_2) + 0xCA0) == *(s32 *)((u8 *)temp_s4 + 0xE38)) {

                } else {
                    var_v0_2 += 1;
                    if (var_v0_2 >= *(s32 *)((u8 *)gBattle + 0x88D8)) {
                        goto block_30;
                    }
                    goto loop_26;
                }
            } else {
block_30:
                var_v0_2 = -1;
            }
            temp_t0 = gBtlSys + (var_s3 * 0x190);
            temp_a3 = (s32 *)(gBtlSys + (var_v0_2 * 0x190));
            if (var_s3 == -1) {
                var_a0 = NULL;
            } else {
                var_a0 = temp_t0 + 0x110;
            }
            if ((*(s32 *)((u8 *)var_a0 + 0) & 0x80) && !(*(f32 *)((u8 *)var_a0 + 0x30) <= 50.0f)) {
                temp_a2 = *(s16 *)((u8 *)temp_t0 + 0x3E);
                temp_a1 = *(s16 *)((u8 *)temp_t0 + 0x42);
                *(s16 *)((u8 *)temp_t0 + 0x3E) = (s16) *(s16 *)((u8 *)temp_a3 + 0x3E);
                *(s16 *)((u8 *)temp_t0 + 0x42) = (s16) *(s16 *)((u8 *)temp_a3 + 0x42);
                *(s16 *)((u8 *)temp_a3 + 0x3E) = temp_a2;
                *(s16 *)((u8 *)temp_a3 + 0x42) = temp_a1;
                temp_s1 = (s32 *)(gBtlSys);
                temp_s2 = *(s8 *)((u8 *)(var_s3 + temp_s1) + 0xCA0);
                if (temp_s2 == -1) {
                    var_s5 = NULL;
                } else {
                    var_s5 = (u8 *)(temp_s1 + (temp_s2 * 0x190) + 0x110);
                }
                temp_v1 = (u8 *)(var_v0_2 + temp_s1);
                temp_v1_2 = *(s8 *)((u8 *)temp_v1 + 0xCA0);
                var_s6 = NULL;
                if (temp_v1_2 == -1) {

                } else {
                    var_s6 = (u8 *)(temp_s1 + (temp_v1_2 * 0x190) + 0x110);
                }
                memcpy(&sp80, var_s5 + 0x4C, 0x14, temp_a3);
                memcpy(var_s5 + 0x4C, var_s6 + 0x4C, 0x14);
                memcpy(var_s6 + 0x4C, &sp80, 0x14);
                temp_s5 = gBtlSys + (temp_s2 * 0x190) + 0x760;
                temp_s6 = gBtlSys + (*(s8 *)((u8 *)temp_v1 + 0xCA0) * 0x190) + 0x760;
                memcpy(&sp80, temp_s5 + 0x4C, 0x14, gBtlSys);
                memcpy(temp_s5 + 0x4C, temp_s6 + 0x4C, 0x14);
                memcpy(temp_s6 + 0x4C, &sp80, 0x14);
                *(s8 *)((u8 *)(var_s3 + temp_s1) + 0xCA0) = (s8) *(s8 *)((u8 *)temp_v1 + 0xCA0);
                *(s8 *)((u8 *)temp_v1 + 0xCA0) = temp_s2;
                *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) ^ 8);
            }
        }
        if (*(s32 *)((u8 *)temp_s4 + 0xDF8) != 0) {
            func_0021B1E0();
        }
        func_00228430(0);
        func_002284D0(0);
        func_0021B420();
        func_0023FC80();
        func_00228410();
        memcpy(temp_s4 + 0x650, temp_s4, 0x650, 0);
    }
}
