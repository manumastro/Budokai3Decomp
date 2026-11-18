/* Draft (not built): func_001093A0 at 0x001093A0, size 0x148, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_001093A0.s */

s32 func_001093A0(u8 *arg1) {
    s32 temp_v1;

    *(s32 *)0x1000E010 = 8;
    *(s32 *)((u8 *)arg1 + 0) = (s32) (*(s32 *)((u8 *)arg1 + 0) + 1);
    if ((*(s32 *)0x1000B020 != 0) || (*(s32 *)0x1000B000 & 0x100)) {
        *(s32 *)((u8 *)arg1 + 4) = 1;
        M2C_SYNC();
        M2C_ERROR(/* unknown instruction: ei */);
        return 0;
    }
    temp_v1 = *(s32 *)((u8 *)arg1 + 0x10) - 1;
    if (*(s32 *)((u8 *)arg1 + 0) < temp_v1) {
        *(s32 *)0x1000B010 = *(s32 *)((u8 *)arg1 + 0xC);
        *(u8 *)0x1000B020 = 0xFFC0;
        *(u8 *)0x1000B000 = 0x100;
        *(s32 *)0x10002000 = 0x700003FF;
        *(s32 *)((u8 *)arg1 + 0xC) = (s32) ((*(s32 *)((u8 *)arg1 + 0xC) + 0xFFC00) & 0x0FFFFFFF);
    } else if (*(s32 *)((u8 *)arg1 + 0) == temp_v1) {
        *(s32 *)((u8 *)arg1 + 8) = (s32) (*(s32 *)((u8 *)arg1 + 8) - (*(s32 *)((u8 *)arg1 + 0) * 0x3FF));
        *(u8 *)0x1000B010 = (s32) *(s32 *)((u8 *)arg1 + 0xC);
        *(u8 *)0x1000B020 = (s32) (*(s32 *)((u8 *)arg1 + 8) << 6);
        *(u8 *)0x1000B000 = 0x100;
        *(u8 *)0x10002000 = (s32) (*(s32 *)((u8 *)arg1 + 8) | 0x70000000);
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: ei */);
    return 0;
}
