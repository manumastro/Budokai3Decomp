/* Draft (not built): func_00215500 at 0x00215500, size 0x3F8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 00215500(long)' redeclared was declared as: 'void (long)' now declared as: 'void (int)' @ 4081: void func_00215500(s32);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00215500.s */

// src/unk/unk_20A4D0.c func_00215500 cerr diff=-1/0
extern void *D_0046FE44;
void func_00215500(s64 arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s16 var_v1_2;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_5;
    s8 var_v1_4;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s2;

    var_s1 = 0;
    if (*(s16 *)((u8 *)D_0046FE44 + 0x100) == 0) {
        var_s1 = 1;
    }
    var_s2 = D_00568B90;
    if (var_s2 != &D_00568C10) {
        do {
            temp_a1 = *(s32 *)((u8 *)var_s2 + 8);
            if ((temp_a1 > 0) && (*(s16 *)((u8 *)var_s2 + 0x1E) & ((s64) (arg0 << 0x30) >> 0x30))) {
                ((s32 (*)(u8 *, s32)) temp_a1)(var_s2, temp_a1);
                temp_v1 = *(u8 **)((u8 *)var_s2 + 0x10);
                if ((temp_v1 != NULL) && (*(s32 *)((u8 *)temp_v1 + 0x38) < 0)) {
                    *(s32 *)((u8 *)var_s2 + 8) = -1;
                    temp_v1_2 = *(s32 *)((u8 *)var_s2 + 0xC);
                    if (temp_v1_2 > 0) {
                        ((s32 (*)(u8 *)) temp_v1_2)(var_s2);
                    }
                    *(u8 **)((u8 *)var_s2 + 0x10) = NULL;
                }
                if (var_s1 != 0) {
                    var_v1 = 0;
                    if (gBattle != NULL) {
                        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
                    }
                    if (var_v1 == 0) {
                        var_v1_2 = 0;
                        if (gBattle != NULL) {
                            var_v1_2 = *(s16 *)((u8 *)gBattle + 0x8944);
                        }
                        if (var_v1_2 != 0) {
                            if (gBattle != NULL) {
                                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
                            } else if (D_004703F4 != 3) {
                                var_f1 = 1.0f;
                            } else {
                                var_f1 = 1.2f;
                            }
                            *(f32 *)((u8 *)var_s2 + 0x14) = (f32) (*(f32 *)((u8 *)var_s2 + 0x14) + var_f1);
                        } else {
                            if (gBattle != NULL) {
                                var_v1_3 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
                                if (var_v1_3 != 0) {
                                    var_v1_3 = 1;
                                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                                        var_v1_3 = 0;
                                    }
                                }
                            } else {
                                var_v1_3 = 0;
                            }
                            if (var_v1_3 != 0) {
                                var_v1_4 = -1;
                                if (gBattle != NULL) {
                                    var_v1_4 = -1;
                                    if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                                        if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                                            var_v1_4 = -1;
                                        } else {
                                            var_v1_4 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                                        }
                                    }
                                }
                                if (*(s16 *)((u8 *)var_s2 + 0x1C) == var_v1_4) {
                                    var_v1_5 = 1;
                                } else {
                                    goto block_48;
                                }
                            } else {
block_48:
                                var_v1_5 = 0;
                            }
                            if (var_v1_5 == 0) {
                                if (gBattle != NULL) {
                                    var_f1_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
                                } else if (D_004703F4 != 3) {
                                    var_f1_2 = 1.0f;
                                } else {
                                    var_f1_2 = 1.2f;
                                }
                                *(f32 *)((u8 *)var_s2 + 0x14) = (f32) (*(f32 *)((u8 *)var_s2 + 0x14) + var_f1_2);
                            }
                        }
                        temp_f1 = *(f32 *)((u8 *)var_s2 + 0x18);
                        if (!(temp_f1 <= 0.0f) && !(*(f32 *)((u8 *)var_s2 + 0x14) <= temp_f1)) {
                            *(s32 *)((u8 *)var_s2 + 8) = -1;
                            temp_v1_3 = *(s32 *)((u8 *)var_s2 + 0xC);
                            if (temp_v1_3 > 0) {
                                ((s32 (*)(u8 *)) temp_v1_3)(var_s2);
                            }
                        }
                    }
                } else {
                    if (gBattle != NULL) {
                        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
                    } else if (D_004703F4 != 3) {
                        var_f2 = 1.0f;
                    } else {
                        var_f2 = 1.2f;
                    }
                    *(f32 *)((u8 *)var_s2 + 0x14) = (f32) (*(f32 *)((u8 *)var_s2 + 0x14) + var_f2);
                    temp_f1_2 = *(f32 *)((u8 *)var_s2 + 0x18);
                    if (!(temp_f1_2 <= 0.0f) && !(*(f32 *)((u8 *)var_s2 + 0x14) <= temp_f1_2)) {
                        *(s32 *)((u8 *)var_s2 + 8) = -1;
                        temp_v1_4 = *(s32 *)((u8 *)var_s2 + 0xC);
                        if (temp_v1_4 > 0) {
                            ((s32 (*)(u8 *)) temp_v1_4)(var_s2);
                        }
                    }
                }
            }
            var_s2 = *(u8 **)((u8 *)var_s2 + 0);
        } while (var_s2 != &D_00568C10);
    }
    var_s0 = D_00568B90;
    if (var_s0 != &D_00568C10) {
        do {
            if (*(s32 *)((u8 *)var_s0 + 8) == -1) {
                func_0020CB90(var_s0);
            }
            var_s0 = *(u8 **)((u8 *)var_s0 + 0);
        } while (var_s0 != &D_00568C10);
    }
}
