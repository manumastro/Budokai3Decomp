/* Draft (not built): func_00162FF0 at 0x00162FF0, size 0xA4, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00162FF0.c:16: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00162FF0.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_001623A8(void *, s8 *, s32);             /* extern */
s32 func_001625F0(void *, s8 *, s32);           /* extern */
extern s32 D_00462818;
extern s32 D_00462868;
extern s32 D_00462890;

s32 func_00162FF0(s32 arg0) {
    s8 sp130;
    s32 *var_a0;
    s32 (*temp_v0)(s8 *);
    u8 *temp_v0_2;

    func_001625F0(sp, &sp130, arg0);
    var_a0 = &D_00462818;
    if (sp130 != 0) {
        temp_v0_2 = func_001623A8(sp, &sp130, arg0);
        if (temp_v0_2 == NULL) {
            func_00161D20(&D_00462868);
        }
        temp_v0 = *(s32 (**)(s8 *))((u8 *)temp_v0_2 + 0x40);
        if (temp_v0 == NULL) {
            var_a0 = &D_00462890;
            goto block_9;
        }
        return temp_v0(&sp130);
    }
block_9:
    func_00161D20(var_a0);
    return 0;
}
