/* Draft (not built): func_00116DC8 at 0x00116DC8, size 0x74, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00116DC8.c:12: `sp60' undeclared (first use in this function)
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116DC8.s */

s32 func_00116C18(s32, void *, s32);            /* extern */
s32 func_00125740(s32, void *, s32);            /* extern */
extern s32 D_00478990;

s32 func_00116DC8(s32 arg0, s32 arg1, s32 arg2) {
    if (*(s32 *)((u8 *)(&D_00478990 + ((arg1 * 0x1C) + (arg0 * 0x70))) + 0x10) == 0) {
        return 0;
    }
    func_00116C18(arg0, sp, arg0);
    func_00125740(arg2, sp, sp60);
    return sp60;
}

/* Similar function already in C: scePadEnterPressMode (src/sdk/libpad/kfiv_libpad.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
int scePadEnterPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadSetButtonInfo(port, slot, 0xFFF);
}
#endif
