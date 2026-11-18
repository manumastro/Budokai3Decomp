/* Draft (not built): func_00108248 at 0x00108248, size 0x290, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_00108248.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32);                       /* extern */

void func_00108248(u8 *arg0, u8 *arg1) {
    u8 *sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_v1;

    sp0 = arg0;
    var_s2 = *(s32 *)((u8 *)arg1 + 0) & 0x0FFFFFFF;
    sp8 = *(s32 *)((u8 *)arg0 + 0xEC) & 0x0FFFFFFF;
    if (*(s32 *)((u8 *)sp0 + 0x184) != 3) {
        temp_a0 = *(s32 *)((u8 *)sp0 + 0xF4);
        var_v1 = temp_a0;
        if (temp_a0 == 0) {
            goto block_4;
        }
        var_fp = (temp_a0 >> 4) * 0xC0;
        var_s5 = ((s32) *(s32 *)((u8 *)arg1 + 0x10) >> 1) * 0x180;
        sp4 = 2;
        var_s4 = var_s5 >> 4;
    } else {
        var_v1 = *(s32 *)((u8 *)sp0 + 0xF4);
block_4:
        var_s5 = *(s32 *)((u8 *)arg1 + 0x10) * 0x180;
        var_s4 = var_s5 >> 4;
        if (var_v1 != 0) {
            var_fp = (var_v1 >> 4) * 0x180;
        } else {
            var_fp = var_s5;
        }
        sp4 = 1;
    }
    var_a1 = 0;
    if (sp4 != 0) {
        do {
            var_s1 = sp8;
            var_s0 = 0;
            if (*(s32 *)((u8 *)arg1 + 0xC) > 0) {
                var_s7 = var_a1 + 1;
                do {
                    temp_v0 = DI();
                    *(s32 *)0x1000D480 = 0;
                    *(s32 *)0x1000D410 = var_s2;
                    *(s32 *)0x1000D420 = var_s4;
                    *(s32 *)0x1000D400 = 0x101;
                    if (temp_v0 != 0) {
                        EI(0x1000D420, 0x1000D400);
                    }
                    var_s0 += 1;
loop_16:
                    if (*(u8 *)0x1000D400 & 0x100) {
                        goto loop_16;
                    }
                    temp_v0_2 = DI();
                    *(s32 *)0x1000D080 = 0;
                    *(s32 *)0x1000D010 = var_s1;
                    *(s32 *)0x1000D020 = var_s4;
                    *(s32 *)0x1000D000 = 0x100;
                    if (temp_v0_2 != 0) {
                        EI(0x1000D020, 0x1000D000);
                    }
loop_20:
                    if (*(u8 *)0x1000D000 & 0x100) {
                        goto loop_20;
                    }
loop_22:
                    if (*(u8 *)0x1000D020 != 0) {
                        goto loop_22;
                    }
                    var_s1 += var_fp;
                    var_s2 += var_s5;
                } while (var_s0 < *(s32 *)((u8 *)arg1 + 0xC));
            } else {
                var_s7 = var_a1 + 1;
            }
            var_a1 = var_s7;
            sp8 += *(s32 *)((u8 *)sp0 + 0xF8) * 0xC0;
        } while (var_a1 < sp4);
    }
}
