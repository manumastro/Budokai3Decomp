/* Draft (not built): sbrk at 0x0010A960, size 0xAC, segment sdk/libkernl/ico_glue (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl/ico_glue/sbrk.s */

u32 EndOfHeap();                                    /* extern */
s32 *__errno();                                     /* extern */
extern u32 D_003EC614;

u32 sbrk(s32 arg0) {
    s32 temp_s1;
    u32 temp_s0;
    u32 temp_v0;

    temp_s1 = M2C_ERROR(/* mfc0 $t0 */) & 0x10000;
    if (temp_s1 == 0) {
        goto block_3;
    }
loop_1:
    M2C_ERROR(/* unknown instruction: di */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    if (M2C_ERROR(/* mfc0 $t0 */) & 0x10000) {
        goto loop_1;
    }
block_3:
    temp_s0 = D_003EC614 + arg0;
    temp_v0 = D_003EC614;
    if (EndOfHeap() >= temp_s0) {
        goto block_7;
    }
    *__errno() = 0xC;
    if (temp_s1 == 0) {
        goto block_6;
    }
    M2C_ERROR(/* unknown instruction: ei */);
block_6:
    return 0xFFFFFFFFU;
block_7:
    D_003EC614 = temp_s0;
    if (temp_s1 == 0) {
        goto block_9;
    }
    M2C_ERROR(/* unknown instruction: ei */);
block_9:
    return temp_v0;
}
