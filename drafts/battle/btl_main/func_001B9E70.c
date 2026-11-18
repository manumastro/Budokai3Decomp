/* Draft (not built): func_001B9E70 at 0x001B9E70, size 0x1F8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'short' to 'struct Fighter *' @ 3385: + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - (f32) func_001E9290(temp_a1));
 * Original: asm/nonmatchings/battle/btl_main/func_001B9E70.s */

// src/battle/btl_main.c func_001B9E70 cerr diff=-1/0
void func_001B9E70(u8 *arg0) {
    s16 temp_a1;
    s16 var_a0;
    s16 var_a1;
    u8 *temp_a0;
    u8 *temp_a1_2;
    u8 *temp_v1;

    *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - (3.0f * (*(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C))));
    if ((*(s16 *)((u8 *)gBattle + 0x8944) == 0) && (*(s8 *)((u8 *)gBattle + 0x8AB2) == 0)) {
        temp_a1 = *(s16 *)((u8 *)arg0 + 0x13A4);
        temp_v1 = arg0 + 0x1360;
        if (temp_a1 >= 0) {
            if (*(s32 *)((u8 *)temp_v1 + 0x48) == 1) {
                *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.0f);
            }
            if (*(s32 *)((u8 *)temp_v1 + 0x4C) == 1) {
                *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.0f);
            }
            if (*(s32 *)((u8 *)temp_v1 + 0x50) == 1) {
                *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.0f);
            }
            if (*(s32 *)((u8 *)temp_v1 + 0x54) == 1) {
                *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.0f);
            }
            temp_a1_2 = (*(s32 *)((u8 *)temp_v1 + 0x58) * 4) + temp_v1;
            if (*(s16 *)((u8 *)temp_a1_2 + 0x64) != 0) {
                var_a1 = *(s16 *)((u8 *)temp_a1_2 + 0x66);
                if (var_a1 < 0) {
                    var_a1 = -var_a1;
                }
                if (var_a1 == 1) {
                    *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.5f);
                }
            }
            temp_a0 = (*(s32 *)((u8 *)temp_v1 + 0x5C) * 4) + temp_v1;
            if (*(s16 *)((u8 *)temp_a0 + 0x64) != 0) {
                var_a0 = *(s16 *)((u8 *)temp_a0 + 0x66);
                if (var_a0 < 0) {
                    var_a0 = -var_a0;
                }
                if (var_a0 == 1) {
                    *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - 3.5f);
                }
            }
        } else {
            *(f32 *)((u8 *)arg0 + 0x18A4) = (f32) (*(f32 *)((u8 *)arg0 + 0x18A4) - (f32) func_001E9290(temp_a1));
        }
    }
    if (*(f32 *)((u8 *)arg0 + 0x18A4) < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x18A4) = 0.0f;
    }
}
