/* Draft (not built): func_00238610 at 0x00238610, size 0x174, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_light/func_00238610.s */

// src/battle/char_light.c func_00238610 diff diff=65/93
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_0046A980;
extern s32 D_0046A984;
extern s32 D_0046A988;
s32 func_00238610(s32 arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    u8 *var_s1;

    temp_s0 = arg0 * 0xC;
    temp_v1 = *(&D_0046A980 + temp_s0);
    var_a3 = 0;
    var_s1 = NULL;
    var_a1 = 0;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_s1 = *(u8 **)((u8 *)gBtlSys + 0xED4);
        break;
    case 1:                                         /* switch 1 */
        var_s1 = *(u8 **)((u8 *)gBtlSys + 0xE88);
        break;
    }
    temp_v1_2 = *(D_0046A982 + temp_s0);
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_a3 = *(s32 *)((u8 *)gBtlSys + 0xED0);
        var_a1 = 0x04030000;
        break;
    case 1:                                         /* switch 2 */
        var_a3 = *(s32 *)((u8 *)gBtlSys + 0xE84);
        var_a1 = 0x04010000;
        break;
    }
    if (var_a3 == 0) {
        return 0;
    }
    if (var_s1 != NULL) {
        D_00470704 = var_a3;
        D_0047070C = var_a1;
        D_00470708 = 0;
        amModel_SetCurrent(var_a3, var_a1);
        D_00470238 = 0;
        if (*(&D_0046A984 + temp_s0) == 0) {
            var_v0 = func_0022D670(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x1C) + (*(&D_0046A988 + temp_s0) * 4)), 0);
        } else {
            var_v0 = func_0022D860(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x14) + (*(&D_0046A988 + temp_s0) * 4)), 0);
        }
        return var_v0;
    }
    return 0;
}
