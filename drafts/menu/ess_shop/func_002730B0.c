/* Draft (not built): func_002730B0 at 0x002730B0, size 0x158, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 198: temp_a1 = *(*(s32 *)((u8 *)gEssShop + 0x54) + arg1);
 * Original: asm/nonmatchings/menu/ess_shop/func_002730B0.s */

// src/menu/ess_shop.c func_002730B0 cerr diff=-1/0
void func_002730B0(u8 *arg0, s32 arg1) {
    s16 var_a2_2;
    s32 temp_t0;
    s32 var_a2;
    s32 var_v1;
    u16 temp_a3;
    u8 temp_a1;
    u8 *temp_v1;

    *(s32 *)((u8 *)arg0 + 4) = arg1;
    temp_t0 = arg1 * 0x28;
    temp_v1 = &D_004E0660 + temp_t0;
    if (*(s32 *)((u8 *)arg0 + 0) != 0x242) {
        temp_a3 = *(u16 *)((u8 *)temp_v1 + 0x26);
        if (temp_a3 == 0) {
            var_a2 = *(&D_00452FA0 + (((s32) *(u8 *)((u8 *)temp_v1 + 0xA) >> 4) * 4));
        } else {
            var_a2 = temp_a3 * 0x64;
        }
        *(s32 *)((u8 *)arg0 + 8) = var_a2;
        var_a2_2 = *(&D_004E066A + temp_t0) & 3;
    } else {
        *(s32 *)((u8 *)arg0 + 8) = 0x1388;
        var_a2_2 = -1;
    }
    *(s16 *)((u8 *)arg0 + 0xC) = var_a2_2;
    temp_a1 = *(*(s32 *)((u8 *)gEssShop + 0x54) + arg1);
    switch (temp_a1) {                              /* irregular */
    case 0:
        *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) & ~4);
        var_v1 = *(s32 *)((u8 *)arg0 + 0x10) | 2;
        break;
    case 1:
        if (*(u8 *)((u8 *)temp_v1 + 0xB) & 8) {
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) & ~2);
            var_v1 = *(s32 *)((u8 *)arg0 + 0x10) | 4;
        } else {
        default:
            var_v1 = *(s32 *)((u8 *)arg0 + 0x10) & ~6;
        }
        break;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = var_v1;
    if (*(s32 *)((u8 *)arg0 + 0) == 0x242) {
        *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) & ~6);
    }
}
