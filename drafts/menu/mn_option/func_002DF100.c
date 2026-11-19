/* Draft (not built): func_002DF100 at 0x002DF100, size 0x2D0, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 129 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DF100.s */

// src/menu/mn_option.c func_002DF100 diff diff=129/180
extern s8 D_004B4B40[];
extern s8 D_00456B20[];
void func_002DF3D0(void);
void func_002DF4E0(void);
s32 amAdx_SetVolume(s8 *, f32);
s32 amDisp_SetOffset(s16, s16);
s32 func_001446E0(s32);
s32 func_00148310(f32);
s32 func_001A38B0(s32, s32, s8);
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 memcpy(s8 *, u8 *, s32);
extern s32 D_00456B70;
extern s16 D_004E0608;
extern void func_0015FE80(void);
void func_002DF100(void) {
    s32 sp80;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s5;
    s8 *var_s0;
    s8 temp_v1;
    u8 *var_s2;
    u8 *var_s6;
    u8 *temp_v0;
    u8 *var_s4;

    func_002DF4E0();
    func_002DF3D0();
    var_s2 = D_004E05DC;
    var_s2 = D_004E05DC;
    var_s0 = D_004B4B40;
    var_s1 = 0;
    var_s0 = D_004B4B40;
    *(s16 *)((u8 *)gOptionWork + 0x418) = (s16) D_004E0608;
    *(f32 *)((u8 *)gOptionWork + 0x404) = (f32) (255.0f * *(f32 *)((u8 *)D_004E05DC + 0x34));
    *(f32 *)((u8 *)gOptionWork + 0x408) = (f32) (255.0f * *(f32 *)((u8 *)D_004E05DC + 0x38));
    *(u8 **)((u8 *)gOptionWork + 0x3EC) = (u8 *) (D_004E05DC + 0x30);
    *(u8 **)((u8 *)gOptionWork + 0x3F0) = (u8 *) (gOptionWork + 0x404);
    *(u8 **)((u8 *)gOptionWork + 0x3F4) = (u8 *) (gOptionWork + 0x408);
    *(s32 *)((u8 *)gOptionWork + 0x3F8) = 2;
    *(s32 *)((u8 *)gOptionWork + 0x3FC) = 0x100;
    *(s32 *)((u8 *)gOptionWork + 0x400) = 0x100;
    do {
        temp_v1 = *(s8 *)((u8 *)var_s2 + 6);
        if (temp_v1 != 2) {
            memcpy((s8 *)(var_s0 + 0x2BA88), (u8 *)(D_00456B20 + (temp_v1 * 8)), 8);
        } else {
            memcpy(var_s0 + 0x2BA88, var_s2 + 8, 8);
        }
        func_001A38B0(var_s1, 1, *(s8 *)((u8 *)var_s2 + 7));
        var_s1 += 1;
        var_s2 += 0xA;
        var_s0 += 0xA;
    } while (var_s1 < 2);
    func_00148310((f32) D_004E0608);
    amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20));
    var_s1 = (s32) D_004E05DC;
    var_s1 = (s32) D_004E05DC;
    amAdx_SetVolume(NULL, *(f32 *)((u8 *)var_s1 + 0x34));
    var_s0 = (s8 *)1;
    do {
        amAdx_SetVolume(var_s0, *(f32 *)((u8 *)var_s1 + 0x3C));
        var_s0 += 1;
    } while ((s32) var_s0 < 4);
    if (*(s32 *)((u8 *)var_s1 + 0x30) == 0) {
        func_0015FE80();
        func_001446E0(0);
    } else {
        func_0015FE80();
        func_001446E0(1);
    }
    var_s6 = gOptionWork;
    var_s1 = (s32) &sp80;
    var_s5 = 0;
    var_s0 = (s8 *) var_s6;
    *(s64 *)((u8 *)var_s1 + 0) = (s64) *(s64 *)((u8 *)(&D_00456B70) + 0);
    *(f32 *)((u8 *)var_s1 + 8) = (f32) *(f32 *)((u8 *)(&D_00456B70) + 8);
    do {
        temp_v0 = var_s6 + ((var_s5 + 4) * 4);
        temp_a0 = *(s32 *)((u8 *)temp_v0 + 0x74);
        var_s4 = temp_v0 + 0x74;
        var_s2 = gOptionWork;
        var_s3 = **(s16 **)((u8 *)var_s0 + 0x3D0) + *(s32 *)var_s1;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
        }
        *(s32 *)((u8 *)temp_v0 + 0x74) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 8)) + 0x1C) + (var_s3 * 4)), 0);
        var_s5 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s5 < 3);
    var_s1 = (s32) gOptionWork;
    var_s0 = (signed char *)(var_s1 + 0x308);
    temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0x308);
    var_s2 = (unsigned char *)(0x6A - **(s32 **)((u8 *)var_s1 + 0x3EC));
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x308) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x1C) + ((s32) var_s2 * 4)), 0);
}
