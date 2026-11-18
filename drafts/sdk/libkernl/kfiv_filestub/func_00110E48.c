/* Draft (not built): func_00110E48 at 0x00110E48, size 0xC8, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00110E48.c:34: invalid operands to binary -
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00110E48.s */

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceCallCode(s32, s32);                     /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
void *new_iob();                                    /* extern */
extern s32 D_003EC6BC;
extern s32 D_003EC6C8;
extern s32 D_00474940;

s32 func_00110E48(s32 arg0) {
    s32 var_s1;
    u8 *temp_v0;

    _sceFsWaitS(9);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    func_0010EFF0();
    temp_v0 = new_iob();
    if (temp_v0 == NULL) {
        return -0x13;
    }
    var_s1 = _sceCallCode(arg0, 9);
    if (var_s1 < 0) {
        WaitSema(D_003EC6C8);
        *(s32 *)((u8 *)temp_v0 + 4) = 0;
    } else {
        WaitSema(D_003EC6C8);
        *(s32 *)((u8 *)temp_v0 + 0) = var_s1;
        var_s1 = (s32) (temp_v0 - &D_00474940) >> 4;
    }
    SignalSema(D_003EC6C8);
    return var_s1;
}
