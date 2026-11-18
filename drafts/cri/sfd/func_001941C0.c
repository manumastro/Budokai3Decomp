/* Draft (not built): func_001941C0 at 0x001941C0, size 0x110, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 58 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_001941C0.s */

void *func_00194720();                              /* extern */

void func_001941C0(u8 *arg0, u8 *arg1, u8 **arg2) {
    u8 *temp_a1;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v0 = func_00194720();
    temp_a1 = arg1 + 0x58;
    *(s32 *)((u8 *)temp_v0 + 0) = 1;
    temp_v0_2 = temp_v0 + 4;
    *(s32 *)((u8 *)temp_v0_2 + 0x10) = (s32) *(s32 *)((u8 *)temp_a1 + 0x18);
    *(s32 *)((u8 *)temp_v0 + 4) = (s32) *(s32 *)((u8 *)arg1 + 0x58);
    *(s32 *)((u8 *)temp_v0_2 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)temp_v0_2 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *arg2 = temp_v0_2;
    *(u8 **)((u8 *)temp_s3 + 0x70) = arg1;
    *(s32 *)((u8 *)temp_v0_2 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
    *(s32 *)((u8 *)temp_v0_2 + 0x1C) = (s32) *(s32 *)((u8 *)arg0 + 0x38);
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) *(s32 *)((u8 *)arg1 + 8);
    *(s32 *)((u8 *)temp_v0_2 + 0x14) = (s32) *(s32 *)((u8 *)arg1 + 0x38);
    *(s32 *)((u8 *)temp_v0_2 + 0x38) = (s32) *(s32 *)((u8 *)arg1 + 0x54);
    *(s32 *)((u8 *)temp_v0_2 + 0x18) = (s32) *(s32 *)((u8 *)arg1 + 0x3C);
    *(s32 *)((u8 *)temp_v0_2 + 0x24) = (s32) *(s32 *)((u8 *)arg1 + 0x40);
    *(s32 *)((u8 *)temp_v0_2 + 0x28) = (s32) *(s32 *)((u8 *)arg1 + 0x44);
    *(s32 *)((u8 *)temp_v0_2 + 0x2C) = (s32) *(s32 *)((u8 *)arg1 + 0x48);
    *(s32 *)((u8 *)temp_v0_2 + 0x30) = (s32) *(s32 *)((u8 *)arg1 + 0x4C);
    *(s32 *)((u8 *)temp_v0_2 + 0x34) = (s32) *(s32 *)((u8 *)arg1 + 0x50);
    *(s32 *)((u8 *)temp_v0_2 + 0x3C) = (s32) *(s32 *)((u8 *)temp_a1 + 0x38);
    *(s32 *)((u8 *)temp_v0_2 + 0x40) = (s32) *(s32 *)((u8 *)temp_a1 + 0x3C);
    *(s32 *)((u8 *)temp_v0_2 + 0x44) = (s32) *(s8 *)((u8 *)temp_a1 + 0x55);
    *(s32 *)((u8 *)temp_v0_2 + 0x48) = (s32) *(s8 *)((u8 *)temp_a1 + 0x56);
    *(s32 *)((u8 *)temp_v0_2 + 0x54) = (s32) *(s32 *)((u8 *)temp_a1 + 0x44);
    *(s32 *)((u8 *)temp_v0_2 + 0x4C) = (s32) *(s8 *)((u8 *)temp_a1 + 0x57);
    *(s32 *)((u8 *)temp_v0_2 + 0x50) = (s32) *(s32 *)((u8 *)temp_a1 + 0x40);
}
