/* Draft (not built): mwSfdStartSj at 0x00182C30, size 0x80, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdStartSj.s */

s32 MWSFCRE_SetSupplySj(void *);                /* extern */
s32 func_00182CB0(void *);                      /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 mw_sfd_start_ex(void *);                    /* extern */
extern s32 D_00465FC0;

void mwSfdStartSj(u8 *arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00465FC0);
        return;
    }
    func_00182CB0(arg0);
    *(s32 *)((u8 *)arg0 + 0x1D0) = arg1;
    *(s32 *)((u8 *)arg0 + 0x1E4) = 2;
    *(s32 *)((u8 *)arg0 + 0x1E8) = 0;
    *(s32 *)((u8 *)arg0 + 0x1EC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
    mw_sfd_start_ex(arg0);
    MWSFCRE_SetSupplySj(arg0);
}
