/* Draft (not built): func_0020B600 at 0x0020B600, size 0x458, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )' redeclared was declared as: 'void ()' now declared as: 'void (unsigned char *)' @ 627: void func_0020B600(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020B600.s */

// src/unk/unk_20A4D0.c func_0020B600 cerr diff=-1/0
extern u8 D_00495718[];
extern u8 D_00495758[];
extern void amMotion_BuildMatrices(void *m);
s32 amGs_SetReg64(s32, s32);
s32 func_00133780(s32, s32);
s32 func_0013C1E0(s8 *, s32, s32);
s32 func_0013E170(s8 *);
s32 func_0013E2A0(s8 *);
s128 *func_0029D540();
f32 func_0029D550(s32 *, void *, f32);
extern s128 D_0044BA80;
extern f32 D_0046FD80;
extern void func_001339B0(void *);
void func_0020B600(u8 *arg0) {
    s32 sp24;
    s32 sp28;
    f32 sp20;
    s128 sp30;
    s32 sp40;
    s32 sp50;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    s128 *var_v0;
    s32 temp_v1;
    s8 *temp_v0;
    u8 *temp_a1;

    func_0013C1E0(*(s8 **)((u8 *)arg0 + 0x9C), 0, 0x3F800000);
    func_0013E2A0(*(s8 **)((u8 *)arg0 + 0x9C));
    if (*(s32 *)((u8 *)arg0 + 0x88) != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0x88), *(s32 *)((u8 *)arg0 + 0x20E4));
    }
    if (*(s32 *)((u8 *)arg0 + 0x20EC) & 8) {
        DrawFlags_Apply(0x700, 0, 0, 0x200);
        func_00133980(*(f32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)arg0 + 0x34), *(f32 *)((u8 *)arg0 + 0x38), *(f32 *)((u8 *)arg0 + 0x2128));
    } else {
        DrawFlags_Apply(0x700, 0, 0, 0x300);
        func_00133980(1.0f, 1.0f, 1.0f, *(f32 *)((u8 *)arg0 + 0x2128));
    }
    if (*(s32 *)((u8 *)arg0 + 0x20EC) & 0x80) {
        func_0013B160(arg0 + 0x40);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_0020D5C0(arg0 + 0x40, 0, &sp50, 7);
    }
    *D_00495718 = *(s32 *)((u8 *)arg0 + 0x2120);
    *D_00495758 = *(s32 *)((u8 *)arg0 + 0x2124);
    func_00133780(0, 0);
    func_0013B0B0(NULL);
    func_0013B960(arg0 + 0x40);
    temp_f12 = *(f32 *)((u8 *)arg0 + 0x2130);
    func_0013BC30(temp_f12, temp_f12, temp_f12);
    if (*(s32 *)((u8 *)arg0 + 0x20EC) & 0x20) {
        DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
        amGs_SetReg64(1, 0x42);
        func_0013E170(*(s8 **)((u8 *)arg0 + 0x9C));
        amGs_SetReg64(1, 0x44);
        DrawFlags_Apply(0, 0x20000000, 0, 0);
        func_00133980(0.0f, 0.0f, 0.0f, 1.0f);
        DrawFlags_Apply(0x03C00000, 0, 0, 0x400000);
        DrawFlags_Apply(0x700, 0, 0, 0x200);
        DrawFlags_Apply(0x10000020, 0, 0, 0x10000000);
        sp30 = D_0044BA80;
        amMotion_BuildMatrices(*(s8 **)((u8 *)arg0 + 0x9C));
        temp_v0 = *(s8 **)((u8 *)arg0 + 0x9C);
        func_0013B160((void *)(*(s32 *)((u8 *)temp_v0 + 0x408) + (*(s32 *)((u8 *)temp_v0 + 0x40C) << 6)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        temp_a1 = *(u8 **)((u8 *)gBattle + 0x264);
        if (temp_a1 == NULL) {
            var_f0 = D_0046FD80;
        } else {
            var_f0 = func_0029D550(&sp40, temp_a1, *(f32 *)((u8 *)temp_a1 + 0x34));
        }
        var_v0 = &sp30;
        D_0046FD80 = var_f0;
        if (var_v0 == NULL) {
            var_v0 = func_0029D540();
        }
        func_001339B0(var_v0);
        DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200);
        if (*(s32 *)((u8 *)arg0 + 0x20EC) & 0x40) {
            temp_v1 = *(s32 *)((u8 *)arg0 + 0x213C);
            if ((temp_v1 >= 0) && (temp_v1 < *(s32 *)((u8 *)(*(s8 **)((u8 *)arg0 + 0x9C)) + 0x418))) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                temp_f2 = sp28 + (sp20 + sp24);
                if (temp_f2 != 0.0f) {
                    D_0046FD80 = (3.0f * D_0046FD80) / temp_f2;
                }
            }
        }
        func_0013E170(*(s8 **)((u8 *)arg0 + 0x9C));
        func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
        DrawFlags_Apply(0, 0x13C00720, 0, 0);
        DrawFlags_Apply(0, 0x10000020, 0, 0);
        DrawFlags_Apply(0, 0x700, 0, 0);
        DrawFlags_Apply(0, 0x03C00000, 0, 0);
        func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
    } else {
        func_0013E170(*(s8 **)((u8 *)arg0 + 0x9C));
    }
    func_0013B110(1);
    *D_00495718 = 0;
    *D_00495758 = 0;
    DrawFlags_Apply(0, 0x700, 0, 0);
}
