/* Draft (not built): func_0015C840 at 0x0015C840, size 0x108, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0015C840.c:30: too few arguments to function
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C840.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */

void func_0015C840(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 **temp_s4;

    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    func_00152508();
    temp_v1 = (s32) ((arg3 < 0) int (arg3 + 0x7FF) : arg3) >> 0xB;
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    temp_v1_2 = temp_v1 + ((arg3 - (temp_v1 << 0xB)) > 0);
    *(s32 *)((u8 *)arg0 + 0xC) = arg2;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0x200;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0xFFFFF;
    *(s32 *)((u8 *)arg0 + 0x30) = temp_v1_2;
    *(s8 *)((u8 *)arg0 + 1) = 1;
    *(s8 *)((u8 *)arg0 + 2) = 0;
    *(u8 ***)((u8 *)arg0 + 4) = temp_s4;
    *(s32 *)((u8 *)arg0 + 0x10) = arg3;
    *(s32 *)((u8 *)arg0 + 0x14) = temp_v1_2;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    if (temp_s4 != NULL) {
        temp_s0 = (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*temp_s4) + 0x24))(temp_s4, 0, 0xFFFFF, 0x200);
        temp_s0_2 = temp_s0 + (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*temp_s4) + 0x24))(temp_s4, 1);
        *(s32 *)((u8 *)arg0 + 0x1C) = temp_s0_2;
        *(s32 *)((u8 *)arg0 + 0x40) = temp_s0_2;
        *(s32 *)((u8 *)arg0 + 0x18) = temp_s0_2;
    }
    *(s8 *)((u8 *)arg0 + 0) = 1;
    *(s8 *)((u8 *)arg0 + 0x44) = 0;
    func_00152520();
}
