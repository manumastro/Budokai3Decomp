/* Draft (not built): func_002D6400 at 0x002D6400, size 0x2AC, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x200, original 0x2AC
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D6400.s */

// src/unk/unk_2D2530.c func_002D6400 size diff=116/128
extern char D_004B4B40[];
void func_002D6400(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s3;
    s32 var_s4;
    s8 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s5;

    var_s4 = arg0;
    var_s3 = arg1;
    var_s2 = (unsigned char *)(gOptionWork);
    temp_a1 = *(s32 *)((u8 *)var_s2 + 0x380);
    temp_v0 = (unsigned char *)(D_004B4B40 + (temp_a1 * 0xA));
    var_s1 = *(s8 *)((u8 *)(temp_v0 + 0x2BA86) + 1);
    var_s0 = *(u8 **)((u8 *)((*(s8 *)((u8 *)temp_v0 + 0x2BA86) * 4) + var_s2) + 0xFC);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
    func_00228410();
    if (var_s4 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s0));
    func_00228410();
    var_s0 = *(u8 **)((u8 *)var_s2 + 0xF4);
    var_s5 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)var_s5 + 0xC);
    D_00470704 = (int)(temp_a0_2);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
    func_00228410();
    if (var_s4 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s0));
    func_00228410();
    temp_v0_2 = (var_s1 * 4) + var_s2;
    var_s1 = (s8) gOptionWork;
    var_s0 = *(u8 **)((u8 *)temp_v0_2 + 0x108);
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)var_s1 + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
    func_00228410();
    if (var_s3 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s0));
    func_00228410();
    var_s1 = (s8) *(s32 *)((u8 *)var_s2 + 0xF8);
    var_s0 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_4 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = (int)(temp_a0_4);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_4), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)((u8 *) var_s1), 0x3F800000);
    func_00228410();
    if (var_s3 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)((u8 *) var_s1));
    func_00228410();
}

/* Similar function already in C: func_002D4600 (src/unk/unk_2D2530.c), similarity 0.76.
 * It is the template below (not built). */
#if 0
void func_002D4600(Vec4 *a, Vec4 *b, Vec4 *c, Vec4 *d) {
    Obj2D2530 *s = gOptionWork;
    Model2D2530 *m;

    DrawModel(s, s->f278, 0, a);
    DrawModel(gOptionWork, s->f27C, 0, b);
    m = s->f280;
    DrawModel(gOptionWork, m, 0, c);
}
#endif
