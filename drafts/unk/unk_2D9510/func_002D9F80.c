/* Draft (not built): func_002D9F80 at 0x002D9F80, size 0xAC, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal implicit conversion from 'unsigned char *' to 'float' @ 246: func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002D9F80.s */

// src/unk/unk_2D9510.c func_002D9F80 cerr diff=-1/0
void func_002D9F80(void) {
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gOptionWork);
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x34);
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
}

/* Similar function already in C: func_002D3650 (src/unk/unk_2D2530.c), similarity 0.82.
 * It is the template below (not built). */
#if 0
void func_002D3650(void) {
    Vec4 v;
    Obj2D2530 *s = gOptionWork;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 45.0f * s->f37C;
    DrawModel(gOptionWork, s->f314, &v, 0);
}
#endif
