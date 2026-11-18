/* Draft (not built): func_00169068 at 0x00169068, size 0x1EC, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00169068.c:32: parse error before "int"
 * Original: asm/nonmatchings/cri/htci/func_00169068.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_00165048(s8 *, s32);                       /* extern */
s32 func_001650B0(s32);                         /* extern */
s64 func_001681F0(s32);                             /* extern */
s32 func_00168B48(s8 *, s8 *);                  /* extern */
s32 memset(s8 *, s32, s32);             /* extern */
s32 scePrintf(s32 *, s8 *);                 /* extern */
extern s32 D_00413D00;
extern s32 D_00413D10;
extern s32 D_00413D14;
extern s32 D_00463BB8;
extern s32 D_00463BE0;
extern s32 D_00463C00;
extern s32 D_00463C18;

s8 *func_00169068(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s3;
    s8 *temp_s1;
    s8 *var_s6;
    u8 *var_s2;

    var_s3 = 0;
    var_s6 = NULL;
    var_fp = 0;
    memset(sp, 0, 0x100);
    temp_s4 = (arg1 >= 0xE) int 0xD : arg1;
    if (temp_s4 > 0) {
        var_s2 = arg0;
        do {
            temp_v1 = (*(s32 *)((u8 *)(&D_00413D00) + 0xC) * var_s3) + var_s3;
            var_s3 += 1;
            temp_s1 = arg0 + ((*(s32 *)((u8 *)(&D_00413D00) + 8) * 8) + temp_v1);
            func_00168B48(temp_s1, sp);
            if (*temp_s1 != 0) {
                func_00164D38(0x6600);
                temp_s0 = func_00165048(sp, 1);
                func_00164D38(0x6601);
                if (temp_s0 < 0) {
                    if (D_00413D14 != 0) {
                        var_fp += 1;
                    } else {
                        scePrintf(&D_00463BB8, sp);
                        var_fp += 1;
                    }
                } else {
                    *(s32 *)((u8 *)var_s2 + 0) = temp_s0;
                    var_s6 += 1;
                    *(s32 *)((u8 *)var_s2 + 4) = (s32) ((s64) (func_001681F0(temp_s0) << 0x20) >> 0x20);
                    if (D_00413D14 == 0) {
                        scePrintf(&D_00463BE0, temp_s1);
                    }
                    func_00164D38(0x6800);
                    func_001650B0(temp_s0);
                    func_00164D38(0x6801);
                    func_00164D38(0x6700);
                    func_00165048(sp, D_00413D10);
                    func_00164D38(0x6701);
                }
            }
            var_s2 += 8;
        } while (var_s3 < temp_s4);
    }
    if (D_00413D14 == 0) {
        scePrintf(&D_00463C00, var_s6);
    }
    if (var_fp > 0) {
        if (D_00413D14 != 2) {
            scePrintf(&D_00463C18, (s8 *)0xA);
        }
    }
    return var_s6;
}
