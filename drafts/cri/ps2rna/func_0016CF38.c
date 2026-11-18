/* Draft (not built): func_0016CF38 at 0x0016CF38, size 0x98, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016CF38.s */

s32 func_00165760(s32);                         /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016CF38(u8 *arg0, s8 arg1) {
    s32 *var_s0;
    s32 temp_a0_2;
    s8 temp_a0;
    s8 var_s1;

    temp_a0 = *(s8 *)((u8 *)arg0 + 0x32);
    if (D_0041A0D8 != 1) {
        goto block_2;
    }
    if (D_0041A0D0 <= 0) {
        goto block_7;
    }
block_2:
    *(s8 *)((u8 *)arg0 + 0x5C) = arg1;
    if (arg1 == 1) {
        goto block_6;
    }
    if (temp_a0 <= 0) {
        goto block_7;
    }
    var_s1 = temp_a0;
    var_s0 = arg0 + 0x10;
loop_5:
    temp_a0_2 = *var_s0;
    var_s0 += 4;
    var_s1 -= 1;
    func_00165760(temp_a0_2);
    *(s8 *)((u8 *)arg0 + 0x5D) = 1;
    *(s8 *)((u8 *)arg0 + 0x5C) = 0;
    if (var_s1 != 0) {
        goto loop_5;
    }
block_6:
block_7:
    return;
}
