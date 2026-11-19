/* Draft (not built): func_001A8930 at 0x001A8930, size 0x2A0, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x250, original 0x2A0
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A8930.s */

// src/battle/btl_cmd.c func_001A8930 size diff=108/148
extern s32 func_001A8E60(s32, void *);
s32 func_001A8930(s32 arg0, u8 *arg1, s32 arg2) {
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp11C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u8 *var_s7;

    var_s7 = arg1;
    var_s5 = arg2;
    sp11C = arg0;
    if (func_001A8E60(arg0, arg1) == 0) {
        return var_s5;
    }
    sp100 = 0;
    var_s5 |= *(s32 *)((u8 *)sp11C + 8);
    if (*(s16 *)((u8 *)sp11C + 0xE) > 0) {
        spC0 = sp11C;
        do {
            spF0 = *(s32 *)((u8 *)spC0 + 0x40);
            if (func_001A8E60(spF0, var_s7) == 0) {

            } else {
                spE0 = 0;
                var_s5 |= *(s32 *)((u8 *)spF0 + 8);
                if (*(s16 *)((u8 *)spF0 + 0xE) > 0) {
                    spB0 = spF0;
                    do {
                        spD0 = *(s32 *)((u8 *)spB0 + 0x40);
                        if (func_001A8E60(spD0, var_s7) == 0) {

                        } else {
                            var_fp = 0;
                            var_s5 |= *(s32 *)((u8 *)spD0 + 8);
                            if (*(s16 *)((u8 *)spD0 + 0xE) > 0) {
                                spA0 = spD0;
                                do {
                                    var_s6 = *(s32 *)((u8 *)spA0 + 0x40);
                                    if (func_001A8E60(var_s6, var_s7) == 0) {

                                    } else {
                                        var_s4 = 0;
                                        var_s5 |= *(s32 *)((u8 *)var_s6 + 8);
                                        if (*(s16 *)((u8 *)var_s6 + 0xE) > 0) {
                                            var_s1 = var_s6;
                                            do {
                                                var_s3 = *(s32 *)((u8 *)var_s1 + 0x40);
                                                if (func_001A8E60(var_s3, var_s7) == 0) {

                                                } else {
                                                    var_s2 = 0;
                                                    var_s5 |= *(s32 *)((u8 *)var_s3 + 8);
                                                    if (*(s16 *)((u8 *)var_s3 + 0xE) > 0) {
                                                        var_s0 = var_s3;
                                                        do {
                                                            var_s5 = func_001A8930(*(s32 *)((u8 *)var_s0 + 0x40), var_s7, var_s5);
                                                            var_s2 += 1;
                                                            var_s0 += 4;
                                                        } while (var_s2 < *(s16 *)((u8 *)var_s3 + 0xE));
                                                    }
                                                }
                                                var_s4 += 1;
                                                var_s1 += 4;
                                            } while (var_s4 < *(s16 *)((u8 *)var_s6 + 0xE));
                                        }
                                    }
                                    var_fp += 1;
                                    spA0 += 4;
                                } while (var_fp < *(s16 *)((u8 *)spD0 + 0xE));
                            }
                        }
                        spB0 += 4;
                        temp_v0_2 = spE0 + 1;
                        spE0 = temp_v0_2;
                    } while (temp_v0_2 < *(s16 *)((u8 *)spF0 + 0xE));
                }
            }
            spC0 += 4;
            temp_v0 = sp100 + 1;
            sp100 = temp_v0;
        } while (temp_v0 < *(s16 *)((u8 *)sp11C + 0xE));
    }
    return var_s5;
}
