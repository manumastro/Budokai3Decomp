/* Draft (not built): func_001B0810 at 0x001B0810, size 0x2F8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2E0, original 0x2F8
 * Original: asm/nonmatchings/battle/btl_main/func_001B0810.s */

// src/battle/btl_main.c func_001B0810 size diff=99/184
extern void func_001C81D0(Fighter *f, s32 i);
s32 func_001E5AD0(void *);
s32 func_0021C5D0(s32);
extern void func_001E57F0(int);
extern void func_0029D8B0(int, int);
s32 func_001B0810(s32 *arg0) {
    s32 sp80;
    s32 spA0;
    s32 spA4;
    s32 spB0;
    s16 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s5;

    var_s5 = (u8 *)(gBattle);
    if (var_s5 == NULL) {
        return 0;
    }
    if (*(s16 *)((u8 *)var_s5 + 0x8948) != *arg0) {
        return 0;
    }
    var_s6 = 0;
    temp_v0 = *(s16 *)((u8 *)var_s5 + 0x8952);
    var_s4 = 0;
    if ((temp_v0 != 0) && (*(s8 *)((u8 *)((((s64) ((s64) temp_v0 << 0x30) >> 0x30) * 0x2020) + var_s5) + 0x808) < 0)) {
        var_s6 = 1;
    }
    *(s16 *)((u8 *)var_s5 + 0x8944) = 0;
    var_s3 = 0;
    *(s16 *)((u8 *)var_s5 + 0x894C) = 0;
    *(s16 *)((u8 *)var_s5 + 0x894E) = 0;
    *(s16 *)((u8 *)var_s5 + 0x8952) = 0;
    *(s8 *)((u8 *)var_s5 + 0x8AAD) = 0;
    *(s8 *)((u8 *)var_s5 + 0x8AAE) = 1;
    *(s8 *)((u8 *)var_s5 + 0x8AAF) = 1;
    *(s8 *)((u8 *)var_s5 + 0x8AB2) = 0;
    *(s8 *)((u8 *)var_s5 + 0x8AB3) = -1;
    *(s32 *)((u8 *)var_s5 + 0x892C) = 0;
    *(s8 *)((u8 *)var_s5 + 0x8AB8) = 0;
    temp_v1 = *(s32 *)((u8 *)var_s5 + 0x88D8);
    var_a1 = 0;
    if (temp_v1 > 0) {
        var_a0 = var_s5;
loop_9:
        if ((*(s8 *)((u8 *)var_a0 + 0x206F) >= 0) || (*(s32 *)((u8 *)(var_a0 + 0x830) + 0x1AC4) > 0)) {
            var_s3 = 1;
        } else {
            var_a1 += 1;
            var_a0 += 0x2020;
            if (var_a1 < temp_v1) {
                goto loop_9;
            }
        }
    }
    var_s2 = 0;
    if (temp_v1 > 0) {
        var_s1 = var_s5;
        do {
            var_s0 = var_s1 + 0x830;
            if (*(s8 *)((u8 *)var_s1 + 0x2828) >= 0) {
                if ((var_s6 == 0) && (*(s8 *)((u8 *)var_s5 + 0x8AB1) == 0) && (var_s3 == 0)) {
                    *(s8 *)((u8 *)var_s0 + 0x1FF8) = 2;
                }
                *(s16 *)((u8 *)var_s0 + 0xCB6) = 0;
            }
            *(s8 *)((u8 *)var_s0 + 0xCBE) = 0;
            *(s32 *)((u8 *)var_s0 + 0x1A08) = 0;
            *(s8 *)((u8 *)var_s0 + 0x1A5E) = -1;
            *(s8 *)((u8 *)var_s0 + 0x1A64) = 0;
            *(s8 *)((u8 *)var_s0 + 0x2004) = 1;
            func_001E5AD0(var_s0 + 0xCD0);
            if (*(s32 *)((u8 *)var_s0 + 0x1AC4) > 0) {
                var_s4 = 1;
                *(s8 *)((u8 *)var_s5 + 0x8AAD) = 1;
            }
            func_001C81D0((void *)(var_s0), -1);
            var_s2 += 1;
            var_s1 += 0x2020;
        } while (var_s2 < *(s32 *)((u8 *)var_s5 + 0x88D8));
    }
    func_00219790(0);
    if (*(s8 *)((u8 *)var_s5 + 0x8AB1) == 0) {
        if (var_s4 != 0) {
            if (*(s16 *)((u8 *)var_s5 + 0x8950) == 0) {
                goto block_28;
            }
        } else {
block_28:
            memset(&sp80, 0, 0x50);
            spB0 = 2;
            spA0 = 0;
            spA4 = 0;
            func_001A8770(1, &sp80);
        }
        if (var_s4 == 0) {
            func_0021C5D0(3);
        }
    }
    *(s16 *)((u8 *)var_s5 + 0x8950) = 0;
    func_001E57F0(1);
    func_0029D8B0(-5, 0);
    return 0;
}
