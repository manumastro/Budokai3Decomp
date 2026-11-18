/* Draft (not built): func_001AFFA0 at 0x001AFFA0, size 0x1C0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  1668: D_0051D9A8 = *(f32 *)((u8 *)temp_s0 + 0x88F4); @ 1667: *(&D_00468310 + (*(s32 *)((u8 *)temp_s0 + 0x88F8) * 4))();
 * Original: asm/nonmatchings/battle/btl_main/func_001AFFA0.s */

// src/battle/btl_main.c func_001AFFA0 cerr diff=-1/0
void func_001AFFA0(void) {
    f32 temp_f0;
    f32 var_f1;
    s32 temp_a0;
    s32 var_a2;
    s8 temp_a0_2;
    u8 *temp_s0;
    u8 *var_a1;

    temp_s0 = (u8 *)(gBattle);
    if (*(s32 *)((u8 *)temp_s0 + 0x88EC) == 0) {
        *(f32 *)((u8 *)temp_s0 + 0x8914) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x8914) + *(f32 *)((u8 *)temp_s0 + 0x88F0));
        if (*(s8 *)((u8 *)temp_s0 + 0x8AB2) == 0) {
            *(f32 *)((u8 *)temp_s0 + 0x8918) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x8918) + *(f32 *)((u8 *)temp_s0 + 0x88F0));
        }
    }
    *(&D_00468310 + (*(s32 *)((u8 *)temp_s0 + 0x88F8) * 4))();
    D_0051D9A8 = *(f32 *)((u8 *)temp_s0 + 0x88F4);
    D_0051D9AC = *(f32 *)((u8 *)temp_s0 + 0x88F4) / 60.0f;
    func_0022DB40(*(f32 *)((u8 *)temp_s0 + 0x88F4));
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x88D8);
    var_f1 = *(f32 *)((u8 *)temp_s0 + 0x20D0);
    var_a2 = 1;
    if (temp_a0 >= 2) {
        var_a1 = temp_s0 + 0x2020;
        do {
            temp_f0 = *(f32 *)((u8 *)var_a1 + 0x20D0);
            if (var_f1 < temp_f0) {

            } else {
                var_f1 = temp_f0;
            }
            var_a2 += 1;
            var_a1 += 0x2020;
        } while (var_a2 < temp_a0);
    }
    *(f32 *)((u8 *)temp_s0 + 0x88F0) = (f32) (var_f1 * *(f32 *)((u8 *)temp_s0 + 0x88F4));
    *(s8 *)((u8 *)temp_s0 + 0x8AB0) = 0;
    if (*(s16 *)((u8 *)temp_s0 + 0x7E2) == 3) {
        temp_a0_2 = *(s8 *)((u8 *)gBattle + 0x8978);
        if (temp_a0_2 != *(s8 *)((u8 *)temp_s0 + 0x8AB5)) {
            *(s8 *)((u8 *)temp_s0 + 0x8AB5) = temp_a0_2;
            func_001E9930();
        }
    }
}
