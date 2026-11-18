/* Draft (not built): func_0017E620 at 0x0017E620, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017E620.s */

extern s32 D_00424CA4;
extern s32 D_00481540;

void func_0017E620(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x2C) = (s32) (D_00481540 + 0x1120);
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (D_00481540 + 0x1100);
    *(s32 *)((u8 *)arg0 + 0x34) = (s32) (D_00481540 + 0x1160);
    *(s32 *)((u8 *)arg0 + 0x110) = (s32) D_00424CA4;
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) D_00424CA4;
}
