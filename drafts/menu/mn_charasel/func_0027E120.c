/* Draft (not built): func_0027E120 at 0x0027E120, size 0x1A4, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1BC, original 0x1A4
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027E120.s */

// src/menu/mn_charasel.c func_0027E120 size diff=9/111
s32 CsSubArena_Close(s32);
s32 CsSubStat_Close(s32);
s32 func_002F9540(s32);
extern void amTask_Kill(void *);
extern void Help_Exit();
extern void CsSubArena_Unload(void);
extern void CsSubStat_Unload(void);
extern void DataErase_Exit(void);
void func_0027E120(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    u8 temp_v0;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x38);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x3C);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x40);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x44);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0x48);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0x4C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    func_002F9540(*(s32 *)((u8 *)temp_s0 + 0x28));
    temp_a0_8 = *(u8 **)((u8 *)temp_s0 + 0x2C);
    if (temp_a0_8 != NULL) {
        amTask_Kill(temp_a0_8);
    }
    temp_a0_9 = *(u8 **)((u8 *)temp_s0 + 0x30);
    if (temp_a0_9 != NULL) {
        amTask_Kill(temp_a0_9);
    }
    temp_v0 = *(u8 *)((u8 *)temp_s0 + 0xA);
    switch (temp_v0) {
    case 2:
    case 3:
    case 4:
        temp_a0_10 = *(s32 *)((u8 *)temp_s0 + 0x34);
        if (temp_a0_10 != 0) {
            CsSubStat_Close(temp_a0_10);
        }
        CsSubStat_Unload();
        break;
    case 5:
        temp_a0_11 = *(s32 *)((u8 *)temp_s0 + 0x34);
        if (temp_a0_11 != 0) {
            CsSubArena_Close(temp_a0_11);
        }
        CsSubArena_Unload();
        break;
    case 7:
        DataErase_Exit();
        break;
    }
    amHeap_Free(temp_s0);
    amTask_Kill(arg0);
    Help_Exit();
}

/* Similar function already in C: ArenaStageSel_Exit (src/menu/mn_ArenaStageSel.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void ArenaStageSel_Exit(void) {
    ArenaStageSelGlobal *g = gArenaStageSel;
    ArenaStageSelWork *w;
    ArenaStageSelSubData *d;
    ArenaStageSelEntry *e;
    TaskData *td = &g->task->data;
    s32 i;

    if (g->task != NULL) {
        w = td->work;
        StrStatus_Exit(w->f8);
        if (w->f10 != 0) {
            func_0022D0E0(w->f10, 1);
        }
        if (w->f18 != 0) {
            func_0022D0E0(w->f18, 1);
        }
        if (w->f14 != 0) {
            func_0022D0E0(w->f14, 1);
        }
        if (w->f1C != 0) {
            func_0022D0E0(w->f1C, 1);
        }
        if (w->f20 != 0) {
            func_0022D0E0(w->f20, 1);
        }
        if (w->f24 != 0) {
            func_0022D0E0(w->f24, 1);
        }
        for (i = 0; i < 13; i++) {
            e = &w->entry[i];
            if (e->model != 0) {
                func_0022D0E0(e->model, 1);
                e->model = 0;
            }
        }
        if (w->f28 != NULL) {
            func_0022D4B0(w->f28, 1);
            w->f28 = NULL;
        }
        if (w->res != NULL) {
            amHeap_Free(w->res);
        }
        if (w->tex != NULL) {
            amHeap_Free(w->tex);
        }
        if (w->sub != NULL) {
            d = (ArenaStageSelSubData *)&w->sub->data;
            if (d->f0 >= 0) {
                amSofdec_Destroy(d->f0);
            }
            d->f0 = -1;
            d->f4 = -1;
            d->f6 = -1;
            amTask_Kill(w->sub);
        }
        amHeap_Free(w);
        amTask_Kill(g->task);
    }
    if (g->fC != NULL) {
        amTask_Kill(g->fC);
    }
    if (g->f10 != NULL) {
        amTask_Kill(g->f10);
    }
    amHeap_Free(gArenaStageSel);
    gArenaStageSel = NULL;
    Help_Exit();
    InputPass_Release();
}
#endif
