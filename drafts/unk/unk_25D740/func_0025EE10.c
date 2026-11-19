/* Draft (not built): func_0025EE10 at 0x0025EE10, size 0xCC, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25D740/func_0025EE10.s */

s32 func_0025EE10(u8 *arg0) {
    f32 temp_f1;
    f32 var_f1;
    s32 var_v0;
    var_v0 = 0;
    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    }
    if (var_v0 == 0) {
        if (*(f32 *)((u8 *)arg0 + 0x30) != -1.0f) {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else
                if (!(D_004703F4 != 3)) {
                var_f1 = 1.2f;
            } else {
                var_f1 = 1.0f;
            }
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x2C) + var_f1;
            *(f32 *)((u8 *)arg0 + 0x2C) = temp_f1;
            if (!(temp_f1 < *(f32 *)((u8 *)arg0 + 0x30))) {
                *(s32 *)((u8 *)arg0 + 0x10) = 0;
                return 1;
            }
            goto block_11;
        }
        block_11:
        func_0020EE10(*(s8 *)((u8 *)arg0 + 0x2A), 1);

        goto block_12;
    }
    block_12:
    return 3;
}

/* Similar function already in C: func_0025F160 (src/unk/unk_25D740.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
s32 func_0025F160(Obj4B0 *o) {
    if (Scr_IsPaused() == 0) {
        if (o->f30 != -1.0f) {
            o->f2C = o->f2C + Scr_GetSpeed();
            if (o->f2C >= o->f30) {
                o->f10 = NULL;
                return 1;
            }
        }
        func_0020EF80(o->f2A, 1);
    }
    return 3;
}
#endif
