/* Draft (not built): func_002ADB70 at 0x002ADB70, size 0x248, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x234, original 0x248
 * Original: asm/nonmatchings/battle/scr_func/func_002ADB70.s */

// src/battle/scr_func.c func_002ADB70 size diff=76/141
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 func_00133420(s32);
s32 func_00133620(s32, s32, s32 *, void *);
s32 func_00133720(s32 *, s32 *, s32 *);
s32 func_00139A80(s32 *, f32 *, s32);
s32 func_0013B110(s32);
s32 func_0013E0A0(s32);
extern f32 D_003F0930;
extern f32 D_003F0934;
extern f32 D_003F0938;
extern f32 D_003F093C;
extern s32 D_004700E0;
extern s32 D_00470238;
extern s32 D_005BCE60;
extern s32 D_005BCEA0;
extern s32 D_005BCED0;
extern void func_0013B0B0(void *);
extern void amDraw3d_Sync(void);
extern void func_001339B0(void *);
extern void func_0013AFA0(void *);
extern void amModel_SetCurrent();
s32 func_002ADB70(u8 *arg0, u8 *arg1) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    s32 *var_s1;
    s32 temp_a0;
    s32 var_s2;
    s8 temp_v1;
    u8 *temp_s0;

    temp_s0 = (*(s8 *)((u8 *)arg0 + 0x28) * 0x20E0) + (&D_005ABA80 + (**(s32 **)((u8 *)arg0 + 0) * 0x8380));
    if ((*(s32 *)((u8 *)temp_s0 + 0) == 0) && (*(s32 *)((u8 *)temp_s0 + 4) == 0)) {
        *(s32 **)((u8 *)arg1 + 0) = &D_004700E0;
        *(s32 *)((u8 *)arg1 + 4) = 0;
        return 5;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x38) == 0) {
        return 0;
    }
    if (*(s8 *)((u8 *)temp_s0 + 0x20A1) != 0) {
        amDraw3d_Sync();
    }
    func_0013B0B0(NULL);
    func_0013AFA0(NULL);
    if (*(f32 *)((u8 *)temp_s0 + 0x2094) != 0.0f) {
        sp40 = D_003F0930;
        sp44 = D_003F0934;
        sp48 = D_003F0938;
        sp4C = D_003F093C;
        sp50 = *(f32 *)((u8 *)temp_s0 + 0x2094);
        func_00139A80(&D_005BCE60, &sp40, 0);
        func_00133420(1);
        func_00133720(&D_005BCE60, &D_005BCEA0, &D_005BCED0);
        var_s2 = 0;
        var_s1 = &D_005BCE60;
        do {
            func_00133620(var_s2, 1, var_s1, var_s1 + 0x40);
            var_s2 += 1;
            var_s1 += 0x10;
        } while (var_s2 < 4);
    }
    temp_v1 = *(s8 *)((u8 *)temp_s0 + 0x20A3);
    if (temp_v1 == 1) {
        DrawFlags_Apply(0x700, 0, 0, 0x200);
        func_001339B0(temp_s0 + 0x20B0);
    } else if (temp_v1 == 2) {
        DrawFlags_Apply(0x700, 0, 0, 0x300);
        func_001339B0(temp_s0 + 0x20B0);
    }
    D_00470238 = *(s32 *)((u8 *)temp_s0 + 0x2098);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x24);
    if (temp_a0 != 0) {
        amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s0 + 0x209C));
    }
    func_0013E0A0(*(s32 *)((u8 *)temp_s0 + 0x38));
    if (*(s8 *)((u8 *)temp_s0 + 0x20A3) != 0) {
        DrawFlags_Apply(0, 0x700, 0, 0);
    }
    func_0013B110(1);
    return 0;
}
