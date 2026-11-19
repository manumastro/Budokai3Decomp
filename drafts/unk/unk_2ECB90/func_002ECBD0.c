/* Draft (not built): func_002ECBD0 at 0x002ECBD0, size 0x108, segment unk/unk_2ECB90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2ECB90/func_002ECBD0.s */

s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 func_00133D80(s32);
s32 func_00133D90(f32);
s32 func_0013E0A0(s32);
s32 func_001F5A70(void *);
extern s32 D_00470238;
extern s32 D_0051CD20;
extern void *gBattle;
extern char *D_0051CD14[];
extern void func_0012F2C0(void);
extern void amModel_SetCurrent();
void func_002ECBD0(u8 *arg0) {
    s32 temp_a0;
    temp_a0 = *(s32 *)((u8 *)*(u8 **)((u8 *)(D_0051CD20 * 0x24 + *(s16 *)D_0051CD14) + 4) + 0xA4);
    if (temp_a0 != 0) {
        D_00470238 = 1;
        amModel_SetCurrent(temp_a0, 0x02002000);
    }
    func_001F5A70(*(u8 **)((u8 *)arg0 + 0x10));
    if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
        func_00133D80(*(s32 *)((u8 *)gBattle + 0x8928));
        func_00133D90(*(f32 *)((u8 *)gBattle + 0x892C));
        DrawFlags_Apply(0x8000, 0, 0, 0x8000);
    }
    func_0013E0A0(*(s32 *)((u8 *)*(u8 **)((u8 *)arg0 + 0x10) + 4));
    if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
        DrawFlags_Apply(0, 0x8000, 0, 0);
    }
    func_0012F2C0();
}

/* Similar function already in C: func_001F2350 (src/battle/btb_draw.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_001F2350(char *a0) {
    char *s1;
    char *s0;
    s32 a34;
    s32 fl;
    s32 fl2;

    s1 = a0;
    s0 = s1 + 0x30;
    a34 = *(s32 *)(s1 + 0x34);
    if (a34 != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(a34, 0x2004000);
    }
    fl = *(s32 *)(s1 + 0x20);
    if ((fl & 0x800) || (fl & 0x8000)) {
        if (*(s32 *)(s1 + 0x30) != 0) {
            __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(BtbBg_GetStageModel()), "r"(D_0051CCD0) : "memory");
            D_0051CCD0[3] = 1.0f;
            D_0047064C = (s32)D_0051CCD0;
        }
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((char *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((char *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_00208D60(*(s32 *)s0);
    func_00208D70(*(s32 *)(s0 + 8));
    fl2 = *(s32 *)(s1 + 0x20);
    if ((fl2 & 0x800) || (fl2 & 0x8000)) {
        D_0047064C = 0;
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}
#endif
