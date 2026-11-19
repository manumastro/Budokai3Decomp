/* Draft (not built): func_002CE500 at 0x002CE500, size 0x12C, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE500.s */

// src/unk/unk_2CD5F0.c func_002CE500 diff diff=54/75
void func_002CE500(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s32 *var_t3;
    s32 temp_a3;
    s32 temp_t2;
    u32 var_t1;
    u8 *temp_a0;
    u8 *temp_t0;

    var_t3 = *(s32 **)((u8 *)arg0 + 0x30);
    if (var_t3 != NULL) {
        temp_t2 = *var_t3;
        var_t1 = 0;
loop_2:
        temp_a3 = *(s32 *)((u8 *)var_t3 + 4);
        if (!((var_t1 >> temp_a3) & 1)) {
            temp_t0 = arg0 + 0x30 + ((temp_a3 - 6) * 4);
            *(f32 *)((u8 *)temp_t0 + 0x10) = (f32) (*(f32 *)((u8 *)temp_t0 + 0x10) + (*(f32 *)((u8 *)var_t3 + 8) * (*(f32 *)(D_0051CD24))));
            *(f32 *)((u8 *)temp_t0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_t0 + 0x20) + (*(f32 *)((u8 *)var_t3 + 0xC) * (*(f32 *)(D_0051CD24))));
            temp_f2 = *(f32 *)((u8 *)temp_t0 + 0x10);
            if (!(temp_f2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_t0 + 0x10) = 0.0f;
            } else if (temp_f2 < 0.0f) {
                *(f32 *)((u8 *)temp_t0 + 0x10) = 1.0f;
            }
            temp_f2_2 = *(f32 *)((u8 *)temp_t0 + 0x20);
            if (!(temp_f2_2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_t0 + 0x20) = 0.0f;
            } else if (temp_f2_2 < 0.0f) {
                *(f32 *)((u8 *)temp_t0 + 0x20) = 1.0f;
            }
            var_t1 |= 1 << *(s32 *)((u8 *)var_t3 + 4);
            if (var_t1 != 0x3C00) {
                goto block_13;
            }
        } else {
block_13:
            var_t3 += 0x10;
            if (*var_t3 == temp_t2) {
                goto loop_2;
            }
        }
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x10);
    if (*(s32 *)((u8 *)temp_a0 + 0x10) != 0) {
        func_001F5CB0(temp_a0);
    }
}
