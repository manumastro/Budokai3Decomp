/* Draft (not built): func_00162450 at 0x00162450, size 0x128, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00162450.c:48: too few arguments to function `func_001625E0'
 * Original: asm/nonmatchings/cri/adx_00161B98/func_00162450.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_001623A8(void *, s8 *, s32);             /* extern */
void *func_00162578(s32 *);                     /* extern */
s32 func_001625E0(void *, s32);                 /* extern */
s32 func_001625F0(void *, s8 *, s32);           /* extern */
extern s32 D_004622C0;
extern s32 D_004622E0;
extern s32 D_00462328;
extern s32 D_00462348;
extern s32 D_00462360;

u8 *func_00162450(s32 arg0, s32 arg1, s32 arg2) {
    s8 sp130;
    s32 *var_a0;
    s32 (*temp_v0_3)(s8 *, s32, s32);
    u8 *temp_v0;
    u8 *temp_v0_2;

    if (arg0 == 0) {
        var_a0 = &D_004622C0;
        goto block_16;
    }
    func_001625F0(sp, &sp130, arg0);
    if (sp130 == 0) {
        var_a0 = &D_004622C0;
        goto block_16;
    }
    temp_v0 = func_00162578(&D_004622C0);
    if (temp_v0 == NULL) {
        var_a0 = &D_004622E0;
        goto block_16;
    }
    temp_v0_2 = func_001623A8(sp, &sp130, arg0);
    *(u8 **)((u8 *)temp_v0 + 0) = temp_v0_2;
    if (temp_v0_2 == NULL) {
        func_001625E0(temp_v0);
        var_a0 = &D_00462328;
        goto block_16;
    }
    temp_v0_3 = *(s32 (**)(s8 *, s32, s32))((u8 *)temp_v0_2 + 0x10);
    if (temp_v0_3 != NULL) {
        *(s32 *)((u8 *)temp_v0 + 4) = temp_v0_3(&sp130, arg1, arg2);
        if (*(s32 *)((u8 *)temp_v0 + 4) != 0) {
            return temp_v0;
        }
        func_001625E0(temp_v0);
        var_a0 = &D_00462360;
        goto block_16;
    }
    func_001625E0(temp_v0, arg1);
    var_a0 = &D_00462348;
block_16:
    func_00161D20(var_a0);
    return NULL;
}
