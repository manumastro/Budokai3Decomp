/* Draft (not built): func_00190180 at 0x00190180, size 0xE4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00190180.c:35: too few arguments to function `func_0018AFB8'
 * Original: asm/nonmatchings/cri/sfd/func_00190180.s */

s32 func_0017C698(s32, void *);                 /* extern */
s32 func_0018AF78(void *, s32);                     /* extern */
s32 func_0018AFB8(void *, s32, s32);                /* extern */
s32 func_00191248();                                /* extern */
s32 func_0019C188(void *, s32, s32);            /* extern */

s32 func_00190180(u8 *arg0) {
    s32 *temp_s3;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_v0;

    temp_s3 = *(s32 **)((u8 *)arg0 + 0x1C70);
    temp_s1 = *(s32 *)((u8 *)temp_s3 + 0);
    var_v0 = func_00191248();
    if (var_v0 != 1) {
        if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
            var_v0 = 1;
            if (*(s32 *)((u8 *)(arg0 + 0x78) + 0x7C) != 0) {
                goto block_4;
            }
        } else {
block_4:
            func_0017C698(temp_s1, sp);
            var_v0 = 1;
            if (sp0 != 0x3FFFF) {
                temp_a2 = func_0018AFB8(arg0, 1, sp0) < *(s32 *)((u8 *)temp_s3 + 0x114);
                var_v0 = 1;
                if (temp_a2 != 0) {
                    temp_s1_2 = func_0019C188(arg0, 1, temp_a2) == 0;
                    temp_s0 = func_0018AFB8(arg0, temp_s1_2);
                    var_v0 = (temp_s0 < func_0018AF78(arg0, temp_s1_2)) == 0;
                }
            }
        }
    }
    return var_v0;
}
