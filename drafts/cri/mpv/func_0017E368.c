/* Draft (not built): func_0017E368 at 0x0017E368, size 0xD8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017E368.s */

s32 func_0017C1B8();                            /* extern */
s32 func_0017C838();                            /* extern */
s32 func_0017E440();                                /* extern */
s32 func_0017E4B8(s32);                         /* extern */
s32 func_0017E4E0(s32);                             /* extern */
s32 func_0017E500(s32);                         /* extern */
s32 func_0017E5D8();                            /* extern */
s32 func_0017E658(s32);                         /* extern */
s32 func_0017E660(s32, s32);                    /* extern */
s32 func_0017EBD0();                            /* extern */
extern s32 D_00465390;
extern s32 *D_004814E8;
extern s32 D_00481540;

s32 func_0017E368(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    D_004814E8 = &D_00465390;
    var_v0 = func_0017E440();
    if (var_v0 == 0) {
        goto block_5;
    }
    if (var_v0 == 0xFF03FF05) {
        goto block_6;
    }
loop_3:
    goto loop_3;
block_5:
    func_0017E4B8(var_v0);
    func_0017E660(arg0, func_0017E4E0(arg1));
    temp_s0 = D_00481540;
    func_0017C1B8();
    func_0017C838();
    func_0017E500(temp_s0 + 0x17E0);
    func_0017E5D8();
    func_0017E658(temp_s0);
    func_0017EBD0();
    var_v0 = 0;
block_6:
    return var_v0;
}
