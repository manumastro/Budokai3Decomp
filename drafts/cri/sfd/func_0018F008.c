/* Draft (not built): func_0018F008 at 0x0018F008, size 0xB0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018F008.c:23: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018F008.s */

s32 func_0017ACA8(s32, void *, s32);            /* extern */

void func_0018F008(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 *temp_s3;
    s32 temp_a2;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s0 = 0;
    var_s1 = 0;
    var_s2 = 0;
    temp_s3 = *(s32 **)((u8 *)arg0 + 0x1C2C);
    temp_s4 = *(s32 *)((u8 *)temp_s3 + 0);
    do {
        temp_a2 = var_s0;
        var_s0 += 1;
        func_0017ACA8(temp_s4, sp, temp_a2);
        var_s2 = (sp8 >= var_s2) int sp8 : var_s2;
        var_s1 = (spC >= var_s1) int spC : var_s1;
    } while (var_s0 < 3);
    *(s32 *)((u8 *)temp_s3 + 4) = var_s1;
    *(s32 *)((u8 *)temp_s3 + 8) = var_s2;
    *arg1 = var_s2;
    *arg2 = *(s32 *)((u8 *)temp_s3 + 4);
}
