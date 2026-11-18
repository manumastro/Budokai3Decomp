/* Draft (not built): func_001F34E0 at 0x001F34E0, size 0x25C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); var_t2 + 0xC) * D_0051CD24)); @ 5230: (f32) (*(f32 *)((u8 *)var_a3 + 0x10) + (*(f32 *)((u8 *)var_t2 + 8) * D_0051CD24));
 * Original: asm/nonmatchings/battle/btb_draw/func_001F34E0.s */

// src/battle/btb_draw.c func_001F34E0 cerr diff=-1/0
void func_001F34E0(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 *var_t2;
    s32 temp_s2;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a2;
    u32 var_t0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_t2 = *(s32 **)((u8 *)arg0 + 0x30);
    if (var_t2 != NULL) {
        temp_t1 = *var_t2;
        var_t0 = 0;
        var_a1 = 1;
loop_2:
        var_a2 = *(s32 *)((u8 *)var_t2 + 4);
        if (!((var_t0 >> var_a2) & 1)) {
            var_a3 = arg0 + 0x30 + ((var_a2 - 6) * 4);
            var_a2 = (s32) (var_a3 + 0x10);
            *(f32 *)((u8 *)var_a3 + 0x10) = (f32) (*(f32 *)((u8 *)var_a3 + 0x10) + (*(f32 *)((u8 *)var_t2 + 8) * D_0051CD24));
            *(f32 *)((u8 *)var_a3 + 0x20) = (f32) (*(f32 *)((u8 *)var_a3 + 0x20) + (*(f32 *)((u8 *)var_t2 + 0xC) * D_0051CD24));
            temp_f2 = *(f32 *)((u8 *)var_a3 + 0x10);
            if (!(temp_f2 <= 1.0f)) {
                *var_a2 = 0;
            } else if (temp_f2 < 0.0f) {
                *var_a2 = 0x3F800000;
            }
            temp_f2_2 = *(f32 *)((u8 *)var_a3 + 0x20);
            if (!(temp_f2_2 <= 1.0f)) {
                *(f32 *)((u8 *)var_a3 + 0x20) = 0.0f;
            } else if (temp_f2_2 < 0.0f) {
                *(f32 *)((u8 *)var_a3 + 0x20) = 1.0f;
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
    temp_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0xC);
    if (temp_s0 != NULL) {
        temp_f20 = (f32)(D_0051CD24);
        if (!(temp_f20 < 0.0f) && (*(s32 *)((u8 *)temp_s0 + 0x18) != 0)) {
            temp_s2 = ((*(s32 *)((u8 *)temp_s0 + 8) + 1) << 0x10) | *(s32 *)((u8 *)temp_s0 + 0x10);
            amMotSet_Apply(*(s32 *)((u8 *)temp_s0 + 0), temp_s2, (u8 *) var_a2, var_a3, *(f32 *)((u8 *)temp_s0 + 4));
            var_a1 = ((temp_s2 >> 0x10) - 1) * 4;
            *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) + (*(f32 *)((u8 *)temp_s0 + 0x14) * temp_f20));
            if (!(*(f32 *)((u8 *)temp_s0 + 4) < (f32) *(s32 *)((u8 *)(((temp_s2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)(var_a1 + *(s32 *)((u8 *)temp_s0 + 0)) + 4)) + 0x14)) + 8))) {
                *(f32 *)((u8 *)temp_s0 + 4) = 0.0f;
            }
        }
    }
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x10);
    temp_s0_2 = *(u8 **)((u8 *)temp_s1 + 0x10);
    if (temp_s0_2 != NULL) {
        temp_f20_2 = (f32)(D_0051CD24);
        if (!(temp_f20_2 < 0.0f)) {
            if (*(s32 *)((u8 *)temp_s0_2 + 0) != 0) {
                func_002D04A0(*(s16 *)((u8 *)temp_s0_2 + 0xE));
                temp_v0 = *(u8 **)((u8 *)temp_s1 + 0x10);
                func_002D0110(*(s32 *)((u8 *)temp_v0 + 0), 0, *(f32 *)((u8 *)temp_v0 + 4));
                func_002D04A0(0);
            }
            if (*(s16 *)((u8 *)temp_s0_2 + 0xC) != 0) {
                *(f32 *)((u8 *)temp_s0_2 + 4) = func_002CFDD0(*(s32 *)((u8 *)temp_s0_2 + 0), *(f32 *)((u8 *)temp_s0_2 + 4), temp_f20_2);
            }
        }
    }
}
