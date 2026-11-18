/* Draft (not built): mwPlySetAudioSw at 0x001835F0, size 0x60, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlySetAudioSw.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32, s32);     /* extern */
s32 func_001996F0(s32, s32, s32);           /* extern */
extern s32 D_00466128;

void mwPlySetAudioSw(u8 *arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466128, 6, arg1);
        return;
    }
    func_001996F0(*(s32 *)((u8 *)arg0 + 0x40), 6, arg1);
}
