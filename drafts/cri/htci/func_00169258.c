/* Draft (not built): func_00169258 at 0x00169258, size 0x164, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00169258.c:37: for each function it appears in.)
 * Original: asm/nonmatchings/cri/htci/func_00169258.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_001650B0(s32);                             /* extern */
s32 func_00168B48(s8 *, void *);                /* extern */
s32 func_00169488();                            /* extern */
s32 scePrintf(s32 *, void *);               /* extern */
extern s32 D_00413D00;
extern s32 D_00413D14;
extern s32 D_00463C48;
extern s32 D_00463C70;
extern s32 D_00463C90;

s32 func_00169258(void) {
    s32 *temp_s3;
    s32 *var_s1;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_v0;
    s8 *temp_s0;
    u32 temp_s4;
    u32 var_s2;
    u8 *var_s7;

    var_s7 = NULL;
    temp_s3 = *(s32 **)((u8 *)(&D_00413D00) + 0);
    var_v0 = 0;
    if (temp_s3 != NULL) {
        temp_s4 = *(u32 *)((u8 *)(&D_00413D00) + 4);
        var_s2 = 0;
        if (temp_s4 != 0) {
            var_s1 = temp_s3;
            do {
                temp_v0 = (*(s32 *)((u8 *)(&D_00413D00) + 0xC) * var_s2) + var_s2;
                var_s2 += 1;
                temp_s0 = temp_s3 + ((*(s32 *)((u8 *)(&D_00413D00) + 8) * 8) + temp_v0);
                func_00168B48(temp_s0, sp);
                if (*temp_s0 != 0) {
                    func_00164D38(0x6900);
                    temp_s0_2 = func_001650B0(*var_s1);
                    func_00164D38(0x6901);
                    if (temp_s0_2 < 0) {
                        if (D_00413D14 != 2) {
                            scePrintf(&D_00463C48, sp);
                        }
                    } else {
                        var_s7 += 1;
                        if (D_00413D14 != 2) {
                            scePrintf(&D_00463C70, sp);
                        }
                    }
                }
                var_s1 += 8;
            } while (var_s2 < temp_s4);
        }
        if (D_00413D14 != 2) {
            scePrintf(&D_00463C90, var_s7);
        }
        func_00169488();
        var_v0 = 1;
    }
    return var_v0;
}
