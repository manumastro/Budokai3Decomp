/* Draft (not built): func_0018BA20 at 0x0018BA20, size 0xC0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018BA20.c:20: parse error before ')' token
 * Original: asm/nonmatchings/cri/sfd/func_0018BA20.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */

s32 func_0018BA20(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v1;
    s32 var_s3;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    func_0018D908(sp);
    if ((*(s32 *)((u8 *)temp_s0 + 0x1E8) - *(s32 *)((u8 *)temp_s0 + 0x1EC)) <= 0) {
        var_s3 = 0;
        *arg1 = -1;
    } else {
        var_s3 = 1;
        *arg2 = *(s32 *)((u8 *)temp_s0 + 0x1E0);
        temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x1EC);
        *arg1 = *(s32 *)((u8 *)(((temp_v1 - (((s32) ((temp_v1 < 0) int (temp_v1 + 0x1F) : temp_v1) >> 5) << 5)) * 4) + temp_s0) + 0x1F0);
        *(s32 *)((u8 *)temp_s0 + 0x1EC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x1EC) + 1);
    }
    func_0018D920(sp);
    return var_s3;
}
