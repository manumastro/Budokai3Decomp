/* Draft (not built): func_002DF4E0 at 0x002DF4E0, size 0xE4, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 282: if (D_004E05E0 == 0x5A) { @ 278: if (D_004E05E0 == 0x3C) {
 * Original: asm/nonmatchings/menu/mn_option/func_002DF4E0.s */

// src/menu/mn_option.c func_002DF4E0 cerr diff=-1/0
void func_002DF4E0(void) {
    s16 var_v1;
    s32 var_a0;

    if (D_004E05E0 == 0x3C) {
        *(s16 *)((u8 *)gOptionWork + 0x3E8) = 0;
    } else {
        var_v1 = 1;
        if (D_004E05E0 == 0x5A) {

        } else {
            var_v1 = 2;
            if (D_004E05E0 == 0x78) {

            } else {
                var_v1 = 3;
                if (D_004E05E0 == 0xB4) {

                } else {
                    var_v1 = 4;
                }
            }
        }
        *(s16 *)((u8 *)gOptionWork + 0x3E8) = var_v1;
    }
    *(s8 **)((u8 *)gOptionWork + 0x3D0) = D_004E05DC[0];
    *(u8 **)((u8 *)gOptionWork + 0x3D4) = (u8 *) (gOptionWork + 0x3E8);
    *(s8 **)((u8 *)gOptionWork + 0x3D8) = (s8 *) (D_004E05DC + 2);
    var_a0 = 5;
    if ((s32) D_0051168A > 0) {
        var_a0 = 6;
        if ((s32) *(u8 *)((u8 *)D_004E6560 + 0x2B12B) > 0) {
            var_a0 = 7;
            if ((s32) *(u8 *)((u8 *)D_004E6560 + 0x2B12C) > 0) {
                var_a0 = 8;
            }
        }
    }
    *(s32 *)((u8 *)gOptionWork + 0x3DC) = var_a0;
    *(s32 *)((u8 *)gOptionWork + 0x3E0) = 5;
    *(s32 *)((u8 *)gOptionWork + 0x3E4) = 5;
}
