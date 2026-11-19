/* Draft (not built): func_001C4000 at 0x001C4000, size 0x244, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 75 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2C0, original 0x244
 * Original: asm/nonmatchings/battle/btl_main/func_001C4000.s */

// src/battle/btl_main.c func_001C4000 size diff=75/176
void func_001C4000(u8 *arg0) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    s32 temp_a0;
    s32 temp_s0_2;
    u8 temp_a1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;
    u8 *var_s1;
    u8 *var_s3;

    temp_s1 = (unsigned char *)(gBattle);
    temp_s0 = arg0 + 0x920;
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x88F8);
    var_s1 = func_001EA230();
    switch (temp_a0) {                              /* irregular */
    case 5:
        /* fallthrough */
    case 4:
        var_s3 = *(u8 **)((u8 *)temp_s0 + 0x1A0);
        *(s8 *)((u8 *)arg0 + 0x200E) = -1;
        if ((*(s8 *)((u8 *)temp_s0 + 0x1AC) == 0) || (var_s3 == NULL) || (var_s1 == NULL)) {
            return;
        }
        temp_s0_2 = func_001DFA90((Fighter *)(arg0), (s32)(*(s16 *)((u8 *)arg0 + 0x1A58)));
        if (var_s3 != NULL) {
            do {
                temp_v1 = *(u8 **)((u8 *)var_s3 + 0x20);
                temp_s2 = temp_v1 + 4;
                if (!(*(u16 *)((u8 *)temp_v1 + 8) & 8)) {
                    var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
                } else {
                    *(s8 *)((u8 *)arg0 + 0x200E) = (s8) *(u16 *)((u8 *)temp_s2 + 6);
                    *(s8 *)((u8 *)arg0 + 0x2003) = 1;
                    func_001ABCC0((struct Fighter *)(*(s32 *)((u8 *)arg0 + 0x1354) + 0x1360));
                    temp_a1 = *(u8 *)((u8 *)temp_s2 + 8);
                    if (temp_a1 != 0) {
                        if ((s32) temp_a1 >= 0) {
                            var_f0 = (f32) temp_a1;
                        } else {
                            var_f0 = 2.0f * (f32) ((temp_a1 >> 1) | (temp_a1 & 1));
                        }
                        var_f20 = 0.1f * var_f0;
                    } else {
                        var_f20 = 2.0f;
                    }
loop_31:
                    if (var_s1 != NULL) {
                        if ((*(s32 *)((u8 *)var_s1 + 0x24) == 2) && (temp_s0_2 < 2)) {
                            var_s1 = *(u8 **)((u8 *)var_s1 + 0x3C);
                        } else if (*(s32 *)((u8 *)var_s1 + 0x38) & 6) {
                            var_s1 = *(u8 **)((u8 *)var_s1 + 0x3C);
                        } else if (*(s8 *)((u8 *)var_s1 + 0x35) == *(s32 *)((u8 *)arg0 + 0x1350)) {
                            var_s1 = *(u8 **)((u8 *)var_s1 + 0x3C);
                        } else {
                            temp_f1 = var_f20 + *(f32 *)((u8 *)var_s1 + 0x20);
                            if (func_00146E60(var_s3, var_s1) <= (temp_f1 * temp_f1)) {
                                if (*(s32 *)((u8 *)var_s1 + 0x24) == 1) {
                                    var_f0_2 = 250.0f;
                                } else {
                                    var_f0_2 = 1000.0f;
                                }
                                func_001DFE60((Fighter *)(arg0), 4, -var_f0_2);
                                (*(s32 (**)(s32, s32, s32))((u8 *)var_s1 + 0x28))(*(s32 *)((u8 *)var_s1 + 0x2C), 6, 0);
                                *(s32 *)((u8 *)var_s1 + 0x38) = (s32) (*(s32 *)((u8 *)var_s1 + 0x38) | 2);
                            }
                            var_s1 = *(u8 **)((u8 *)var_s1 + 0x3C);
                        }
                        goto loop_31;
                    }
                    var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
                }
            } while (var_s3 != NULL);
        }
        return;
    }
}
