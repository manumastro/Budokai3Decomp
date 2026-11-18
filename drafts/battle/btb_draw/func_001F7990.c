/* Draft (not built): func_001F7990 at 0x001F7990, size 0x254, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ps2.exe Compiler: 7369: temp_s3 = *((D_0051CD20 << 5) + (&D_0044AE80 + (gBtbBg * 0x5C))); @ 7368: var_s2 = saved_reg_s2;
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7990.s */

// src/battle/btb_draw.c func_001F7990 cerr diff=-1/0
extern s32 D_0044AE80;
extern s32 D_004698C8;
void func_001F7990(s32 arg0) {
    s32 *temp_s3;
    s32 *var_s0;
    s32 temp_a1;
    s32 var_a3;
    s32 var_s1;
    s32 var_t0;
    s8 *var_a2;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *temp_v1;
    u8 *var_s2;

    var_s2 = saved_reg_s2;
    temp_s3 = *((D_0051CD20 << 5) + (&D_0044AE80 + (gBtbBg * 0x5C)));
    temp_s4 = *(s32 *)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 0xC) + (arg0 << 5);
    if (temp_s3 != NULL) {
        var_s1 = 0;
        if (*temp_s3 >= 0) {
            do {
                var_s0 = temp_s3 + (var_s1 * 0x10);
                if (arg0 == *var_s0) {
                    var_s2 = (char *)func_001F5FD0(0x81000000, &D_004698C8, temp_s4, func_001F32F0);
                    temp_s6 = var_s2 + 0x30;
                    memset(temp_s6, 0, 0x80);
                    *(s32 **)((u8 *)var_s2 + 0x30) = var_s0;
                    memset(temp_s6 + 0x10, 0, 0x10);
                    memset(temp_s6 + 0x20, 0, 0x10);
                    if (arg0 == *var_s0) {
                        do {
                            var_s0 += 0x10;
                            var_s1 += 1;
                        } while (arg0 == *var_s0);
                    }
                } else {
                    var_s1 += 1;
                }
            } while (*(temp_s3 + (var_s1 * 0x10)) >= 0);
        }
    } else {
        var_s2 = (char *)func_001F5FD0(0x81000000, &D_004698C8, temp_s4, func_001F3740);
        memset(var_s2 + 0x30, 0, 0x80);
    }
    *(s32 *)((u8 *)var_s2 + 0x20) = (s32) (*(s32 *)((u8 *)var_s2 + 0x20) & ~0x20);
    *(s32 *)((u8 *)var_s2 + 0x20) = (s32) (*(s32 *)((u8 *)var_s2 + 0x20) | 0x20);
    temp_v1 = **(u8 ***)((u8 *)(**(u8 ***)((u8 *)temp_s4 + 4)) + 0x1C);
    var_t0 = 0;
    if (temp_v1 != NULL) {
        temp_a1 = *(s32 *)((u8 *)temp_v1 + 0x10);
        var_a3 = 0;
        if (temp_a1 > 0) {
            var_a2 = *(s8 **)((u8 *)temp_v1 + 0x1C);
            do {
                if (*var_a2 == 0x58) {
                    var_t0 |= 0x200;
                }
                var_a3 += 1;
                var_a2 += 0x20;
            } while (var_a3 < temp_a1);
        }
    }
    *(s32 *)((u8 *)var_s2 + 0x20) = (s32) (*(s32 *)((u8 *)var_s2 + 0x20) & ~var_t0);
    *(s32 *)((u8 *)var_s2 + 0x20) = (s32) (*(s32 *)((u8 *)var_s2 + 0x20) | var_t0);
}
