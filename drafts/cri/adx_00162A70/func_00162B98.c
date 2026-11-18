/* Draft (not built): func_00162B98 at 0x00162B98, size 0xCC, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00162B98.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00162B98.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_001623A8(void *, s8 *, s32);             /* extern */
s32 func_001625F0(void *, s8 *, s32);           /* extern */
extern s32 D_004625A8;
extern s32 D_00462600;
extern s32 D_00462628;

s32 func_00162B98(s32 arg0, s32 arg1) {
    s8 sp130;
    s32 *var_a0;
    s32 (*temp_v0)(s8 *, s32);
    u8 *temp_v0_2;

    if (arg0 == 0) {
        var_a0 = &D_004625A8;
        goto block_11;
    }
    func_001625F0(sp, &sp130, arg0);
    if (sp130 == 0) {
        var_a0 = &D_004625A8;
        goto block_11;
    }
    temp_v0_2 = func_001623A8(sp, &sp130, arg0);
    if (temp_v0_2 == NULL) {
        func_00161D20(&D_00462600);
    }
    temp_v0 = *(s32 (**)(s8 *, s32))((u8 *)temp_v0_2 + 0x5C);
    if (temp_v0 != NULL) {
        return temp_v0(&sp130, arg1);
    }
    var_a0 = &D_00462628;
block_11:
    func_00161D20(var_a0);
    return 0;
}
