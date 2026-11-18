/* Draft (not built): func_001632D8 at 0x001632D8, size 0xBC, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001632D8.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_001632D8.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_001623A8(void *, s8 *, s32);             /* extern */
s32 func_001625F0(void *, s8 *, s32);           /* extern */
extern s32 D_00462900;
extern s32 D_00462950;
extern s32 D_00462970;

s32 func_001632D8(s32 arg0) {
    s8 sp30;
    s32 *var_a0;
    s32 (*temp_v0)(s8 *);
    u8 *temp_v0_2;

    if (arg0 == 0) {
        var_a0 = &D_00462900;
        goto block_13;
    }
    func_001625F0(sp, &sp30, arg0);
    if (sp30 == 0) {
        var_a0 = &D_00462900;
        goto block_13;
    }
    temp_v0_2 = func_001623A8(sp, &sp30, arg0);
    if (temp_v0_2 == NULL) {
        func_00161D20(&D_00462950);
    }
    temp_v0 = *(s32 (**)(s8 *))((u8 *)temp_v0_2 + 0x50);
    if (temp_v0 == NULL) {
        var_a0 = &D_00462970;
block_13:
        func_00161D20(var_a0);
        return -1;
    }
    return temp_v0(&sp30);
}
