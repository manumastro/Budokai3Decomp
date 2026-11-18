/* Draft (not built): func_00195F98 at 0x00195F98, size 0x148, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195F98.s */

s32 func_00107BE8(s32, s32, s32, s32);          /* extern */
s32 func_00107C30(s32, s32, s32, s32);          /* extern */
s32 func_0017C4D0(s32, s32, void *);                /* extern */
s32 func_0017C4D8(s32, s32, void *);                /* extern */
s32 func_001950E8(s32);                         /* extern */
s32 func_001952E8(void *);                      /* extern */
s32 func_001953E8(s32);                         /* extern */
s32 func_001957B8(void *);                          /* extern */
s32 func_00196288(void *);                      /* extern */

s32 func_00195F98(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    u8 *temp_s1;
    u8 *temp_s3;

    if (func_001957B8(arg3) == 0) {
        return func_0017C4D0(arg0, arg1, arg2);
    }
    temp_s2 = *(s32 *)((u8 *)arg3 + 0x1C70);
    temp_s6 = func_0017C4D8(arg0, arg1, arg2);
    temp_s0 = temp_s2 + 0x1038;
    temp_s3 = temp_s2 + 0xFC8;
    temp_s1 = temp_s2 + 4;
    func_001953E8(temp_s0);
    func_001950E8(temp_s0);
    temp_a0 = temp_s2 + 0xFF0;
    *(s32 *)((u8 *)temp_s3 + 0x14) = 1;
    temp_v1 = *(s32 *)((u8 *)temp_s1 + 0xC);
    temp_v0 = *(s32 *)((u8 *)temp_s1 + 8);
    temp_a3 = temp_v1 < 0;
    temp_a2 = ((s32) ((temp_v0 < 0) ? (temp_v0 + 0xF) : temp_v0) >> 4) * ((s32) ((temp_a3 != 0) ? (temp_v1 + 0xF) : temp_v1) >> 4);
    if (*(s32 *)((u8 *)arg3 + 0x38) == 2) {
        func_00107BE8(temp_a0, *(s32 *)((u8 *)arg2 + 0x20), temp_a2, temp_a3);
    } else {
        func_00107C30(temp_a0, *(s32 *)((u8 *)arg2 + 0x20), temp_a2, temp_a3);
    }
    *(s32 *)((u8 *)temp_s3 + 0x14) = 0;
    func_001952E8(temp_s3 + 0x70);
    func_00196288(arg3);
    return (*(s32 *)((u8 *)temp_s3 + 0x18) == 0) ? temp_s6 : -3;
}
