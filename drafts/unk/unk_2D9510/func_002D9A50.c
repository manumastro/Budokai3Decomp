/* Draft (not built): func_002D9A50 at 0x002D9A50, size 0x1C8, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); on from 'unsigned char *' to 'float' mwccps2.exe Compiler: @ 246: func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002D9A50.s */

// src/unk/unk_2D9510.c func_002D9A50 cerr diff=-1/0
void func_002D9A50(void) {
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;

    temp_s1 = (unsigned char *)(gOptionWork);
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x68);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s0));
    func_00228410();
    temp_s0_2 = *(u8 **)((u8 *)temp_s1 + 0x4C);
    temp_s2 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = (int)(temp_a0_2);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0);
    D_00470238 = 0;
    func_0022C060(temp_s0_2, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s0_2));
    func_00228410();
    temp_s1_2 = *(u8 **)((u8 *)temp_s1 + 0x50);
    temp_s0_3 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)temp_s0_3 + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_2, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s1_2));
    func_00228410();
}

/* Similar function already in C: func_002D4600 (src/unk/unk_2D2530.c), similarity 0.87.
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
