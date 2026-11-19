/* Draft (not built): func_0027D820 at 0x0027D820, size 0x1D8, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x1D8
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027D820.s */

// src/menu/mn_charasel.c func_0027D820 size diff=82/102
extern s32 D_00495B60;
extern s32 D_00495B64;
extern s32 D_00495B68;
extern s32 D_00495B6C;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern s32 D_0058F660;
void func_0027D820(s64 arg0) {
    s8 var_a2;
    s8 var_v1;

    var_a2 = D_004B4B41;
    if ((*(s16 *)((u8 *)(&D_0058F660) + 0) == var_a2) && (*(s16 *)((u8 *)(&D_0058F660) + 2) == D_004B4B59)) {
        if (((s64) (arg0 << 0x30) >> 0x30) != 0) {
            goto block_4;
        }
    } else {
block_4:
        D_00495B6C = 0;
        D_00495B68 = 0;
        D_00495B64 = 0;
        D_00495B60 = 0;
        if (arg0 != 0) {
            var_a2 = -1;
        }
        *(s16 *)((u8 *)(&D_0058F660) + 0) = (s16) var_a2;
        if (arg0 != 0) {
            var_v1 = -1;
        } else {
            var_v1 = D_004B4B59;
        }
        *(s16 *)((u8 *)(&D_0058F660) + 2) = (s16) var_v1;
        *(s16 *)((u8 *)(&D_0058F660) + 4) = 0;
        *(s16 *)((u8 *)(&D_0058F660) + 6) = 0;
        *(s8 *)((u8 *)(&D_0058F660) + 8) = 0;
        *(s8 *)((u8 *)(&D_0058F660) + 9) = 1;
        *(s8 *)((u8 *)(&D_0058F660) + 0xC) = -1;
        *(s8 *)((u8 *)(&D_0058F660) + 0xD) = -1;
        *(s8 *)((u8 *)(&D_0058F660) + 0xE) = 0;
        *(s8 *)((u8 *)(&D_0058F660) + 0xF) = 0;
        *(s8 *)((u8 *)(&D_0058F660) + 0x10) = 3;
        *(s8 *)((u8 *)(&D_0058F660) + 0x11) = 3;
        if (D_004B4B41 != 6) {
            if ((D_004B4B41 != 5) && (D_004B4B41 != 3) && (D_004B4B41 != 1) && (D_004B4B41 != 0)) {
                if (D_004B4B59 != 3) {
                    if (D_004B4B59 != 0) {
                        if (D_004B4B59 != 2) {
                            if (D_004B4B59 != 1) {
                                return;
                            }
                            *(s8 *)((u8 *)(&D_0058F660) + 0xA) = 0;
                            goto block_38;
                        }
                        *(s8 *)((u8 *)(&D_0058F660) + 0xA) = -1;
                        *(s8 *)((u8 *)(&D_0058F660) + 0xB) = 1;
                        return;
                    }
                    *(s8 *)((u8 *)(&D_0058F660) + 0xA) = 0;
                    *(s8 *)((u8 *)(&D_0058F660) + 0xB) = 1;
                    return;
                }
                *(s8 *)((u8 *)(&D_0058F660) + 0xA) = -1;
                goto block_38;
            }
            *(s8 *)((u8 *)(&D_0058F660) + 0xA) = 0;
            *(s8 *)((u8 *)(&D_0058F660) + 0xB) = -2;
            return;
        }
        if (D_004B4B59 != 3) {
            if (D_004B4B59 != 0) {
                if ((D_004B4B59 != 2) && (D_004B4B59 != 1)) {
                    return;
                }
                *(s8 *)((u8 *)(&D_0058F660) + 0xA) = 0;
                *(s8 *)((u8 *)(&D_0058F660) + 0xB) = -2;
                return;
            }
            *(s8 *)((u8 *)(&D_0058F660) + 0xA) = 0;
            *(s8 *)((u8 *)(&D_0058F660) + 0xB) = 1;
            return;
        }
        *(s8 *)((u8 *)(&D_0058F660) + 0xA) = -1;
block_38:
        *(s8 *)((u8 *)(&D_0058F660) + 0xB) = -1;
    }
}
