/* Draft (not built): func_00191120 at 0x00191120, size 0xBC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00191120.c:9: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00191120.s */

s32 func_0017B420(s32);                             /* extern */
s32 func_001911E0(s32, s32);                /* extern */

void func_00191120(s32 arg0, u8 **arg1) {
loop_3:
    (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*arg1) + 0x18))(arg1, 1, 4, sp);
    if ((sp4 == 4) && (func_0017B420(sp0) == 0x80)) {
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x20))(arg1, 0, sp);
        func_001911E0(arg0, 4);
        goto loop_3;
    }
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
}
