/* Draft (not built): func_0018C660 at 0x0018C660, size 0xD0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018C660.s */

s32 func_0018C730(void *, void *);              /* extern */

u8 *func_0018C660(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_s2;
    u8 *var_s0;
    u8 *var_v0;

    var_s2 = arg2;
    var_s0 = arg1;
    if (var_s2 >= 4) {
loop_2:
        if ((*(u8 *)((u8 *)var_s0 + 0) != 0xFF) || ((*(u8 *)((u8 *)var_s0 + 1) & 0xF8) != 0xF8) || (func_0018C730(arg0, var_s0), (*(u8 *)((u8 *)arg0 + 0) == 0)) || (*(u8 *)((u8 *)arg0 + 2) == 0xF) || (var_v0 = var_s0, (*(u8 *)((u8 *)arg0 + 3) == 3))) {
            var_s2 -= 1;
            var_s0 += 1;
            if (var_s2 < 4) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_v0 = NULL;
    }
    return var_v0;
}
