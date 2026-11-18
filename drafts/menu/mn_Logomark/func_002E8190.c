/* Draft (not built): func_002E8190 at 0x002E8190, size 0xDC, segment menu/mn_Logomark (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  Compiler: 475: if (amSofdec_GetStat(*(s32 *)((u8 *)temp_s0 + 0xC)) != 3) { @ 466: if ((*D_00492FCE | D_00493086) & 8) {
 * Original: asm/nonmatchings/menu/mn_Logomark/func_002E8190.s */

// src/menu/mn_Logomark.c func_002E8190 cerr diff=-1/0
void func_002E8190(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    func_002E7400(temp_s0, 0x3F800000);
    *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) - gFrameDelta);
    if ((*D_00492FCE | D_00493086) & 8) {
        *(f32 *)((u8 *)temp_s0 + 4) = 50.0f;
        var_v1 = (s32 *)(&Logomark_StopMovie);
        *(s32 *)((u8 *)temp_s0 + 8) = 1;
        if (&Logomark_StopMovie == NULL) {
            var_v1 = NULL;
        }
        goto block_10;
    }
    if (amSofdec_GetStat(*(s32 *)((u8 *)temp_s0 + 0xC)) != 3) {
        if (*(f32 *)((u8 *)temp_s0 + 4) <= 0.0f) {
            goto block_8;
        }
    } else {
block_8:
        var_v1 = (s32 *)(&Logomark_StopMovie);
        if (&Logomark_StopMovie == NULL) {
            var_v1 = NULL;
        }
block_10:
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
