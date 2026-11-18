/* Draft (not built): func_0016B860 at 0x0016B860, size 0x88, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mfci/func_0016B860.s */

s32 func_0016B060(s32 *, void *);           /* extern */
extern s32 D_00464698;
extern s32 D_004646C0;

void func_0016B860(u8 *arg0, s32 arg1) {
    s32 temp_lo;

    if (arg0 == NULL) {
        func_0016B060(&D_00464698, arg0);
        return;
    }
    if (arg1 <= 0) {
        func_0016B060(&D_004646C0, arg0);
        return;
    }
    temp_lo = arg1 / 750;
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    *(s32 *)((u8 *)arg0 + 0x18) = (s32) ((((temp_lo < 0x61) ^ 0) == 0) ? 0x60 : ((temp_lo <= 0) ? 1 : temp_lo));
}
