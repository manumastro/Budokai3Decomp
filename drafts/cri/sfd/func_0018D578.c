/* Draft (not built): func_0018D578 at 0x0018D578, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D578.s */

s32 func_0018A1B0(void *);                      /* extern */
s32 func_0018D8A8();                            /* extern */
s32 func_0018D8E0();                            /* extern */
s32 func_0018D900();                            /* extern */
s32 func_00197C68(s32);                             /* extern */
s32 func_00199E00(s32 *);                   /* extern */
s32 func_0019BA40(void *);                          /* extern */
extern s32 D_00426A90;
extern s32 D_00426AE4;

s32 func_0018D578(void) {
    s32 *var_s1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 7;
    var_s1 = &D_00426AE4;
    var_s2 = 0;
    do {
        temp_v0 = *var_s1;
        var_s1 += 4;
        if (temp_v0 != 0) {
            var_s2 = func_00197C68(temp_v0);
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
    func_00199E00(&D_00426A90);
    func_0018A1B0(&D_00426A90 + 0xC);
    temp_s0 = func_0019BA40(&D_00426A90 + 0x10);
    func_0018D900();
    func_0018D8E0();
    func_0018D8A8();
    return (temp_s0 == 0) ? var_s2 : temp_s0;
}
