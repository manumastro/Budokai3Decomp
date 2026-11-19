/* Draft (not built): func_002DF930 at 0x002DF930, size 0x288, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x288
 * Original: asm/nonmatchings/menu/mn_option/func_002DF930.s */

// src/menu/mn_option.c func_002DF930 size diff=88/122
s32 Help_Open(s64, s32);
s32 func_00228430(s32);
s32 func_0022C060(void *, s32);
s32 func_002D6890();
s32 func_002D6B10();
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00493086;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern char D_00492FCE[];
void func_002DF930(void) {
    s32 (*temp_v0)();
    s32 (*temp_v0_2)();
    s32 (*temp_v0_3)();
    s32 (*temp_v0_4)();
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = gOptionWork;
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40001 << 0x20, 3);
        return;
    }
    A2d_SetMode(*(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_v0 = *(s32 (**)())((u8 *)var_s1 + 0x344);
    if (temp_v0 != NULL) {
        temp_v0();
    }
    temp_v0_2 = *(s32 (**)())((u8 *)var_s1 + 0x360);
    if (temp_v0_2 != NULL) {
        temp_v0_2();
    }
    temp_v0_3 = *(s32 (**)())((u8 *)var_s1 + 0x348);
    if (temp_v0_3 != NULL) {
        temp_v0_3();
    }
    temp_v0_4 = *(s32 (**)())((u8 *)var_s1 + 0x368);
    if (temp_v0_4 != NULL) {
        temp_v0_4();
    }
    var_s2 = gOptionWork;
    var_s0 = *(u8 **)((u8 *)var_s2 + 0x264);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = temp_a0;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0, 0);
    D_00470238 = 0;
    func_0022C060(var_s0, 0x3F800000);
    func_00228410();
    func_0022CD00(var_s0);
    func_00228410();
    func_002D6B10();
    func_002D6890();
    var_s0 = *(u8 **)((u8 *)var_s1 + 0x4C);
    var_s2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = temp_a0_2;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_2, 0);
    D_00470238 = 0;
    func_0022C060(var_s0, 0x3F800000);
    func_00228410();
    func_0022CD00(var_s0);
    func_00228410();
    var_s1 = *(u8 **)((u8 *)var_s1 + 0x50);
    var_s0 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = temp_a0_3;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_3, 0);
    D_00470238 = 0;
    func_0022C060(var_s1, 0x3F800000);
    func_00228410();
    func_0022CD00(var_s1);
    func_00228410();
    A2d_FlushList();
}

/* Similar function already in C: func_002D4600 (src/unk/unk_2D2530.c), similarity 0.71.
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
