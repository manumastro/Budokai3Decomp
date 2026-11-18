/* Draft (not built): func_00104440 at 0x00104440, size 0x168, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00107E58();
s32 func_001095D0();

void func_00104440(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = 0;
    if ((*(s32 *)0x10002010 & 0x80004000) == 0x80000000) {
loop_2:
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
                        goto block_8;
                    }
                    goto block_11;
                }
            }
            goto block_9;
        }
block_8:
        var_v0 = var_a2;
block_9:
        var_a2 += 1;
        if ((var_v0 >= 0x1389) && (func_00107E58(*(s32 *)((u8 *)arg0 + 0x868)), var_a2 = 0, (*(s32 *)((u8 *)arg0 + 0x878) != 0))) {
block_11:
            func_001095D0();
        } else if ((*(u8 *)0x10002010 & 0x80004000) == 0x80000000) {
            goto loop_2;
        }
    }
    *(s32 *)((u8 *)arg0 + 0x82C) = 0;
}
