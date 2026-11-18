/* Draft (not built): func_001C8860 at 0x001C8860, size 0x134, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 6136: temp_a0 = *(*(s32 *)((u8 *)arg0 + 0x1CF8) + temp_s1);
 * Original: asm/nonmatchings/battle/btl_main/func_001C8860.s */

// src/battle/btl_main.c func_001C8860 cerr diff=-1/0
s32 func_001C8860(u8 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v1;

    temp_s1 = arg1 * 4;
    temp_v0 = temp_s1 + arg0;
    if (*(u8 **)((u8 *)temp_v0 + 0x1DB8) != NULL) {
        var_s2 = 0;
    } else {
        temp_v0_2 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + (arg1 * 0x14));
        temp_v0_3 = func_001CAAB0(*(s16 *)((u8 *)temp_v0_2 + 0xD6), *(s16 *)((u8 *)temp_v0_2 + 0xD8), *(s8 *)((u8 *)(arg1 + arg0) + 0x1D0C), *(s32 *)((u8 *)arg0 + 0x1350), 0);
        if (temp_v0_3 != NULL) {
            *(s32 *)((u8 *)arg0 + 0x1EF8) = (s32) *(s32 *)((u8 *)temp_v0_3 + 0x20);
            *(u8 **)((u8 *)temp_v0 + 0x1DB8) = temp_v0_3;
            var_s2 = *(s32 *)((u8 *)arg0 + 0x1EF8);
        } else {
            var_s2 = 0;
        }
    }
    temp_v1 = arg0 + (arg1 * 0x1C);
    temp_s0 = temp_v1 + 0x1DF8;
    var_v0 = 0;
    if (*(s32 *)((u8 *)temp_v1 + 0x1E10) != 0) {

    } else if ((*(s32 *)((u8 *)temp_v1 + 0x1DF8) != 0) || (*(s32 *)((u8 *)temp_s0 + 0x14) != 0)) {
        var_v0 = 0;
    } else {
        temp_a0 = *(*(s32 *)((u8 *)arg0 + 0x1CF8) + temp_s1);
        if (temp_a0 != -1) {
            var_v0 = amCdFs_ReadFileId(temp_a0, 0, 1);
            *(s32 *)((u8 *)temp_s0 + 0x14) = var_v0;
            *(s32 *)((u8 *)arg0 + 0x1EF8) = var_v0;
        }
    }
    if (var_v0 != 0) {
        return var_v0;
    }
    return var_s2;
}
