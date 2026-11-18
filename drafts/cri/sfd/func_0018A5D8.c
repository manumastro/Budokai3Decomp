/* Draft (not built): func_0018A5D8 at 0x0018A5D8, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0018A5D8.c:16: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd/func_0018A5D8.s */

s32 func_0018A750(void *, s32, s32);        /* extern */

void func_0018A5D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_s2;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_v1 = arg3 * 4;
    temp_s2 = arg2 + temp_v1;
    temp_s0 = arg0 + (arg3 * 0x74);
    temp_s0_2 = temp_s0 + 0x10;
    func_0018A750(temp_s0, 2, *temp_s2 != 0);
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) *(arg1 + temp_v1);
    *(s32 *)((u8 *)temp_s0_2 + 4) = (s32) *temp_s2;
    *(s32 *)((u8 *)temp_s0_2 + 0x2C) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 8) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x10) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x14) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x18) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x1C) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x20) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s0_2 + 0x28) = 0;
}
