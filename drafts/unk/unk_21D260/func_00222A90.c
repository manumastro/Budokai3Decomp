/* Draft (not built): func_00222A90 at 0x00222A90, size 0x158, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_21D260/func_00222A90.s */

// src/unk/unk_21D260.c func_00222A90 diff diff=6/86
void func_00222A90(u8 *arg0) {
    Task21D260 *temp_v1;
    Work21D260 *temp_s0_2;
    Work21D260 *temp_s1;
    f32 temp_f1;
    s32 temp_a0;
    void (*var_v1)();
    u8 *temp_s0;

    temp_s1 = gBtlSys;
    temp_s0 = arg0 + 0x30;
    func_00224680(temp_s0);
    if (temp_s1->fE30 & 2) {
        var_v1 = func_00223660;
        if (func_00223660 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (*D_0058BB38 == 0) {
        if (*D_0058BB36 != 0) {
            *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x20) + D_00470710);
        } else {
            *(f32 *)((u8 *)temp_s0 + 0x20) = 0.0f;
        }
        return;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s0 + 0x1C) = temp_f1;
    if (!(temp_f1 < 8.0f)) {
        amTask_Kill(*(s32 *)((u8 *)arg0 + 0x30));
        amTask_Kill((s32) arg0);
        temp_s1->fEF0 = NULL;
        temp_s0_2 = gBtlSys;
        temp_s0_2->fE30 &= ~1;
        func_0022D4B0(*D_0058BAE0, 1);
        *D_0058BAE0 = 0;
        temp_v1 = temp_s0_2->fEF0;
        if (temp_v1 != NULL) {
            temp_a0 = temp_v1->f30;
            if (temp_a0 != 0) {
                amTask_Kill(temp_a0);
            }
            amTask_Kill((s32) temp_s0_2->fEF0);
            temp_v1->f30 = 0;
            temp_s0_2->fEF0 = NULL;
        }
    }
}
