/* Draft (not built): func_00181C80 at 0x00181C80, size 0x138, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00181C80.c:45: parse error before ')' token
 * Original: asm/nonmatchings/cri/mwsfd/func_00181C80.s */

s32 func_001819F0(s32);                             /* extern */
s32 func_00181B40(s32);                             /* extern */
s32 func_00181DB8(s32);                             /* extern */
s32 func_0019D5D8(s32, u32);                        /* extern */
s32 func_0019D6A0(s32, s32, s32, void *);       /* extern */
s32 func_0019D7F0(s32, void *);                     /* extern */

void func_00181C80(u8 *arg0, s32 arg1, u32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_a2;
    u8 *temp_t0;

    *(s32 *)((u8 *)arg0 + 0xB8) = (s32) (*(s32 *)((u8 *)arg0 + 0xB8) + 1);
    if ((arg2 >= 0x800U) && (arg1 != 0) && (temp_v0 = func_0019D5D8(arg1, arg2), (temp_v0 != 0))) {
        if ((func_0019D7F0(temp_v0, sp) == 0) || (sp0 == 0)) {
            func_0019D6A0(temp_v0);
            return;
        }
        temp_s1 = func_00181DB8(temp_v0);
        temp_s0 = func_001819F0(temp_v0);
        temp_v0_2 = func_00181B40(temp_v0);
        temp_t0 = arg0 + 4;
        temp_v1 = *(s32 *)((u8 *)arg0 + 0xC0) * 0x14;
        temp_a1 = temp_v1 + 0xC0;
        temp_a2 = arg0 + temp_a1;
        *(s32 *)((u8 *)temp_a2 + 8) = (s32) (*(s32 *)((u8 *)arg0 + 0xB8) - 1);
        *(s32 *)((u8 *)temp_a2 + 0xC) = temp_s1;
        *(s32 *)((u8 *)temp_a2 + 0x10) = temp_s0;
        *(s32 *)((u8 *)(temp_v1 + temp_t0) + 0xD0) = temp_v0_2;
        *(temp_t0 + temp_a1) = 1;
        temp_v1_2 = *(s32 *)((u8 *)arg0 + 0xC0);
        temp_a1_2 = temp_v1_2 + 1;
        temp_a2_2 = temp_a1_2 < 0;
        temp_a1_3 = temp_a1_2 - (((s32) ((temp_a2_2 != 0) int (temp_v1_2 + 8) : temp_a1_2) >> 3) * 8);
        *(s32 *)((u8 *)arg0 + 0xC0) = temp_a1_3;
        func_0019D6A0(temp_v0, temp_a1_3, temp_a2_2, temp_a2);
    }
}
