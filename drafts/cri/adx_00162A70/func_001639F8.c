/* Draft (not built): func_001639F8 at 0x001639F8, size 0xC0, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001639F8.c:27: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_001639F8.s */

s32 func_00161D20(s32 *, s32, s32); /* extern */
void *func_00162080();                              /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s32 D_00462D80;
extern s32 D_00462DA8;
extern s32 D_00462DD0;

void func_001639F8(s32 arg0, s32 arg1) {
    s32 (*temp_v0_2)(u8 *, s32, s32, s32);
    u8 *temp_v0;

    if (arg0 == 0) {
        func_00161D20(&D_00462D80);
        return;
    }
    if (arg1 == 0) {
        func_00161D20(&D_00462DA8);
        return;
    }
    temp_v0 = func_00162080();
    if (temp_v0 == NULL) {
        func_00161D20(&D_00462DD0, 0, 0x14);
        return;
    }
    memset(sp, 0, 0x14);
    temp_v0_2 = *(s32 (**)(u8 *, s32, s32, s32))((u8 *)temp_v0 + 0x60);
    if (temp_v0_2 != NULL) {
        temp_v0_2(sp, 6, 0, 0);
    }
}
