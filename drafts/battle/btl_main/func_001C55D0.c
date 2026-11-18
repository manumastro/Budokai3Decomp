/* Draft (not built): func_001C55D0 at 0x001C55D0, size 0x2A0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ';' expected mwccps2.exe Compiler: 5276: var_s3 = saved_reg_s3; @ 5260: extern s3232 D_00470568;
 * Original: asm/nonmatchings/battle/btl_main/func_001C55D0.s */

// src/battle/btl_main.c func_001C55D0 cerr diff=-1/0
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern s32 func_0029D540(void);
extern void func_001339B0(s32 a);
extern void DrawFlags_Apply(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_0029D4C0(void);
extern void amModel_SetCurrent(s32 a, s32 b);
extern void func_00133980(f32 a, f32 b, f32 c, f32 d);
f32 func_0029D550(void *, void *, f32);
extern f32 D_0046FD80;
extern s3232 D_00470568;
extern void func_0013B960(void *);
extern void amObject_Draw(void *);
void func_001C55D0(u8 *arg0) {
    f32 var_f0;
    s32 var_s2;
    s32 var_s4;
    s64 var_s0;
    s8 temp_a0;
    s8 temp_v1;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *var_s3;

    var_s3 = saved_reg_s3;
    var_s4 = saved_reg_s4;
    temp_s6 = (u8 *)(gBattle);
    if (*(s8 *)((u8 *)arg0 + 0xCC3) != 0) {
        var_s2 = 0;
        if (*(s32 *)((u8 *)temp_s6 + 0x88D8) > 0) {
            do {
                switch (var_s2) {                   /* irregular */
                case 0:
                    temp_v1 = *(s8 *)((u8 *)arg0 + 0x201E);
                    if (temp_v1 > 0) {
                        var_s4 = temp_v1 - 1;
                        var_s3 = arg0;
                    } else {
                        var_s3 = NULL;
                    }
                    break;
                case 1:
                    var_s3 = *(u8 **)((u8 *)arg0 + 0x1354);
                    temp_a0 = *(s8 *)((u8 *)var_s3 + 0x201E);
                    if (temp_a0 < 0) {
                        var_s4 = -1 - temp_a0;
                    } else {
                        var_s3 = NULL;
                    }
                    break;
                }
                if (var_s3 != NULL) {
                    func_0013B0B0(var_s3);
                    temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)(***(u8 ****)((u8 *)arg0 + 0xB88)) + 0x14) + (*(s8 *)((u8 *)arg0 + 0xCC3) << 5)) + 4)) + 8);
                    func_0013B960(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0xB88)) + 0x408) + (*(*(s32 *)((u8 *)var_s3 + 0xB8C) + (var_s4 * 2)) << 6));
                    temp_v0 = *(u8 **)((u8 *)arg0 + 0xB80);
                    amModel_SetCurrent(*(s32 *)((u8 *)temp_v0 + 0x5C), *(s32 *)((u8 *)temp_v0 + 0x60));
                    D_00470568 = *(s3232 *)((u8 *)arg0 + 0xC50);
                    var_s0 = *(s64 *)((u8 *)arg0 + 0xC48);
                    if (var_s0 == 0) {
                        var_s0 = func_0029D4C0();
                    }
                    DrawFlags_Apply(0x20000000, 0, 0, 0x20000000, 0);
                    amGs_SetReg64(1, var_s0);
                    amObject_Draw(temp_s1);
                    DrawFlags_Apply(0, 0x20000000, 0, 0, 0);
                    amGs_SetReg64(1, 0x44);
                    D_00470568 = 0;
                    DrawFlags_Apply(0, 0x20000000, 0, 0, 0);
                    amGs_SetReg64(1, 0x44);
                    temp_a1 = *(u8 **)((u8 *)temp_s6 + 0x264);
                    if (temp_a1 != NULL) {
                        var_f0 = func_0029D550(var_s3 + (var_s4 * 0x10) + 0x650, temp_a1, *(f32 *)((u8 *)temp_a1 + 0x34));
                    } else {
                        var_f0 = D_0046FD80;
                    }
                    D_0046FD80 = var_f0;
                    func_001339B0(func_0029D540());
                    DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200, 0);
                    amObject_Draw(temp_s1);
                    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
                    DrawFlags_Apply(0, 0x13C00720, 0, 0, 0);
                    func_0013B110(1);
                }
                var_s2 += 1;
            } while (var_s2 < *(s32 *)((u8 *)temp_s6 + 0x88D8));
        }
    }
}
