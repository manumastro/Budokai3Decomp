/* Draft (not built): func_0018F0B8 at 0x0018F0B8, size 0x98, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018F0B8.c:20: `sp20' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018F0B8.s */

s32 func_0017AC38(s32, void *);                 /* extern */
s32 func_0017ACA8(s32, s32 *, s32);     /* extern */

void func_0018F0B8(u8 *arg0) {
    s32 sp10;
    s32 temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = arg0 + 0x90C;
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    temp_s0 = *(s32 *)((u8 *)temp_s2 + 0);
    func_0017AC38(temp_s0, sp);
    if (sp8 > 0) {
        *(s32 *)((u8 *)temp_s1 + 0x18) = sp8;
    }
    func_0017ACA8(temp_s0, &sp10, 1);
    if (sp20 != -1) {
        *(s32 *)((u8 *)temp_s1 + 0x1C) = sp20;
    }
    if (*(s32 *)((u8 *)temp_s1 + 0x24) == -1) {
        *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) *(s32 *)((u8 *)temp_s2 + 8);
    }
    if (*(s32 *)((u8 *)temp_s1 + 0x28) == -1) {
        *(s32 *)((u8 *)temp_s1 + 0x28) = (s32) *(s32 *)((u8 *)temp_s2 + 4);
    }
}
