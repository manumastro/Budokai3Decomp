/* Draft (not built): func_00273210 at 0x00273210, size 0x118, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (temp_t0 + *(s16 *)((u8 *)var_v1 + 2)) != 0) && ((temp_t4 = *(s16 *)((u8 *)var_v1 + 0), temp_t3 = &D_004E0660 + (temp_t4
 * Original: asm/nonmatchings/menu/ess_shop/func_00273210.s */

// src/menu/ess_shop.c func_00273210 cerr diff=-1/0
extern s32 D_004530D0;
extern s32 D_0058F710;
s16 func_00273210(void) {
    s32 *var_v1;
    s16 temp_t4;
    s16 var_v0;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a1;
    s64 temp_t1;
    s64 var_a2;
    u8 temp_t2;
    u8 *temp_t3;

    var_v0 = -1;
    var_a2 = -1;
    var_a1 = 0xA;
    var_a0 = 0;
    var_v1 = &D_004530D0;
    temp_t0 = *(s32 *)((u8 *)gEssShop + 0x54);
loop_1:
    if ((*(temp_t0 + *(s16 *)((u8 *)var_v1 + 2)) != 0) && ((temp_t4 = *(s16 *)((u8 *)var_v1 + 0), temp_t3 = &D_004E0660 + (temp_t4 * 0x28), temp_t1 = *(s64 *)((u8 *)temp_t3 + 0), (temp_t1 == 0)) || (*(&D_0058F710 + (*(s32 *)((u8 *)gEssShop + 0x50) * 0xD680)) & temp_t1))) {
        temp_t2 = *(temp_t0 + temp_t4);
        if (temp_t2 == 0) {
            var_v0 = *(&D_004530D0 + (var_a0 * 4));
        } else {
            if (((s32) temp_t2 < (s32) *(u8 *)((u8 *)temp_t3 + 0xD)) && ((s32) temp_t2 < var_a1)) {
                var_a1 = (s32) temp_t2;
                var_a2 = (s64) ((s64) temp_t4 << 0x30) >> 0x30;
            }
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 < 0x4F) {
                goto loop_1;
            }
        }
    }
    if (var_v0 > 0) {
        return var_v0;
    }
    if (var_a2 > 0) {

    } else {
        var_a2 = -1;
    }
    return (s16) var_a2;
}
