/* Draft (not built): func_001F1890 at 0x001F1890, size 0x16C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btb_draw/func_001F1890.s */

extern void func_00142100(void *, void *);
void func_001F1890(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    u8 *temp_s0;
    D_00470238 = 0;
    temp_s0 = arg0 + 0x30;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0x60), 0x02003000);
    if (!(temp_v1 & 0x800)) {
        if (temp_v1 & 0x8000) {
            goto block_3;
        }
    } else {
        block_3:
        if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
            BtbBg_GetStageModel();
            M2C_ERROR();
            M2C_ERROR();
            *(f32 *)((u8 *)&D_0051CCD0 + 0xC) = 1.0f;
            D_0047064C = (int)&D_0051CCD0;
        }

        if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((u8 *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((u8 *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_00208D70((s32)*(u8 **)((u8 *)temp_s0 + 0x38));
    func_0013B0B0(NULL);
    func_00142100(temp_s0 + 0x20, temp_s0 + 0x10);
    func_0013B110(1);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x20);
    if (!(temp_a0 & 0x800)) {
        if (temp_a0 & 0x8000) {
            goto block_10;
        }
    } else {
        block_10:
        D_0047064C = (int)NULL;

        if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}

/* Similar function already in C: func_001F1490 (src/battle/btb_draw.c), similarity 0.98.
 * It is the template below (not built). */
#if 0
void func_001F1490(char *a0) {
    char *s1;
    char *s0;
    s32 fl;
    s32 fl2;

    s1 = a0;
    s0 = s1 + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(s1 + 0x38), 0x2003000);
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
    func_0013B0B0(0);
    func_00208D60(*(s32 *)(s0 + 0xC));
    func_00208D70(*(s32 *)(s0 + 0x10));
    func_0013B110(1);
    fl2 = *(s32 *)(s1 + 0x20);
    if ((fl2 & 0x800) || (fl2 & 0x8000)) {
        D_0047064C = 0;
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}
#endif
