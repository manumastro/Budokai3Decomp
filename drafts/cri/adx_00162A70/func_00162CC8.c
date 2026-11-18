/* Draft (not built): func_00162CC8 at 0x00162CC8, size 0x140, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00162CC8.c:39: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00162CC8.s */

s32 func_00127E88(void *, void *, s32);             /* extern */
s32 func_00161D20(s32 *);                   /* extern */
s32 func_00162738(void *);                      /* extern */
s32 memcpy(void *, s8 *, s32);                  /* extern */
s32 strlen(void *);                                 /* extern */
extern s32 D_00462678;
extern s32 D_004626A0;
extern s32 D_0047EAD4;

s32 func_00162CC8(s8 *arg0) {
    s32 *var_a0;
    s32 (*temp_s0_2)(s32 *);
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    u8 *temp_s0;

    var_s4 = 0;
    if ((arg0 == NULL) || (*arg0 == 0)) {
        func_00162738(sp);
        if (sp0 == 0) {
            var_a0 = &D_00462678;
            goto block_15;
        }
        goto block_6;
    }
    memcpy(sp, arg0, strlen() + 1);
block_6:
    temp_v0 = strlen(sp);
    if (temp_v0 > 0) {
        var_s1 = 0;
        var_s0 = 0 * 0x10;
loop_11:
        var_s1 += 1;
        if (func_00127E88(sp, var_s0 + &D_0047EAD4, temp_v0) == 0) {
            temp_s0 = *(var_s0 + (&D_0047EAD4 - 4));
            var_a0 = &D_004626A0;
            if (temp_s0 != NULL) {
                temp_s0_2 = *(s32 (**)(s32 *))((u8 *)temp_s0 + 0xC);
                if (temp_s0_2 != NULL) {
                    var_s4 = temp_s0_2(&D_004626A0);
                }
                goto block_16;
            }
            goto block_15;
        }
block_16:
        var_s0 = var_s1 * 0x10;
        if (var_s1 >= 0x20) {
            return var_s4;
        }
        goto loop_11;
    }
    var_a0 = &D_00462678;
block_15:
    func_00161D20(var_a0);
    return 0;
}
