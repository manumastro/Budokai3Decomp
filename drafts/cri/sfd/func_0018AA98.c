/* Draft (not built): func_0018AA98 at 0x0018AA98, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018AA98.c:25: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018AA98.s */

s32 func_0018AD50(s32, s32, void *, s32 *);     /* extern */

s32 func_0018AA98(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    s32 sp10;
    s32 temp_a0_2;
    u8 *temp_a0;

    *(s32 *)((u8 *)arg2 + 4) = 0;
    *(s32 *)((u8 *)arg2 + 0xC) = 0;
    temp_a0 = arg0 + 0x1280 + (arg1 * 0x74);
    *(s32 *)((u8 *)arg2 + 0x14) = 0;
    *(s32 *)((u8 *)arg2 + 0x18) = 0;
    *(s32 *)((u8 *)arg2 + 0) = 0;
    *(s32 *)((u8 *)arg2 + 8) = 0;
    *(s32 *)((u8 *)arg2 + 0x10) = 0;
    temp_a0_2 = *(s32 *)((u8 *)temp_a0 + 0x14);
    if ((*(s32 *)((u8 *)temp_a0 + 4) == 0) || (temp_a0_2 == 0)) {
        return 0;
    }
    func_0018AD50(temp_a0_2, arg3, sp, &sp10);
    *(s32 *)((u8 *)arg2 + 0) = sp0;
    *(s32 *)((u8 *)arg2 + 0xC) = sp14;
    *(s32 *)((u8 *)arg2 + 4) = sp4;
    *(s32 *)((u8 *)arg2 + 8) = sp10;
    return 0;
}
