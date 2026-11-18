/* Draft (not built): func_00163868 at 0x00163868, size 0xBC, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163868.c:39: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163868.s */

s32 func_00161D20(s32 *, s32, s32);         /* extern */
void *func_00162080();                              /* extern */
s32 memset(void *, s32, s32);                   /* extern */
extern s32 D_00462C80;
extern s32 D_00462CA8;
extern s32 D_00462CD0;

s32 func_00163868(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_a0;
    s32 (*temp_v1)(u8 *, s32, s32, s32);
    s32 temp_s0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    u8 *temp_v0;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s0 = var_a1;
    if (arg0 == 0) {
        var_a0 = &D_00462C80;
        goto block_8;
    }
    if (temp_s0 == 0) {
        var_a0 = &D_00462CA8;
        goto block_8;
    }
    temp_v0 = func_00162080();
    var_a1 = 0;
    var_a2 = 0x14;
    if (temp_v0 == NULL) {
        var_a0 = &D_00462CD0;
block_8:
        func_00161D20(var_a0, var_a1, var_a2);
        return -1;
    }
    memset(sp, 0, 0x14);
    var_v0 = -1;
    temp_v1 = *(s32 (**)(u8 *, s32, s32, s32))((u8 *)temp_v0 + 0x60);
    if (temp_v1 != NULL) {
        var_v0 = temp_v1(sp, 3, 0, 0);
    }
    return var_v0;
}
