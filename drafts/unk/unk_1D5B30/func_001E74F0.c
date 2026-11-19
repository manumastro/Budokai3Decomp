/* Draft (not built): func_001E74F0 at 0x001E74F0, size 0x6E4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'void *' mwccps2.exe Compiler: @ 4502: func_001D9C40(temp_s2, 1,(struct Fighter *)(*(s16 *)((u8 *)var_s0_2 + 0x1DE)));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E74F0.s */

// src/unk/unk_1D5B30.c func_001E74F0 cerr diff=-1/0
extern void func_001D0A20();
s32 BtbBg_SetSlot(s16, void *, s32);
s32 func_001C9DB0(s32, s32, s32, s32);
void func_001E74F0(u8 *arg0) {
    u8 *sp78;
    s32 sp7C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f2;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_5;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_v0_2;
    s32 var_v1;
    s8 temp_a0_3;
    s8 temp_v0;
    s8 var_a2;
    s8 var_a3;
    s8 var_v0;
    u8 ***temp_s0;
    u8 **var_a1;
    u8 *temp_a2_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s0_2;
    u8 *var_s0_3;
    u8 *var_s0_4;

    temp_s3 = (unsigned char *)(gBattle);
    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
        temp_s2 = *(u8 **)((u8 *)arg0 + 0x568);
        temp_s0 = *(u8 ****)((u8 *)arg0 + 0x538);
        *(s8 *)((u8 *)arg0 + 0x66F) = 0;
        temp_s1 = arg0 + 0x2D0;
        if (*(f32 *)((u8 *)arg0 + 0x64C) == 0.0f) {
            BtbBg_SetSlot(0, temp_s1 + 0x22E, *(s32 *)((u8 *)temp_s2 + 0x1350));
            return;
        }
        func_001D0A20(temp_s1, *(s32 *)((u8 *)arg0 + 0x524), *(f32 *)((u8 *)arg0 + 0x608));
        if ((*(s32 *)((u8 *)arg0 + 0x548) == 0) && ((*(s8 *)((u8 *)temp_s2 + 0x1FFF) = (s8) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 0x20) != 0), *(s8 *)((u8 *)temp_s2 + 0x2000) = (s8) ((*(s8 *)((u8 *)temp_s2 + 0x2000) & ~1) | ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 0x20) != 0)), *(s16 *)((u8 *)temp_s2 + 0x19E8) = (s16) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 1) != 0), *(s16 *)((u8 *)temp_s2 + 0x19EA) = (s16) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 2) != 0), *(s16 *)((u8 *)temp_s2 + 0x19EC) = (s16) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 4) != 0), *(s16 *)((u8 *)temp_s2 + 0x19EE) = (s16) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 8) != 0), *(s16 *)((u8 *)temp_s2 + 0x19F0) = (s16) ((*(s16 *)((u8 *)temp_s1 + 0x1C4) & 0x10) != 0), (*(s8 *)((u8 *)temp_s2 + 0x200C) == 0)) || (*(s16 *)((u8 *)temp_s2 + 0xCAC) != 0xF))) {
            var_f2 = *(f32 *)((u8 *)temp_s2 + 0x17BC);
            if (!(var_f2 < 0.0f)) {
                temp_f0 = 1.1f * *(f32 *)((u8 *)temp_s1 + 0x1B8);
                if (!(var_f2 <= temp_f0)) {

                } else {
                    var_f2 = temp_f0;
                }
                *(f32 *)((u8 *)temp_s2 + 0x17BC) = var_f2;
                if (!(var_f2 <= 1.0f)) {
                    var_f2 = 1.0f;
                } else if (var_f2 < 0.0f) {
                    var_f2 = 0.0f;
                }
                *(f32 *)((u8 *)temp_s2 + 0x17BC) = var_f2;
            }
        }
        var_a1 = *temp_s0;
        var_v0 = *(s8 *)((u8 *)temp_s1 + 0x1B0);
        var_a2 = *(s8 *)((u8 *)temp_s1 + 0x1AF);
        temp_a0 = *(s32 *)((u8 *)(*var_a1) + 0x20);
        var_a3 = *(s8 *)((u8 *)temp_s1 + 0x1AE);
        if (var_v0 >= temp_a0) {
            var_v0 = 0;
        }
        if (var_a3 >= temp_a0) {
            var_a3 = 0;
        }
        if (var_a2 >= temp_a0) {
            var_a2 = 0;
        }
        temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x14);
        if (temp_v1 >= 0) {
            *(s32 *)((u8 *)((temp_v1 * 8) + var_a1) + 8) = (s32) var_a3;
        }
        temp_v1_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x16);
        if (temp_v1_2 >= 0) {
            *(s32 *)((u8 *)((temp_v1_2 * 8) + *temp_s0) + 8) = (s32) var_a2;
        }
        temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x26);
        if (temp_a0_2 >= 0) {
            if ((*(s8 *)((u8 *)temp_s2 + 0x2000) != 0) && (var_v0 == 0)) {
                var_v0 = (s8) *(s32 *)((u8 *)temp_s2 + 0x18E0);
            }
            *(s32 *)((u8 *)((temp_a0_2 * 8) + *temp_s0) + 8) = (s32) var_v0;
        }
        temp_a0_3 = *(s8 *)((u8 *)arg0 + 0x671);
        if (temp_a0_3 > 0) {
            temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x54C);
            var_a1 = NULL;
            switch (temp_v1_3) {                    /* irregular */
            case 1:
                var_v0_2 = *(s8 *)((u8 *)temp_s1 + 0x1AF) == 0x16;
block_37:
                var_a1 = (u8 **) -var_v0_2;
                break;
            case 8:
                var_v0_2 = *(s8 *)((u8 *)temp_s1 + 0x1AF) == 0x16;
                goto block_37;
            }
            *(u8 ***)((u8 *)((temp_a0_3 * 8) + *temp_s0) + 8) = var_a1;
        }
        temp_v0 = *(s8 *)((u8 *)arg0 + 0x670);
        if (temp_v0 > 0) {
            *(s32 *)((u8 *)((temp_v0 * 8) + *temp_s0) + 8) = (s32) -(*(s8 *)((u8 *)temp_s1 + 0x1AF) < 0);
        }
        var_f12 = 0.0f;
        temp_f20 = *(f32 *)((u8 *)temp_s3 + 0x88F0) * *(f32 *)((u8 *)arg0 + 0x64C);
        if (!(temp_f20 <= 0.0f)) {
            M2C_ERROR(/* unknown instruction: mula.s $f0, $f3 */);
            var_f12 = M2C_ERROR(/* unknown instruction: madd.s $f12, $f4, $f5 */);
            if (!(var_f12 <= 1.0f)) {
                var_f12 = 1.0f;
            } else if (var_f12 < 0.0f) {
                var_f12 = 0.0f;
            }
        }
        func_001E62C0(arg0, (s32) var_a1, (s32) var_a2, (s32) var_a3, var_f12);
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x654);
        if (temp_f2 < 1.0f) {
            temp_f0_2 = temp_f2 + (*(f32 *)((u8 *)arg0 + 0x658) * temp_f20);
            *(f32 *)((u8 *)arg0 + 0x654) = temp_f0_2;
            if (!(temp_f0_2 <= 1.0f)) {
                *(f32 *)((u8 *)arg0 + 0x654) = 1.0f;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x668) = (f32) (*(f32 *)((u8 *)arg0 + 0x668) + temp_f20);
        temp_v1_4 = *(s32 *)((u8 *)temp_s3 + 0x88F8);
        if (((u32) (temp_v1_4 - 3) < 3U) || (temp_v1_4 == 8)) {
            var_s3 = 0;
            if (*(s16 *)((u8 *)temp_s1 + 0x1C8) > 0) {
                var_s0 = temp_s1;
                do {
                    func_001E5C20(arg0, *(s16 *)((u8 *)var_s0 + 0x1CA));
                    var_s3 += 1;
                    var_s0 += 2;
                } while (var_s3 < *(s16 *)((u8 *)temp_s1 + 0x1C8));
            }
        }
        var_s3_2 = 0;
        if (*(s16 *)((u8 *)temp_s1 + 0x1DC) > 0) {
            var_s0_2 = temp_s1;
            do {
                func_001D9C40(temp_s2, 1,(struct Fighter *)(*(s16 *)((u8 *)var_s0_2 + 0x1DE)));
                var_s3_2 += 1;
                var_s0_2 += 2;
            } while (var_s3_2 < *(s16 *)((u8 *)temp_s1 + 0x1DC));
        }
        var_s3_3 = 0;
        if (*(s16 *)((u8 *)temp_s1 + 0x1EC) > 0) {
            var_s0_3 = temp_s1;
            do {
                func_001D9C40(temp_s2, *(s32 *)((u8 *)temp_s2 + 0x1350) + 2,(struct Fighter *)(*(s16 *)((u8 *)var_s0_3 + 0x1EE)));
                var_s3_3 += 1;
                var_s0_3 += 2;
            } while (var_s3_3 < *(s16 *)((u8 *)temp_s1 + 0x1EC));
        }
        if (*(s16 *)((u8 *)temp_s1 + 0x1D8) > 0) {
            func_001D9EB0(temp_s2, *(s16 *)((u8 *)temp_s1 + 0x1DA));
        }
        if ((*(s16 *)((u8 *)temp_s1 + 0x23C) != 0) && (*(s16 *)((u8 *)gBattle + 0x8944) == 0)) {
            func_001D9D20(temp_s2,(struct Fighter *)(*(s16 *)((u8 *)temp_s1 + 0x23E)));
        }
        var_s3_4 = 0;
        if (*(s16 *)((u8 *)temp_s1 + 0x1FC) > 0) {
            sp78 = temp_s2;
            var_s0_4 = temp_s1;
            sp7C = 0;
loop_75:
            if (var_s3_4 < *(s16 *)((u8 *)temp_s1 + 0x1FC)) {
                func_002470B0((s32)(*(s16 *)((u8 *)var_s0_4 + 0x1FE)), (s64) sp78);
                temp_v1_5 = *(s16 *)((u8 *)temp_s2 + 0xCAC);
                if ((temp_v1_5 == 0xF) || (temp_v1_5 == 0x1D) || (temp_v1_5 == 0x32)) {
                    temp_a1 = *(s16 *)((u8 *)temp_s2 + 0x1A58);
                    if ((temp_a1 > 0) && (*(s16 *)((u8 *)temp_s2 + 0x1A5A) == 0)) {
                        func_001DF830(temp_s2,(struct Fighter *)(temp_a1));
                        *(s16 *)((u8 *)temp_s2 + 0x1A5A) = 1;
                    }
                }
                var_s0_4 += 2;
                var_s3_4 += 1;
                goto loop_75;
            }
        }
        if (*(s16 *)((u8 *)temp_s1 + 0x22C) > 0) {
            *(s8 *)((u8 *)arg0 + 0x66F) = 1;
        }
        BtbBg_SetSlot(*(s16 *)((u8 *)temp_s1 + 0x22C), temp_s1 + 0x22E, *(s32 *)((u8 *)temp_s2 + 0x1350));
        if ((*(s16 *)((u8 *)temp_s1 + 0x240) != 0) && (*(s16 *)((u8 *)gBattle + 0x8944) == 0)) {
            temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x540);
            if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
                *(s32 *)((u8 *)arg0 + 0x640) = (s32) (*(s16 *)((u8 *)temp_s1 + 0x242) | 0x10000);
                *(s32 *)((u8 *)arg0 + 0x644) = 0;
                *(s32 *)((u8 *)arg0 + 0x648) = 0;
                temp_v1_6 = *(s32 *)((u8 *)arg0 + 0x640);
                temp_a3 = temp_v1_6 & 0xFFFF;
                temp_a2 = (temp_v1_6 >> 0x10) - 1;
                if (temp_a2 < 0) {
                    var_v1 = 0;
                } else {
                    var_v1 = 0;
                    if (temp_a2 >= 0x10) {

                    } else {
                        temp_a2_2 = *(u8 **)((u8 *)((temp_a2 * 4) + (temp_a0_4 + 0x20)) + 0xC);
                        var_v1 = 0;
                        if (temp_a2_2 == NULL) {

                        } else if ((temp_a3 >= 0) && (temp_a3 < *(s32 *)((u8 *)temp_a2_2 + 0x14)) && (var_v1 = 1, (*(s32 *)((u8 *)((temp_a3 * 0x10) + *(s32 *)((u8 *)temp_a2_2 + 0x18)) + 4) > 0))) {

                        } else {
                            var_v1 = 0;
                        }
                    }
                }
                if (var_v1 == 0) {
                    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
                        *(s32 *)((u8 *)arg0 + 0x640) = -1;
                        *(s32 *)((u8 *)arg0 + 0x644) = 0;
                        *(s32 *)((u8 *)arg0 + 0x648) = 0;
                    }
                } else {
                    func_001C9DB0(temp_a0_4, *(s32 *)((u8 *)arg0 + 0x530), 1, temp_a3);
                }
            }
        }
    }
}
