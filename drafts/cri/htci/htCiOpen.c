/* Draft (not built): htCiOpen at 0x001682D0, size 0x188, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001682D0.c:49: `unksp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/htci/htCiOpen.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_00165048(s32 *, s32);                  /* extern */
s32 func_00167C90(s32, s32 *);              /* extern */
void *func_00168278(s32 *);                     /* extern */
s32 func_001682B0(void *);                      /* extern */
s32 func_00168B48(s32, s32 *);              /* extern */
s32 func_001694B0(s32, void *);                 /* extern */
s64 htCiGetFileSize(s32);                           /* extern */
s32 scePrintf(s32 *, s32);                  /* extern */
extern s32 D_00413BD0;
extern s32 D_00413D10;
extern s32 D_00413D14;
extern s32 D_00463A28;
extern s32 D_00463A50;
extern s32 D_00463A78;
extern s32 D_00463AA8;
extern s32 D_00463AD0;

u8 *htCiOpen(s32 arg0, s32 arg2) {
    s64 sp0;
    s32 *var_a1;
    s32 var_a0;
    s64 temp_v0_2;
    u8 *temp_v0;
    u8 *var_v0;

    var_a0 = arg0;
    sp0 = 0;
    if (var_a0 == 0) {
        var_a1 = &D_00463A28;
        goto block_8;
    }
    if (arg2 != 0) {
        var_a0 = 0;
        var_a1 = &D_00463A50;
        goto block_8;
    }
    temp_v0 = func_00168278(&D_00463A50);
    if (temp_v0 == NULL) {
        var_a0 = 0;
        var_a1 = &D_00463A78;
block_8:
        func_00167C90(var_a0, var_a1);
        return NULL;
    }
    func_001694B0(var_a0, sp);
    if (unksp4 == 0) {
        func_00168B48(var_a0, &D_00413BD0);
        if (D_00413D14 == 0) {
            scePrintf(&D_00463AA8, var_a0);
        }
        temp_v0_2 = htCiGetFileSize(var_a0);
        var_v0 = NULL;
        *(s64 *)((u8 *)temp_v0 + 8) = temp_v0_2;
        if (temp_v0_2 != 0) {
            func_00164D38(0x4900);
            *(s32 *)((u8 *)temp_v0 + 0x18) = func_00165048(&D_00413BD0, D_00413D10);
            func_00164D38(0x4901);
            if (*(s32 *)((u8 *)temp_v0 + 0x18) >= 0) {
                *(s8 *)((u8 *)temp_v0 + 1) = 0;
                goto block_19;
            }
            func_00167C90(0, &D_00463AD0);
            func_001682B0(temp_v0);
            return NULL;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    *(s8 *)((u8 *)temp_v0 + 1) = 1;
    *(s32 *)((u8 *)temp_v0 + 0x18) = (s32) sp0;
    *(s64 *)((u8 *)temp_v0 + 8) = (s64) unksp4;
block_19:
    *(s32 *)((u8 *)temp_v0 + 0x1C) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x10) = (s32) ((s64) ((*(s64 *)((u8 *)temp_v0 + 8) + 0x7FF) << 0x15) >> 0x20);
    *(s32 *)((u8 *)temp_v0 + 0x14) = 0;
    *(s8 *)((u8 *)temp_v0 + 2) = 0;
    *(s8 *)((u8 *)temp_v0 + 0) = 1;
    var_v0 = temp_v0;
    return var_v0;
}
