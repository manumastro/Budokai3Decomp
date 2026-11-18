/* Draft (not built): func_001950E8 at 0x001950E8, size 0x1FC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001950E8.s */

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 func_00194C28(void *, s32);                     /* extern */
s32 func_00194D48(s32, s32, s32, s32);  /* extern */
s32 setD4_CHCR(s32);                            /* extern */

s32 func_001950E8(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s5;
    s32 var_s7;

    var_s7 = 0;
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    if (*(s32 *)((u8 *)arg0 + 0x44) == 0) {
        SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
        return 0;
    }
    setD4_CHCR(5);
    var_s5 = *(s32 *)0x1000B400;
    temp_a2 = *(s32 *)((u8 *)arg0 + 8);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_hi = (s32) ((func_00194C28(arg0, *(s32 *)0x1000B410) + temp_a2) - temp_v1) % temp_a2;
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x10) - temp_hi;
    temp_hi_2 = (s32) (temp_v1 + temp_hi) % temp_a2;
    *(s32 *)((u8 *)arg0 + 0x10) = temp_v0;
    temp_a3 = temp_hi_2 + temp_v0;
    *(s32 *)((u8 *)arg0 + 0xC) = temp_hi_2;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_s3 = (s32) ((temp_a0 < 0) ? (temp_a0 + 0x7FF) : temp_a0) >> 0xB;
    var_s0 = temp_a3 % temp_a2;
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) (temp_a0 - (temp_s3 << 0xB));
    if (temp_s3 > 0) {
        temp_hi_3 = (s32) ((temp_a3 + temp_a2) - 1) % temp_a2;
        var_s7 = 1;
        func_00194D48(*(s32 *)((u8 *)arg0 + 4) + (temp_hi_3 * 0x10), *(s32 *)((u8 *)arg0 + 0) + (temp_hi_3 << 0xB), 3, 0x80);
    }
    var_s2 = 0;
    if (temp_s3 > 0) {
        do {
            func_00194D48(*(s32 *)((u8 *)arg0 + 4) + (var_s0 * 0x10), *(s32 *)((u8 *)arg0 + 0) + (var_s0 << 0xB), ((var_s2 ^ (temp_s3 - 1)) != 0) ? 3 : 0, 0x80);
            var_s2 += 1;
            var_s0 = (s32) (var_s0 + 1) % (s32) *(s32 *)((u8 *)arg0 + 8);
        } while (var_s2 < temp_s3);
    }
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x10) + temp_s3;
    *(s32 *)((u8 *)arg0 + 0x10) = temp_v0_2;
    if (temp_v0_2 != 0) {
        if (var_s7 != 0) {
            var_s5 = (var_s5 & 0x0FFFFFFF) | 0x30000000;
        }
        setD4_CHCR(var_s5 | 0x100);
    }
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
    return 1;
}
