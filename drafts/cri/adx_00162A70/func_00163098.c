/* Draft (not built): func_00163098 at 0x00163098, size 0x110, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163098.c:28: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163098.s */

s32 func_00127E88(s32, void *, s32);                /* extern */
s32 func_00163AB8(s32);                             /* extern */
s32 strlen();                                       /* extern */
extern s32 D_0047EAD4;

s32 func_00163098(s32 arg0) {
    s32 (*temp_s0_2)();
    s32 temp_s5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;
    u8 *temp_s0;

    var_s1 = 0;
    var_s4 = 0;
    temp_s5 = strlen();
    var_s0 = 0 * 0x10;
loop_1:
    var_s1 += 1;
    if (func_00127E88(arg0, var_s0 + &D_0047EAD4, temp_s5) == 0) {
        temp_s0 = *(var_s0 + (&D_0047EAD4 - 4));
        if (func_00163AB8(arg0) != 0) {
            var_v0 = var_s1 < 0x20;
            if ((temp_s0 != NULL) && (var_v0 = var_s1 < 0x20, (*(s32 (**)(u8 *, s32, s32, s32, s32))((u8 *)temp_s0 + 0x60) != NULL))) {
                var_s4 = (*(s32 (**)(u8 *, s32, s32, s32, s32))((u8 *)temp_s0 + 0x60))(sp, 4, 0, 0, arg0);
            } else {
                goto block_11;
            }
        } else {
            var_v0 = var_s1 < 0x20;
            if ((temp_s0 != NULL) && (temp_s0_2 = *(s32 (**)())((u8 *)temp_s0 + 0x44), (temp_s0_2 != NULL))) {
                var_s4 = temp_s0_2();
            } else {
                goto block_11;
            }
        }
    } else {
        var_v0 = var_s1 < 0x20;
block_11:
        var_s0 = var_s1 * 0x10;
        if (var_v0 != 0) {
            goto loop_1;
        }
    }
    return var_s4;
}
