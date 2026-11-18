/* Draft (not built): func_00272E20 at 0x00272E20, size 0x290, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp' mwccps2.exe Compiler: 215: var_a3_3 = sp; @ 197: var_a3_2 = sp;
 * Original: asm/nonmatchings/menu/ess_shop/func_00272E20.s */

// src/menu/ess_shop.c func_00272E20 cerr diff=-1/0
void func_00272E20(void) {
    s16 temp_t3;
    s16 temp_t4;
    s32 *temp_t2;
    s32 *var_a3_2;
    s32 *var_a3_3;
    s32 *var_t3;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    s32 temp_t2_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t4;
    s32 var_t5;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_t0;
    u8 *temp_t6;
    u8 *var_a2;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_a3;

    var_t1 = 0;
    var_v1 = 0xF;
    temp_t0 = (u8 *)(gEssShop + 0x74);
    var_a3 = temp_t0 + 0x12C;
    do {
        if (*(s32 *)((u8 *)var_a3 + 4) == 0) {
            var_t2 = var_v1;
            if (var_v1 < 0xF) {
                var_a2 = temp_t0 + (var_v1 * 0x14);
                do {
                    var_t2 += 1;
                    *(s32 *)((u8 *)var_a2 + 0) = (s32) *(s32 *)((u8 *)var_a2 + 0x14);
                    *(s32 *)((u8 *)var_a2 + 4) = (s32) *(s32 *)((u8 *)var_a2 + 0x18);
                    *(s32 *)((u8 *)var_a2 + 8) = (s32) *(s32 *)((u8 *)var_a2 + 0x1C);
                    *(s16 *)((u8 *)var_a2 + 0xC) = (s16) *(s16 *)((u8 *)var_a2 + 0x20);
                    *(s16 *)((u8 *)var_a2 + 0xE) = (s16) *(s16 *)((u8 *)var_a2 + 0x22);
                    *(s32 *)((u8 *)var_a2 + 0x10) = (s32) *(s32 *)((u8 *)var_a2 + 0x24);
                    var_a2 += 0x14;
                } while (var_t2 < 0xF);
            }
            temp_a0 = temp_t0 + (var_t2 * 0x14);
            *(s32 *)((u8 *)temp_a0 + 0) = 0;
            *(s32 *)((u8 *)temp_a0 + 4) = 0;
        } else {
            var_t1 += 1;
        }
        var_v1 -= 1;
        var_a3 -= 0x14;
    } while (var_v1 >= 0);
    var_a1 = 0;
    *(s32 *)((u8 *)gEssShop + 0x6C) = var_t1;
    var_a2_2 = (u8 *)(gEssShop + 0x74);
    if (var_t1 > 0) {
        var_a3_2 = sp;
        do {
            temp_t0_2 = *(s32 *)((u8 *)var_a2_2 + 0);
            if (temp_t0_2 != 0x242) {
                var_t0 = (temp_t0_2 & 0x3FF) | (((*(u8 *)((u8 *)(&D_004E0660 + (*(s32 *)((u8 *)var_a2_2 + 4) * 0x28)) + 0xA) & 3) << 0x1C) | (((u64) (((*(u32 *)((u8 *)var_a2_2 + 8) / 100) + ((u32) *(u32 *)((u8 *)var_a2_2 + 8) >> 0x1F)) << 0x2D) >> 0x2D) << 0xA));
            } else {
                var_t0 = var_a1 | 0x40000000;
            }
            *var_a3_2 = var_t0;
            var_a1 += 1;
            var_a3_2 += 4;
            var_a2_2 += 0x14;
        } while (var_a1 < var_t1);
    }
    temp_v1 = var_t1 - 1;
    var_a0 = 0;
    temp_a1 = (u8 *)(gEssShop + 0x74);
    if (temp_v1 > 0) {
        var_a3_3 = sp;
        var_a2_3 = temp_a1;
        do {
            var_t5 = *var_a3_3;
            var_t2_2 = var_a0 + 1;
            var_t4 = var_a0;
            if (var_t2_2 < var_t1) {
                var_t3 = (var_t2_2 * 4) + sp;
                do {
                    temp_t0_3 = *var_t3;
                    if (temp_t0_3 < var_t5) {
                        var_t5 = temp_t0_3;
                        var_t4 = var_t2_2;
                    }
                    var_t2_2 += 1;
                    var_t3 += 4;
                } while (var_t2_2 < var_t1);
            }
            if (var_t4 != var_a0) {
                temp_t0_4 = *(s32 *)((u8 *)var_a2_3 + 0);
                temp_t9 = *(s32 *)((u8 *)var_a2_3 + 4);
                temp_t2 = (var_t4 * 4) + sp;
                temp_t6 = temp_a1 + (var_t4 * 0x14);
                temp_t8 = *(s32 *)((u8 *)var_a2_3 + 8);
                temp_t4 = *(s16 *)((u8 *)var_a2_3 + 0xC);
                temp_t3 = *(s16 *)((u8 *)var_a2_3 + 0xE);
                temp_t7 = *(s32 *)((u8 *)var_a2_3 + 0x10);
                *(s32 *)((u8 *)var_a2_3 + 0) = (s32) *(s32 *)((u8 *)temp_t6 + 0);
                *(s32 *)((u8 *)var_a2_3 + 4) = (s32) *(s32 *)((u8 *)temp_t6 + 4);
                *(s32 *)((u8 *)var_a2_3 + 8) = (s32) *(s32 *)((u8 *)temp_t6 + 8);
                *(s16 *)((u8 *)var_a2_3 + 0xC) = (s16) *(s16 *)((u8 *)temp_t6 + 0xC);
                *(s16 *)((u8 *)var_a2_3 + 0xE) = (s16) *(s16 *)((u8 *)temp_t6 + 0xE);
                *(s32 *)((u8 *)var_a2_3 + 0x10) = (s32) *(s32 *)((u8 *)temp_t6 + 0x10);
                *(s32 *)((u8 *)temp_t6 + 0) = temp_t0_4;
                *(s32 *)((u8 *)temp_t6 + 4) = temp_t9;
                *(s32 *)((u8 *)temp_t6 + 8) = temp_t8;
                *(s16 *)((u8 *)temp_t6 + 0xC) = temp_t4;
                *(s16 *)((u8 *)temp_t6 + 0xE) = temp_t3;
                *(s32 *)((u8 *)temp_t6 + 0x10) = temp_t7;
                temp_t2_2 = *var_a3_3;
                *var_a3_3 = *temp_t2;
                *temp_t2 = temp_t2_2;
            }
            var_a0 += 1;
            var_a3_3 += 4;
            var_a2_3 += 0x14;
        } while (var_a0 < temp_v1);
    }
}
