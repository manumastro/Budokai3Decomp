/* Draft (not built): func_001899D8 at 0x001899D8, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_001899D8.s */

s32 func_00189A20(s32, void *, s32);            /* extern */

void func_001899D8(u8 *arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    if ((arg1 != 0) || (*(s32 *)((u8 *)temp_v1 + 0x2C) != 1)) {
        func_00189A20(*(s32 *)((u8 *)temp_v1 + 0), arg0 + 0xFA0, arg1);
    }
}
