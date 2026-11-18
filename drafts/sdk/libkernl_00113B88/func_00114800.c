/* Draft (not built): func_00114800 at 0x00114800, size 0x118, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00114800.c:27: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114800.s */

s32 func_001147B0(s32, void *, s32);            /* extern */
s32 func_001147F0(s32, s32, s32 *);         /* extern */
s32 strlen(void *);                                 /* extern */
extern s32 D_003ECA60;
extern s32 D_003ED518;

s32 func_00114800(u8 *arg0, s32 arg1, u8 **arg2) {
    s32 sp0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u8 **var_s0;
    u8 *temp_a1;

    temp_s3 = D_003ECA60;
    temp_v0 = temp_s3 + 0x40;
    sp0 = temp_v0;
    func_001147F0(*(s32 *)((u8 *)(&D_003ED518) + 0), *(s32 *)((u8 *)(&D_003ED518) + 4), &D_003ED518);
    var_s2 = (arg1 >= 0x10) int 0xF : arg1;
    func_001147B0(temp_s3, sp, 4);
    var_s3 = temp_s3 + 4;
    temp_s1 = strlen(arg0) + 1;
    func_001147B0(sp0, arg0, temp_s1);
    sp0 += temp_s1;
    if (var_s2 > 0) {
        var_s0 = arg2;
        do {
            temp_a0 = var_s3;
            var_s3 += 4;
            func_001147B0(temp_a0, sp, 4);
            var_s2 -= 1;
            temp_s1_2 = strlen(*var_s0) + 1;
            temp_a1 = *var_s0;
            temp_a2 = temp_s1_2;
            var_s0 += 4;
            func_001147B0(sp0, temp_a1, temp_a2);
            sp0 += temp_s1_2;
        } while (var_s2 != 0);
    }
    return temp_v0;
}
