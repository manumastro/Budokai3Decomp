/* Draft (not built): func_002735D0 at 0x002735D0, size 0x1E4, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); erands 'unsigned char *' / 'int' @ 282: temp_t1 = *(s32 *)((u8 *)gEssShop + 0x6C) - ((var_a0 - (gEssShop + 0x74)) / 20);
 * Original: asm/nonmatchings/menu/ess_shop/func_002735D0.s */

// src/menu/ess_shop.c func_002735D0 cerr diff=-1/0
void func_002735D0(void) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    u8 *temp_a1;
    u8 *var_a0;
    u8 *var_t1;
    u8 *var_v1;

    memset(gEssShop + 0x1B4, 0, 0x18);
    var_a0 = NULL;
    temp_a3 = *(s32 *)((u8 *)gEssShop + 0x60);
    temp_a1 = (u8 *)(gEssShop + 0x74);
    if (temp_a3 != 0) {
        var_t2 = 0;
        if (*(s32 *)((u8 *)gEssShop + 0x6C) > 0) {
            var_t1 = temp_a1;
loop_3:
            if ((temp_a3 - 1) == *(s16 *)((u8 *)var_t1 + 0xC)) {
                temp_a0 = *(s32 *)((u8 *)gEssShop + 0x64);
                if (temp_a0 > 0) {
                    var_a0_2 = ((var_t2 + temp_a0) - 1) * 0x14;
                } else {
                    var_a0_2 = (var_t2 + temp_a0) * 0x14;
                }
                goto block_15;
            }
            var_t2 += 1;
            var_t1 += 0x14;
            if (var_t2 >= *(s32 *)((u8 *)gEssShop + 0x6C)) {

            } else {
                goto loop_3;
            }
        }
    } else {
        temp_a2 = *(s32 *)((u8 *)gEssShop + 0x64);
        if (temp_a2 > 0) {
            var_a0_2 = (temp_a2 - 1) * 0x14;
        } else {
            var_a0_2 = temp_a2 * 0x14;
        }
block_15:
        var_a0 = temp_a1 + var_a0_2;
    }
    *(u8 **)((u8 *)gEssShop + 0x1B4) = var_a0;
    temp_t1 = *(s32 *)((u8 *)gEssShop + 0x6C) - ((var_a0 - (gEssShop + 0x74)) / 20);
    if (*(s32 *)((u8 *)gEssShop + 0x64) > 0) {
        var_a0 += 0x14;
    }
    var_t0 = 1;
    var_a3 = 4;
loop_19:
    if (temp_t1 >= var_t0) {
        temp_v1 = *(s32 *)((u8 *)gEssShop + 0x60);
        if (temp_v1 == 0) {
            var_v1 = (u8 *)(gEssShop + var_a3);
            goto block_24;
        }
        if ((temp_v1 - 1) == *(s16 *)((u8 *)var_a0 + 0xC)) {
            var_v1 = (u8 *)(gEssShop + var_a3);
block_24:
            *(u8 **)((u8 *)var_v1 + 0x1B4) = var_a0;
            var_t0 += 1;
            var_a0 += 0x14;
            var_a3 += 4;
            if (var_t0 >= 6) {

            } else {
                goto loop_19;
            }
        }
    }
    var_a0_3 = var_t0 * 4;
loop_28:
    if (var_t0 < 6) {
        var_t0 += 1;
        *(s32 *)((u8 *)(gEssShop + var_a0_3) + 0x1B4) = 0;
        var_a0_3 += 4;
        goto loop_28;
    }
}
