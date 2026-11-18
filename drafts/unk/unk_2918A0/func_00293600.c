/* Draft (not built): func_00293600 at 0x00293600, size 0x344, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 153 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x23C, original 0x344
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00293600.s */

// src/unk/unk_2918A0.c func_00293600 size diff=153/143
s32 amMotion_Update(s8 *, s32, s8 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133D10(s32);
s32 func_0013B110(s32);
s32 func_0013C1E0(s8 *, s32, f32);
s32 func_001CA780(void *, s32);
s32 func_00290BB0();
s32 func_00290D00();
s32 func_002BF970(void **);
extern s128 D_00453DE0;
extern s8 *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern f32 D_005AA618;
extern f32 D_005AA61C;
extern f32 D_005AA648;
extern f32 D_005AA64C;
extern f32 D_005AA650;
extern f32 D_005AA654;
extern f32 D_005AA658;
extern f32 D_005AA65C;
extern f32 D_005AA660;
extern s32 D_005AA6B0;
extern s32 D_005AA6F0;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amMotion_BuildMatrices(char *);
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_002BEEE0(void *);
extern void func_002BF520(void);
extern char D_003F0800[];
extern void func_0013B620(void *);
extern void *D_005AA608[];
extern void func_002BF610(void);
void func_00293600(void) {
    s32 sp10;
    s32 sp70;
    s128 sp80;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 spAC;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f9;
    f32 var_f13;
    s32 temp_v1;
    s32 var_a1;
    s8 *temp_a2;

    sp80 = D_00453DE0;
    func_00131B90(&sp10);
    func_00131F00(&sp10, 0, 0);
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
    sp9C = 0x3F800000;
    spAC = 0x3F800000;
    spA0 = D_005AA650 + (2.0f * D_005AA64C * M2C_ERROR(/* unknown instruction: mula.s $f9, $f0 */));
    sp90 = 0.25f * M2C_ERROR(/* unknown instruction: madd.s $f0, $f7, $f9 */);
    temp_f9 = M2C_ERROR(/* unknown instruction: mula.s $f9, $f0 */);
    spA4 = D_005AA658 + (2.0f * D_005AA654 * temp_f9);
    sp94 = 0.25f * M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f9 */);
    M2C_ERROR(/* unknown instruction: mula.s $f9, $f1 */);
    sp98 = 0.25f * -M2C_ERROR(/* unknown instruction: madd.s $f1, $f3, $f9 */);
    spA8 = -(D_005AA660 + (2.0f * D_005AA65C * temp_f9));
    func_00146F30(&spA0);
    func_00141C30(&sp70, &sp80, &spA0);
    temp_f1 = D_005AA648 + gFrameDelta;
    D_005AA648 = temp_f1;
    if (!(temp_f1 <= 120.0f)) {
        D_005AA648 = 120.0f;
    }
    func_00291E30();
    func_002BF970((void **)(D_005AA550));
    func_002BEEE0(&sp90);
    func_00290D00();
    func_0013B0B0(&D_005AA6F0);
    func_00290BB0();
    func_002BF520();
    func_0013B110(1);
    func_0013B0B0(&D_005AA6B0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_00142100(&sp70, NULL);
    func_0013B620((u8 *)0x8000);
    func_00133D10(0);
    func_001CA780(*D_005AA608, 1);
    func_002BF610();
    func_0013B110(1);
}
