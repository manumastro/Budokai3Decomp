/* Draft (not built): func_00182538 at 0x00182538, size 0x1E8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00182538.s */

s32 func_00127CD8(s32 *, s32, s32);     /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00195A90(s32);                             /* extern */
s32 mwPlyGetSfdHn();                                /* extern */
s32 sprintf(s32 *, s32 *, u32);         /* extern */
extern s32 D_00426894;
extern s32 D_00426898;
extern s32 D_00465D88;
extern s32 D_00465DA0;
extern s32 D_00465DB8;
extern s32 D_00465DF0;
extern s32 D_00465E50;
extern s32 D_00484DC0;
extern s32 D_00484E00;
extern s32 D_00484E08;

void func_00182538(s32 arg0, u32 arg1) {
    s32 *var_a1;
    s32 *var_a1_2;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    if (arg0 == 0) {
        goto block_3;
    }
    var_s2 = mwPlyGetSfdHn();
    D_00426894 = arg0;
    D_00426898 = var_s2;
    goto block_4;
block_3:
    D_00426894 = 0;
    var_s2 = 0;
    D_00426898 = 0;
block_4:
    if (arg1 == 0) {
        goto block_7;
    }
    *(&D_00484DC0 + (D_00484E00 * 4)) = arg1;
    if (D_00484E00 >= 0xF) {
        goto block_7;
    }
    D_00484E00 += 1;
block_7:
    if (arg1 == 0xFF000F1C) {
        goto block_23;
    }
    if (arg1 > 0xFF000F1CU) {
        goto block_13;
    }
    if (arg1 > 0xFF000F18U) {
        goto block_25;
    }
    if (arg1 < 0xFF000F17U) {
        goto block_25;
    }
    var_a1 = &D_00465DB8;
    goto block_18;
block_13:
    if (arg1 == 0xFF000F40) {
        goto block_19;
    }
    if (arg1 < 0xFF000F40U) {
        goto block_25;
    }
    if (arg1 >= 0xFFFFFFFFU) {
        goto block_26;
    }
    var_a1_2 = &D_00465E50;
    if (arg1 < 0xFFFFFFFDU) {
        goto block_27;
    }
    var_a1 = &D_00465D88;
block_18:
    sprintf(&D_00484E08, var_a1, arg1);
    goto block_28;
block_19:
    sprintf(&D_00484E08, &D_00465DA0, 0xFF000F40U);
    if (var_s2 == 0) {
        goto block_21;
    }
    var_s3 = func_00195A90(var_s2);
block_21:
    if (var_s3 == 0) {
        goto block_28;
    }
    func_00127CD8(&D_00484E08, var_s3, 0x69);
    goto block_28;
block_23:
    sprintf(&D_00484E08, &D_00465DF0, 0xFF000F1CU);
    goto block_28;
block_25:
block_26:
    var_a1_2 = &D_00465E50;
block_27:
    sprintf(&D_00484E08, var_a1_2, arg1);
block_28:
    func_001870E8(&D_00484E08);
    return;
}
