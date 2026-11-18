/* Draft (not built): func_00196C38 at 0x00196C38, size 0x88, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196C38.s */

s32 func_00199818();

void func_00196C38(s32 arg0) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x9A0;
    if (*(s32 *)((u8 *)temp_s0 + 0x18) != 0) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 2) {
        goto block_3;
    }
    func_00199818(0xF, 1);
block_3:
    if (*(s32 *)((u8 *)temp_s0 + 0x14) == 0) {
        goto block_5;
    }
    return;
block_5:
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 1) {
        goto block_9;
    }
    func_00199818(arg0, 0xF, 2);
    return;
block_9:
    return;
}
