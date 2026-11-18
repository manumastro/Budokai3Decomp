/* Draft (not built): func_0029A250 at 0x0029A250, size 0x2A0, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x294, original 0x2A0
 * Original: asm/nonmatchings/story/str_map/func_0029A250.s */

// src/story/str_map.c func_0029A250 size diff=52/165
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);
s32 func_0022D860(s32, s32);
s32 func_002995F0(s8);
void func_0029A250(s32 arg0) {
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s8 temp_a0;
    s8 temp_a0_6;
    s8 temp_v1_3;
    u8 *temp_a0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_a0 = *(s8 *)((u8 *)gStrMap + 0x19D);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_v1 = *(u8 **)((u8 *)gStrMap + 0xC);
        if (temp_v1 != NULL) {
            if (*(s16 *)((u8 *)temp_v1 + 4) == 3) {
                goto block_8;
            }
        } else {
block_8:
            var_s1 = 0;
            var_s0 = 0;
            do {
                temp_v1_2 = (u8 *)(gStrMap + var_s0);
                temp_a0_2 = *(u8 **)((u8 *)temp_v1_2 + 0);
                if (temp_a0_2 != NULL) {
                    *(s32 *)((u8 *)temp_v1_2 + 0x10) = (s32) *(s32 *)((u8 *)temp_a0_2 + 0x40);
                    *(s32 *)((u8 *)(*(gStrMap + var_s0)) + 0x40) = 0;
                    amCdFs_Close(*(gStrMap + var_s0), 0);
                    *(gStrMap + var_s0) = 0;
                    amFile_Load((s32)((void *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(gStrMap + var_s0) + 0x10)) + 0x50))));
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < 4);
            *(s32 *)((u8 *)gStrMap + 0x58) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x10)) + 0x50);
            *(s32 *)((u8 *)gStrMap + 0x60) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x14)) + 0x50);
            *(u8 **)((u8 *)gStrMap + 0x5C) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x18)) + 0x50);
            *(s32 *)((u8 *)gStrMap + 0x64) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x1C)) + 0x50);
            temp_v1_3 = *(s8 *)((u8 *)gStrMap + 0x19E);
            switch (temp_v1_3) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                func_0029A090();
                *(s8 *)((u8 *)gStrMap + 0x19D) = 2;
                break;
            case 1:                                 /* switch 2 */
                temp_a0_3 = *(s32 *)((u8 *)gStrMap + 0x90);
                if (temp_a0_3 != 0) {
                    func_0022D0E0(temp_a0_3, 1);
                }
                *(s32 *)((u8 *)gStrMap + 0x90) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x5C)) + 0x1C)) + 0x54), 0);
                temp_a0_4 = *(s32 *)((u8 *)gStrMap + 0x8C);
                if (temp_a0_4 != 0) {
                    func_0022D0E0(temp_a0_4, 1);
                }
                var_s1_2 = 0;
                var_s0_2 = 0;
                *(s32 *)((u8 *)gStrMap + 0x8C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x5C)) + 0x14)) + 0xC), 0);
                do {
                    temp_a0_5 = *(s32 *)((u8 *)(gStrMap + var_s0_2) + 0x9C);
                    if (temp_a0_5 != 0) {
                        func_0022D0E0(temp_a0_5, 1);
                    }
                    var_s1_2 += 1;
                    *(s32 *)((u8 *)(gStrMap + var_s0_2) + 0x9C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x5C)) + 0x1C)) + 0x5C), 0);
                    var_s0_2 += 4;
                } while (var_s1_2 < 0x40);
                *(s8 *)((u8 *)gStrMap + 0x19D) = 2;
                break;
            }
        default:                                    /* switch 1 */
        case 2:                                     /* switch 1 */
            temp_a0_6 = *(s8 *)((u8 *)gStrMap + 0x19E);
            switch (temp_a0_6) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                func_00299CA0(temp_a0_6);
                return;
            case 1:                                 /* switch 3 */
                func_002995F0(temp_a0_6);
                return;
            }
        }
        break;
    case 1:                                         /* switch 1 */
        return;
    }
}
