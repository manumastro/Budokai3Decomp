/* Draft (not built): func_001C8340 at 0x001C8340, size 0x134, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x160, original 0x134
 * Original: asm/nonmatchings/battle/btl_main/func_001C8340.s */

// src/battle/btl_main.c func_001C8340 size diff=40/88
void func_001C8340(Fighter *arg0) {
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = (unsigned char *)(arg0);
    var_s1 = var_s2 + 0x1ED8;
    var_s0 = var_s2 + 0x1EF0;
    if (*(s32 *)((u8 *)arg0 + 0x1ED8) != 0) {
        amCdFs_ReleaseCache(*(u8 **)((u8 *)var_s1 + 0x14));
        *(u8 **)((u8 *)var_s1 + 0x14) = NULL;
        *(s32 *)((u8 *)var_s2 + 0x1ED8) = 0;
        *(s32 *)((u8 *)var_s1 + 4) = 0;
        *(s32 *)((u8 *)var_s1 + 8) = 0;
        *(s32 *)((u8 *)var_s1 + 0xC) = 0;
        *(s32 *)((u8 *)var_s1 + 0x10) = 0;
    } else {
        temp_a0 = *(u8 **)((u8 *)var_s1 + 0x14);
        if (temp_a0 != NULL) {
            amCdFs_Close(temp_a0, 0);
            *(u8 **)((u8 *)var_s1 + 0x14) = NULL;
        }
    }
    if (*(s32 *)((u8 *)var_s2 + 0x1EF0) != 0) {
        amCdFs_ReleaseCache(*(u8 **)((u8 *)var_s0 + 4));
        *(u8 **)((u8 *)var_s0 + 4) = NULL;
        *(s32 *)((u8 *)var_s2 + 0x1EF0) = 0;
    } else {
        temp_a0_2 = *(u8 **)((u8 *)var_s0 + 4);
        if (temp_a0_2 != NULL) {
            amCdFs_Close(temp_a0_2, 0);
            *(u8 **)((u8 *)var_s0 + 4) = NULL;
        }
    }
    var_s1 = NULL;
    var_s0 = var_s2;
    do {
        temp_v1 = *(u8 **)((u8 *)var_s0 + 0x1DB8);
        if (temp_v1 != NULL) {
            if ((s32)(*(s32 *)((u8 *)var_s2 + 0xB7C)) == (s32)(temp_v1)) {
                func_001E7070(var_s2 + 0x650, -1);
                func_001E8290(var_s2 + 0x650);
            }
            if ((s32)(*(s32 *)((u8 *)var_s2 + 0x11FC)) == (s32)(*(u8 **)((u8 *)var_s0 + 0x1DB8))) {
                func_001E7070(var_s2 + 0xCD0, -1);
                func_001E8290(var_s2 + 0xCD0);
            }
            Character_Release(*(u8 **)((u8 *)var_s0 + 0x1DB8));
            *(u8 **)((u8 *)var_s0 + 0x1DB8) = NULL;
        }
        func_001C82C0((Fighter *)(var_s2), (s32)(var_s1));
        var_s1 += 1;
        var_s0 += 4;
    } while ((s32) var_s1 < 8);
}
