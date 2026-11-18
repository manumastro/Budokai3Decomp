/* Draft (not built): func_00185218 at 0x00185218, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00185218.s */

s32 func_0016E120(s32, s32, s32);               /* extern */
s32 func_001807F8(void *);                      /* extern */
s32 func_001851F0(s32);                             /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466B20;

s32 func_00185218(u8 *arg0) {
    s32 var_v0;

    var_v0 = func_001851F0(arg0 + 0xC);
    if (var_v0 != 0) {
        var_v0 = func_0016E120(*(s32 *)((u8 *)arg0 + 0x194), *(s32 *)((u8 *)arg0 + 0x198), 0);
        if (var_v0 == 0) {
            func_001870E8(&D_00466B20);
            func_001807F8(arg0);
            var_v0 = 0;
        }
    }
    return var_v0;
}
