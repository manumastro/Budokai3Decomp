/* Draft (not built): func_001045A8 at 0x001045A8, size 0x180, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 140 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00107E58();
s32 func_001095D0();

s64 func_001045A8(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = 0;
    if ((*(s64 *)0x10002000 < 0) && !(*(s32 *)0x10002010 & 0x4000)) {
loop_3:
        temp_a0 = *(s32 *)0x10002020;
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x82C);
        if ((temp_a1 == 0x20000000) || (temp_a1 == 0x30000000) || (temp_a1 == 0x40000000)) {
            var_v0 = var_a2;
            if ((u32) ((((u32) (temp_a0 & 0xFF00) >> 1) + ((u32) (temp_a0 & 0x30000) >> 9)) - (temp_a0 & 0x7F)) < 0x20U) {
                var_v0 = var_a2;
                if (*(s32 *)0x1000B420 == 0) {
                    func_00107E58(*(s32 *)((u8 *)arg0 + 0x868), temp_a1, var_a2, 0x30000);
                    var_a2 = 0;
                    if (*(s32 *)((u8 *)arg0 + 0x878) == 0) {
                        goto block_9;
                    }
                    goto block_12;
                }
            }
            goto block_10;
        }
block_9:
        var_v0 = var_a2;
block_10:
        var_a2 += 1;
        if ((var_v0 >= 0x1F5) && (func_00107E58(*(s32 *)((u8 *)arg0 + 0x868)), var_a2 = 0, (*(s32 *)((u8 *)arg0 + 0x878) != 0))) {
block_12:
            func_001095D0();
        } else if ((*(u8 *)0x10002000 < 0) && !(*(u8 *)0x10002010 & 0x4000)) {
            goto loop_3;
        }
    }
    *(s32 *)((u8 *)arg0 + 0x82C) = 0;
    return *(u8 *)0x10002000;
}
