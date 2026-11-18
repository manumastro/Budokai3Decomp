/* Draft (not built): func_00194838 at 0x00194838, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00194838.c:35: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00194838.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */

u8 *func_00194838(u8 *arg0) {
    s32 temp_a0;
    s32 var_v1;
    u8 *temp_v0;
    u8 *var_s0;

    func_0018D908(sp);
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_v1 = 0;
    temp_a0 = *(s32 *)((u8 *)temp_v0 + 0x168);
    var_s0 = temp_v0 + 0x16C;
    if (temp_a0 > 0) {
loop_4:
        if (*(s32 *)((u8 *)var_s0 + 0) != 0) {
            var_v1 += 1;
            goto block_3;
        }
        if (*(s32 *)((u8 *)var_s0 + 4) != 0) {
            var_v1 += 1;
block_3:
            var_s0 += 0xDC;
            if (var_v1 < temp_a0) {
                goto loop_4;
            }
        } else {
            *(s32 *)((u8 *)var_s0 + 0) = 1;
        }
    }
    func_0018D920(sp);
    return ((var_v1 ^ temp_a0) == 0) int NULL : var_s0;
}
