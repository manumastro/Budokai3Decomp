/* Draft (not built): func_002E1BD0 at 0x002E1BD0, size 0x218, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x220, original 0x218
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E1BD0.s */

// src/menu/mn_option_2.c func_002E1BD0 size diff=80/136
s32 amAdx_SetVolume(s32, f32);
s32 func_001446E0(s32);
s32 func_00148310(f32);
s32 func_001A38B0(s32, s32, s32);
s32 memcpy(void *, s32 *, s32, void *);
extern s32 D_00456B20;
extern s32 D_00456B30;
extern void func_0015FE80(void);
void func_002E1BD0(u8 *arg0) {
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x2BA9C;
    *(s8 *)((u8 *)temp_s2 + 0x40) = 1;
    *(s16 *)((u8 *)arg0 + 0x2BA9C) = 1;
    *(s16 *)((u8 *)temp_s2 + 4) = -1;
    temp_a3 = arg0 + 0x2BA86;
    *(s16 *)((u8 *)temp_s2 + 2) = 1;
    *(s16 *)((u8 *)temp_s2 + 0x1E) = 0;
    *(s16 *)((u8 *)temp_s2 + 0x20) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x28) = 0;
    *(s8 *)((u8 *)arg0 + 0x2BA86) = 0;
    temp_s1 = arg0 + 0x2BA90;
    *(s8 *)((u8 *)temp_a3 + 1) = 0;
    *(s8 *)((u8 *)arg0 + 0x2BAA2) = 0;
    *(s8 *)((u8 *)(arg0 + 0x2BAA2) + 1) = 0;
    *(s8 *)((u8 *)arg0 + 0x2BA90) = 0;
    temp_s0 = arg0 + 0x2BAAC;
    *(s8 *)((u8 *)temp_s1 + 1) = 0;
    *(s8 *)((u8 *)arg0 + 0x2BAAC) = 0;
    *(s8 *)((u8 *)temp_s0 + 1) = 0;
    memcpy(temp_a3 + 2, &D_00456B20 + (*(s8 *)((u8 *)arg0 + 0x2BA86) * 8), 8, temp_a3);
    memcpy(arg0 + 0x2BAA4, &D_00456B30, 8, 0);
    memcpy(temp_s1 + 2, &D_00456B20 + (*(s8 *)((u8 *)arg0 + 0x2BA90) * 8), 8, 0);
    memcpy(temp_s0 + 2, &D_00456B30, 8, 0);
    *(s16 *)((u8 *)temp_s2 + 0x2C) = 0x41D00000;
    func_00148310((f32) *(s16 *)((u8 *)temp_s2 + 0x2C));
    *(s32 *)((u8 *)temp_s2 + 0x30) = 1;
    var_s0 = 0;
    *(s32 *)((u8 *)temp_s2 + 0x34) = 0x3F800000;
    *(s32 *)((u8 *)temp_s2 + 0x38) = 0x3F800000;
    *(s32 *)((u8 *)temp_s2 + 0x3C) = 0x3F800000;
    do {
        func_001A38B0(var_s0, 1, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    *(s32 *)((u8 *)temp_s2 + 0x30) = 1;
    amAdx_SetVolume(0, *(f32 *)((u8 *)D_004E05DC + 0x34));
    var_s0_2 = 1;
    do {
        amAdx_SetVolume(var_s0_2, *(f32 *)((u8 *)D_004E05DC + 0x3C));
        var_s0_2 += 1;
    } while (var_s0_2 < 4);
    if (*(s32 *)((u8 *)D_004E05DC + 0x30) == 0) {
        func_0015FE80();
        func_001446E0(0);
    } else {
        func_0015FE80();
        func_001446E0(1);
    }
    amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20));
}
