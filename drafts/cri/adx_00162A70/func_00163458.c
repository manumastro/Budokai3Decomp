/* Draft (not built): func_00163458 at 0x00163458, size 0xBC, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163458.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163458.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_001623A8(void *, s8 *, s32);             /* extern */
s32 func_001625F0(void *, s8 *, s32);           /* extern */
extern s32 D_00462A28;
extern s32 D_00462A78;
extern s32 D_00462AA0;

s32 func_00163458(s32 arg0) {
    s8 sp130;
    s32 *var_a0;
    s32 (*temp_v0)(s8 *);
    u8 *temp_v0_2;

    if (arg0 == 0) {
        var_a0 = &D_00462A28;
        goto block_13;
    }
    func_001625F0(sp, &sp130, arg0);
    if (sp130 == 0) {
        var_a0 = &D_00462A28;
        goto block_13;
    }
    temp_v0_2 = func_001623A8(sp, &sp130, arg0);
    if (temp_v0_2 == NULL) {
        func_00161D20(&D_00462A78);
    }
    temp_v0 = *(s32 (**)(s8 *))((u8 *)temp_v0_2 + 0x58);
    if (temp_v0 == NULL) {
        var_a0 = &D_00462AA0;
block_13:
        func_00161D20(var_a0);
        return -1;
    }
    return temp_v0(&sp130);
}
