/* Draft (not built): func_0018CAE0 at 0x0018CAE0, size 0xC4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018CAE0.c:24: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018CAE0.s */

s32 func_00178BA8(void *, s32, s32);            /* extern */
s32 func_0018CBA8(void *);                      /* extern */
s32 func_0018CD70(void *);                      /* extern */
s32 func_0018D390(void *);                      /* extern */
s32 (*func_001999E0(void *, s32))(s32, s32, s32); /* extern */

s32 func_0018CAE0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_a0)(s32, s32, s32);
    s32 (*temp_s0)(s32, s32, s32);
    s32 temp_s0_2;
    s32 var_v0;
    u8 *temp_s3;

    temp_s3 = arg0 + 0x78;
    temp_s0 = func_001999E0((u8 *)0x4B);
    temp_a0 = func_001999E0(arg0, 0x4C);
    if (temp_s0 != NULL) {
        temp_s0(temp_a0, arg1, arg2);
    }
    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x78) == 0) {
        temp_s0_2 = (arg2 < 0x801) int arg2 : 0x800;
        func_00178BA8(arg0 + 0x10C, arg1, temp_s0_2);
        *(s32 *)((u8 *)temp_s3 + 0x90) = temp_s0_2;
        func_0018CD70(temp_s3);
        func_0018D390(arg0);
        func_0018CBA8(arg0);
        var_v0 = 1;
    }
    return var_v0;
}
