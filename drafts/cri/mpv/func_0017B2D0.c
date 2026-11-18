/* Draft (not built): func_0017B2D0 at 0x0017B2D0, size 0x98, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B2D0.s */

s32 func_00179018(s32, s32);            /* extern */
s32 func_0017B038(void *);                      /* extern */
s32 func_0017B368(void *);                      /* extern */
s32 func_0017B380(void *);                      /* extern */
s32 func_0017B3A8(void *);                      /* extern */
extern s32 func_001791F0;

u8 *func_0017B2D0(u8 *arg0) {
    func_00179018(0, 0x35);
    *(s32 *)((u8 *)arg0 + 0) = 2;
    func_0017B038(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x10) = 2;
    func_0017B368(arg0 + 0x14);
    func_0017B380(arg0 + 0x20);
    func_0017B380(arg0 + 0x40);
    func_0017B380(arg0 + 0x60);
    func_0017B380(arg0 + 0x80);
    func_0017B3A8(arg0 + 0xA0);
    *(s32 *)((u8 *)arg0 + 0xC0) = 0;
    *(s32 *)((u8 *)arg0 + 0xC8) = 0;
    *(s32 *)((u8 *)arg0 + 0xCC) = 0;
    *(s32 **)((u8 *)arg0 + 0xC4) = &func_001791F0;
    *(s32 *)((u8 *)arg0 + 0xD0) = 0;
    return arg0;
}
