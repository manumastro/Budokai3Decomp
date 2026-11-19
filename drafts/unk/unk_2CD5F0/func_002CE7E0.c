/* Draft (not built): func_002CE7E0 at 0x002CE7E0, size 0x19C, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A0, original 0x19C
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE7E0.s */

// src/unk/unk_2CD5F0.c func_002CE7E0 size diff=65/104
void func_002CE7E0(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s32 *var_t2;
    s32 temp_a2;
    s32 temp_t1;
    u32 var_t0;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_v1;

    var_t2 = *(s32 **)((u8 *)arg0 + 0x30);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x10);
    if (var_t2 != NULL) {
        temp_t1 = *var_t2;
        var_t0 = 0;
loop_2:
        temp_a2 = *(s32 *)((u8 *)var_t2 + 4);
        if (!((var_t0 >> temp_a2) & 1)) {
            temp_a3 = arg0 + 0x30 + ((temp_a2 - 6) * 4);
            *(f32 *)((u8 *)temp_a3 + 0x10) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x10) + (*(f32 *)((u8 *)var_t2 + 8) * (*(f32 *)(D_0051CD24))));
            *(f32 *)((u8 *)temp_a3 + 0x20) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x20) + (*(f32 *)((u8 *)var_t2 + 0xC) * (*(f32 *)(D_0051CD24))));
            temp_f2 = *(f32 *)((u8 *)temp_a3 + 0x10);
            if (!(temp_f2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_a3 + 0x10) = 0.0f;
            } else if (temp_f2 < 0.0f) {
                *(f32 *)((u8 *)temp_a3 + 0x10) = 1.0f;
            }
            temp_f2_2 = *(f32 *)((u8 *)temp_a3 + 0x20);
            if (!(temp_f2_2 <= 1.0f)) {
                *(f32 *)((u8 *)temp_a3 + 0x20) = 0.0f;
            } else if (temp_f2_2 < 0.0f) {
                *(f32 *)((u8 *)temp_a3 + 0x20) = 1.0f;
            }
            var_t0 |= 1 << *(s32 *)((u8 *)var_t2 + 4);
            if (var_t0 != 0x3C00) {
                goto block_13;
            }
        } else {
block_13:
            var_t2 += 0x10;
            if (*var_t2 == temp_t1) {
                goto loop_2;
            }
        }
    }
    if (*(s32 *)((u8 *)temp_s0 + 0xC) != 0) {
        func_001F5D50(temp_s0);
    }
    if (*(s8 ***)((u8 *)temp_s0 + 8) != NULL) {
        func_001F5E20(temp_s0);
        amMotion_BuildMatrices((s32)(**(s8 ***)((u8 *)temp_s0 + 8)));
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x10);
    temp_v1 = *(u8 **)((u8 *)temp_a0 + 0x10);
    if (temp_v1 != NULL) {
        if (*(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 8)) + 4) == 0.0f) {
            *(f32 *)((u8 *)temp_v1 + 4) = 0.0f;
        }
        func_001F5CB0(*(u8 **)((u8 *)arg0 + 0x10));
    }
}
