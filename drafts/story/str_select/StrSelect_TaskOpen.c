/* Draft (not built): StrSelect_TaskOpen at 0x002EC270, size 0x134, segment story/str_select (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ccps2.exe Compiler: 430: StrSelect_InitObjects(temp_s0, temp_a1, temp_a2); @ 416: *(s32 *)((u8 *)temp_s0 + 0x60) = sp38;
 * Original: asm/nonmatchings/story/str_select/StrSelect_TaskOpen.s */

// src/story/str_select.c StrSelect_TaskOpen cerr diff=-1/0
void StrSelect_TaskOpen(u8 *arg0) {
    s8 sp30;
    s32 sp31;
    s32 *var_v1;
    f32 temp_f1;
    s32 temp_a2;
    s32 temp_v0;
    s32 var_v0;
    s64 temp_v1;
    u8 temp_a1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    StrSelect_Draw((struct StrSelectWork *)(temp_s0));
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x54) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        func_0027DAF0(*(s32 *)((u8 *)temp_s0 + 8), &sp30);
        temp_v1 = (s64) (func_0027DAE0(*(s32 *)((u8 *)temp_s0 + 8)) << 0x38) >> 0x38;
        *(s8 *)((u8 *)temp_s0 + 0x5F) = sp30;
        *(s8 *)((u8 *)temp_s0 + 0x58) = (s8) *(s8 *)((u8 *)(&sp31) + 0);
        *(s8 *)((u8 *)temp_s0 + 0x59) = (s8) *(s8 *)((u8 *)(&sp31) + 1);
        *(s8 *)((u8 *)temp_s0 + 0x5A) = (s8) *(s8 *)((u8 *)(&sp31) + 2);
        *(s8 *)((u8 *)temp_s0 + 0x5B) = (s8) *(s8 *)((u8 *)(&sp31) + 3);
        *(s8 *)((u8 *)temp_s0 + 0x5C) = (s8) *(s8 *)((u8 *)(&sp31) + 4);
        *(s8 *)((u8 *)temp_s0 + 0x5D) = (s8) *(s8 *)((u8 *)(&sp31) + 5);
        *(s8 *)((u8 *)temp_s0 + 0x5E) = (s8) *(s8 *)((u8 *)(&sp31) + 6);
        *(s32 *)((u8 *)temp_s0 + 0x60) = sp38;
        temp_a1 = (u8) *(s8 *)((u8 *)temp_s0 + 0x5F);
        temp_a2 = *(s32 *)((u8 *)temp_s0 + 0x60);
        if (temp_v1 == 0x26) {
            var_v0 = 0;
        } else {
            temp_v0 = *(*(&D_00455760 + (temp_v1 * 4)) + ((temp_a1 & 0xFF) * 4));
            if (temp_v0 == 0) {
                var_v0 = 0;
            } else {
                var_v0 = temp_v0 - temp_a2;
            }
        }
        *(s32 *)((u8 *)temp_s0 + 0x64) = var_v0;
        StrSelect_InitObjects(temp_s0, temp_a1, temp_a2);
        var_v1 = (s32 *)(&StrSelect_TaskMain);
        if (&StrSelect_TaskMain == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
