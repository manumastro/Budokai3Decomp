/* Draft (not built): func_00208F70 at 0x00208F70, size 0x308, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); _s0 + 0x10), var_s3_2, var_s5); @ 865: F) * 4))(*(s32 *)((u8 *)temp_s0 + 0x10), var_s3, *(s32 *)((u8 *)temp_s0 + 0x20));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00208F70.s */

// src/unk/unk_1FB760.c func_00208F70 cerr diff=-1/0
extern s32 D_0044B8D0;
void func_00208F70(u8 *arg0) {
    s32 *var_s5;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s3_2;

    if ((D_0051D9A0 != 0) && (*(s32 *)((u8 *)arg0 + 0x38) > 0)) {
        var_s1 = *(u8 **)((u8 *)arg0 + 0x30);
        if (var_s1 != NULL) {
            do {
                temp_s0 = *(u8 **)((u8 *)var_s1 + 8);
                temp_s6 = *(u8 **)((u8 *)temp_s0 + 0x14);
                temp_a2 = *(s32 *)((u8 *)temp_s6 + 4);
                if ((*(s32 *)((u8 *)temp_s0 + 8) & 0x4000) && (*(s32 *)((u8 *)temp_s0 + 0x4C) == 0)) {
                    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x1C);
                    if (temp_a0 != NULL) {
                        *(s32 *)((u8 *)temp_a0 + 8) = (s32) (*(s32 *)((u8 *)temp_a0 + 8) | 0x4000);
                    }
                    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) | 0x8000);
                } else {
                    temp_a0_2 = temp_a2 & 0xFFFF0000;
                    switch (temp_a0_2) {            /* irregular */
                    case 0x10000:
                        temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x20);
                        if ((temp_a1 != 0) && (temp_a1 != 0)) {
                            if ((*(s32 (**)(u8 *, s32, s32))((u8 *)(((u8 *)&D_0044B7F0) + ((temp_a2 & 0xFFFF) * 0x10)) + 4))(temp_s0, temp_a1, temp_a2) != 0) {
                                temp_a0_3 = temp_s0 + 0x30;
                                *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) | 0x8000);
                                var_a1 = *(u8 **)((u8 *)temp_s0 + 0x28);
                                if (var_a1 != temp_a0_3) {
                                    do {
                                        *(s32 *)((u8 *)var_a1 + 8) = (s32) (*(s32 *)((u8 *)var_a1 + 8) | 0x4000);
                                        var_a1 = *(u8 **)((u8 *)var_a1 + 0);
                                    } while (var_a1 != temp_a0_3);
                                }
                                temp_a1_2 = *(u8 **)((u8 *)temp_s0 + 0x18);
                                if (temp_a1_2 != NULL) {
                                    **(u8 ***)((u8 *)temp_s0 + 4) = *(u8 **)((u8 *)temp_s0 + 0);
                                    *(u8 ***)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 4) = (u8 **) *(u8 ***)((u8 *)temp_s0 + 4);
                                    *(s32 *)((u8 *)temp_a1_2 + 0x4C) = (s32) (*(s32 *)((u8 *)temp_a1_2 + 0x4C) - 1);
                                }
                            } else {
                                var_s3 = *(u8 **)((u8 *)temp_s6 + 0x24);
                                if (var_s3 != NULL) {
                                    do {
                                        temp_a1_3 = *(s32 *)((u8 *)var_s3 + 4);
                                        if ((temp_a1_3 & 0xFFFF0000) == 0x30000) {
                                            *(&D_0044B8D0 + ((temp_a1_3 & 0xFFFF) * 4))(*(s32 *)((u8 *)temp_s0 + 0x10), var_s3, *(s32 *)((u8 *)temp_s0 + 0x20));
                                        }
                                        var_s3 = *(u8 **)((u8 *)var_s3 + 0x28);
                                    } while (var_s3 != NULL);
                                }
                            }
                        }
                        break;
                    case 0x20000:
                        (*(s32 (**)(u8 *))((u8 *)(((u8 *)&D_0044B860) + ((temp_a2 & 0xFFFF) * 0x10)) + 4))(temp_s0);
                        var_s5 = *(s32 **)((u8 *)temp_s0 + 0x3C);
                        temp_s4 = temp_s0 + 0x44;
                        if ((s32)(var_s5) != (s32)(temp_s4)) {
                            do {
                                var_s3_2 = *(u8 **)((u8 *)temp_s6 + 0x24);
                                if (var_s3_2 != NULL) {
                                    do {
                                        temp_a1_4 = *(s32 *)((u8 *)var_s3_2 + 4);
                                        if ((temp_a1_4 & 0xFFFF0000) == 0x30000) {
                                            *(&D_0044B8D0 + ((temp_a1_4 & 0xFFFF) * 4))(*(s32 *)((u8 *)temp_s0 + 0x10), var_s3_2, var_s5);
                                        }
                                        var_s3_2 = *(u8 **)((u8 *)var_s3_2 + 0x28);
                                    } while (var_s3_2 != NULL);
                                }
                                var_s5 = (int *)(*var_s5);
                            } while ((s32)(var_s5) != (s32)(temp_s4));
                        }
                        break;
                    }
                }
                var_s1 = *(u8 **)((u8 *)var_s1 + 0);
            } while (var_s1 != NULL);
        }
        var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
        if (var_s0 != NULL) {
            do {
                temp_a0_4 = *(u8 **)((u8 *)var_s0 + 8);
                if (*(s32 *)((u8 *)temp_a0_4 + 8) & 0x8000) {
                    func_00208430(temp_a0_4);
                    func_00208320(arg0, var_s0);
                }
                var_s0 = *(u8 **)((u8 *)var_s0 + 0);
            } while (var_s0 != NULL);
        }
        if (*(s32 *)((u8 *)arg0 + 0x38) == 0) {
            *(s32 *)((u8 *)arg0 + 0x38) = -1;
        }
    }
}
