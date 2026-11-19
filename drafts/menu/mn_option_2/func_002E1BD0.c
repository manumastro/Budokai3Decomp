/* Draft (not built): func_002E1BD0 at 0x002E1BD0, size 0x218, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x220, original 0x218
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E1BD0.s */

// src/menu/mn_option_2.c func_002E1BD0 size diff=78/136
s32 amAdx_SetVolume(void *, f32);
s32 func_001446E0(s32);
s32 func_00148310(f32);
s32 func_001A38B0(void *, s32, s32);
s32 memcpy(void *, s32 *, s32, void *);
extern s32 D_00456B20;
extern s32 D_00456B30;
extern void func_0015FE80(void);
void func_002E1BD0(u8 *arg0) {
    s8 *var_s1;
    u8 *temp_a3;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s3;

    var_s3 = arg0;
    var_s2 = var_s3 + 0x2BA9C;
    *(s8 *)((u8 *)var_s2 + 0x40) = 1;
    *(s16 *)((u8 *)var_s3 + 0x2BA9C) = 1;
    *(s16 *)((u8 *)var_s2 + 4) = -1;
    temp_a3 = var_s3 + 0x2BA86;
    *(s16 *)((u8 *)var_s2 + 2) = 1;
    *(s16 *)((u8 *)var_s2 + 0x1E) = 0;
    *(s16 *)((u8 *)var_s2 + 0x20) = 0;
    *(s32 *)((u8 *)var_s2 + 0x24) = 0;
    *(s32 *)((u8 *)var_s2 + 0x28) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2BA86) = 0;
    var_s1 = (signed char *)(var_s3 + 0x2BA90);
    *(s8 *)((u8 *)temp_a3 + 1) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2BAA2) = 0;
    *(s8 *)((u8 *)(var_s3 + 0x2BAA2) + 1) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2BA90) = 0;
    var_s0 = var_s3 + 0x2BAAC;
    *(s8 *)((u8 *)var_s1 + 1) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2BAAC) = 0;
    *(s8 *)((u8 *)var_s0 + 1) = 0;
    memcpy(temp_a3 + 2, &D_00456B20 + (*(s8 *)((u8 *)var_s3 + 0x2BA86) * 8), 8, temp_a3);
    memcpy(var_s3 + 0x2BAA4, &D_00456B30, 8, 0);
    memcpy(var_s1 + 2, &D_00456B20 + (*(s8 *)((u8 *)var_s3 + 0x2BA90) * 8), 8, 0);
    memcpy(var_s0 + 2, &D_00456B30, 8, 0);
    *(s16 *)((u8 *)var_s2 + 0x2C) = 0x41D00000;
    func_00148310((f32) *(s16 *)((u8 *)var_s2 + 0x2C));
    *(s32 *)((u8 *)var_s2 + 0x30) = 1;
    var_s0 = NULL;
    *(s32 *)((u8 *)var_s2 + 0x34) = 0x3F800000;
    *(s32 *)((u8 *)var_s2 + 0x38) = 0x3F800000;
    *(s32 *)((u8 *)var_s2 + 0x3C) = 0x3F800000;
    do {
        func_001A38B0(var_s0, 1, 0);
        var_s0 += 1;
    } while ((s32) var_s0 < 2);
    var_s1 = (signed char *)(D_004E05DC);
    var_s1 = (signed char *)(D_004E05DC);
    *(s32 *)((u8 *)var_s2 + 0x30) = 1;
    amAdx_SetVolume(NULL, *(f32 *)((u8 *)D_004E05DC + 0x34));
    var_s0 = (u8 *)1;
    do {
        amAdx_SetVolume(var_s0, *(f32 *)((u8 *)D_004E05DC + 0x3C));
        var_s0 += 1;
    } while ((s32) var_s0 < 4);
    if (*(s32 *)((u8 *)D_004E05DC + 0x30) == 0) {
        func_0015FE80();
        func_001446E0(0);
    } else {
        func_0015FE80();
        func_001446E0(1);
    }
    amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20));
}
