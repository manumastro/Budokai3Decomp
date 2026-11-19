/* Draft (not built): func_002D9DE0 at 0x002D9DE0, size 0x198, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal implicit conversion from 'unsigned char *' to 'float' @ 258: func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002D9DE0.s */

// src/unk/unk_2D9510.c func_002D9DE0 cerr diff=-1/0
s32 func_0022C7D0(s32, s32, s32);
void func_002D9DE0(void) {
    f32 sp40;
    f32 sp44;
    f32 temp_f1;
    f32 var_f2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = (unsigned char *)(gOptionWork);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_s2 = (unsigned char *)(gOptionWork);
    sp44 = (167.0f * *(f32 *)((u8 *)temp_s1 + 0x390)) / 25.0f;
    sp40 = (-52.0f * *(f32 *)((u8 *)temp_s1 + 0x390)) / 25.0f;
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x34);
    func_00228430(0);
    func_00228430(0);
    if (&sp40 != NULL) {
        func_00227A30((u8 *)(&sp40));
    }
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060(temp_s0, (s32)((f32)(s32)(0x3F800000)));
    func_00228410();
    func_0022CD00((s32)(temp_s0));
    func_00228410();
    func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 0x10), 1, 0x420C0000);
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x390) + var_f2;
    *(f32 *)((u8 *)temp_s1 + 0x390) = temp_f1;
    if (!(temp_f1 < 25.0f)) {
        *(f32 *)((u8 *)temp_s1 + 0x390) = 0.0f;
        *(s32 *)((u8 *)temp_s1 + 0x34C) = 0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 0x10), 1, 0x43960000);
        func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 0x264), 1, 0);
    }
}

/* Similar function already in C: func_002D4340 (src/unk/unk_2D2530.c), similarity 0.70.
 * It is the template below (not built). */
#if 0
void func_002D4340(void) {
    Obj2D2530 *o = gOptionWork;
    Vec4 v;
    Vec4 p;
    f32 f;

    p.x = 1.0f;
    p.y = 1.0f;
    p.z = 1.0f;
    p.w = 1.0f;
    p.w = o->f398 / 10.0f;
    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 40.0f * o->f37C;
    DrawModel(gOptionWork, o->f288, &v, &p);
    if (D_004703F4 != 3) {
        f = 1.0f;
    } else {
        f = 1.2f;
    }
    o->f398 += f;
    if (o->f398 >= 10.0f) {
        o->f398 = 0.0f;
        o->f360 = func_002D4260;
    }
}
#endif
