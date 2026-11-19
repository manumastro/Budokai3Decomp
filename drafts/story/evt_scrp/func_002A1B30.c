/* Draft (not built): func_002A1B30 at 0x002A1B30, size 0xEC, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC8, original 0xEC
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1B30.s */

// src/story/evt_scrp.c func_002A1B30 size diff=37/50
s32 func_002A1B30(void) {
    u8 sp[0x400];
    s32 sp40;
    s32 *var_a1;
    s32 temp_s0;
    s32 var_a2;
    u32 var_s1;
    u8 *temp_a0;
    u8 *temp_v1;

    var_s1 = 0;
    var_a2 = 0;
    var_a1 = &sp40;
    temp_s0 = *D_00511450 * 0x1210;
    do {
        if (!(*(D_004E77C4 + temp_s0) & 0x7F & (1 << var_a2))) {
            *var_a1 = var_a2;
            var_s1 += 1;
            var_a1 += 4;
        }
        var_a2 += 1;
    } while (var_a2 < 7);
    temp_v1 = (unsigned char *)(temp_s0 + D_004E6560);
    temp_a0 = ((func_0012EAE0(3) % var_s1) * 4) + sp;
    *(s8 *)((u8 *)temp_v1 + 0x1264) = (s8) (*(s8 *)((u8 *)temp_v1 + 0x1264) | ((s64) ((1 << *(s32 *)((u8 *)temp_a0 + 0x40)) << 0x38) >> 0x38));
    return *(s32 *)((u8 *)temp_a0 + 0x40);
}
