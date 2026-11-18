/* Draft (not built): func_001846D8 at 0x001846D8, size 0x40, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001846D8.s */

s32 func_001870E8(s32 *, s32);              /* extern */
s32 func_001996F0(s32, s32, s32);       /* extern */
extern s32 D_00466738;

void func_001846D8(s32 arg0) {
    if ((u32) (arg0 + 1) >= 3U) {
        func_001870E8(&D_00466738, arg0);
        return;
    }
    func_001996F0(0, 0x3D, arg0);
}
