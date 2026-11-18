/* Draft (not built): func_00202FA0 at 0x00202FA0, size 0x2B0, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); .exe Compiler: 570: *D_00495758 = *(s3232 *)((u8 *)var_s3 + 0x74); @ 569: *D_00495718 = *(s3232 *)((u8 *)var_s3 + 0x70);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00202FA0.s */

// src/unk/unk_1FB760.c func_00202FA0 cerr diff=-1/0
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 amGs_SetReg64(s32, s64);
s32 amMtxStack_Pop(s32);
s32 func_00133980(f32, f32, f32, f32);
s32 func_0013E0A0(void *);
extern s32 D_0044B7D0;
extern s32 D_0046FD18;
extern s32 D_0047064C;
extern void func_0013B0B0(void *);
extern char D_00495718[];
extern char D_00495758[];
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
void func_00202FA0(u8 *arg0) {
    s32 sp60;
    s32 *var_v0;
    s32 var_a1;
    s32 temp_s0;
    s32 var_s1;
    u8 *temp_s4;
    u8 *var_s3;

    temp_s4 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s3 = *(u8 **)((u8 *)arg0 + 0x3C);
    temp_s0 = D_0046FD18;
    var_s1 = 0;
    if (*(s32 *)((u8 *)temp_s4 + 8) & 1) {
        var_s1 = 0 | 0x20000800;
        amGs_SetReg64(0, *(&D_0044B7D0 + (*(s32 *)((u8 *)temp_s4 + 0xB0) * 8)));
    }
    if (*(s32 *)((u8 *)temp_s4 + 8) & 2) {
        var_s1 |= 0x1000;
    }
    if (var_s1 != 0) {
        DrawFlags_Apply(var_s1, 0, 0, var_s1);
    }
    var_a1 = 1;
    if (*(s32 *)((u8 *)temp_s4 + 8) & 0x02000000) {

    } else {
        var_a1 = 0;
    }
    func_00133780(0, var_a1);
    if (!(*(s32 *)((u8 *)temp_s4 + 8) & 0x01000000)) {
        amGs_SetReg32(0, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
    }
    func_0013B0B0(NULL);
    DrawFlags_Apply(0x80000000, 0, 0, 0);
    DrawFlags_Apply(0x700, 0, 0, 0x300);
loop_20:
    if (var_s3 != (arg0 + 0x44)) {
        if (!(*(s32 *)((u8 *)var_s3 + 0xC) & 1)) {
            func_00142100(var_s3 + 0x30, var_s3 + 0x10);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
            if (D_0047064C != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                var_v0 = &sp60;
            } else {
                var_v0 = (s32 *)(var_s3 + 0x60);
            }
            func_00133980(*(f32 *)((u8 *)var_v0 + 0), *(f32 *)((u8 *)var_v0 + 4), *(f32 *)((u8 *)var_v0 + 8), *(f32 *)((u8 *)var_v0 + 0xC));
            *D_00495718 = *(s3232 *)((u8 *)var_s3 + 0x70);
            *D_00495758 = *(s3232 *)((u8 *)var_s3 + 0x74);
            *(s32 *)((u8 *)D_00470648 + 8) = (s32) *(s32 *)((u8 *)temp_s4 + 0x5C);
            func_0013E0A0(D_00470648);
            func_0013B060(NULL);
        }
        var_s3 = *(u8 **)((u8 *)var_s3 + 0);
        goto loop_20;
    }
    func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
    DrawFlags_Apply(0, 0x80000000, 0, 0);
    DrawFlags_Apply(0, 0x700, 0, 0);
    amMtxStack_Pop(1);
    *D_00495718 = 0;
    *D_00495758 = 0;
    amGs_SetReg32(0, temp_s0);
    if (var_s1 != 0) {
        DrawFlags_Apply(0, var_s1, 0, 0);
    }
}
