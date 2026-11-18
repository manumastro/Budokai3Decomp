/* Draft (not built): func_0018F150 at 0x0018F150, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018F150.s */

void *func_0018F670();                              /* extern */

void func_0018F150(u8 *arg0) {
    s32 temp_v1;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_v0;

    temp_v0 = func_0018F670();
    if ((temp_v0 != NULL) && (temp_a2 = *(u8 **)((u8 *)arg0 + 0x1C2C), temp_a3 = arg0 + 0xCC0, temp_v1 = *(s32 *)((u8 *)temp_a2 + 0x10), temp_a0 = arg0 + 0x90C, (temp_v1 != 0x7FFFFFFF))) {
        *(s32 *)((u8 *)temp_a3 + 0x150) = (s32) (temp_v1 - *(s32 *)((u8 *)temp_v0 + 0x18));
        if (*(s32 *)((u8 *)temp_v0 + 0) == 0) {
            *(s32 *)((u8 *)temp_v0 + 4) = (s32) (*(s32 *)((u8 *)temp_a0 + 0x18) * 0x32);
            *(s32 *)((u8 *)temp_v0 + 8) = (s32) *(s32 *)((u8 *)temp_a0 + 0x1C);
            *(s32 *)((u8 *)temp_v0 + 0xC) = (s32) *(s32 *)((u8 *)temp_a2 + 4);
            *(s32 *)((u8 *)temp_v0 + 0x10) = (s32) *(s32 *)((u8 *)temp_a2 + 8);
            *(s32 *)((u8 *)temp_v0 + 0x14) = (s32) *(s32 *)((u8 *)temp_a3 + 0x14C);
            *(s32 *)((u8 *)temp_v0 + 0x18) = (s32) *(s32 *)((u8 *)temp_a2 + 0xC);
            *(s32 *)((u8 *)temp_v0 + 0x1C) = (s32) *(s32 *)((u8 *)temp_a2 + 0x20);
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) *(s32 *)((u8 *)temp_a2 + 0x24);
        }
    }
}
