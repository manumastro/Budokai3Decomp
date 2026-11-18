/* Draft (not built): sceSifWriteBackDCache at 0x0010D770, size 0xAC, segment sdk/libkernl_0010D628 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libkernl_0010D628.s */

void sceSifWriteBackDCache(s32 arg0, s32 arg1) {
    s32 var_t1;
    u32 temp_t3;
    u32 var_t2;

    if (arg1 <= 0) {
        goto block_7;
    }
    temp_t3 = ((u32) ((((arg0 + arg1) - 1) & 0xFFFFFFC0) - (arg0 & 0xFFFFFFC0)) >> 6) + 1;
    var_t1 = temp_t3 & 7;
    var_t2 = temp_t3 >> 3;
    if (var_t1 == 0) {
        goto block_3;
    }
loop_2:
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, ($t0) */);
    M2C_SYNC();
    var_t1 -= 1;
    if (var_t1 > 0) {
        goto loop_2;
    }
block_3:
    if (var_t2 == 0) {
        goto block_5;
    }
    goto loop_6;
block_5:
    return;
loop_6:
    var_t2 -= 1;
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, ($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x40($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x80($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0xc0($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x100($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x140($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x180($t0) */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cache 0x18, 0x1c0($t0) */);
    M2C_SYNC();
    if ((s32) var_t2 > 0) {
        goto loop_6;
    }
block_7:
    return;
}
