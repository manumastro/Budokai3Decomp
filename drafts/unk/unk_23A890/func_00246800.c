/* Draft (not built): func_00246800 at 0x00246800, size 0x2A4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 120 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x288, original 0x2A4
 * Original: asm/nonmatchings/unk/unk_23A890/func_00246800.s */

// src/unk/unk_23A890.c func_00246800 size diff=120/162
extern void *D_0058D42C;
void func_00246800(u8 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f2;
    s32 temp_a3;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3_2;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *temp_t2;
    u8 *temp_t3;
    u8 *temp_t5;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_a0;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x1350);
    if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0) {
        if (temp_a3 == -1) {
            var_a0 = D_0058D42C;
        } else {
            temp_a0 = gBattle + (temp_a3 * 0x2020);
            if (*(s32 *)((u8 *)temp_a0 + 0x252C) == 0x23) {
                var_a2 = 1;
                if (*(s32 *)((u8 *)(temp_a0 + 0x830) + 0xBA4) != 0) {

                } else {
                    var_a2 = 0;
                }
            } else {
                var_a2 = 0;
            }
            temp_v1 = D_0046FE4C + (temp_a3 * 0x480) + (var_a2 * 0x220);
            var_a0 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0x60) * 4) + (temp_v1 + 0x50)) + 0x88);
        }
        temp_v1_2 = var_a0 + *(s32 *)((u8 *)var_a0 + 0xC);
        temp_t3 = *(u8 **)((u8 *)temp_v1_2 + 0x28);
        temp_t5 = *(u8 **)((u8 *)temp_v1_2 + 0x24);
        temp_t2 = *(u8 **)((u8 *)temp_t3 + 0x28);
        temp_t0 = *(u8 **)((u8 *)temp_t2 + 0x28);
        temp_t1 = *(u8 **)((u8 *)temp_t2 + 0x24);
        temp_a3_2 = *(u8 **)((u8 *)temp_t0 + 0x28);
        temp_a2 = *(u8 **)((u8 *)temp_a3_2 + 0x24);
        temp_a1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_a3_2 + 0x28)) + 0x24);
        var_f2 = fparg0 / fparg1;
        if (!(fparg0 <= fparg1)) {
            var_f2 = 1.0f;
        }
        temp_f3 = 1.0f - var_f2;
        *(f32 *)((u8 *)temp_t5 + 0x5C) = (f32) (155.0f * temp_f3);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_t5 + 0x28)) + 0x5C) = (f32) (260.0f * temp_f3);
        *(f32 *)((u8 *)temp_t3 + 0x5C) = (f32) (350.0f * temp_f3);
        temp_f5 = 300.0f * temp_f3;
        *(f32 *)((u8 *)temp_t2 + 0x74) = temp_f5;
        *(f32 *)((u8 *)temp_t2 + 0x78) = (f32) (10.0f * temp_f3);
        temp_f4 = 60.0f * temp_f3;
        *(f32 *)((u8 *)temp_t2 + 0x7C) = temp_f4;
        *(f32 *)((u8 *)temp_t1 + 0x5C) = (f32) (25.0f * temp_f3);
        *(f32 *)((u8 *)temp_t1 + 0x60) = (f32) (35.0f * temp_f3);
        temp_f2 = 15.0f * temp_f3;
        *(f32 *)((u8 *)temp_t1 + 0x64) = temp_f2;
        temp_f6 = 13.5f * temp_f3;
        *(f32 *)((u8 *)temp_t1 + 0x68) = temp_f2;
        *(f32 *)((u8 *)temp_t1 + 0x6C) = temp_f2;
        *(f32 *)((u8 *)temp_t1 + 0x70) = temp_f2;
        *(f32 *)((u8 *)temp_t0 + 0x70) = temp_f6;
        *(f32 *)((u8 *)temp_t0 + 0x74) = temp_f6;
        *(f32 *)((u8 *)temp_t0 + 0x78) = temp_f6;
        *(s32 *)((u8 *)temp_t0 + 0x7C) = 0x3F800000;
        *(f32 *)((u8 *)temp_t0 + 0x80) = temp_f6;
        *(f32 *)((u8 *)temp_t0 + 0x84) = temp_f6;
        *(f32 *)((u8 *)temp_t0 + 0x88) = temp_f6;
        *(s32 *)((u8 *)temp_t0 + 0x8C) = 0x3F800000;
        *(f32 *)((u8 *)temp_a3_2 + 0x74) = temp_f5;
        *(f32 *)((u8 *)temp_a3_2 + 0x78) = (f32) (0.5f * temp_f3);
        *(f32 *)((u8 *)temp_a3_2 + 0x7C) = temp_f4;
        *(f32 *)((u8 *)temp_a2 + 0x5C) = (f32) (55.0f * temp_f3);
        *(f32 *)((u8 *)temp_a2 + 0x60) = (f32) (65.0f * temp_f3);
        temp_f1 = 24.0f * temp_f3;
        *(f32 *)((u8 *)temp_a2 + 0x64) = temp_f1;
        *(f32 *)((u8 *)temp_a2 + 0x68) = temp_f1;
        *(f32 *)((u8 *)temp_a2 + 0x6C) = temp_f1;
        temp_f0 = 160.0f * temp_f3;
        *(f32 *)((u8 *)temp_a2 + 0x70) = temp_f1;
        *(f32 *)((u8 *)temp_a1 + 0x5C) = temp_f0;
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a1 + 0x24)) + 0x5C) = temp_f0;
    }
}
