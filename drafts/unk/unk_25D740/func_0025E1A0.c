/* Draft (not built): func_0025E1A0 at 0x0025E1A0, size 0xD0, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25D740/func_0025E1A0.s */

void func_0025E1A0(ScrFadeTask *arg0) {
    f32 temp_f1;
    f32 var_f1;
    s32 var_v1;
    u8 *temp_s0;
    temp_s0 = (unsigned char *)(arg0 + 0x30);
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        if (*(f32 *)((u8 *)temp_s0 + 8) != -1.0f) {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else
                if (!(D_004703F4 != 3)) {
                var_f1 = 1.2f;
            } else {
                var_f1 = 1.0f;
            }
            temp_f1 = *(f32 *)((u8 *)temp_s0 + 4) + var_f1;
            *(f32 *)((u8 *)temp_s0 + 4) = temp_f1;
            if (!(temp_f1 < *(f32 *)((u8 *)temp_s0 + 8))) {
                amTask_Kill((ScrTask *)arg0);
            }
        }
        func_0020EA70(*(s32 *)((u8 *)arg0 + 0x30));
    }
}

/* Similar function already in C: Bscr_DrawEffectPrio (src/unk/unk_25D740.c), similarity 0.85.
 * It is the template below (not built). */
#if 0
void Bscr_DrawEffectPrio(ScrFadeTask *task) {
    ScrFade *f = &task->fade;

    if (!Scr_IsPaused() && f->end != -1.0f) {
        f->cur += Scr_GetSpeed();
        if (!(f->cur < f->end)) {
            amTask_Kill((ScrTask *)task);
        }
    }
    func_0020EC70(f->id);
}
#endif
