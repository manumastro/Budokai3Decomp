/* Draft (not built): func_002BF000 at 0x002BF000, size 0x30C, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )(temp_a2 + sp) + 0xC0) == 0) && (*(s32 *)((u8 *)(temp_a2 + D_0047011C) + 0x160) == 0)) { @ 553: temp_a3 = temp_a0 + sp;
 * Original: asm/nonmatchings/story/str_status/func_002BF000.s */

// src/story/str_status.c func_002BF000 cerr diff=-1/0
extern s32 D_005AA730;
extern s32 D_005AA740;
extern void func_002BEF00(void);
void func_002BF000(s32 arg0) {
    s32 sp90;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spC0;
    s32 *var_s4;
    s32 *var_s4_2;
    s32 *var_s3;
    s32 *var_s3_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s5;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a3;
    u8 *temp_v0;

    var_s5 = 0;
    var_s4 = &D_005AA740;
    var_s3 = *(s32 **)((u8 *)(&D_005AA740) + 0x20);
    var_s0 = 0;
    memset(&spC0, 0, 0x20);
    var_s2 = 0;
loop_12:
    if (var_s2 < D_005AA730) {
        var_s2_2 = 0;
loop_9:
        if (var_s2_2 >= 8) {

        } else {
            temp_a0 = var_s2_2 * 4;
            temp_a3 = temp_a0 + sp;
            if ((*(s32 *)((u8 *)temp_a3 + 0xC0) == 0) && (*(s32 *)((u8 *)(temp_a0 + D_0047011C) + 0x180) == *var_s3)) {
                *(s32 *)((u8 *)temp_a3 + 0xC0) = 1;
                var_s0 += 1;
            } else {
                var_s2_2 += 1;
                goto loop_9;
            }
        }
        var_s4 += 0x30;
        var_s3 = *(s32 **)((u8 *)var_s4 + 0x20);
        var_s2 = var_s2_2 + 1;
        goto loop_12;
    }
    if (var_s0 != D_005AA730) {
        temp_s0 = D_005AA730 - var_s0;
        var_s4_2 = &D_005AA740;
        var_s3_2 = *(s32 **)((u8 *)(&D_005AA740) + 0x20);
        var_s2_3 = 0;
loop_41:
        if (var_s2_3 >= D_005AA730) {

        } else {
            var_v1 = 1;
            var_s1 = 0;
loop_21:
            if (var_s1 < 8) {
                temp_a0_2 = *(s32 *)((u8 *)var_s3_2 + 0);
                if ((*(s32 *)((u8 *)((var_s1 * 4) + D_0047011C) + 0x180) == temp_a0_2) && (temp_a0_2 != -1)) {
                    var_v1 = 0;
                }
                var_s1 += 1;
                goto loop_21;
            }
            var_s1_2 = 0;
loop_38:
            if (var_s1_2 >= 8) {
                goto block_40;
            }
            temp_a2 = var_s1_2 * 4;
            if (var_v1 != 0) {
                if ((*(s32 *)((u8 *)(temp_a2 + sp) + 0xC0) == 0) && (*(s32 *)((u8 *)(temp_a2 + D_0047011C) + 0x160) == 0)) {
                    if (*(u8 **)((u8 *)D_0047011C + 0x1AC) == NULL) {
                        *(u8 **)((u8 *)D_0047011C + 0x1AC) = amTask_Create(&func_002BEF00, 0, 0x9002, 0x400);
                        temp_v0 = *(u8 **)((u8 *)D_0047011C + 0x1AC);
                        memset(temp_v0 + 0x30, 0, 4);
                        *(s32 *)((u8 *)temp_v0 + 0x30) = arg0;
                    }
                    var_v1_2 = 0;
                    if (!(*(s32 *)((u8 *)var_s3_2 + 4) & 3)) {

                    } else {
                        var_v1_2 = 1;
                    }
                    if (var_v1_2 != 0) {
                        memset(&sp90, 0, 0x30);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                        spA0 = 1;
                        spA4 = 1;
                        spA8 = 2;
                        *(s32 *)((u8 *)D_0047011C + 0x1A8) = var_s1_2;
                        if ((1 >= 0) && (1 < 6)) {
                            *(&D_0046EE30 + (1 * 4))(&sp90, 2, 1);
                        }
                    }
                    temp_a1 = var_s1_2 * 4;
                    var_s5 += 1;
                    *(s32 *)((u8 *)(temp_a1 + D_0047011C) + 0x180) = (s32) *(s32 *)((u8 *)var_s3_2 + 0);
                    *(s32 *)((u8 *)(temp_a1 + sp) + 0xC0) = 1;
                    if (var_s5 == temp_s0) {
                        return;
                    }
                    goto block_40;
                }
                var_s1_2 += 1;
                goto loop_38;
            }
block_40:
            var_s4_2 += 0x30;
            var_s3_2 = *(s32 **)((u8 *)var_s4_2 + 0x20);
            var_s2_3 += 1;
            goto loop_41;
        }
    }
}
