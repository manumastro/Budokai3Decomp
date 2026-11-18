/* Draft (not built): dvCiLoadDirInfo at 0x00167778, size 0x1AC, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dvci/dvCiLoadDirInfo.s */

s32 func_00166150(s32, s32 *);          /* extern */
s32 func_00166F70(s32 *, s32 *, s32, u32); /* extern */
s32 func_00167108(s32, s32 *);                  /* extern */
s32 func_00167290(s32 *, s32);                  /* extern */
s32 func_00167530();                            /* extern */
s32 memset(s32 *, s32, u32);            /* extern */
s32 scePrintf(s32 *, s32);                  /* extern */
extern s32 D_00413740;
extern s32 D_00413758;
extern s32 D_00463790;
extern s32 D_004637C0;
extern s32 D_004637F0;
extern s32 D_00463818;
extern s32 D_0047F040;

s32 dvCiLoadDirInfo(s32 arg0, s32 *arg1, u32 arg2, s32 arg3) {
    s32 var_v0;
    u32 temp_lo;

    memset(&D_0047F040, 0, 0x1000U);
    if (D_00413740 == 0) {
        goto block_2;
    }
    func_00167530();
block_2:
    if (arg0 == 0) {
        goto block_5;
    }
    if (arg1 == NULL) {
        goto block_5;
    }
    if (arg2 != 0) {
        goto block_6;
    }
block_5:
    func_00167530();
block_6:
    var_v0 = 0;
    if (arg0 == 0) {
        goto block_26;
    }
    if (arg1 != NULL) {
        goto block_13;
    }
    if (D_00413758 == 0) {
        goto block_10;
    }
    return 0;
block_10:
    scePrintf(&D_00463790, 0);
    return 0;
block_13:
    if (arg2 != 0) {
        goto block_18;
    }
    if (D_00413758 == 0) {
        goto block_16;
    }
    return 0;
block_16:
    scePrintf(&D_004637C0, 0);
    return 0;
block_18:
    memset(arg1, 0, arg2);
    if (func_00167108(arg0, &D_0047F040) == 0) {
        goto block_20;
    }
    goto block_25;
block_20:
    if (D_00413758 != 0) {
        goto block_23;
    }
    scePrintf(&D_004637F0, arg0);
block_23:
    func_00166150(0, &D_00463818);
    return 0;
block_25:
    temp_lo = arg2 / (u32) (arg3 + 9);
    var_v0 = (temp_lo * 8) + (func_00167290(arg1, func_00166F70(arg1, &D_0047F040, 0x1000, temp_lo)) * (arg3 + 1));
block_26:
    return var_v0;
}
