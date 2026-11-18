/* Draft (not built): func_00243280 at 0x00243280, size 0x168, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00243280.s */

// src/unk/unk_23A890.c func_00243280 diff diff=71/90
void func_00243280(s32 arg0) {
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_a0_2;
    u8 *temp_a1;

    temp_a1 = D_0046FE44 + (arg0 << 7);
    temp_f2 = *(f32 *)((u8 *)temp_a1 + 0x24);
    if (!(temp_f2 < 0.43f)) {
        if ((*(s16 *)((u8 *)temp_a1 + 0x34) == 0) && (temp_a0 = *(s16 *)((u8 *)temp_a1 + 0x36), (temp_a0 != 0x28))) {
            if (temp_a0 >= 0x40) {
                goto block_5;
            }
            if (temp_f2 <= 0.57f) {
                *(f32 *)((u8 *)temp_a1 + 0x28) = (f32) (4.0f * (temp_f2 - 0.43f));
            } else {
                *(f32 *)((u8 *)temp_a1 + 0x28) = (f32) (0.56f + (1.5f * (temp_f2 - 0.57f)));
            }
        } else {
block_5:
            *(f32 *)((u8 *)temp_a1 + 0x28) = (f32) (0.5f + (temp_f2 - 0.43f));
        }
    } else if ((*(s16 *)((u8 *)temp_a1 + 0x34) == 0) && (temp_a0_2 = *(s16 *)((u8 *)temp_a1 + 0x36), (temp_a0_2 != 0x28))) {
        if (temp_a0_2 >= 0x40) {
            goto block_14;
        }
        *(f32 *)((u8 *)temp_a1 + 0x28) = 0.0f;
    } else {
block_14:
        *(f32 *)((u8 *)temp_a1 + 0x28) = (f32) (0.5f * (temp_f2 / 0.43f));
    }
    if (!(*(f32 *)((u8 *)temp_a1 + 0x28) <= 1.0f)) {
        *(f32 *)((u8 *)temp_a1 + 0x28) = 1.0f;
    }
}
