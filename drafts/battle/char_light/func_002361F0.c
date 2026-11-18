/* Draft (not built): func_002361F0 at 0x002361F0, size 0x304, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (s8 *)((u8 *)temp_a1 + 0x8AB5)); @ 253: AB5) * 4)) + 0x14) + *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1CF4)) + 0x1C));
 * Original: asm/nonmatchings/battle/char_light/func_002361F0.s */

// src/battle/char_light.c func_002361F0 cerr diff=-1/0
s32 func_001DFA90(void *, s32);
s32 func_0022E8C0(void *, s32);
void func_002361F0(void) {
    s32 *var_s0;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s8 var_v0;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s3;

    temp_a1 = gBattle;
    var_s2 = 0;
    if (*(s32 *)((u8 *)temp_a1 + 0x88D8) > 0) {
        var_s1 = 0;
        var_s0 = (s32 *)(&D_0058BBB0);
        do {
            temp_a0 = ((u8 *)gBattle) + var_s1;
            temp_v1 = *(s16 *)((u8 *)gBattle + 0x7E2);
            temp_s3 = temp_a0 + 0x830;
            switch (temp_v1) {                      /* irregular */
            case 0:
                *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4) + (*(s8 *)((u8 *)temp_a1 + 0x8AB5) * 4)) + 0x14) + *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1CF4)) + 0x1C));
                break;
            case 5:
                *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1CF4)) + 0x1C);
                break;
            case 3:
                *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x54) + *(s8 *)((u8 *)temp_a1 + 0x8AB5));
                break;
            case 4:
                temp_v0 = (char *)func_002CC450(temp_a0, temp_a1);
                *(u8 *)((u8 *)var_s0 + 0x16) = 4U;
                if (temp_v0 & 0x5000) {
                    *(u8 *)((u8 *)var_s0 + 0x16) = (u8) **(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x58);
                }
                if (temp_v0 & 0x2000) {
                    *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(u8 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x58)) + 1);
                }
                if (temp_v0 & 0x10000) {
                    *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(u8 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x58)) + 2);
                }
                if (temp_v0 & 0x8000) {
                    *(u8 *)((u8 *)var_s0 + 0x16) = (u8) *(u8 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x58)) + 3);
                }
                break;
            }
            *(s8 *)((u8 *)var_s0 + 0x17) = (s8) *(u8 *)((u8 *)var_s0 + 0x16);
            *(s32 *)((u8 *)var_s0 + 0x18) = 0;
            *(s8 *)((u8 *)var_s0 + 0x15) = (s8) *(s32 *)((u8 *)temp_s3 + 0xB9C);
            *(u8 **)((u8 *)var_s0 + 8) = (u8 *) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x10) + (*(s8 *)((u8 *)var_s0 + 0x17) * 4));
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 8) + (*(s8 *)((u8 *)var_s0 + 0x15) * 4));
            *(s32 *)((u8 *)var_s0 + 0x10) = (s32) *(s32 *)((u8 *)(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 8) + (*(s8 *)((u8 *)var_s0 + 0x14) * 4))) + 0xC);
            temp_a1_2 = *(u8 **)((u8 *)var_s0 + 8);
            *(s16 *)((u8 *)var_s0 + 0x1C) = -1;
            *(s32 *)((u8 *)var_s0 + 0x28) = 0;
            *(s16 *)((u8 *)var_s0 + 0x22) = (s16) *(u8 *)((u8 *)temp_a1_2 + 0x11E);
            *(s16 *)((u8 *)var_s0 + 0x24) = (s16) *(u8 *)((u8 *)temp_a1_2 + 0x125);
            *(s16 *)((u8 *)var_s0 + 0x26) = (s16) *(u8 *)((u8 *)temp_a1_2 + 0x126);
            *(s8 *)((u8 *)var_s0 + 0x35) = 0;
            *(s8 *)((u8 *)var_s0 + 0x36) = 0;
            *(s8 *)((u8 *)var_s0 + 0x37) = 0;
            *(s32 *)((u8 *)var_s0 + 0x50) = 0;
            *(s16 *)((u8 *)var_s0 + 0x58) = 0;
            *(s16 *)((u8 *)var_s0 + 0x5C) = 0;
            *(s32 *)((u8 *)var_s0 + 0x54) = 0;
            *(s16 *)((u8 *)var_s0 + 0x3A) = -1;
            *(s8 *)((u8 *)var_s0 + 0x39) = 0;
            *(s16 *)((u8 *)var_s0 + 0x3C) = 0;
            *(s16 *)((u8 *)var_s0 + 0x3E) = -1;
            *(s8 *)((u8 *)var_s0 + 0x42) = -1;
            *(s16 *)((u8 *)var_s0 + 0x5E) = 0;
            *(s16 *)((u8 *)var_s0 + 0x60) = 0;
            *(s8 *)((u8 *)var_s0 + 0xA2) = 0;
            *(s8 *)((u8 *)var_s0 + 0xA3) = 0;
            *(s8 *)((u8 *)var_s0 + 0xA4) = 0;
            *(s16 *)((u8 *)var_s0 + 0xA6) = 0;
            *(s16 *)((u8 *)var_s0 + 0xA8) = 0;
            *(s8 *)((u8 *)var_s0 + 0xAA) = 0;
            *(s8 *)((u8 *)var_s0 + 0xAB) = 0;
            *(s32 *)((u8 *)var_s0 + 0xAC) = 0xBF800000;
            *(s32 *)((u8 *)var_s0 + 0xB0) = 0xBF800000;
            *(s8 *)((u8 *)var_s0 + 0xB8) = 0;
            *(s8 *)((u8 *)var_s0 + 0xB4) = 0;
            *(s8 *)((u8 *)var_s0 + 0xB5) = 0;
            var_v0 = *(s32 *)((u8 *)temp_s3 + 0x1CFC) == 0x20;
            if (var_v0 != 0) {
                var_v0 = func_001DFA90(temp_s3, 0x70) > 0;
            }
            *(s8 *)((u8 *)var_s0 + 0xB6) = var_v0;
            *(s8 *)((u8 *)var_s0 + 0xB7) = 0;
            *(s8 *)((u8 *)var_s0 + 0xB9) = 0;
            *(s16 *)((u8 *)var_s0 + 0xBA) = 0;
            *(s16 *)((u8 *)var_s0 + 0xBC) = -1;
            *(s16 *)((u8 *)var_s0 + 0xBE) = 0;
            func_0022E8C0(temp_s3, *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1544)) + 8));
            var_s2 += 1;
            var_s1 += 0x2020;
            var_s0 += 0xC0;
        } while (var_s2 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
}
