/* Draft (not built): func_00194720 at 0x00194720, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00194720.s */

u8 *func_00194720(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_a3;
    u8 *temp_v0;
    u8 *var_a0;
    u8 *var_v0;
    u8 *var_v1;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_a3 = 0;
    temp_a2 = *(s32 *)((u8 *)temp_v0 + 0x168);
    var_v1 = temp_v0 + 0x16C;
    if (temp_a2 > 0) {
        var_a0 = arg0 + 0x1620;
loop_2:
        var_v0 = var_a0;
        var_a0 += 0x5C;
        if (var_v1 != arg1) {
            var_a3 += 1;
            var_v1 += 0xDC;
            if (var_a3 >= temp_a2) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = NULL;
    }
    return var_v0;
}
