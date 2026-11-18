/* Draft (not built): func_00292FF0 at 0x00292FF0, size 0x260, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 105 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x260
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00292FF0.s */

// src/unk/unk_2918A0.c func_00292FF0 size diff=105/125
s32 amMotion_Update(s8 *, s32, s8 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133D10(s32);
s32 func_0013B110(s32);
s32 func_0013B750(s32);
s32 func_0013BC00(s32, s32, f32);
s32 func_0013C1E0(s8 *, s32, f32);
f32 func_00146E90(s32 *);
s32 func_001CA780(void *, s32);
s32 func_00290BB0();
s32 func_00290D00();
extern s8 *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern f32 D_005AA618;
extern f32 D_005AA61C;
extern s32 D_005AA620;
extern s32 D_005AA6B0;
extern s32 D_005AA6F0;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amMotion_BuildMatrices(char *);
extern char D_003F0800[];
extern void func_0013B620(void *);
extern void *D_005AA608[];
void func_00292FF0(void) {
    s32 sp20;
    s32 sp80;
    f32 sp84;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f13;
    s32 temp_v1;
    s32 var_a1;
    s8 *temp_a2;

    func_00131B90(&sp20);
    func_00131F00(&sp20, 0, 0);
    func_00132DF0(D_003F0800);
    temp_a2 = D_005AA60C + 0x41C;
    if (*(s32 *)((u8 *)D_005AA60C + 0x41C) != D_005AA610) {
        var_a1 = 0;
loop_3:
        if (var_a1 < *(s32 *)((u8 *)D_005AA60C + 0x418)) {
            temp_v1 = var_a1 << 6;
            var_a1 += 1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x30) = -1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x34) = -1;
            *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x38) = -1;
            goto loop_3;
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
    temp_f2 = D_005AA618 + gFrameDelta;
    temp_f0 = D_005AA614 - 1.0f;
    D_005AA618 = temp_f2;
    if (!(temp_f2 <= temp_f0)) {
        D_005AA618 = temp_f0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp84 = 0.0f;
    temp_f20 = func_00146E90(&sp80) * (D_005AA618 / D_005AA614) * 0.25f;
    func_00291E30();
    func_00290D00();
    func_0013B0B0(&D_005AA6F0);
    func_00290BB0();
    func_0013B110(1);
    func_0013B0B0(&D_005AA6B0);
    func_0013BC00(0, 0, -temp_f20);
    func_0013B620((u8 *)0x8000);
    func_0013B750(D_005AA620);
    func_00133D10(0);
    func_001CA780(*D_005AA608, 1);
    func_0013B110(1);
}
