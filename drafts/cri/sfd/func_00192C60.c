/* Draft (not built): func_00192C60 at 0x00192C60, size 0x18, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00192C60.s */

void func_00192C60(s32 arg0, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x9A0;
    *arg3 = *(s32 *)((u8 *)temp_a0 + 0xAC);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0xA8);
}
