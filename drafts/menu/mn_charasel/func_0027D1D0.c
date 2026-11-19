/* Draft (not built): func_0027D1D0 at 0x0027D1D0, size 0x158, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x15C, original 0x158
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027D1D0.s */

// src/menu/mn_charasel.c func_0027D1D0 size diff=62/87
extern void *D_00470810;
extern void amFile_Load(void *);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0027AAE0(void *);
s32 func_002F9500(s32, f32, s32);
s32 func_002F95E0(s8, s64, s64, s8, s64);
extern void func_0022E0B0(void *);
extern void func_0027CF80(void);
void func_0027D1D0(u8 *arg0) {
    f32 sp50;
    s32 *var_v1;
    s32 temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v1;

    temp_s0 = D_00470810;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(s32 *)((u8 *)temp_s0 + 0xC) == 0) {
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4) == 3) {
            *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = 0;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
            *(s32 *)((u8 *)temp_s0 + 0) = 0;
            *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
            *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0xC));
            goto block_3;
        }
    } else {
block_3:
        func_0027AAE0(temp_s1);
        *(s32 *)((u8 *)temp_s1 + 0x28) = func_002F95E0(*(s8 *)((u8 *)temp_s1 + 0xA), (s64) (((*(u8 *)((u8 *)temp_s1 + 7) == 0) ? 0 : 1) << 0x38) >> 0x38, *(s64 *)((u8 *)temp_s1 + 0x10), *(s8 *)((u8 *)temp_s1 + 4), (s64) *(u8 **)((u8 *)temp_s0 + 0xC));
        temp_v1 = *(u8 **)((u8 *)temp_s1 + 0x38);
        if (temp_v1 != NULL) {
            func_00229800(*(s32 *)((u8 *)temp_v1 + 0), &sp50, -1, *(f32 *)((u8 *)temp_v1 + 0x10));
            temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x28);
            if (temp_a0 != 0) {
                func_002F9500(temp_a0, sp50, 0);
            }
        }
        *(s8 *)((u8 *)temp_s1 + 0) = 3;
        *(s32 *)((u8 *)temp_s1 + 0x54) = 0x42700000;
        var_v1 = (int *)(&func_0027CF80);
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0;
        if (&func_0027CF80 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: CsSubStat_TaskLoad (src/menu/mn_cssubstat.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
void CsSubStat_TaskLoad(Task *t) {
    CsSubStatGlobal *g = gCsSubStat;
    CsSubStatWork *w = t->data.work;

    if (g->fC == 0) {
        if (g->file[1]->state != 3) {
            return;
        }
        g->f8 = g->file[0]->data;
        g->file[0]->data = 0;
        amCdFs_Close(g->file[0], 0);
        g->file[0] = NULL;
        g->fC = g->file[1]->data;
        g->file[1]->data = 0;
        amCdFs_Close(g->file[1], 0);
        g->file[1] = NULL;
        func_0022E0B0(g->f8);
        amFile_Load(g->fC);
    }
    SoundRpc_SetVolume(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        SoundRpc_Send3(0, 0, 0x15, 0);
    }
    func_00281A40(w);
    w->state = 1;
    w->f8 = 1;
    w->fC = 20.0f;
    TASK_SET_FUNC(t, func_00282620);
}
#endif
