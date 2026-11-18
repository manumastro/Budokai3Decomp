/* Draft (not built): htCiGetFileSize at 0x00167FF8, size 0x1F8, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00167FF8.c:89: too few arguments to function `func_00164D38'
 * Original: asm/nonmatchings/cri/htci/htCiGetFileSize.s */

s32 func_00164D38(s32, s32 *);          /* extern */
s32 func_00164F18(s32, s32, s32);           /* extern */
s32 func_00165048(s32 *, s32);              /* extern */
s32 func_001650B0(s32);                             /* extern */
s32 func_00167C90(s32, s32 *);              /* extern */
s32 func_00168B48(s32, s32 *);              /* extern */
s32 func_001694B0(void *);                      /* extern */
s32 scePrintf(s32 *, s32 *);            /* extern */
extern s32 D_00413BD0;
extern s32 D_00413D14;
extern s32 D_004638B8;
extern s32 D_004638E8;
extern s32 D_00463908;
extern s32 D_00463930;
extern s32 D_00463968;
extern s32 D_00463990;
extern s32 D_004639C8;
extern s32 D_004639F8;

s32 htCiGetFileSize(s32 arg0) {
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s1;

    var_a0 = arg0;
    if (var_a0 == 0) {
        var_a1 = &D_004638B8;
        goto block_23;
    }
    func_001694B0(sp);
    var_s1 = sp4;
    if (sp4 == 0) {
        func_00168B48(var_a0, &D_00413BD0);
        func_00164D38(0x4400);
        temp_s0 = func_00165048(&D_00413BD0, 1);
        func_00164D38(0x4401);
        if (temp_s0 < 0) {
            var_a1_2 = &D_00463908;
            if (D_00413D14 != 2) {
                scePrintf(&D_004638E8, &D_00413BD0);
                var_a1_2 = (s32 *)0x460000;
            }
            var_a0 = 0;
            var_a1 = var_a1_2;
            goto block_23;
        }
        if (temp_s0 == 0x10004) {
            var_a1_3 = &D_00463968;
            if (D_00413D14 != 2) {
                scePrintf(&D_00463930, &D_00463968);
                var_a1_3 = (s32 *)0x460000;
            }
            var_a0 = 0;
            var_a1 = var_a1_3;
            goto block_23;
        }
        if (temp_s0 == 0x13) {
            var_a1_4 = &D_00463968;
            if (D_00413D14 != 2) {
                scePrintf(&D_00463990, &D_00463968);
                var_a1_4 = (s32 *)0x460000;
            }
            var_a0 = 0;
            var_a1 = var_a1_4;
            goto block_23;
        }
        func_00164D38(0x4600);
        func_00164F18(temp_s0, 0, 0);
        func_00164D38(0x4601);
        func_00164D38(0x4600);
        var_s1 = func_00164F18(temp_s0, 0, 2);
        func_00164D38(0x4601);
        if (var_s1 < 0) {
            func_00167C90(0, &D_004639C8);
            func_00164D38(0x4500);
            func_001650B0(temp_s0);
            func_00164D38(0x4501);
            return 0;
        }
        func_00164D38(0x5000, &D_004639C8);
        temp_s0_2 = func_001650B0(temp_s0);
        func_00164D38(0x5001);
        if (temp_s0_2 < 0) {
            var_a0 = 0;
            var_a1 = &D_004639F8;
block_23:
            func_00167C90(var_a0, var_a1);
            return 0;
        }
        goto block_24;
    }
block_24:
    return var_s1;
}
