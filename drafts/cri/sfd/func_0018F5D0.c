/* Draft (not built): func_0018F5D0 at 0x0018F5D0, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018F5D0.c:16: warning: passing arg 2 of `func_00179148' makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_0018F5D0.s */

s32 func_00179148(s32, void *, s32, void *);        /* extern */
s32 func_0018D650(s32, s32);                /* extern */

void func_0018F5D0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp4;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v1;
    u8 *temp_s0;

    temp_s0 = arg2 + 0x24;
    temp_s1 = *arg1;
    temp_s3 = func_00179148(temp_s1, temp_s0, *(s32 *)((u8 *)temp_s0 + 0x160), sp);
    temp_v1 = func_00179148(temp_s1, arg2 + 0xD4, *(s32 *)((u8 *)temp_s0 + 0x164), sp);
    if ((temp_s3 != 0) || (temp_v1 != 0)) {
        func_0018D650(arg0, 0xFF000D0D);
    }
}
