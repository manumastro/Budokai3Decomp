/* Draft (not built): mwPlyStartSeamless at 0x00185EF8, size 0x8C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyStartSeamless.s */

s32 MWSFCRE_SetSupplySj(void *);                /* extern */
s32 func_00169BD8(s32);                         /* extern */
s32 func_00182F70(void *);                      /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32);          /* extern */
s32 mwPlyLinkStm(void *, s32);              /* extern */
s32 mwSfdStartSj(void *, s32);                  /* extern */
extern s32 D_00466DC8;

void mwPlyStartSeamless(u8 *arg0) {
    u8 **temp_v0;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00466DC8, 1);
        return;
    }
    mwPlyLinkStm(arg0, 1);
    mwSfdStartSj(arg0, *(s32 *)((u8 *)arg0 + 0x1D4));
    func_00182F70(arg0);
    func_00169BD8(*(s32 *)((u8 *)arg0 + 0x4C));
    temp_v0 = *(u8 ***)((u8 *)arg0 + 0x1D0);
    if (temp_v0 != NULL) {
        (*(s32 (**)(u8 **))((u8 *)(*temp_v0) + 0x14))(temp_v0);
    }
    MWSFCRE_SetSupplySj(arg0);
}
