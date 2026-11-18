/* Draft (not built): _sceSDC at 0x0010AAB0, size 0xA4, segment sdk/libkernl_0010AA60 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 92 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_0010AA60/_sceSDC.s */

void _sceSDC(u32 arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v0_2;

    var_a2 = 0;
loop_1:
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x10, ($a2) */);
    M2C_SYNC();
    temp_v0 = (M2C_ERROR(/* mfc0 $gp */) & 0xFFFFF000) + var_a2;
    if (temp_v0 < arg0) {
        goto block_4;
    }
    if (arg1 < temp_v0) {
        goto block_4;
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x14, ($a2) */);
    M2C_SYNC();
block_4:
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x10, 0x1($a2) */);
    M2C_SYNC();
    temp_v0_2 = (M2C_ERROR(/* mfc0 $gp */) & 0xFFFFF000) + var_a2;
    if (temp_v0_2 < arg0) {
        goto block_7;
    }
    if (arg1 < temp_v0_2) {
        goto block_7;
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x14, 0x1($a2) */);
    M2C_SYNC();
block_7:
    M2C_SYNC();
    var_a2 += 0x40;
    if (var_a2 < 0x1000) {
        goto loop_1;
    }
    return;
}
