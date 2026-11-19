/* Draft (not built): func_002E8190 at 0x002E8190, size 0xDC, segment menu/mn_Logomark (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_Logomark/func_002E8190.s */

void func_002E8190(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_s0;
    func_002E7400(temp_s0, 1.0f);
    temp_s0 = arg0 + 0x30;
    *(f32 *)((u8 *)temp_s0 + 4) = (f32)(*(f32 *)((u8 *)temp_s0 + 4) - gFrameDelta);
    if ((*D_00492FCE | *D_00493086) & 8) {
        *(f32 *)((u8 *)temp_s0 + 4) = 50.0f;
        var_v1 = (int *)&Logomark_StopMovie;
        *(s32 *)((u8 *)temp_s0 + 8) = 1;
        if (&Logomark_StopMovie == NULL) {
            var_v1 = NULL;
        }
        goto block_10;
    }
    if (amSofdec_GetStat(*(u8 **)((u8 *)temp_s0 + 0xC)) != 3) {
        if (*(f32 *)((u8 *)temp_s0 + 4) <= 0.0f) {
            goto block_8;
        }
    } else {
        block_8:
        var_v1 = (int *)&Logomark_StopMovie;

        if (&Logomark_StopMovie == NULL) {
            var_v1 = NULL;
        }
        block_10:
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002E76C0 (src/menu/mn_Logomark.c), similarity 0.60.
 * It is the template below (not built). */
#if 0
void func_002E76C0(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6BE0(1.0f, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = gFrameDelta;
    }
    *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
    if (*(f32 *)(s0 + 0x4) < 0.0f) {
        *(s32 *)(s0 + 0x4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7630 == 0) ? 0 : (void *)func_002E7630;
    }
}
#endif
