/* Draft (not built): func_002ADE10 at 0x002ADE10, size 0x4B4, segment unk/unk_2ADDC0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 121 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x44C, original 0x4B4
 * Original: asm/nonmatchings/unk/unk_2ADDC0/func_002ADE10.s */

// src/unk/unk_2ADDC0.c func_002ADE10 size diff=121/275
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 amGs_SetReg64(s32, s32);
s32 func_00133420(s32);
s32 func_00133620(s32, s32, s32 *, void *);
s32 func_00133720(s32 *, s32 *, s32 *);
s32 func_00133980(s32, s32, s32, s32);
s32 func_00139A80(s32 *, f32 *, s32);
s32 func_0013B110(s32);
s32 func_0013C1E0(void *, s32, f32);
s32 func_0013E170(void *);
s32 func_0013E2A0(void *);
s32 func_0029D4B0(s32);
s32 func_0029D4C0();
void *func_0029D540();
extern s32 D_0046FD80;
extern s32 D_004700E0;
extern s32 D_00470238;
extern f32 D_004708F8;
extern s32 D_005BCE60;
extern s32 D_005BCEA0;
extern s32 D_005BCED0;
extern void func_0013B0B0(void *);
extern void amModel_SetCurrent();
extern void amDraw3d_Sync(void);
extern void func_001339B0(void *);
extern void func_0013AFA0(void *);
s32 func_002ADE10(u8 *arg0, u8 *arg1) {
    s32 saved_reg_s0;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    s32 *var_s2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f13;
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s3;
    s8 temp_v1;
    u8 *temp_s1;
    u8 *temp_v0;

    var_s0 = saved_reg_s0;
    temp_s1 = (*(s8 *)((u8 *)arg0 + 0x28) * 0x20E0) + (((u8 *)&D_005ABA80) + (**(s32 **)((u8 *)arg0 + 0) * 0x8380));
    if ((*(s32 *)((u8 *)temp_s1 + 0) == 0) && (*(s32 *)((u8 *)temp_s1 + 4) == 0)) {
        *(s32 **)((u8 *)arg1 + 0) = &D_004700E0;
        *(s32 *)((u8 *)arg1 + 4) = 0;
        return 5;
    }
    if (*(u8 **)((u8 *)temp_s1 + 0x3C) == NULL) {
        return 0;
    }
    if (*(s8 *)((u8 *)temp_s1 + 0x20A1) != 0) {
        amDraw3d_Sync();
    }
    func_0013B0B0(NULL);
    func_0013AFA0(NULL);
    if (*(s8 *)((u8 *)temp_s1 + 0x20A0) != 0) {
        temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x2090);
        var_f13 = 1.0f;
        if (temp_f1 != 0.0f) {
            var_f13 = 1.0f / temp_f1;
            if (!(var_f13 <= 1.0f)) {
                var_f13 = 1.0f;
            }
            temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x2090) - D_004708F8;
            *(f32 *)((u8 *)temp_s1 + 0x2090) = temp_f1_2;
            if (temp_f1_2 < 0.0f) {
                *(f32 *)((u8 *)temp_s1 + 0x2090) = 0.0f;
            }
        }
        func_0013C1E0(*(u8 **)((u8 *)temp_s1 + 0x3C), 0, var_f13);
        if (*(s8 *)((u8 *)arg0 + 0x29) != 0) {
            func_0013E2A0(*(u8 **)((u8 *)temp_s1 + 0x3C));
        }
    }
    if (*(f32 *)((u8 *)temp_s1 + 0x2094) != 0.0f) {
        temp_v0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x3C)) + 0x408);
        sp50 = *(f32 *)((u8 *)temp_v0 + 0x30);
        sp54 = *(f32 *)((u8 *)temp_v0 + 0x34);
        sp58 = *(f32 *)((u8 *)temp_v0 + 0x38);
        sp5C = *(f32 *)((u8 *)temp_v0 + 0x3C);
        sp60 = *(f32 *)((u8 *)temp_s1 + 0x2094);
        func_00139A80(&D_005BCE60, &sp50, 0);
        func_00133420(1);
        func_00133720(&D_005BCE60, &D_005BCEA0, &D_005BCED0);
        var_s3 = 0;
        var_s2 = &D_005BCE60;
        do {
            func_00133620(var_s3, 1, var_s2, var_s2 + 0x40);
            var_s3 += 1;
            var_s2 += 0x10;
        } while (var_s3 < 4);
    }
    temp_v1 = *(s8 *)((u8 *)temp_s1 + 0x20A3);
    if (temp_v1 == 1) {
        DrawFlags_Apply(0x700, 0, 0, 0x200);
        DrawFlags_Apply(0x800, 0, 0, 0x800);
        func_001339B0(temp_s1 + 0x20B0);
    } else if (temp_v1 == 2) {
        DrawFlags_Apply(0x700, 0, 0, 0x300);
        DrawFlags_Apply(0x800, 0, 0, 0x800);
        func_001339B0(temp_s1 + 0x20B0);
    } else if (temp_v1 == 3) {
        DrawFlags_Apply(0x700, 0, 0, 0x300);
        DrawFlags_Apply(0x800, 0, 0, 0x800);
        DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
        amGs_SetReg64(0, 0x44);
        var_s0 = amGs_SetReg32(0, 0x7000D);
        func_001339B0(temp_s1 + 0x20B0);
    }
    D_00470238 = *(s32 *)((u8 *)temp_s1 + 0x2098);
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x24);
    if (temp_a0 != 0) {
        amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s1 + 0x209C));
    }
    func_0029D4B0(0x42);
    temp_s2 = func_0029D4C0();
    DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
    amGs_SetReg64(1, temp_s2);
    func_0013E170(*(u8 **)((u8 *)temp_s1 + 0x3C));
    DrawFlags_Apply(0, 0x20000000, 0, 0);
    amGs_SetReg64(1, 0x44);
    D_0046FD80 = 0x3CCCCCCD;
    func_001339B0(func_0029D540());
    DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200);
    func_0013E170(*(u8 **)((u8 *)temp_s1 + 0x3C));
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    DrawFlags_Apply(0, 0x13C00720, 0, 0);
    func_0013B110(1);
    if (*(s8 *)((u8 *)temp_s1 + 0x20A3) != 0) {
        DrawFlags_Apply(0, 0x700, 0, 0);
        DrawFlags_Apply(0, 0x800, 0, 0);
        if (*(s8 *)((u8 *)temp_s1 + 0x20A3) == 3) {
            DrawFlags_Apply(0, 0x20000000, 0, 0);
            amGs_SetReg32(0, var_s0);
        }
    }
    *(s8 *)((u8 *)temp_s1 + 0x20A0) = 0;
    return 0;
}
