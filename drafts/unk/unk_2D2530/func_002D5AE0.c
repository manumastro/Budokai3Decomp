/* Draft (not built): func_002D5AE0 at 0x002D5AE0, size 0x28C, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x28C
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D5AE0.s */

// src/unk/unk_2D2530.c func_002D5AE0 size diff=115/113
extern s32 func_002DB0E0;
void func_002D5AE0(void) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp6C;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;

    temp_s2 = (unsigned char *)(gOptionWork);
    sp60 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x24);
    sp6C = 0x3F800000;
    sp68 = 0;
    sp64 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x28);
    if ((((s32)(D_00492FCC)) | ((s32)(D_00493084))) & 0x2000) {
        if ((s32)(*(s32 *)((u8 *)temp_s2 + 0x344)) == (s32)(&func_002DB0E0)) {
            sp5C = 0x3F800000;
            sp50 = 0x3F000000;
            sp54 = 0x3F000000;
            sp58 = 0x3F000000;
        } else {
            sp50 = 0x3F800000;
            sp54 = 0x3F800000;
            sp58 = 0x3F800000;
            sp5C = 0x3F800000;
        }
        sp5C = 0x3F800000;
        temp_s0 = (unsigned char *)(gOptionWork);
        temp_s1 = *(u8 **)((u8 *)((*(s16 *)((u8 *)D_004E05DC + 0x1C) * 4) + temp_s2) + 0x28C);
        func_00228430(0);
        func_00228430(0);
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = (int)(temp_a0);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(temp_s1), 0x3F800000);
        func_00228410();
        if (&sp50 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((Model2D2530 *)(temp_s1));
        func_00228410();
    } else {
        temp_s0_2 = *(u8 **)((u8 *)((*(s16 *)((u8 *)D_004E05DC + 0x1C) * 4) + temp_s2) + 0x28C);
        func_00228430(0);
        func_00228430(0);
        temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0xC);
        D_00470704 = (int)(temp_a0_2);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(temp_s0_2), 0x3F800000);
        func_00228410();
        func_0022CD00((Model2D2530 *)(temp_s0_2));
        func_00228410();
    }
    temp_s0_3 = (unsigned char *)(gOptionWork);
    temp_s1_2 = *(u8 **)((u8 *)((*(s16 *)((u8 *)D_004E05DC + 0x1C) * 4) + temp_s2) + 0x294);
    func_00228430(0);
    func_00228430(0);
    if (&sp60 != NULL) {
        func_00227A30((Vec4 *)(&sp60));
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s0_3 + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(temp_s1_2), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(temp_s1_2));
    func_00228410();
}

/* Similar function already in C: func_002D58B0 (src/unk/unk_2D2530.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void func_002D58B0(void) {
    Vec4 b;
    Vec4 a;
    Tbl2D2530 *e = (Tbl2D2530 *)D_004E05DC;
    Obj2D2530 *o = gOptionWork;
    Model2D2530 *m;
    Obj2D2530 *s;
    f32 k = 1.0f;

    a.x = (f32)e->f24;
    a.y = (f32)e->f28;
    a.z = 0.0f;
    a.w = 1.0f;
    k = (D_004703F4 != 3) ? 1.0f : 1.2f;
    o->f398 = o->f398 + k;
    b.x = 1.0f;
    b.y = 1.0f;
    b.z = 1.0f;
    b.w = 1.0f;
    if (o->f398 >= 30.0f) {
        b.w = 0.0f;
        o->f370 = 0;
    } else {
        b.w = 1.0f - o->f398 / 30.0f;
    }
    s = gOptionWork;
    m = ((Model2D2530 **)((char *)o + 0x28C))[e->f1C];
    DrawModel(s, m, 0, &b);
    s = gOptionWork;
    m = ((Model2D2530 **)((char *)o + 0x294))[e->f1C];
    DrawModel(s, m, &a, &b);
}
#endif
