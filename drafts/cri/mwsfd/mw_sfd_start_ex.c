/* Draft (not built): mw_sfd_start_ex at 0x00182970, size 0xF4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mw_sfd_start_ex.s */

s32 MWSFCRE_ResetSfdHn(void *);                     /* extern */
s32 func_00181BB0(void *);                      /* extern */
s32 func_00181FA8();                            /* extern */
s32 func_00182A68(void *);                      /* extern */
s32 func_001852A8(void *);                          /* extern */
s32 func_00185308(void *);                      /* extern */
s32 func_00185328(void *);                      /* extern */
s32 func_00186888(s32);                         /* extern */
s32 func_00186A10(s32, s32);                /* extern */
s32 func_00186C58(void *);                      /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 mwPlySfdStandby(void *);                    /* extern */
s32 mwSfdPause(void *, s8);                     /* extern */
extern s32 D_00465ED0;
extern s32 D_00465F00;

void mw_sfd_start_ex(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x294;
    func_00181FA8();
    if (*(s32 *)((u8 *)arg0 + 0x40) == 0) {
        goto block_8;
    }
    if (MWSFCRE_ResetSfdHn(arg0) == 0) {
        goto block_4;
    }
    func_001870E8(&D_00465ED0);
    return;
block_4:
    func_00186C58(arg0);
    func_00185328(arg0);
    if (func_001852A8(arg0) == 0) {
        goto block_7;
    }
    func_001870E8(&D_00465F00);
    return;
block_7:
    func_00185308(arg0);
    func_00181BB0(arg0);
block_8:
    func_00182A68(arg0);
    mwPlySfdStandby(arg0);
    mwSfdPause(arg0, *(s8 *)((u8 *)arg0 + 0x76));
    func_00186A10(temp_s1, 1);
    func_00186888(temp_s1);
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    *(s8 *)((u8 *)arg0 + 0x75) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 1;
    return;
}
