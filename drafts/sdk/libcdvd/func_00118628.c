/* Draft (not built): func_00118628 at 0x00118628, size 0x54, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libcdvd/func_00118628.s */

extern s32 D_003EDDA4;
extern s32 (*D_00478D08)(s32, s32);
extern s32 D_00478D10;

void func_00118628(void) {
    if (D_00478D08 != NULL) {
        if (D_003EDDA4 == 0) {
            D_00478D08(D_00478D10, D_00478D08);
        }
    }
}
