/* Draft (not built): mwPlyStartAfs at 0x00182ED0, size 0x9C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyStartAfs.s */

s32 func_001830D8(void *, s32, s32);            /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 mwPlyGetInputSj(void *);                        /* extern */
extern s32 D_00466098;

void mwPlyStartAfs(u8 *arg0, s32 arg1, s32 arg2) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466098);
        return;
    }
    (*(s32 (**)(u8 *, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x3C))(arg0, mwPlyGetInputSj(arg0));
    func_001830D8(arg0, arg1, arg2);
    *(s32 *)((u8 *)arg0 + 0x1C0) = 1;
}

/* Similar function already in C: func_00173230 (src/cri/mpv.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_00173230(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x158;
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF03020E);
        return;
    }
    *arg1 = *(s32 *)((u8 *)temp_s0 + 0xD0);
    *arg2 = *(s32 *)((u8 *)temp_s0 + 0xD4);
}
#endif
