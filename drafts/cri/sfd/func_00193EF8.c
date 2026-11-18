/* Draft (not built): func_00193EF8 at 0x00193EF8, size 0x3C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193EF8.s */

s32 func_0018D650();                            /* extern */

void func_00193EF8(u32 arg1) {
    if (arg1 == 0) {
        goto block_5;
    }
    if (arg1 >= 0xFFFFFFFFU) {
        goto block_3;
    }
    if (arg1 >= 0xFFFFFFFDU) {
        goto block_6;
    }
block_3:
    func_0018D650();
    return;
block_5:
block_6:
    return;
}
