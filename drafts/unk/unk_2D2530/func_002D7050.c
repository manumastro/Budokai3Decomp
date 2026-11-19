/* Draft (not built): func_002D7050 at 0x002D7050, size 0x178, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xEC, original 0x178
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D7050.s */

// src/unk/unk_2D2530.c func_002D7050 size diff=62/59
extern s32 D_00456BE0;
void func_002D7050(void) {
    u8 sp[0x400];
    s32 sp50;
    f32 sp70;
    f32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    f32 sp84;
    s32 sp88;
    s32 sp8C;
    Model2D2530 *temp_s1;
    Obj2D2530 *temp_s0;
    Obj2D2530 *temp_s3;
    Vec4 *temp_a0;
    s32 temp_a0_2;
    s32 var_s2;

    var_s2 = 0;
    temp_s3 = gOptionWork;
    *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00456BE0) + 0);
    *(s64 *)((u8 *)(&sp50) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456BE0) + 0x10);
    sp70 = (f32) *(s32 *)((u8 *)((temp_s3->f37C * 4) + sp) + 0x50);
    sp80 = 0x43410000;
    sp78 = 0;
    sp7C = 0x3F800000;
    sp74 = (f32) *(s32 *)((u8 *)((temp_s3->f37C * 4) + sp) + 0x5C);
    sp8C = 0x3F800000;
    sp88 = 0;
    sp84 = (f32) *(s32 *)((u8 *)((temp_s3->f37C * 4) + sp) + 0x5C);
    goto loop_7;
block_2:
    temp_s0 = gOptionWork;
    temp_s1 = *(Model2D2530 **)((u8 *)((var_s2 * 4) + temp_s3) + 0x26C);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = (struct Vec4 *)((var_s2 * 0x10) + sp + 0x70);
    if (temp_a0 == NULL) {
        goto block_4;
    }
    func_00227A30(temp_a0);
block_4:
    temp_a0_2 = temp_s0->fC;
    D_00470704 = temp_a0_2;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_2, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1, 1.0f);
    func_00228410();
    func_0022CD00(temp_s1);
    func_00228410();
    var_s2 += 1;
loop_7:
    if (var_s2 < 2) {
        goto block_2;
    }
    return;
}

/* Similar function already in C: func_002D9770 (src/unk/unk_2D9510.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void func_002D9770(s32 a0, f32 a1) {
    u8 *w = (u8 *)gOptionWork;
    s32 i;
    u8 *s1;
    u8 *s0;
    f32 v[4];

    for (i = 0; i < 6; i++) {
        if (i != *(s32 *)(w + 0x378)) {
            v[0] = 0.5f;
            v[1] = 0.5f;
            v[2] = 0.5f;
            v[3] = 1.0f;
        } else {
            v[0] = 1.0f;
            v[1] = 1.0f;
            v[2] = 1.0f;
            v[3] = 1.0f;
        }
        v[3] = a1;
        s1 = ((u8 **)(w + 0x18))[i];
        s0 = (u8 *)gOptionWork;
        func_00228430(0);
        func_00228430(0);
        if (a0 != 0) {
            func_00227A30((u8 *)a0);
        }
        {
            s32 val = *(s32 *)(s0 + 0xC);
            D_00470704 = val;
            D_00470708 = 0;
            D_0047070C = 0;
            amModel_SetCurrent(val, 0);
        }
        D_00470238 = 0;
        func_0022C060(1.0f, (s32)s1);
        func_00228410();
        if (v != 0) {
            __asm__ volatile("lqc2 $vf1, 0x0(%0)\n\tsqc2 $vf1, 0x0(%1)" : : "r"(v), "r"(*(u8 **)(s1 + 0x30) + 0x50) : "memory");
        }
        func_0022CD00((s32)s1);
        func_00228410();
    }
}
#endif
