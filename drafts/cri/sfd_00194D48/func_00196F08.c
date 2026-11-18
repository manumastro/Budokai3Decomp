/* Draft (not built): func_00196F08 at 0x00196F08, size 0xAC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00196F08.c:15: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196F08.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_001963E0(s32, s32);                    /* extern */
s32 func_00196FB8(s32);                             /* extern */
s32 func_00197138(s32);                             /* extern */

s32 func_00196F08(s32 arg0) {
    s32 var_s2;
    s32 var_v0;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x94C;
    func_0018D908(sp);
    var_s2 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x1C) == 0) {
        if (func_00196FB8(arg0) != 0) {
            *(s32 *)((u8 *)temp_s1 + 0x1C) = 1;
            *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x20) + 1);
            var_v0 = func_001963E0(arg0, 1);
            goto block_5;
        }
    } else if (func_00197138(arg0) != 0) {
        *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
        var_v0 = func_001963E0(arg0, 0);
block_5:
        var_s2 = var_v0;
    }
    func_0018D920(sp);
    return var_s2;
}
