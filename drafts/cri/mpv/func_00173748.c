/* Draft (not built): func_00173748 at 0x00173748, size 0xC8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00173748.s */

void func_00173748(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v1;
    u32 temp_v0;
    u32 var_v0;

    temp_a0 = (*(s32 *)((u8 *)arg0 + 0x50) << 0xC) | *(s32 *)((u8 *)arg0 + 4);
    temp_a2 = (*(s32 *)((u8 *)arg0 + 0x54) << 0xC) | *(s32 *)((u8 *)arg0 + 8);
    *(u32 *)((u8 *)arg0 + 0x2CC) = (u32) ((u32) (temp_a0 + 0xF) >> 4);
    *(s32 *)((u8 *)arg0 + 0x2C4) = temp_a0;
    *(s32 *)((u8 *)arg0 + 0x2C8) = temp_a2;
    if (*(s32 *)((u8 *)arg0 + 0x48) == 1) {
        *(u32 *)((u8 *)arg0 + 0x2D0) = (u32) ((u32) (temp_a2 + 0xF) >> 4);
    } else {
        temp_v0 = temp_a2 + 0x1F;
        if (*(s32 *)((u8 *)arg0 + 0x118) == 3) {
            var_v0 = (temp_v0 >> 5) * 2;
        } else {
            var_v0 = temp_v0 >> 5;
        }
        *(u32 *)((u8 *)arg0 + 0x2D0) = var_v0;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x4C);
    temp_a2_2 = *(u32 *)((u8 *)arg0 + 0x2CC) * 0x10;
    temp_a3 = *(u32 *)((u8 *)arg0 + 0x2D0) * 0x10;
    *(s32 *)((u8 *)arg0 + 0x418) = (s32) (((temp_v1 ^ 3) != 0) ? (temp_a2_2 >> 1) : temp_a2_2);
    *(s32 *)((u8 *)arg0 + 0x41C) = (s32) (((temp_v1 ^ 1) == 0) ? (temp_a3 >> 1) : temp_a3);
    *(s32 *)((u8 *)arg0 + 0x410) = temp_a2_2;
    *(s32 *)((u8 *)arg0 + 0x414) = temp_a3;
}
