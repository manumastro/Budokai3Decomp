/* Draft (not built): func_0017AAF0 at 0x0017AAF0, size 0x70, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017AAF0.s */

s32 func_0017AAF0(u8 *arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0;

    var_v0 = 0;
    if (*(u8 *)((u8 *)arg0 + 0) != 0) {
        goto block_12;
    }
    var_v0 = 0;
    if (*(u8 *)((u8 *)arg0 + 1) != 0) {
        goto block_12;
    }
    var_v0 = 0;
    if (*(u8 *)((u8 *)arg0 + 2) != 1) {
        goto block_12;
    }
    temp_a0 = *(u8 *)((u8 *)arg0 + 3);
    var_v0 = 0x10000;
    if (temp_a0 == 0xBA) {
        goto block_12;
    }
    if ((s32) temp_a0 < 0xBB) {
        goto block_6;
    }
    var_v1 = 0xBB;
    goto block_8;
block_6:
    var_v1 = 0xB9;
    var_v0 = 0x80000;
    goto block_9;
block_8:
    var_v0 = 0x20000;
block_9:
    if (temp_a0 == var_v1) {
        goto block_12;
    }
    var_v0 = 0x40000;
    if (temp_a0 >= 0xBCU) {
        goto block_12;
    }
    var_v0 = 0;
block_12:
    return var_v0;
}
