/* Draft (not built): DTR_Init at 0x001655B8, size 0x68, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/dtr/DTR_Init.s */

s32 memset();
s32 scePrintf();
extern s32 D_00411614;
extern s32 D_00411618;
extern s32 D_00463300;
extern s32 D_00463318;

void DTR_Init(void) {
    s32 temp_v0;

    scePrintf(&D_00463300, D_00411614);
    temp_v0 = D_00411614;
    if (temp_v0 == 0) {
        memset(&D_00411618, 0, 0x800);
    }
    D_00411614 = temp_v0 + 1;
    scePrintf(&D_00463318);
}
