/* Draft (not built): func_002F4D50 at 0x002F4D50, size 0xEC, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4D50.s */

// src/menu/mn_ipsyswnd.c func_002F4D50 diff diff=39/59
void *A2d_AllocObj(s32, s32, s32, s32, s32);
void func_002F4D50(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_s0;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s2 = 0;
    temp_s3 = gOutputPass;
    var_s0 = arg0;
    do {
        temp_v0 = A2d_AllocObj(0, var_a1, var_a2, var_a3, 0);
        *(u8 **)((u8 *)var_s0 + 4) = temp_v0;
        memset(temp_v0, 0, 0x60);
        var_s2 += 1;
        *(s32 *)((u8 *)temp_v0 + 4) = 3;
        var_a3 = 0x6000;
        var_a2 = 2;
        var_a1 = 1;
        var_s0 += 4;
        *(s32 *)((u8 *)temp_v0 + 0x10) = (s32) *(s32 *)((u8 *)temp_s3 + 0xC);
        *(s32 *)((u8 *)temp_v0 + 0x14) = 0x6000;
        *(s16 *)((u8 *)temp_v0 + 0x18) = 2;
        *(s16 *)((u8 *)temp_v0 + 0x1A) = 0;
        *(s32 *)((u8 *)temp_v0 + 8) = 1;
        *(s32 *)((u8 *)temp_v0 + 0xC) = 3;
        *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x2C) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0 + 0x34) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x3C) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x38) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x44) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x40) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x48) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x4C) = 0;
        *(s32 *)((u8 *)temp_v0 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0 + 0x58) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0 + 0x5C) = 0x3F800000;
    } while (var_s2 < 0x24);
}
