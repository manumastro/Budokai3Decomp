/* Draft (not built): func_0016A4C8 at 0x0016A4C8, size 0xC4, segment cri/lsc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/lsc/func_0016A4C8.s */

s32 func_0015CCD0(s32);                             /* extern */
s32 func_0015CCF8(s32);                             /* extern */
s32 func_0016A1C0(s32 *);                   /* extern */
extern s32 D_00463EF8;

void func_0016A4C8(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    u8 *temp_s1;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0 == 0) {
        goto block_2;
    }
    goto block_5;
block_2:
    func_0016A1C0(&D_00463EF8);
    return;
block_5:
    temp_s1 = arg0 + (*(s32 *)((u8 *)arg0 + 0x20) << 5) + 0x38;
    temp_v0 = func_0015CCD0(temp_a0);
    if (temp_v0 == 3) {
        goto block_15;
    }
    if (temp_v0 >= 4) {
        goto block_10;
    }
    if (temp_v0 == 2) {
        goto block_14;
    }
    return;
block_10:
    if (temp_v0 != 4) {
        goto block_12;
    }
    *(s8 *)((u8 *)arg0 + 1) = 3;
    return;
block_12:
    return;
block_14:
    *(s32 *)((u8 *)temp_s1 + 0x1C) = func_0015CCF8(*(s32 *)((u8 *)arg0 + 0x28));
    return;
block_15:
    *(s32 *)((u8 *)temp_s1 + 0x18) = 2;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = (s32) *(s32 *)((u8 *)arg0 + 0x2C);
    return;
}
