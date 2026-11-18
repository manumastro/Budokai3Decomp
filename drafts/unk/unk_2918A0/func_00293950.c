/* Draft (not built): func_00293950 at 0x00293950, size 0x420, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal implicit conversion from 'int *' to 'int' @ 426: temp_f0 = (s32)(func_00146E30(&sp40, &sp30, D_005AA604 + 0x11C0));
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00293950.s */

// src/unk/unk_2918A0.c func_00293950 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 StrStatus_Dispatch(s32 *);
s32 amMotion_Update(s8 *, s32, s8 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133D10(s32);
s32 func_0013B110(s32);
s32 func_0013B750(s32);
s32 func_0013C1E0(s8 *, s32, f32);
f32 func_00146E30(s32 *, s32 *, s32);
s32 func_001CA780(void *, s32);
s32 func_00290BB0();
s32 func_00290D00();
s32 func_002BF970(void **);
s32 memset(s32 *, s32, s32);
extern f32 D_0047042C;
extern f32 D_004E0614;
extern s8 *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern f32 D_005AA618;
extern f32 D_005AA61C;
extern s32 D_005AA620;
extern s32 D_005AA648;
extern f32 D_005AA64C;
extern f32 D_005AA650;
extern s32 D_005AA654;
extern f32 D_005AA658;
extern s32 D_005AA65C;
extern f32 D_005AA660;
extern s32 D_005AA6B0;
extern s32 D_005AA6F0;
extern f32 D_005AB350;
extern void Fade_SetRequest();
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amMotion_BuildMatrices(char *);
extern void SoundRpc_Send3();
extern void func_002BF520(void);
extern char D_003F0800[];
extern void func_0013B620(void *);
extern void *D_005AA608[];
extern void func_002BF610(void);
extern void func_002918A0(void);
extern void func_00293600(void);
void func_00293950(u8 *arg0) {
    s32 sp30;
    f32 sp34;
    s32 sp40;
    f32 sp44;
    s32 sp50;
    s32 spB0;
    s32 spC0;
    s32 spC4;
    u8 **spCC;
    s32 *var_v0;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f3;
    f32 var_f13;
    f32 var_f20;
    s32 temp_v1;
    s32 var_a1;
    s8 *temp_a2;

    func_00131B90(&sp50);
    func_00131F00(&sp50, 0, 0);
    func_00132DF0(D_003F0800);
    temp_a2 = D_005AA60C + 0x41C;
    if (*(s32 *)((u8 *)D_005AA60C + 0x41C) != D_005AA610) {
        var_a1 = 0;
loop_4:
        if (var_a1 < *(s32 *)((u8 *)D_005AA60C + 0x418)) {
            temp_v1 = var_a1 << 6;
            var_a1 += 1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x30) = -1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x34) = -1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x38) = -1;
            goto loop_4;
        }
        *(s32 *)((u8 *)temp_a2 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)D_005AA60C + 0x41C) = (s32) D_005AA610;
    *(f32 *)((u8 *)D_005AA60C + 0x424) = (f32) D_005AA618;
    amMotion_Update(D_005AA60C, 0, temp_a2, D_005AA610);
    if (!(D_005AA61C <= gFrameDelta)) {
        var_f13 = gFrameDelta / D_005AA61C;
        D_005AA61C -= gFrameDelta;
    } else {
        var_f13 = 1.0f;
        D_005AA61C = 0.0f;
    }
    func_0013C1E0(D_005AA60C, 0, var_f13);
    amMotion_BuildMatrices((char *)(D_005AA60C));
    func_00291E30();
    func_002BF970((void **)(D_005AA550));
    func_00290D00();
    func_0013B0B0(&D_005AA6F0);
    func_00290BB0();
    func_002BF520();
    func_0013B110(1);
    func_0013B0B0(&D_005AA6B0);
    func_0013B620((u8 *)0x8000);
    func_0013B750(D_005AA620);
    func_00133D10(0);
    func_001CA780(*D_005AA608, 1);
    func_002BF610();
    func_0013B110(1);
    temp_f1 = D_005AA618 + gFrameDelta;
    D_005AA618 = temp_f1;
    if (!(temp_f1 < D_005AA614)) {
        D_005AA618 = 0.0f;
        D_005AA610 = 0x10006;
        var_f20 = 300.0f;
        D_005AA61C = 0.0f;
        D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + D_005AA60C) + 0x46C)) + 0x14) + 0x60) + 8);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_f3 = sp34;
        sp34 = 0.0f;
        temp_f21 = temp_f3 - sp44;
        sp44 = 0.0f;
        temp_f0 = (s32)(func_00146E30(&sp40, &sp30, D_005AA604 + 0x11C0));
        if (!(D_005AB350 <= (0.5f * D_0047042C))) {
            var_f20 = -300.0f;
        }
        D_005AA65C = 0;
        D_005AA648 = 0;
        D_005AA654 = 0xBE75C28F;
        D_005AA658 = (2400.0f + temp_f21) / 100.0f;
        D_005AA660 = temp_f0 / 100.0f;
        D_005AA650 = (4.0f * var_f20) / 100.0f;
        D_005AA64C = (-4.0f * var_f20) / 10000.0f;
        Fade_SetRequest(0xA, &func_002918A0, 0, 0x40800000);
        var_v0 = (s32 *)(&func_00293600);
        if (&func_00293600 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 8, 0);
        }
        memset(&spB0, 0, 0x30);
        spC4 = 0;
        spCC = (u8 **)(D_005AA550[0]);
        spC0 = 4;
        StrStatus_Dispatch(&spB0);
    }
}
