/* Draft (not built): func_0016AB58 at 0x0016AB58, size 0xBC, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mfci/func_0016AB58.s */

s32 func_0016A768();                            /* extern */
s32 func_0016A780(s32);                         /* extern */
s32 func_0016A7B0(s32 *);                   /* extern */
extern s32 D_00464048;

s32 func_0016AB58(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        goto block_2;
    }
    func_0016A7B0(&D_00464048);
    return 0;
block_2:
    func_0016A768();
    if (arg2 != 0) {
        goto block_4;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    goto block_8;
block_4:
    if (arg2 != 2) {
        goto block_6;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0xC) + arg1);
    goto block_9;
block_6:
    if (arg2 != 1) {
        goto block_9;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) + arg1);
    goto block_9;
block_8:
block_9:
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_v0_2 = (temp_v0 >= *(s32 *)((u8 *)arg0 + 0xC)) ? *(s32 *)((u8 *)arg0 + 0xC) : temp_v0;
    temp_a0 = temp_v0_2 < 0;
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) ((temp_a0 != 0) ? 0 : temp_v0_2);
    func_0016A780(temp_a0);
    return *(s32 *)((u8 *)arg0 + 0x10);
}
