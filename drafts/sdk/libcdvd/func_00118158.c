/* Draft (not built): func_00118158 at 0x00118158, size 0xA0, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libcdvd/func_00118158.s */

s32 iSignalSema();
extern s32 D_003EDD94;
extern s32 D_003EDDA0;
extern s32 D_003EDDA8;
extern s32 D_003EDDB4;
extern s32 D_003EDDE0;
extern s32 D_003EDDE4;
extern s32 D_00478D00;

void func_00118158(s32 *arg0) {
    D_003EDDE0 = *arg0;
    D_003EDDE4 = D_003EDDE0;
    if (D_003EDDE0 == 0xB) {
        D_003EDDE0 = 0;
        D_003EDDB4 = 0;
        return;
    }
    iSignalSema(D_003EDDA8, 0xB);
    if ((D_003EDD94 != 0) && (D_00478D00 != 0)) {
        iSignalSema(D_003EDDA0);
    } else {
        D_003EDDB4 = 0;
    }
    D_003EDDE0 = 0;
}
