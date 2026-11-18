/* Draft (not built): func_0023B7D0 at 0x0023B7D0, size 0x410, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); efined identifier 'saved_reg_s1' mwccps2.exe Compiler: 387: temp_a1 = (var_s0_3 * 8) + sp; @ 333: var_s1 = saved_reg_s1;
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023B7D0.s */

// src/unk/unk_23A890.c func_0023B7D0 cerr diff=-1/0
s32 amGs_SetReg32(s32, s32);
s32 func_00136E80(s32, s32 *, s32, s32);
s32 func_00137440(s32, u8);
s32 func_001484A0(s32);
s32 memcpy(s32 *, void *, s32);
extern s128 D_004500D0;
extern s32 D_00470714;
extern s32 D_0058C000;
extern s32 D_0058C004;
extern s32 D_0058C034;
extern s32 D_0058C040;
extern s32 D_0058C050;
extern s32 D_0058C054;
extern s32 D_0058C058;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_0023B7D0(s32 arg0) {
    s128 sp80;
    s32 sp90;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spC8;
    f32 spCC;
    s32 var_s1;
    f32 temp_f1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s6;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s2;
    u8 *temp_v0_2;

    var_s1 = saved_reg_s1;
    temp_s3 = (s32)(gBtlSys);
    temp_v0 = func_0021C3D0(0);
    func_0021C430(temp_v0);
    func_0021C400(temp_v0);
    var_s0 = 0x40000124;
    spCC = D_00470690;
    spC8 = D_00470694;
    var_s6 = 0;
    if ((*(s32 *)((u8 *)((arg0 * 4) + temp_s3) + 0xE8C) != 0) && (*(&D_0058C040 + (arg0 * 0x60)) < *(s32 *)((u8 *)(*(u8 **)((u8 *)((temp_v0 * 4) + temp_s3) + 0xE8C)) + 0x10))) {
        temp_s5 = amGs_SetReg32(2, 0x3400F);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        D_00470238 = 0;
        spA8 = 1.0f;
        amModel_SetCurrent(*(s32 *)((u8 *)((temp_v0 * 4) + temp_s3) + 0xE8C), (temp_v0 << 0xC) + 0x04020000);
        temp_v0_2 = &D_0058BF70 + (arg0 * 0x60);
        temp_s2 = temp_v0_2 + 0xC0;
        if ((s32) *(u8 *)((u8 *)temp_v0_2 + 0xC3) > 0) {
            var_s6 = 1;
            var_s0 = 0x40000124 | 0x8000;
        }
        temp_v1 = *(&D_0058C034 + (arg0 * 0x60));
        if (temp_v1 != 0) {
            var_s0_2 = var_s0 | 0x800;
            switch (temp_v1) {                      /* irregular */
            case 1:
                var_s1 = 0x44;
                break;
            case 2:
                var_s1 = 0x48;
                break;
            case 3:
                var_s1 = 0x42;
                break;
            }
        } else {
            var_s0_2 = var_s0 | 0x1000;
            var_s1 = 0;
        }
        if (D_00470714 == 1) {
            func_001484A0(3);
        }
        memcpy(&sp90, &D_0058BF70 + (arg0 * 0x60) + 0xB0, 0x10);
        func_00136E80(var_s0_2, &sp90, *(&D_0058C040 + (arg0 * 0x60)), var_s1);
        if (var_s6 != 0) {
            func_00137440(*(u8 *)((u8 *)temp_v0_2 + 0xC0) | ((*(u8 *)((u8 *)temp_s2 + 2) << 0x10) | (*(u8 *)((u8 *)temp_s2 + 1) << 8)), *(u8 *)((u8 *)temp_s2 + 3));
        }
        var_s0_3 = 0;
        sp80 = D_004500D0;
loop_25:
        if (var_s0_3 < 2) {
            if (arg0 & 1) {
                temp_a2 = arg0 * 0x60;
                temp_a1 = (var_s0_3 * 8) + sp;
                spB0 = spCC + (*(&D_0058C000 + temp_a2) - *(f32 *)((u8 *)temp_a1 + 0x80));
                spB4 = spC8 + (*(&D_0058C004 + temp_a2) + *(f32 *)((u8 *)temp_a1 + 0x84));
                spA0 = *(&D_0058C058 + temp_a2) - *(f32 *)((u8 *)temp_a1 + 0x80);
                spA4 = *(&D_0058C054 + temp_a2) + *(f32 *)((u8 *)temp_a1 + 0x84);
            } else {
                temp_a2_2 = arg0 * 0x60;
                temp_a1_2 = (var_s0_3 * 8) + sp;
                spB0 = spCC + (*(&D_0058C000 + temp_a2_2) + *(f32 *)((u8 *)temp_a1_2 + 0x80));
                spB4 = spC8 + (*(&D_0058C004 + temp_a2_2) + *(f32 *)((u8 *)temp_a1_2 + 0x84));
                spA0 = *(&D_0058C050 + temp_a2_2) + *(f32 *)((u8 *)temp_a1_2 + 0x80);
                spA4 = *(&D_0058C054 + temp_a2_2) + *(f32 *)((u8 *)temp_a1_2 + 0x84);
            }
            temp_f1 = spA0;
            if (temp_f1 < 0.0f) {
                spA0 = 0.0f;
                spB0 -= temp_f1;
            }
            func_00137560(&spB0, &spA0);
            var_s0_3 += 1;
            goto loop_25;
        }
        amDraw_FlushPacket();
        amGs_SetReg32(2, temp_s5);
    }
}
