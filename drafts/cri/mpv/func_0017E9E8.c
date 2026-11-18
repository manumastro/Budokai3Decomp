/* Draft (not built): func_0017E9E8 at 0x0017E9E8, size 0xC4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017E9E8.s */

s32 func_0017C2E0(s32, s32);                /* extern */
s32 func_0017EAB0(s32, s32 *);              /* extern */
s32 func_0017EB90(s32);                             /* extern */
s32 func_0017EC48(s32, s32, s32 *);         /* extern */
extern s32 D_004814F0;
extern s32 func_0017E9E0;

s32 func_0017E9E8(s32 arg0, s32 arg1, s32 *arg2) {
    s32 *var_s0;
    s32 *var_v1;

    var_s0 = arg2;
    if (arg1 != 8) {
        goto block_3;
    }
    if (var_s0 != NULL) {
        goto block_3;
    }
    var_s0 = &func_0017E9E0;
block_3:
    if (arg0 != 0) {
        goto block_6;
    }
    func_0017EAB0(arg1, var_s0);
    var_v1 = &D_004814F0;
    goto block_10;
block_6:
    if (func_0017EB90(arg0) == 0) {
        goto block_9;
    }
    return func_0017C2E0(0, 0xFF030202);
block_9:
    var_v1 = arg0 + 0x190;
block_10:
    *((arg1 * 4) + var_v1) = var_s0;
    func_0017EC48(arg0, arg1, var_s0);
    return 0;
}
