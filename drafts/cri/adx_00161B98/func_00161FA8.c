/* Draft (not built): func_00161FA8 at 0x00161FA8, size 0xD4, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00161B98/func_00161FA8.s */

s32 func_00162080(s32);                             /* extern */
s32 func_00162118();                            /* extern */
s32 memcpy(void *, s32, s32);                   /* extern */
s32 strlen(s32);                                    /* extern */
extern s32 D_0047EAD0;

s32 func_00161FA8(s32 arg0, s32 (*arg1)()) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;

    func_00162118();
    temp_s2 = arg1();
    var_s0 = 0;
    var_v0 = temp_s2;
    if (func_00162080(arg0) == 0) {
        var_v1 = &D_0047EAD0 + 4;
        if (*(s8 *)((u8 *)(&D_0047EAD0) + 4) != 0) {
loop_2:
            var_s0 += 1;
            var_v1 += 0x10;
            if (var_s0 < 0x20) {
                if (*var_v1 != 0) {
                    goto loop_2;
                }
            }
        }
        var_v0 = 0;
        if (var_s0 != 0x20) {
            temp_s0 = var_s0 * 0x10;
            *(temp_s0 + &D_0047EAD0) = temp_s2;
            memcpy(temp_s0 + (&D_0047EAD0 + 4), arg0, strlen(arg0) + 1);
            var_v0 = temp_s2;
        }
    }
    return var_v0;
}
