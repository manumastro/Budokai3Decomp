/* Draft (not built): MWSFCRE_SetSupplySj at 0x0017F408, size 0xD0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0017F408.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/MWSFCRE_SetSupplySj.s */

s32 func_00182420(s32);                     /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_001983F0(s32, void *, s32, s32, s32);      /* extern */
extern s32 D_00465548;

void MWSFCRE_SetSupplySj(u8 *arg0) {
    s32 temp_a2;
    s32 temp_a3;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x1D0);
    temp_a3 = *(s32 *)((u8 *)arg0 + 0x40);
    if (temp_a2 != 0) {
        if (temp_a2 != *(s32 *)((u8 *)arg0 + 0x1F4)) {
            if (temp_a2 != *(s32 *)((u8 *)arg0 + 0x1D4)) {

            }
        }
        if (func_001983F0(temp_a3, sp, temp_a2, temp_a3, 0) != 0) {
            func_00182420(-0x138);
            func_001870E8(&D_00465548);
        }
    }
}
