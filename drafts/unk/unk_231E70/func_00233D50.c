/* Draft (not built): func_00233D50 at 0x00233D50, size 0xFC, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 'unsigned char *' to 'int' @ 43: if ((s32) ((u32) (func_0012EAE0(0x20, temp_a1, temp_a2) / 10) % 100U) < (s32) var_s0) {
 * Original: asm/nonmatchings/unk/unk_231E70/func_00233D50.s */

// src/unk/unk_231E70.c func_00233D50 cerr diff=-1/0
s32 func_00233D50(u8 *arg0, s32 *arg1) {
    s16 temp_v0;
    s32 temp_a2;
    s32 var_v0;
    u8 var_s0;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_v0_2;

    temp_a2 = *arg1;
    temp_s1 = &D_0058BBB0 + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_v0 = *(s16 *)((u8 *)temp_s1 + 0x3C);
    temp_a1 = *(u8 **)((u8 *)temp_s1 + 8);
    if (temp_v0 < temp_a2) {
        *(s16 *)((u8 *)temp_s1 + 0x3C) = (s16) temp_a2;
        return 0;
    }
    if ((temp_v0 - temp_a2) < 0x14) {
        return 0;
    }
    *(s16 *)((u8 *)temp_s1 + 0x3C) = (s16) temp_a2;
    temp_v0_2 = *(u8 **)((u8 *)arg0 + 0x17A0);
    var_s0 = *(u8 *)((u8 *)temp_a1 + 0x122);
    if ((temp_v0_2 != NULL) && (*(s32 *)((u8 *)temp_v0_2 + 0x20) & 0x40000000)) {
        var_s0 = *(u8 *)((u8 *)temp_a1 + 0x123);
    }
    if ((s32) ((u32) (func_0012EAE0(0x20, temp_a1, temp_a2) / 10) % 100U) < (s32) var_s0) {
        var_v0 = 1;
    } else {
        var_v0 = -1;
    }
    *(s16 *)((u8 *)temp_s1 + 0x3C) = 0;
    return var_v0;
}
