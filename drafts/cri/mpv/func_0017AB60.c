/* Draft (not built): func_0017AB60 at 0x0017AB60, size 0x5C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0017AB60.c:13: invalid operands to binary -
 * Original: asm/nonmatchings/cri/mpv/func_0017AB60.s */

void *func_0017ABC0(s32);                       /* extern */

s32 func_0017AB60(s32 arg0, s32 arg1) {
    u8 *temp_a1;
    u8 *var_v0;

    var_v0 = func_0017ABC0(0xBA);
    temp_a1 = var_v0 + 4;
    if (var_v0 != NULL) {
        var_v0 = NULL;
        if ((arg1 - (temp_a1 - arg0)) > 0) {
            var_v0 = (u8 *) (((u8) *temp_a1 >> 6) == 0);
        }
    }
    return (s32) var_v0;
}
