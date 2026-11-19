/* Draft (not built): func_002DA030 at 0x002DA030, size 0x2D8, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); on from 'unsigned char *' to 'float' mwccps2.exe Compiler: @ 259: func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DA030.s */

// src/unk/unk_2D9510.c func_002DA030 cerr diff=-1/0
void func_002DA030(void) {
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s0_5;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;

    temp_s1 = (unsigned char *)(gOptionWork);
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x38);
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
    temp_s0_2 = *(u8 **)((u8 *)temp_s1 + 0x58);
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
    temp_s0_3 = *(u8 **)((u8 *)temp_s1 + 0x5C);
    temp_s2_2 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)temp_s2_2 + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060(temp_s0_3, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s0_3));
    func_00228410();
    temp_s0_4 = *(u8 **)((u8 *)temp_s1 + 0x60);
    temp_s2_3 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_4 = *(u8 **)((u8 *)temp_s2_3 + 0xC);
    D_00470704 = (int)(temp_a0_4);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_4), 0);
    D_00470238 = 0;
    func_0022C060(temp_s0_4, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s0_4));
    func_00228410();
    temp_s1_2 = *(u8 **)((u8 *)temp_s1 + 0x64);
    temp_s0_5 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_5 = *(u8 **)((u8 *)temp_s0_5 + 0xC);
    D_00470704 = (int)(temp_a0_5);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_5), 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_2, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s1_2));
    func_00228410();
}

/* Similar function already in C: func_002D80A0 (src/unk/unk_2D2530.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
void func_002D80A0(Vec4 *a, Vec4 *b, Vec4 *c, Vec4 *d) {
    Obj2D2530 *s = gOptionWork;
    Model2D2530 *m;

    DrawModel(s, (Model2D2530 *)s->f74, 0, a);
    DrawModel(gOptionWork, (Model2D2530 *)s->f84, 0, a);
    DrawModel(gOptionWork, (Model2D2530 *)s->f78, 0, b);
    DrawModel(gOptionWork, (Model2D2530 *)s->f88, 0, b);
    DrawModel(gOptionWork, (Model2D2530 *)s->f7C, 0, c);
    DrawModel(gOptionWork, (Model2D2530 *)s->f8C, 0, c);
    m = (Model2D2530 *)s->f80;
    DrawModel(gOptionWork, m, 0, d);
}
#endif
