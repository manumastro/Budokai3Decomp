/* Draft (not built): func_002BF000 at 0x002BF000, size 0x30C, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 138 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x294, original 0x30C
 * Original: asm/nonmatchings/story/str_status/func_002BF000.s */

// src/story/str_status.c func_002BF000 size diff=138/165
extern s32 D_005AA730;
extern s32 D_005AA740;
extern void func_002BEF00(void);
void func_002BF000(u8 *arg0) {
    u8 sp[0x400];
    s32 sp90;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spC0;
    s32 *var_s4;
    Task *temp_v0;
    TaskData *var_s6;
    s32 *var_s3;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a3;
    u8 *var_s7;

    var_s7 = arg0;
    var_s5 = 0;
    var_s4 = &D_005AA740;
    var_s4 = &D_005AA740;
    var_s3 = *(s32 **)((u8 *)(&D_005AA740) + 0x20);
    var_s0 = 0;
    memset(&spC0, 0, 0x20);
    var_s2 = 0;
loop_12:
    if (var_s2 < D_005AA730) {
        var_s2 = 0;
loop_9:
        if (var_s2 >= 8) {

        } else {
            temp_a3 = (var_s2 * 4) + sp;
            if ((*(s32 *)((u8 *)temp_a3 + 0xC0) == 0) && (*(s32 *)((u8 *)(&D_0047011C[var_s2]) + 0x180) == *var_s3)) {
                *(s32 *)((u8 *)temp_a3 + 0xC0) = 1;
                var_s0 += 1;
            } else {
                var_s2 += 1;
                goto loop_9;
            }
        }
        var_s4 += 0x30;
        var_s3 = *(s32 **)((u8 *)var_s4 + 0x20);
        var_s2 += 1;
        goto loop_12;
    }
    var_s4 = &D_005AA740;
    if (var_s0 != D_005AA730) {
        var_s0 = D_005AA730 - var_s0;
        var_s4 = &D_005AA740;
        var_s3 = *(s32 **)((u8 *)(&D_005AA740) + 0x20);
        var_s2 = 0;
loop_41:
        if (var_s2 >= D_005AA730) {

        } else {
            var_v1 = 1;
            var_s1 = 0;
loop_21:
            if (var_s1 < 8) {
                temp_a0 = *(s32 *)((u8 *)var_s3 + 0);
                if ((*(s32 *)((u8 *)(&D_0047011C[var_s1]) + 0x180) == temp_a0) && (temp_a0 != -1)) {
                    var_v1 = 0;
                }
                var_s1 += 1;
                goto loop_21;
            }
            var_s1 = 0;
loop_38:
            if (var_s1 >= 8) {
                goto block_40;
            }
            if (var_v1 != 0) {
                if ((*(s32 *)((u8 *)((var_s1 * 4) + sp) + 0xC0) == 0) && (*(s32 *)((u8 *)(&D_0047011C[var_s1]) + 0x160) == 0)) {
                    if (*(Task **)((u8 *)D_0047011C + 0x1AC) == NULL) {
                        *(Task **)((u8 *)D_0047011C + 0x1AC) = amTask_Create(func_002BEF00, NULL, 0x9002, 0x400, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
                        temp_v0 = *(Task **)((u8 *)D_0047011C + 0x1AC);
                        var_s6 = &temp_v0->data;
                        memset(var_s6, 0, 4);
                        temp_v0->data.work = var_s7;
                    }
                    var_v1_2 = 0;
                    if (!(*(s32 *)((u8 *)var_s3 + 4) & 3)) {

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
                        *(s32 *)((u8 *)D_0047011C + 0x1A8) = var_s1;
                        if ((1 >= 0) && (1 < 6)) {
                            D_0046EE30[1](&sp90);
                        }
                    }
                    var_s5 += 1;
                    *(s32 *)((u8 *)(&D_0047011C[var_s1]) + 0x180) = (s32) *(s32 *)((u8 *)var_s3 + 0);
                    *(s32 *)((u8 *)((var_s1 * 4) + sp) + 0xC0) = 1;
                    if (var_s5 == var_s0) {
                        return;
                    }
                    goto block_40;
                }
                var_s1 += 1;
                goto loop_38;
            }
block_40:
            var_s4 += 0x30;
            var_s3 = *(s32 **)((u8 *)var_s4 + 0x20);
            var_s2 += 1;
            goto loop_41;
        }
    }
}
