/* Draft (not built): func_001048A0 at 0x001048A0, size 0x94, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s64 func_001045A8(void *);                          /* extern */
s32 func_00104938();                            /* extern */

void func_001048A0(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s64 temp_v0;

    func_00104938();
    temp_s0 = arg1 | 0x40000000;
    *(s32 *)0x10002000 = temp_s0;
    temp_s0_2 = temp_s0 & 0xF0000000;
    *(s32 *)((u8 *)arg0 + 0x82C) = temp_s0_2;
    if (temp_s0_2 == 0x20000000) {
        goto block_5;
    }
    if (temp_s0_2 != 0x30000000) {
        goto block_3;
    }
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    goto block_7;
block_3:
    if (temp_s0_2 != 0x40000000) {
        goto block_6;
    }
block_5:
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    goto block_7;
block_6:
    *(s32 *)((u8 *)arg0 + 0x828) = 1;
block_7:
    temp_v0 = (s64) (func_001045A8(arg0) << 0x20) >> 0x20;
    *(s32 *)((u8 *)arg0 + 0x84C) = 0x20;
    *(s32 *)((u8 *)arg0 + 0x848) = (s32) temp_v0;
    return;
}
