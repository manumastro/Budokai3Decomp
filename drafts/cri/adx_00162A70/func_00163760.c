/* Draft (not built): func_00163760 at 0x00163760, size 0x108, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163760.c:29: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163760.s */

s32 func_00161D20(s32 *);                   /* extern */
void *func_00162080();                              /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s32 D_00462BE0;
extern s32 D_00462C08;
extern s32 D_00462C30;
extern s32 D_00462C58;

s32 func_00163760(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*temp_v0)(u8 *, s32, s32, s32);
    u8 *temp_v0_2;

    if (arg0 == 0) {
        func_00161D20(&D_00462BE0);
        goto block_16;
    }
    if (arg1 == 0) {
        func_00161D20(&D_00462C08);
        goto block_16;
    }
    if (arg2 == 0) {
        func_00161D20(&D_00462C30);
        goto block_16;
    }
    temp_v0_2 = func_00162080();
    if (temp_v0_2 != NULL) {
        memset(sp, 0, 0x14);
        temp_v0 = *(s32 (**)(u8 *, s32, s32, s32))((u8 *)temp_v0_2 + 0x60);
        if (temp_v0 != NULL) {
            return temp_v0(sp, 2, 0, 0);
        }
        goto block_16;
    }
    func_00161D20(&D_00462C58);
block_16:
    return -1;
}
