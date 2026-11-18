/* Draft (not built): func_001E55C0 at 0x001E55C0, size 0x1F8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 77 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x1F8
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E55C0.s */

// src/unk/unk_1D5B30.c func_001E55C0 size diff=77/144
s32 func_0029D800(void *, f32);
extern void func_00237840(void *);
void func_001E55C0(void) {
    f32 var_f12;
    f32 var_f1;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;
    s8 var_v0;
    u8 **temp_s0;
    u8 *temp_s6;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s5;

    temp_s6 = (u8 *)(gBattle);
    var_s5 = temp_s6 + 0x268;
    func_00237840(*(u8 **)((u8 *)temp_s6 + 0x268));
    temp_v1 = *(s32 *)((u8 *)temp_s6 + 0x88D8);
    if (temp_v1 < 3) {
        var_s4 = 0;
        if (temp_v1 > 0) {
            var_s2 = temp_s6;
            do {
                var_s3 = 0;
loop_4:
                temp_s0 = (u8 **)(var_s5 + ((((var_s3 != 0) ? 3 : 1) + var_s4) * 8));
                var_a0 = *temp_s0;
                if (*(s32 *)((u8 *)var_a0 + 4) != 4) {
                    var_f12 = *(f32 *)((u8 *)temp_s6 + 0x88F0);
                } else {
                    if (!(*(f32 *)((u8 *)var_s2 + 0x2270) <= 0.0f)) {
                        var_f1 = *(f32 *)((u8 *)var_s2 + 0x2004);
                    } else {
                        var_f1 = *(f32 *)((u8 *)var_s2 + 0x2000);
                    }
                    *(f32 *)((u8 *)var_a0 + 0x1C) = (f32) (var_f1 / *(f32 *)((u8 *)var_s2 + 0x2004));
                    var_a0 = (u8 *)(gBattle);
                    if (M2C_LWL(*(s32 *)((u8 *)var_a0 + 0x88EF)) == 0) {
                        var_v0 = -1;
                        if (*(s8 *)((u8 *)var_a0 + 0x8AB2) != 0) {
                            if (*(f32 *)((u8 *)var_a0 + 0x891C) <= 0.0f) {
                                var_v0 = -1;
                            } else {
                                var_v0 = *(s8 *)((u8 *)var_a0 + 0x8AB3);
                            }
                        }
                        if ((var_s4 == var_v0) && (*(s16 *)((u8 *)var_a0 + 0x8944) == 0)) {
                            goto block_19;
                        }
                        var_f12 = *(f32 *)((u8 *)temp_s6 + 0x88F0);
                    } else {
block_19:
                        var_f12 = 0.0f;
                    }
                }
                func_0029D800(var_a0, var_f12);
                func_00237840(*temp_s0);
                var_s3 += 1;
                if (var_s3 < 2) {
                    goto loop_4;
                }
                var_s4 += 1;
                var_s2 += 0x2020;
            } while (var_s4 < *(s32 *)((u8 *)temp_s6 + 0x88D8));
        }
    } else {
        var_s0 = temp_s6;
        if (temp_v1 != 0) {
            do {
                func_0029D800(*(u8 **)((u8 *)var_s0 + 0x14CC), 0);
                func_00237840(*(u8 **)((u8 *)var_s5 + 8));
                var_s0 += 0x2020;
                var_s5 += 8;
            } while (*(s32 *)((u8 *)temp_s6 + 0x88D8) != 0);
        }
    }
}
