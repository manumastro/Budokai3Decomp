/* Draft (not built): MWSFCRE_ResetSfdHn at 0x001801D8, size 0x90, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/MWSFCRE_ResetSfdHn.s */

s32 func_0017FED0(void *);                      /* extern */
s32 func_00182420(s32);                     /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_0018D700(s32, s32 *, void *);          /* extern */
s32 func_00197DE8(s32);                             /* extern */
extern s32 D_004656F8;
extern s32 D_00465730;
extern s32 func_00182538;

s32 MWSFCRE_ResetSfdHn(u8 *arg0) {
    s32 *var_a0;
    s32 temp_s0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x40);
    if (func_00197DE8(temp_s0) != 0) {
        var_a0 = &D_004656F8;
        goto block_4;
    }
    if (func_0018D700(temp_s0, &func_00182538, arg0) != 0) {
        func_00182420(-0x12F);
        var_a0 = &D_00465730;
block_4:
        func_001870E8(var_a0);
        return -1;
    }
    func_0017FED0(arg0);
    return 0;
}
