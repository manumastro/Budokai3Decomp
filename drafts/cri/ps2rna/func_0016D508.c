/* Draft (not built): func_0016D508 at 0x0016D508, size 0xD8, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D508.s */

s32 scePrintf();
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_00464BE0;

void func_0016D508(u8 *arg0, s32 arg1) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        if ((0xBB80 % arg1) == 0) {
            if ((arg1 != 0xBB80) && ((0xBB80 / arg1) & 1)) {
                scePrintf(&D_00464BE0, arg1, 1, arg1);
loop_11:
                goto loop_11;
            }
            *(s32 *)((u8 *)arg0 + 0x34) = arg1;
        } else {
            scePrintf(&D_00464BE0, 1, arg1);
loop_6:
            goto loop_6;
        }
    }
}
