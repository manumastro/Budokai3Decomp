/* Draft (not built): func_00194AD0 at 0x00194AD0, size 0x138, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00194AD0.c:57: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00194AD0.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_00194C08(s32 *, s32 *);                    /* extern */
s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019B460(void *, s32, s32);                /* extern */

s32 *func_00194AD0(u8 *arg0) {
    s32 *var_s0;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s5;
    u8 *temp_v0;

    var_s2 = NULL;
    var_s3 = NULL;
    var_s5 = 0;
    func_0018D908(sp);
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v1 = *(s32 *)((u8 *)temp_v0 + 0x168);
    var_s0 = temp_v0 + 0x16C;
    if (temp_v1 > 0) {
        var_s1 = temp_v1;
        do {
            temp_v0_2 = *var_s0;
            if (temp_v0_2 != 2) {
                if (temp_v0_2 == 4) {
                    goto block_5;
                }
            } else {
block_5:
                var_s5 += 1;
                if (func_00194C08(var_s3, var_s0) != 0) {
                    var_s2 = var_s3;
                    var_s3 = var_s0;
                } else {
                    var_s2 = (func_00194C08(var_s2, var_s0) != 0) int var_s0 : var_s2;
                }
            }
            var_s1 -= 1;
            var_s0 += 0xDC;
        } while (var_s1 != 0);
    }
    var_a0 = 0;
    if ((*(s32 *)((u8 *)arg0 + 0x48) == 4) && (var_s5 >= 2)) {
        var_a0 = 1;
        if (func_001999E0(arg0, 0xF) != 0) {
            var_a0 = func_0019B460(arg0, *(s32 *)((u8 *)var_s2 + 0x38), *(s32 *)((u8 *)var_s2 + 0x3C)) != 0;
        }
    }
    func_0018D920(sp);
    return (var_a0 == 0) int NULL : var_s2;
}
