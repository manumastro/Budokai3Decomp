/* Draft (not built): func_00167688 at 0x00167688, size 0xEC, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00167688.c:28: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/dvci/func_00167688.s */

s32 func_00127940(s32 *, s32);                  /* extern */
s32 func_00167468(void *, s32, s32, s32);       /* extern */
s32 func_00167558(s32, s32);                    /* extern */
s32 func_00167598(s32, void *, s32 *);          /* extern */
s32 scePrintf(s32 *, s32);              /* extern */
extern s32 D_00413740;
extern s32 D_00413758;
extern s32 D_00463760;
extern s32 D_00463768;

s32 func_00167688(s32 arg0, u8 *arg1) {
    s32 sp4;

    if (func_00127940(&D_00463760, arg0) == 0) {
        *(s32 *)((u8 *)arg1 + 0) = 0;
        *(s32 *)((u8 *)arg1 + 4) = -1;
        if (D_00413758 == 2) {
            return 1;
        }
        scePrintf(&D_00463768, 0x2E);
        return 1;
    }
    if (func_00167558(arg0, 2) == 1) {
        func_00167598(arg0, sp, &sp4);
        *(s32 *)((u8 *)arg1 + 4) = (s32) (sp4 << 0xB);
        *(s32 *)((u8 *)arg1 + 0) = sp0;
        return 0;
    }
    *(s32 *)((u8 *)arg1 + 0) = 0;
    *(s32 *)((u8 *)arg1 + 4) = 0;
    if (*(s32 *)((u8 *)(&D_00413740) + 0) != 0) {
        func_00167468(arg1, arg0, *(s32 *)((u8 *)(&D_00413740) + 0), *(s32 *)((u8 *)(&D_00413740) + 4));
    }
    return 0;
}
