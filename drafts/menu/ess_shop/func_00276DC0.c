/* Draft (not built): func_00276DC0 at 0x00276DC0, size 0x250, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 699: func_00276CE0(&spC0,(unsigned char *)(temp_s4));
 * Original: asm/nonmatchings/menu/ess_shop/func_00276DC0.s */

// src/menu/ess_shop.c func_00276DC0 cerr diff=-1/0
extern s32 gEssTrade;
void func_00276DC0(s32 arg0, s32 arg1) {
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spA0;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 *var_a0_2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    s32 var_t0;
    s32 var_v1;
    u8 *temp_a1;
    u8 *temp_s6;
    u8 *var_a0;
    u8 *var_a1_2;
    u8 *var_s0;
    u8 *var_s5;

    var_fp = 0;
    var_s7 = 0;
    spBC = arg0;
    spA0 = arg0 << 5;
    spB8 = arg1;
    temp_s6 = (unsigned char *)(gEssTrade + (spBC * 0xD680) + 0x280);
loop_1:
    temp_s4 = *(s32 *)((u8 *)(spA0 + gEssTrade + var_fp) + 0x60);
    temp_a1 = temp_s6 + temp_s4;
    if (temp_s4 != -1) {
        *(u8 *)((u8 *)temp_a1 + 0xD41D) = (u8) (*(u8 *)((u8 *)temp_a1 + 0xD41D) - 1);
        if ((s32) *(u8 *)((u8 *)temp_a1 + 0xD41D) < 0) {
            *(u8 *)((u8 *)temp_a1 + 0xD41D) = 0U;
        }
        var_s3 = 0;
        var_s5 = temp_s6;
        do {
            var_s2 = 0;
            var_s0 = var_s5;
loop_6:
            var_a2 = 0;
            var_a1 = 0;
            var_a0 = var_s0;
loop_7:
            if (*(s16 *)((u8 *)var_a0 + 0x8A2) == temp_s4) {
                var_a2 += 1;
            }
            var_a1 += 1;
            var_a0 += 2;
            if (var_a1 < 7) {
                goto loop_7;
            }
            var_v1 = 0;
            if ((s32) *(u8 *)((u8 *)temp_a1 + 0xD41D) < var_a2) {
                var_a2_2 = 0;
                var_a1_2 = var_s0;
                var_a0_2 = &spC0;
                do {
                    *(s32 *)((u8 *)var_a0_2 + 4) = (s32) *(s16 *)((u8 *)var_a1_2 + 0x8A2);
                    if (*(s32 *)((u8 *)var_a0_2 + 4) > 0) {
                        var_v1 += 1;
                    }
                    var_a2_2 += 1;
                    var_a1_2 += 2;
                    var_a0_2 += 4;
                } while (var_a2_2 < 7);
                spC0 = var_v1;
                func_0026E000((u8 *)(&spC0), 0xF0);
                func_00276CE0(&spC0,(unsigned char *)(temp_s4));
                *(s16 *)((u8 *)var_s0 + 0x8A2) = (s16) spC4;
                *(s16 *)((u8 *)var_s0 + 0x8A4) = (s16) spC8;
                *(s16 *)((u8 *)var_s0 + 0x8A6) = (s16) spCC;
                *(s16 *)((u8 *)var_s0 + 0x8A8) = (s16) spD0;
                *(s16 *)((u8 *)var_s0 + 0x8AA) = (s16) spD4;
                *(s16 *)((u8 *)var_s0 + 0x8AC) = (s16) spD8;
                *(s16 *)((u8 *)var_s0 + 0x8AE) = (s16) spDC;
            }
            var_s2 += 1;
            var_s0 += 0xE;
            if (var_s2 < 0x26) {
                goto loop_6;
            }
            var_s3 += 1;
            var_s5 += 0x216;
        } while (var_s3 < 2);
        var_s7 += 1;
        var_fp += 4;
        if (var_s7 < 4) {
            goto loop_1;
        }
    }
    if (spB8 != 0) {
        var_t0 = 0;
        var_a3 = 0;
loop_21:
        temp_v1 = *(s32 *)((u8 *)(((spBC ^ 1) << 5) + gEssTrade + var_a3) + 0x60);
        if (temp_v1 != -1) {
            var_t0 += 1;
            var_a3 += 4;
            *(s8 *)((u8 *)(temp_s6 + temp_v1) + 0xD41D) = 1;
            if (var_t0 < 4) {
                goto loop_21;
            }
        }
    }
}
