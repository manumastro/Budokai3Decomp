/* Draft (not built): func_00193608 at 0x00193608, size 0xA8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00193608.c:22: warning: passing arg 2 of `func_00193828' makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_00193608.s */

s32 func_001936B0(s32, void *, s32 *, s32 *);   /* extern */
s32 func_00193828(void *, void *);              /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */

void func_00193608(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 sp4;
    s32 sp8;
    s32 temp_s2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C70);
    if ((u32) (*(s32 *)((u8 *)arg1 + 0x70) - 1) < 2U) {
        func_00193828(temp_s2 + 0xF40, *(u8 **)((u8 *)arg1 + 0x54));
    }
    func_001936B0(arg2, sp, &sp4, &sp8);
    if (sp0 == 3) {
        memcpy(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x54)) + 0), sp4, sp8);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x54)) + 4) = sp8;
        return;
    }
    func_00193828(*(u8 **)((u8 *)arg1 + 0x54), temp_s2 + 0xF40);
}
