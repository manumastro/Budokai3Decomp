/* Draft (not built): func_0018E288 at 0x0018E288, size 0x178, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018E288.s */

s32 func_0018E8F8();
s32 func_001999E0();

s32 func_0018E288(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s6;

    temp_s1 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s6 = arg0 + 0x1C24;
    if (func_001999E0(6) == 0) {
        return 1;
    }
    temp_s0 = *(u8 **)((u8 *)temp_s6 + 8);
    if (*(s32 *)((u8 *)temp_s0 + 0x2C) == -1) {
        *(s32 *)((u8 *)temp_s0 + 0x2C) = arg1;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x24) == -1) {
        *(s32 *)((u8 *)temp_s0 + 0x24) = arg1;
    }
    temp_v0 = func_001999E0(arg0, 0x1E);
    if (temp_v0 != -1) {
        if (func_001999E0(arg0, 0x37) == 0) {
            if (arg1 == *(s32 *)((u8 *)temp_s0 + 0x24)) {
                goto block_13;
            }
        } else if (arg1 >= *(s32 *)((u8 *)temp_s0 + 0x1C)) {

        } else {
block_13:
            *(s32 *)((u8 *)temp_s0 + 0x2C) = temp_v0;
        }
    }
    *(s32 *)((u8 *)temp_s0 + 0x1C) = arg1;
    if (*(s32 *)((u8 *)temp_s0 + 0x2C) == arg1) {
        if (temp_s1 >= 0) {
            temp_v1 = *(s32 *)((u8 *)temp_s0 + 0xC);
            temp_v0_2 = *(s32 *)((u8 *)temp_s0 + 0x10);
            *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) ((temp_s1 < temp_v0_2) ? temp_s1 : temp_v0_2);
            *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) ((temp_s1 < temp_v1) ? temp_s1 : temp_v1);
        }
        return func_0018E8F8(arg0, *(s32 *)((u8 *)temp_s6 + 0x18), arg2, arg3);
    }
    return 1;
}
