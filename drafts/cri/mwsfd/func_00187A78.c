/* Draft (not built): func_00187A78 at 0x00187A78, size 0xC4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 25 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00187A78.s */

s32 func_00181FA8(s32);                         /* extern */
s32 func_001870D0(s32);                             /* extern */
s32 func_001879B0();                            /* extern */
s32 func_001879E0();                            /* extern */
s32 func_00187A48();                            /* extern */
s32 func_00187CD8(s32);                     /* extern */
s32 func_00187DD0();                                /* extern */
s32 func_00196750();                                /* extern */
s32 mwPlyExecSvrHndl(s32);                      /* extern */
extern s32 D_00425264;

s32 func_00187A78(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = 0;
    if (D_00425264 == 1) {
        temp_v0 = func_00181FA8(1);
        var_v0 = func_001870D0(temp_v0 + 0x58);
        if (var_v0 != 0) {
            var_s0 = temp_v0 + 0x6C;
            func_001879B0();
            var_s1 = 7;
            do {
                if (var_s0 != 0) {
                    mwPlyExecSvrHndl(var_s0);
                }
                var_s1 -= 1;
                var_s0 += 0x2B8;
            } while (var_s1 >= 0);
            func_00187CD8(0);
            temp_s0 = func_00196750() != 1;
            func_001879E0();
            var_v0 = temp_s0;
            if (temp_s0 == 0) {
                var_v0 = temp_s0;
                if (func_00187DD0() != 1) {
                    func_00187A48();
                    var_v0 = temp_s0;
                }
            }
        }
    }
    return var_v0;
}
