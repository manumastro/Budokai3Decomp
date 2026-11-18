/* Draft (not built): func_002D8920 at 0x002D8920, size 0x18C, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  amAdx_SetVolume(1, var_a1, var_a2, var_a3, D_004E0618); @ 992: if (*(s32 *)((u8 *)temp_s0 + 0x344) != &func_002DB600) {
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D8920.s */

// src/unk/unk_2D2530.c func_002D8920 cerr diff=-1/0
extern s32 func_002DB600;
void func_002D8920(void) {
    s64 sp30;
    f32 temp_f1;
    f32 var_f2;
    s128 temp_v1_2;
    s32 var_a1;
    s64 *var_a2;
    s64 temp_s1;
    s64 var_t0;
    s8 *var_a3;
    u32 temp_v1;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gOptionWork);
    func_002D8890();
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x388) + var_f2;
    *(f32 *)((u8 *)temp_s0 + 0x388) = temp_f1;
    if (!(temp_f1 <= 30.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x388) = 0.0f;
        temp_v1 = *(u32 *)((u8 *)temp_s0 + 0x378);
        switch (temp_v1) {
        case 0:
            var_t0 = 2;
            break;
        case 1:
            var_t0 = 3;
            break;
        case 2:
            var_t0 = 4;
            break;
        case 3:
            var_t0 = 5;
            break;
        case 4:
            var_t0 = 7;
            break;
        case 5:
            var_t0 = 9;
            break;
        default:
            var_t0 = 9;
            break;
        }
        if (*(s32 *)((u8 *)temp_s0 + 0x344) != &func_002DB600) {
            var_a2 = &sp30;
            var_a3 = (s8 *)(D_00456C80[0]);
            var_a1 = 4;
            do {
                var_a1 -= 1;
                temp_v1_2 = *(s128 *)((u8 *)var_a3 + 0x10);
                *(s128 *)((u8 *)var_a2 + 0) = (s128) *(s128 *)((u8 *)var_a3 + 0);
                var_a3 += 0x20;
                *(s128 *)((u8 *)var_a2 + 0x10) = temp_v1_2;
                var_a2 += 0x20;
            } while (var_a1 > 0);
            temp_s1 = (s64) (var_t0 << 0x38) >> 0x38;
            *var_a2 = *var_a3;
            if (temp_s1 != -1) {
                amAdx_SetVolume(1, var_a1, var_a2, var_a3, D_004E0618);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, *(s32 *)((u8 *)((temp_s1 * 4) + sp) + 0x30) | 0x20000, 0);
            }
        }
        *(void (**)())((u8 *)temp_s0 + 0x36C) = func_002D8890;
    }
}
