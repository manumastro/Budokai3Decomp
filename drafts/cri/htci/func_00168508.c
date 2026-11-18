/* Draft (not built): func_00168508 at 0x00168508, size 0x94, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168508.s */

s32 func_00167C90(s32 *, void *);           /* extern */
extern s32 D_00463B10;

s32 func_00168508(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 != NULL) {
        goto block_3;
    }
    func_00167C90(&D_00463B10, arg0);
    return 0;
block_3:
    if (arg2 != 0) {
        goto block_5;
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = arg1;
    goto block_9;
block_5:
    if (arg2 != 2) {
        goto block_7;
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) + arg1);
    goto block_10;
block_7:
    if (arg2 != 1) {
        goto block_10;
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1C) + arg1);
    goto block_10;
block_9:
block_10:
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x1C);
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    temp_v0_3 = (temp_v0_2 >= *(s32 *)((u8 *)arg0 + 0x10)) ? *(s32 *)((u8 *)arg0 + 0x10) : temp_v0_2;
    temp_v0 = (temp_v0_3 < 0) ? 0 : temp_v0_3;
    *(s32 *)((u8 *)arg0 + 0x1C) = temp_v0;
    return temp_v0;
}
