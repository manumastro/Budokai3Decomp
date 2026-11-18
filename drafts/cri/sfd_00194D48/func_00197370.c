/* Draft (not built): func_00197370 at 0x00197370, size 0x80, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197370.s */

s32 func_00197370(u8 *arg0) {
    u8 **temp_a0;
    u8 *temp_s0;

    temp_s0 = arg0 + (*(s32 *)((u8 *)arg0 + 0x1CBC) * 0x74) + 0x1290;
    temp_a0 = *(u8 ***)((u8 *)temp_s0 + 4);
    return ((*(s32 (**)(u8 **, s32))((u8 *)(*temp_a0) + 0x24))(temp_a0, 1) < ((s32) (*(s32 *)((u8 *)temp_s0 + 0xC) * 0x50) / 100)) == 0;
}
