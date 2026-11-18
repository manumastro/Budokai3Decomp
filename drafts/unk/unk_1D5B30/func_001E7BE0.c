/* Draft (not built): func_001E7BE0 at 0x001E7BE0, size 0x318, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 01E7BE0(unsigned char *)' does not match 'func_001E7BE0(unsigned char *, int)' @ 3333: func_001E7BE0((char *)c + 0x650);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E7BE0.s */

// src/unk/unk_1D5B30.c func_001E7BE0 cerr diff=-1/0
extern void func_001D0A20();
void func_001E7BE0(u8 *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 var_f2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s1;
    u8 *temp_v1;

    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x568);
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x538);
        temp_s1 = arg0 + 0x2D0;
        *(s32 *)((u8 *)temp_v1 + 0xC64) = 0;
        var_f2 = *(f32 *)((u8 *)arg0 + 0x484) * *(f32 *)((u8 *)temp_v1 + 0x184C);
        if (*(s8 *)((u8 *)gBattle + 0x8AB9) != 0) {
            var_f2 = 1.0f;
        }
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x524)) + 0x10) & 0x20) {
            var_f2 *= 1.0f + *(f32 *)((u8 *)arg0 + 0x650);
        }
        temp_f20 = var_f2 * (*(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0x64C));
        *(f32 *)((u8 *)arg0 + 0x608) = (f32) (*(f32 *)((u8 *)arg0 + 0x608) + temp_f20);
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x60C);
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x608);
        temp_f0 = (f32) temp_a1;
        if (!(temp_f1 < temp_f0)) {
            if ((arg1 != 0) && (*(s16 *)((u8 *)arg0 + 0x666) == 2)) {
                *(f32 *)((u8 *)arg0 + 0x608) = (f32) (temp_a1 - 1);
                *(f32 *)((u8 *)arg0 + 0x610) = 0.0f;
            } else {
                *(s32 *)((u8 *)arg0 + 0x614) = 1;
                temp_a3 = temp_s1 + 0x90;
                temp_a2 = temp_s1 + 0xC0;
                *(s32 *)((u8 *)arg0 + 0x618) = (s32) (*(s32 *)((u8 *)arg0 + 0x618) + 1);
                *(f32 *)((u8 *)arg0 + 0x608) = 0.0f;
                *(f32 *)((u8 *)arg0 + 0x610) = (f32) *(s32 *)((u8 *)arg0 + 0x60C);
                *(s16 *)((u8 *)temp_s1 + 0x1C4) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x1BC) = 0xBF800000;
                *(s32 *)((u8 *)temp_s1 + 0x1B4) = 0x3F800000;
                *(s32 *)((u8 *)temp_s1 + 0x1B8) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AE) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AF) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1B0) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1A8) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x1A0) = 0;
                *(u8 **)((u8 *)temp_s1 + 0x180) = temp_s1;
                *(u8 **)((u8 *)temp_s1 + 0x184) = (u8 *) (temp_s1 + 0x30);
                *(u8 **)((u8 *)temp_s1 + 0x188) = (u8 *) (temp_s1 + 0x60);
                *(u8 **)((u8 *)temp_s1 + 0x18C) = temp_a3;
                *(u8 **)((u8 *)temp_s1 + 0x190) = temp_a2;
                *(u8 **)((u8 *)temp_s1 + 0x194) = (u8 *) (temp_s1 + 0xF0);
                *(u8 **)((u8 *)temp_s1 + 0x198) = (u8 *) (temp_s1 + 0x120);
                *(u8 **)((u8 *)temp_s1 + 0x19C) = (u8 *) (temp_s1 + 0x150);
                *(s8 *)((u8 *)temp_s1 + 0x1A9) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AA) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AB) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AC) = 0;
                *(s8 *)((u8 *)temp_s1 + 0x1AD) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x244) = 0;
                func_001D0A20(temp_s1, *(u8 **)((u8 *)arg0 + 0x524), temp_a2, temp_a3, *(f32 *)((u8 *)arg0 + 0x608));
                *(s32 *)((u8 *)temp_s1 + 0x1BC) = 0xBF800000;
            }
        } else {
            *(f32 *)((u8 *)arg0 + 0x610) = (f32) (temp_f0 - temp_f1);
        }
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x624);
        if (temp_a0 >= 0) {
            temp_v1_2 = temp_a0 | 0x80000;
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x628) + temp_f20;
            temp_a1_2 = *(s32 *)((u8 *)(((temp_v1_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1_2 >> 0x10) - 1) * 4) + temp_s0) + 0x46C)) + 0x14)) + 8);
            *(f32 *)((u8 *)arg0 + 0x628) = temp_f1_2;
            if (!(temp_f1_2 < (f32) temp_a1_2)) {
                if ((arg1 != 0) && (*(s16 *)((u8 *)arg0 + 0x666) == 2)) {
                    *(f32 *)((u8 *)arg0 + 0x628) = (f32) (temp_a1_2 - 1);
                } else {
                    *(f32 *)((u8 *)arg0 + 0x628) = 0.0f;
                }
            }
        }
        temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x62C);
        if (temp_a0_2 >= 0) {
            temp_v1_3 = temp_a0_2 | 0x80000;
            temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x630) + temp_f20;
            temp_a1_3 = *(s32 *)((u8 *)(((temp_v1_3 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1_3 >> 0x10) - 1) * 4) + temp_s0) + 0x46C)) + 0x14)) + 8);
            *(f32 *)((u8 *)arg0 + 0x630) = temp_f1_3;
            if (!(temp_f1_3 < (f32) temp_a1_3)) {
                if ((arg1 != 0) && (*(s16 *)((u8 *)arg0 + 0x666) == 2)) {
                    *(f32 *)((u8 *)arg0 + 0x630) = (f32) (temp_a1_3 - 1);
                } else {
                    *(f32 *)((u8 *)arg0 + 0x630) = 0.0f;
                }
            }
        }
        *(f32 *)((u8 *)arg0 + 0x63C) = (f32) *(f32 *)((u8 *)arg0 + 0x608);
    }
}
