/* Draft (not built): func_00194968 at 0x00194968, size 0xE4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00194968.c:34: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00194968.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_00194C08(s32 *, s32 *);                    /* extern */

s32 *func_00194968(u8 *arg0, s32 *arg1) {
    s32 *var_s0;
    s32 *var_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s4;
    u8 *temp_s3;

    var_s2 = NULL;
    var_s4 = 0;
    func_0018D908(sp);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v0 = *(s32 *)((u8 *)temp_s3 + 0x168);
    var_s0 = temp_s3 + 0x16C;
    *arg1 = 0;
    if (temp_v0 > 0) {
        var_s1 = temp_v0;
        do {
            temp_v0_2 = *var_s0;
            if (temp_v0_2 != 2) {
                if (temp_v0_2 == 4) {
                    goto block_5;
                }
            } else {
block_5:
                var_s4 += 1;
                var_s2 = (func_00194C08(var_s2, var_s0) != 0) int var_s0 : var_s2;
            }
            var_s1 -= 1;
            var_s0 += 0xDC;
        } while (var_s1 != 0);
    }
    if ((var_s4 == 1) && (*(s32 *)((u8 *)temp_s3 + 0x7C) != 0)) {
        *arg1 = var_s4;
    }
    func_0018D920(sp);
    return var_s2;
}
