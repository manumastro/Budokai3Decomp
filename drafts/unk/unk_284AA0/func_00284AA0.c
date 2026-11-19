/* Draft (not built): func_00284AA0 at 0x00284AA0, size 0x208, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x208
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00284AA0.s */

// src/unk/unk_284AA0.c func_00284AA0 size diff=59/122
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 amGs_SetReg64(s32, s32);
s32 amMotion_Apply(s8 *, s32, s32);
s32 func_00133620(s32, s32, s32, s32);
s32 func_00133720(s32, s32, s32);
s32 func_00133980(s32, s32, s32, s32);
s32 func_0013B110(s32);
s32 func_0013BC00(s32, s32, s32);
s32 func_0013E170(s8 *);
s32 func_0013E2A0(s8 *);
extern s128 D_004535D0;
extern s32 D_0046FD80;
extern void func_0013B0B0(void *);
extern void amMotion_BuildMatrices(char *);
extern void func_001339B0(void *);
void func_00284AA0(u8 *arg0) {
    s128 sp40;
    f32 temp_f0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;

    func_0013B0B0(NULL);
    func_00133720((s32)(arg0 + 0xF0), (s32)(arg0 + 0x130), (s32)(arg0 + 0x160));
    var_s2 = 0;
    var_s1 = (int)(arg0 + 0xF0);
    do {
        func_00133620(var_s2, 1, var_s1, var_s1 + 0x40);
        var_s2 += 1;
        var_s1 += 0x10;
    } while (var_s2 < 4);
    func_0013BC00(0, 0x43C80000, 0xC57A0000);
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0xC), 0xA800);
    *(f32 *)((u8 *)(*(s8 **)((u8 *)arg0 + 0xE4)) + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x238);
    amMotion_Apply(*(s8 **)((u8 *)arg0 + 0xE4), 0, 0x3F800000);
    func_0013E2A0(*(s8 **)((u8 *)arg0 + 0xE4));
    DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
    amGs_SetReg64(1, 0x42);
    func_0013E170(*(s8 **)((u8 *)arg0 + 0xE4));
    DrawFlags_Apply(0, 0x20000000, 0, 0);
    amGs_SetReg64(1, 0x44);
    D_0046FD80 = 0x41200000;
    sp40 = D_004535D0;
    func_001339B0(&sp40);
    DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200);
    func_0013E170(*(s8 **)((u8 *)arg0 + 0xE4));
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    DrawFlags_Apply(0, 0x13C00720, 0, 0);
    amMotion_BuildMatrices((char *)(*(s8 **)((u8 *)arg0 + 0xE4)));
    func_0013B110(1);
    *(f32 *)((u8 *)arg0 + 0x238) = (f32) (*(f32 *)((u8 *)arg0 + 0x238) + 0.3f);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x234);
    temp_f0 = (f32) temp_a0;
    if (!(*(f32 *)((u8 *)arg0 + 0x238) < temp_f0)) {
        *(f32 *)((u8 *)arg0 + 0x238) = (f32) (temp_a0 % M2C_BITWISE(s32, temp_f0));
    }
}
