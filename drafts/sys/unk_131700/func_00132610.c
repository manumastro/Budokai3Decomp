/* Draft (not built): func_00132610 at 0x00132610, size 0x704, segment sys/unk_131700 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ';' expected mwccps2.exe Compiler: 238: *(s3232 *)((u8 *)var_s0 + 0x58) = 0; @ 96: extern Tri D_0047CA40;
 * Original: asm/nonmatchings/sys/unk_131700/func_00132610.s */

// src/sys/unk_131700.c func_00132610 cerr diff=-1/0
extern Tri D_0047CA40;
s32 func_0013B110(s32);
s32 memset(f32 *, s32, s32);
extern f32 D_00459350;
extern f32 D_00459364;
extern f32 D_00459378;
extern f32 D_00459380;
extern f32 D_00459384;
extern f32 D_00459388;
extern f32 D_0045938C;
extern s8 D_004703F8;
extern s32 D_00470498;
extern s32 D_0047049C;
extern f32 D_004704A0;
extern f32 D_004704A4;
extern f32 D_0047C8D0;
extern s32 D_0047C8E4;
extern s32 D_0047C8FC;
extern s32 D_0047C908;
extern f32 D_0047C910;
extern f32 D_0047C924;
extern f32 D_0047C938;
extern s32 D_0047C93C;
extern f32 D_0047C948;
extern f32 D_0047CA50;
extern f32 D_0047CA54;
extern f32 D_0047CA58;
extern f32 D_0047CA5C;
extern f32 D_0047CA60;
extern f32 D_0047CA64;
extern f32 D_0047CA68;
extern f32 D_0047CA6C;
extern f32 D_0047CA70;
extern f32 D_0047CA74;
extern f32 D_0047CA78;
extern f32 D_0047CA7C;
extern f32 D_0047CA80;
extern f32 D_0047CA84;
extern s32 D_0047CA88;
extern f32 D_0047CA90;
extern f32 D_0047CA94;
extern s32 D_0047CA98;
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
void func_00132610(s32 *arg0, f32 fparg0, f32 fparg1) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 sp80;
    f32 spE0;
    f32 spF4;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp118;
    s32 sp11C;
    s32 *var_s0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f20;
    f32 var_f3;
    f32 var_f3_2;

    var_s0 = arg0;
    if (var_s0 == NULL) {
        func_00131B90((void *)(&sp80));
        var_s0 = &sp80;
    }
    temp_f21 = *(f32 *)((u8 *)var_s0 + 0x10);
    if (D_004703F8 != 0) {
        var_f20 = 0.5f * *(f32 *)((u8 *)var_s0 + 0x14);
    } else {
        var_f20 = *(f32 *)((u8 *)var_s0 + 0x14);
    }
    temp_f23 = (*(f32 *)((u8 *)var_s0 + 0) * *(f32 *)((u8 *)var_s0 + 0x20)) / *(f32 *)((u8 *)var_s0 + 0x3C);
    temp_f22 = (*(f32 *)((u8 *)var_s0 + 4) * *(f32 *)((u8 *)var_s0 + 0x20)) / *(f32 *)((u8 *)var_s0 + 0x3C);
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
    temp_f24 = M2C_ERROR(/* unknown instruction: msub.s $f2, $f1, $f0 */) / (*(f32 *)((u8 *)var_s0 + 0x24) - *(f32 *)((u8 *)var_s0 + 0x20));
    temp_f25 = (*(f32 *)((u8 *)var_s0 + 0x24) * *(f32 *)((u8 *)var_s0 + 0x20) * (*(f32 *)((u8 *)var_s0 + 0x2C) - *(f32 *)((u8 *)var_s0 + 0x28))) / (*(f32 *)((u8 *)var_s0 + 0x24) - *(f32 *)((u8 *)var_s0 + 0x20));
    *(f32 *)((u8 *)var_s0 + 0x40) = temp_f25;
    *(f32 *)((u8 *)var_s0 + 0x44) = temp_f24;
    if (fparg0 <= 0.0f) {
        var_f1 = *(f32 *)((u8 *)var_s0 + 0);
        var_f0 = *(f32 *)((u8 *)var_s0 + 4);
        temp_f4 = fabsf(*(f32 *)((u8 *)var_s0 + 0x18) - 2048.0f);
        if (D_00470414 >= 0) {
            var_f3 = (f32) D_00470414;
        } else {
            var_f3 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
        }
        temp_f3 = ((var_f3 / 2.0f) + temp_f4) / temp_f21;
        if (!(var_f1 <= temp_f3)) {
            var_f1 = temp_f3;
        }
        temp_f4_2 = fabsf(*(f32 *)((u8 *)var_s0 + 0x1C) - 2048.0f);
        if (D_00470418 >= 0) {
            var_f3_2 = (f32) D_00470418;
        } else {
            var_f3_2 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
        }
        temp_f3_2 = ((var_f3_2 / 2.0f) + temp_f4_2) / var_f20;
        if (!(var_f0 <= temp_f3_2)) {
            var_f0 = temp_f3_2;
        }
    } else {
        var_f1 = fparg0 / temp_f21;
        var_f0 = fparg1 / var_f20;
    }
    *(f32 *)((u8 *)var_s0 + 0x30) = (f32) (*(f32 *)((u8 *)var_s0 + 0x3C) / var_f1);
    *(f32 *)((u8 *)var_s0 + 0x34) = (f32) (*(f32 *)((u8 *)var_s0 + 0x3C) / var_f0);
    temp_f3_3 = (var_f1 * *(f32 *)((u8 *)var_s0 + 0x20)) / *(f32 *)((u8 *)var_s0 + 0x3C);
    M2C_ERROR(/* unknown instruction: c1 0x10044 */);
    temp_f1 = ((temp_f3_3 * temp_f3_3) + (*(f32 *)((u8 *)var_s0 + 0x20) * *(f32 *)((u8 *)var_s0 + 0x20))) / temp_f3_3;
    temp_f3_4 = (var_f0 * *(f32 *)((u8 *)var_s0 + 0x20)) / *(f32 *)((u8 *)var_s0 + 0x3C);
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    var_f0_2 = ((temp_f3_4 * temp_f3_4) + (*(f32 *)((u8 *)var_s0 + 0x20) * *(f32 *)((u8 *)var_s0 + 0x20))) / temp_f3_4;
    if (!(var_f0_2 <= temp_f1)) {

    } else {
        var_f0_2 = temp_f1;
    }
    *(f32 *)((u8 *)var_s0 + 0x38) = var_f0_2;
    *(f32 *)((u8 *)var_s0 + 0x50) = (f32) (0.5f * (*(f32 *)((u8 *)var_s0 + 0x3C) * temp_f21));
    *(f32 *)((u8 *)var_s0 + 0x54) = (f32) (0.5f * (*(f32 *)((u8 *)var_s0 + 0x3C) * var_f20));
    *(s3232 *)((u8 *)var_s0 + 0x58) = 0;
    *(s32 *)((u8 *)var_s0 + 0x5C) = 0;
    memset(&D_0047C8D0, 0, 0x40);
    D_0047C8D0 = 1.0f;
    D_0047C8E4 = 0x3F800000;
    D_0047C8FC = 0x3F800000;
    D_0047C908 = 0x3F800000;
    memset(&spE0, 0, 0x40);
    spE0 = temp_f21;
    spF4 = var_f20;
    sp100 = *(f32 *)((u8 *)var_s0 + 0x18);
    sp104 = *(f32 *)((u8 *)var_s0 + 0x1C);
    sp108 = temp_f25;
    sp118 = temp_f24;
    sp11C = 0x3F800000;
    func_0013B0B0(&spE0);
    func_0013B960(&D_0047C8D0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    func_0013B110(1);
    memset(&D_0047C910, 0, 0x40);
    D_0047C910 = *(f32 *)((u8 *)var_s0 + 0x20) / temp_f23;
    D_0047C924 = *(f32 *)((u8 *)var_s0 + 0x20) / temp_f22;
    D_0047C938 = (*(f32 *)((u8 *)var_s0 + 0x24) + *(f32 *)((u8 *)var_s0 + 0x20)) / (*(f32 *)((u8 *)var_s0 + 0x24) - *(f32 *)((u8 *)var_s0 + 0x20));
    D_0047C93C = 0x3F800000;
    D_0047C948 = (-2.0f * *(f32 *)((u8 *)var_s0 + 0x24) * *(f32 *)((u8 *)var_s0 + 0x20)) / (*(f32 *)((u8 *)var_s0 + 0x24) - *(f32 *)((u8 *)var_s0 + 0x20));
    memset(&D_00459350, 0, 0x40);
    D_00459350 = (*(f32 *)((u8 *)var_s0 + 0x3C) * (temp_f23 * temp_f21)) / *(f32 *)((u8 *)var_s0 + 0x20);
    D_00459364 = (*(f32 *)((u8 *)var_s0 + 0x3C) * (temp_f22 * var_f20)) / *(f32 *)((u8 *)var_s0 + 0x20);
    D_00459378 = 0.5f * (*(f32 *)((u8 *)var_s0 + 0x28) - *(f32 *)((u8 *)var_s0 + 0x2C));
    D_00459380 = *(f32 *)((u8 *)var_s0 + 0x18);
    D_00459384 = *(f32 *)((u8 *)var_s0 + 0x1C);
    D_00459388 = 0.5f * (*(f32 *)((u8 *)var_s0 + 0x28) + *(f32 *)((u8 *)var_s0 + 0x2C));
    D_0045938C = 1.0f;
    *(f32 *)((u8 *)(&D_0047CA40) + 0) = (f32) *(f32 *)((u8 *)var_s0 + 0);
    *(f32 *)((u8 *)(&D_0047CA40) + 4) = (f32) *(f32 *)((u8 *)var_s0 + 4);
    *(f32 *)((u8 *)(&D_0047CA40) + 8) = (f32) *(f32 *)((u8 *)var_s0 + 8);
    *(f32 *)((u8 *)(&D_0047CA40) + 0xC) = (f32) *(f32 *)((u8 *)var_s0 + 0xC);
    D_0047CA50 = *(f32 *)((u8 *)var_s0 + 0x10);
    D_0047CA54 = *(f32 *)((u8 *)var_s0 + 0x14);
    D_0047CA58 = *(f32 *)((u8 *)var_s0 + 0x18);
    D_0047CA5C = *(f32 *)((u8 *)var_s0 + 0x1C);
    D_0047CA60 = *(f32 *)((u8 *)var_s0 + 0x20);
    D_0047CA64 = *(f32 *)((u8 *)var_s0 + 0x24);
    D_0047CA68 = *(f32 *)((u8 *)var_s0 + 0x28);
    D_0047CA6C = *(f32 *)((u8 *)var_s0 + 0x2C);
    D_0047CA70 = *(f32 *)((u8 *)var_s0 + 0x30);
    D_0047CA74 = *(f32 *)((u8 *)var_s0 + 0x34);
    D_0047CA78 = *(f32 *)((u8 *)var_s0 + 0x38);
    D_0047CA7C = *(f32 *)((u8 *)var_s0 + 0x3C);
    D_0047CA80 = *(f32 *)((u8 *)var_s0 + 0x40);
    D_0047CA84 = *(f32 *)((u8 *)var_s0 + 0x44);
    *(f32 *)((u8 *)(&D_0047CA88) + 0) = (f32) *(f32 *)((u8 *)var_s0 + 0x48);
    *(f32 *)((u8 *)(&D_0047CA88) + 4) = (f32) *(f32 *)((u8 *)(var_s0 + 0x48) + 4);
    D_0047CA90 = *(f32 *)((u8 *)var_s0 + 0x50);
    D_0047CA94 = *(f32 *)((u8 *)var_s0 + 0x54);
    *(s3232 *)((u8 *)(&D_0047CA98) + 0) = (s3232) *(s3232 *)((u8 *)var_s0 + 0x58);
    *(f32 *)((u8 *)(&D_0047CA98) + 4) = (f32) *(f32 *)((u8 *)(var_s0 + 0x58) + 4);
    sp40 = D_004704A0;
    sp44 = D_004704A4;
    sp48 = D_0047CA80;
    sp4C = D_0047CA68;
    sp50 = (f32) D_00470498;
    sp54 = (f32) D_0047049C;
    sp58 = D_0047CA84;
    sp5C = D_0047CA6C;
    M2C_ERROR(/* unknown instruction: lqc2 $vf20, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf21, 0x10($v1) */);
}
