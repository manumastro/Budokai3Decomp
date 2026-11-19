/* Draft (not built): func_0027DB20 at 0x0027DB20, size 0x29C, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal data size @ 143: (u8 *)temp_s2 + 8)) + 0x1C) + (*(var_s5 + (*(u8 *)((u8 *)temp_s3 + 7) * 2)) * 4)), 0);
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027DB20.s */

// src/menu/mn_charasel.c func_0027DB20 cerr diff=-1/0
extern void *D_00470810;
extern void SoundRpc_Send3();
s32 CsModel_SetMode(s32, s8, s8);
s32 CsSubStat_RequestClose(s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
s32 func_00280DC0(s32);
s32 func_002E3110(s32);
extern s128 D_004532E0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0027B7E0(void);
void func_0027DB20(u8 *arg0) {
    s128 sp70;
    s32 *sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 *var_v1_2;
    s128 *var_s5;
    s32 **var_s0;
    s32 **var_v1;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    var_v0 = 0x10;
    var_v1 = &sp80;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = D_00470810;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp80 = (int *)(temp_s3 + 0x38);
    sp84 = (int)(temp_s3 + 0x3C);
    sp88 = (int)(temp_s3 + 0x40);
    sp8C = (int)(temp_s3 + 0x48);
    sp70 = D_004532E0;
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x3000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp80;
    var_s5 = &sp70;
    do {
        temp_a0_2 = **var_s0;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        temp_v0 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (*(var_s5 + (*(u8 *)((u8 *)temp_s3 + 7) * 2)) * 4)), 0);
        var_s1 += 1;
        var_s5 += 4;
        **var_s0 = temp_v0;
        var_s0 += 4;
    } while (var_s1 < 4);
    temp_s1 = D_00470810;
    temp_s0 = (*(u8 *)((u8 *)temp_s3 + 7) == 0) ? 3 : 2;
    if (*(s8 *)((u8 *)temp_s3 + 1) == 1) {
        *(s8 *)((u8 *)temp_s3 + 1) = 2;
        temp_a0_3 = *(u8 **)((u8 *)temp_s1 + 0xC);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x3000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x3000);
        D_00470238 = 0;
        temp_a0_4 = *(s32 *)((u8 *)temp_s3 + 0x50);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        *(s32 *)((u8 *)temp_s3 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x14) + (temp_s0 * 4)), 0);
    }
    SoundRpc_SetVolume(1, 0, D_004E0614);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(1, 0, 9, 0);
    }
    CsModel_SetMode(*(s32 *)((u8 *)temp_s3 + 0x30), *(s8 *)((u8 *)temp_s3 + 4), *(s8 *)((u8 *)temp_s3 + 5));
    func_00280DC0(*(s32 *)((u8 *)temp_s3 + 0x2C));
    temp_v1 = *(u8 *)((u8 *)temp_s3 + 0xA);
    switch (temp_v1) {
    case 0:
    case 1:
    case 6:
    case 7:
        break;
    case 2:
    case 3:
    case 4:
        temp_a0_5 = *(s32 *)((u8 *)temp_s3 + 0x34);
        if (temp_a0_5 != 0) {
            CsSubStat_RequestClose(temp_a0_5);
        }
        break;
    case 5:
        temp_a0_6 = *(s32 *)((u8 *)temp_s3 + 0x34);
        if (temp_a0_6 != 0) {
            func_002E3110(temp_a0_6);
        }
        break;
    }
    *(s32 *)((u8 *)temp_s3 + 0x54) = 0x42700000;
    var_v1_2 = (int *)(&func_0027B7E0);
    *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x44)) + 0x10) = (f32) gFrameDelta;
    *(s8 *)((u8 *)temp_s3 + 0) = 6;
    *(s8 *)((u8 *)temp_s3 + 0xB) = 3;
    if (&func_0027B7E0 == NULL) {
        var_v1_2 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
}
