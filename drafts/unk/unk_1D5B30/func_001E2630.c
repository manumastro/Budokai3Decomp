/* Draft (not built): func_001E2630 at 0x001E2630, size 0x2C0, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x2C0
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2630.s */

// src/unk/unk_1D5B30.c func_001E2630 size diff=115/145
s32 func_00246DA0(void *);
void func_001E2630(u8 *arg0) {
    s32 sp40;
    s32 sp50;
    s16 sp58;
    s32 sp70;
    s32 sp74;
    f32 sp78;
    s32 sp80;
    s32 sp84;
    f32 var_f0;
    s32 temp_a0;
    s32 var_a1_2;
    s32 var_a2;
    s8 temp_a0_2;
    u8 *temp_s1;
    u8 *var_a1;
    u8 *var_s0;

    temp_s1 = (u8 *)(gBattle);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x1CFC);
    var_s0 = temp_s1 + 0x830;
    if (temp_a0 == 0x2A) {
        if (temp_a0 == 0x2A) {
            *(s32 *)((u8 *)arg0 + 0x1A4C) = 0;
            *(s32 *)((u8 *)arg0 + 0x1A50) = 0;
            if (*(s32 *)((u8 *)arg0 + 0x1DB8) != 0) {
                func_001E7070(arg0 + 0x650, 0);
                sp70 = *(s32 *)((u8 *)arg0 + 0x1350);
                sp74 = 0;
                if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f0 = 0.0f;
                } else {
                    var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
                }
                sp78 = var_f0;
                A2d_CallHandler(8, &sp70);
                sp50 = *(s32 *)((u8 *)arg0 + 0x1350);
                sp58 = (s16) *(s32 *)((u8 *)arg0 + 0xBA4);
                Sp_CallHandler(1, &sp40);
            }
            func_00246DA0(arg0);
            sp80 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp84 = 0;
            A2d_CallHandler(0x33, &sp80);
        }
        func_001E0200(arg0, *(f32 *)((u8 *)arg0 + 0x17C0), 0xC00);
        if (*(s32 *)((u8 *)gBattle + 0x88F8) == 4) {
            var_a2 = 0;
            if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
                var_a1 = (u8 *)(gBattle);
                do {
                    if (*(s8 *)((u8 *)var_a1 + 0x2828) != -1) {
                        *(s8 *)((u8 *)var_a1 + 0x2828) = 2;
                    }
                    var_a2 += 1;
                    var_a1 += 0x2020;
                } while (var_a2 < *(s32 *)((u8 *)gBattle + 0x88D8));
            }
        }
        *(s8 *)((u8 *)arg0 + 0x183F) = -1;
        *(s32 *)((u8 *)arg0 + 0x1840) = 0;
        func_001D97D0((struct Fighter *)(arg0));
        func_001D7CC0((void *)(arg0), 0);
        *(s32 *)((u8 *)arg0 + 0xC9C) = 0x3F800000;
        temp_a0_2 = *(s8 *)((u8 *)arg0 + 0x1FF8);
        if (temp_a0_2 == -1) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
            *(s32 *)((u8 *)arg0 + 0xB70) = 0x100;
            func_001C75D0((void *)(arg0), 0xF);
            *(s8 *)((u8 *)temp_s1 + 0x8AAF) = 0;
            *(s8 *)((u8 *)arg0 + 0xCBD) = 1;
            *(s8 *)((u8 *)arg0 + 0x2004) = 0;
            var_a1_2 = 0;
            if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
                do {
                    if (*(s8 *)((u8 *)var_s0 + 0x1FF8) != -1) {
                        *(s8 *)((u8 *)var_s0 + 0x1FF8) = 0;
                    }
                    var_a1_2 += 1;
                    var_s0 += 0x2020;
                } while (var_a1_2 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
            }
        } else if (temp_a0_2 == 2) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            *(s16 *)((u8 *)arg0 + 0x181E) = 0;
            *(s32 *)((u8 *)arg0 + 0x1814) = 0;
            *(s32 *)((u8 *)arg0 + 0x1810) = 0;
            func_001C75D0((void *)(arg0), 0x10);
            *(s8 *)((u8 *)arg0 + 0x1FF8) = 2;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
        }
    }
}
