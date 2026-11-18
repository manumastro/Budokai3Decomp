/* Draft (not built): func_00191C40 at 0x00191C40, size 0xF4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00191C40.s */

s32 func_00191D38(s32, s32, s32, s32);          /* extern */
s32 func_00191F48(void *, void *, s32);         /* extern */

void func_00191C40(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s1;
    u16 temp_v1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    temp_s1 = *(s32 *)((u8 *)arg1 + 0x14);
    temp_a2 = *(s32 *)((u8 *)arg1 + 0x1C);
    temp_a1 = *(s32 *)((u8 *)arg1 + 0x10);
    if ((arg3 != 0) && (arg2 >= 0)) {
        func_00191D38(arg2, temp_a1, temp_a2, temp_s1);
        return;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x68) == 0) {
        if (*(s32 *)((u8 *)arg0 + 0x31E8) == 0) {
            *(s32 *)((u8 *)temp_s0 + 0x1C) = temp_a1;
            *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x20) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x28) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
        }
    } else {
        if (arg3 != 0) {
            func_00191F48(temp_s0 + 0x6C, temp_s0 + 0x1C, temp_a2);
            temp_v1 = *(u16 *)((u8 *)temp_s0 + 0x3A);
            *(u16 *)((u8 *)temp_s0 + 0x4A2) = temp_v1;
            *(u16 *)((u8 *)((temp_s1 * 4) + temp_s0) + 0x4A2) = temp_v1;
            return;
        }
        *(s32 *)((u8 *)temp_s0 + 0x1C) = (s32) *(s32 *)((u8 *)temp_s0 + 0x6C);
        *(s32 *)((u8 *)temp_s0 + 0x30) = (s32) *(s32 *)((u8 *)temp_s0 + 0x80);
        *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) *(s32 *)((u8 *)temp_s0 + 0x70);
        *(s32 *)((u8 *)temp_s0 + 0x24) = (s32) *(s32 *)((u8 *)temp_s0 + 0x74);
        *(s32 *)((u8 *)temp_s0 + 0x28) = (s32) *(s32 *)((u8 *)temp_s0 + 0x78);
        *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) *(s32 *)((u8 *)temp_s0 + 0x7C);
    }
}
