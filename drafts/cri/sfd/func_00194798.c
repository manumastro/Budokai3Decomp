/* Draft (not built): func_00194798 at 0x00194798, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00194798.c:34: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00194798.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *, void *);              /* extern */

s32 func_00194798(u8 *arg0) {
    s32 *var_a0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_a1;

    func_0018D908(sp);
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_s0 = 0;
    temp_v0 = *(s32 *)((u8 *)temp_a1 + 0x168);
    var_a0 = temp_a1 + 0x16C;
    if (temp_v0 > 0) {
        var_v1 = temp_v0;
        var_v0 = *(s32 *)((u8 *)temp_a1 + 0x16C);
loop_2:
        var_a0 += 0xDC;
        if ((var_v0 == 2) || (var_v0 == 4)) {
            var_s0 += 1;
        }
        var_v1 -= 1;
        if (var_v1 != 0) {
            var_v0 = *var_a0;
            goto loop_2;
        }
    }
    if (*(s32 *)((u8 *)temp_a1 + 0x7C) == 1) {
        var_s0 = (var_s0 == 0) int -1 : var_s0;
    }
    func_0018D920(sp, temp_a1);
    return var_s0;
}
