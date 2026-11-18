/* Draft (not built): func_0019F5D0 at 0x0019F5D0, size 0xA0, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 23 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F5D0.s */

s32 memset(s32, s32);                   /* extern */

void func_0019F5D0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    memset(0, 0x90);
    temp_v1 = (arg1 + 0x1F) & ~0x1F;
    *(s32 *)((u8 *)arg0 + 0x54) = arg1;
    *(s32 *)((u8 *)arg0 + 0x58) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = 1;
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) (temp_v1 + 0x400);
    *(s32 *)((u8 *)arg0 + 0x44) = (s32) (temp_v1 + 0x800);
    *(s32 *)((u8 *)arg0 + 0x48) = (s32) (temp_v1 + 0xC00);
    *(s32 *)((u8 *)arg0 + 0x64) = -1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = temp_v1;
    *(s32 *)((u8 *)arg0 + 0x70) = 0;
}
