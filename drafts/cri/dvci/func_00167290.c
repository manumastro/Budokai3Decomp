/* Draft (not built): func_00167290 at 0x00167290, size 0x1D4, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00167290.c:42: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/dvci/func_00167290.s */

s32 func_00118C08(s32);                         /* extern */
s32 func_00164D38(s32);                     /* extern */
s32 func_00166180(void *, s32 *);               /* extern */
s32 func_00166DA0(s8 *, s32 *);             /* extern */
s32 scePrintf(s32 *, s8 *);                 /* extern */
extern s32 D_00413740;
extern s32 D_00413758;
extern s32 D_00413868;
extern s32 D_004636A8;
extern s32 D_004636C0;
extern s32 D_004636D8;
extern s32 D_004636F0;

s8 *func_00167290(u8 *arg0, s32 arg1) {
    s32 sp30;
    s32 var_s4;
    s8 *temp_s1;
    s8 *var_fp;
    u8 *var_s2;

    var_s4 = 0;
    var_fp = NULL;
    sp30 = 0;
    if (arg1 > 0) {
        var_s2 = arg0;
        do {
            temp_s1 = arg0 + ((*(s32 *)((u8 *)(&D_00413740) + 8) * 8) + ((*(s32 *)((u8 *)(&D_00413740) + 0xC) * var_s4) + var_s4));
            if (*temp_s1 != 0) {
                func_00166DA0(temp_s1, &D_00413868);
                func_00164D38(0x9400);
                do {

                } while (func_00118C08(1) == 1);
                func_00164D38(0x9401);
                func_00164D38(0x9500);
                if (func_00166180(sp, &D_00413868) == 1) {
                    var_fp += 1;
                    func_00164D38(0x9501);
                    *(s32 *)((u8 *)var_s2 + 0) = sp0;
                    *(s32 *)((u8 *)var_s2 + 4) = sp4;
                    if (D_00413758 == 0) {
                        scePrintf(&D_004636A8, temp_s1);
                    }
                } else {
                    func_00164D38(0x9502);
                    if (D_00413758 == 0) {
                        scePrintf(&D_004636C0, temp_s1);
                    }
                    sp30 += 1;
                }
            }
            var_s4 += 1;
            var_s2 += 8;
        } while (var_s4 < arg1);
    }
    if (D_00413758 == 0) {
        scePrintf(&D_004636D8, var_fp);
    }
    if (sp30 > 0) {
        if (D_00413758 != 2) {
            scePrintf(&D_004636F0, (s8 *)0xA);
        }
    }
    return var_fp;
}
