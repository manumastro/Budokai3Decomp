/* Draft (not built): func_0018ECC8 at 0x0018ECC8, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018ECC8.s */

s32 func_0018B770(s32);                             /* extern */
s32 func_0018EA38(s32, s32);                    /* extern */

void func_0018ECC8(s32 arg0, s32 *arg1) {
    s32 var_a1;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1C24;
    temp_s1 = *(u8 **)((u8 *)temp_v0 + 8);
    var_a1 = 0;
    if (func_0018B770(*(s32 *)((u8 *)temp_v0 + 0x10)) == 1) {
        func_0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x30));
        var_a1 = 1;
    }
    if (arg1 != NULL) {
        *arg1 = var_a1;
    }
}
