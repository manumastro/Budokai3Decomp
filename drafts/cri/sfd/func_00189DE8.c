/* Draft (not built): func_00189DE8 at 0x00189DE8, size 0x54, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189DE8.s */

s32 func_001999E0(s32);                         /* extern */

void func_00189DE8(u8 *arg0, s32 arg1) {
    s32 (*temp_v0)(u8 *, s32);

    if (func_001999E0(6) != 0) {
        temp_v0 = *(s32 (**)(u8 *, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0x1DC4)) + 0x14);
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
    }
}
