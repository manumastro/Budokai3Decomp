#include "common.h"

extern s32 D_0047097C;
extern s32 D_00470980;

extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F9C8[];
extern void memset(void *, s32, s32);
extern s8 D_00511450[];
extern s32 func_00305830(s32);
extern void amTask_Kill(void *);

void Shenron_Create(void) {
    s32 *s0;
    s32 t;
    D_0047097C = (s32)amHeap_Alloc(0x164, 0, D_0046F9C8, 0x34B);
    memset((void *)D_0047097C, 0, 0x164);
    s0 = (s32 *)D_0047097C;
    s0[0x8 / 4] = 0;
    s0[0x10 / 4] = 0;
    s0[0x14 / 4] = 0;
    s0[0x18 / 4] = 0;
    s0[0x1C / 4] = 0;
    s0[0x20 / 4] = 0;
    s0[0xC / 4] = func_00305830(D_00511450[0]);
    s0[0xD4 / 4] = 0;
    s0[0xD8 / 4] = 0;
    t = s0[0];
    if (t != 0) {
        amTask_Kill((void *)t);
        s0[0] = 0;
    }
}

extern void func_00133B50(s32, s32);
extern void func_003053D0(s32 *, s32, s32, s32);
extern void func_00305680(void);
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(f32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern void amTask_Kill(void *);
extern s8 D_004B4B63[];
extern char D_00492FCE[];

#if 0
// func_003062B0: the four float constants of the stack block are stored in another order (the register of each constant swapped); 3 store orders tried; the calls and the flag test match
void func_003062B0(s32 *a0) {
    s32 *s1 = a0;
    u16 s0;
    s32 blk[4];
    s0 = *(u16 *)(D_00492FCE + (s32)D_004B4B63[0] * 184);
    func_00133B50(0, 0x2710);
    blk[1] = 0x43B40000;
    blk[0] = 0x43A00000;
    blk[3] = 0x3F800000;
    blk[2] = 0x41200000;
    func_003053D0(blk, ((s32 *)D_0047097C)[0xF4 / 4], 0, 0x600000);
    func_00305680();
    if ((s0 & 0x4000) != 0) {
        SoundRpc_SetVolume(D_004E0614[0], 0);
        if (!(D_004E0614[0] < 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        amTask_Kill((void *)s1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003062B0);
extern f32 func_002B06A0(void);
extern void amAdx_Stop(s32);
extern void SoundRpc_SendWord(s32);
extern void Scr_KillTasks(s32);
extern void func_002641D0(s32, s32);
extern void Scene_Request(s32, s32);
extern void Scene_MarkDone(void);
extern void func_00305130(f32 *, f32 *, s32, s32, s32);
#if 0
// func_003063B0: 11 of 82 differ: the constant registers and store order of the two stack vectors (the original puts 1.0 in a0, ours 400); statement order and a single 8-float array (29 differ) tried
void func_003063B0(void) {
    s32 *s0 = (s32 *)D_0047097C;
    f32 t = func_002B06A0();
    f32 va[4];
    f32 vb[4];
    f32 x;
    x = *(f32 *)&s0[0x8 / 4] + t;
    *(f32 *)&s0[0x8 / 4] = x;
    va[3] = 1.0f;
    vb[0] = 1.0f;
    vb[1] = 1.0f;
    vb[2] = 1.0f;
    vb[3] = 1.0f;
    {
        s32 *g = (s32 *)D_0047097C;
        va[0] = 320.0f;
        va[1] = 400.0f;
        va[2] = 0.0f;
        if (90.0f < *(f32 *)&g[0x8 / 4]) {
            if (*(f32 *)&g[0x8 / 4] < 220.0f) {
                func_00305130(va, vb, g[0x15C / 4], 3, 0x800000);
            }
        }
    }
    s0 = (s32 *)D_0047097C;
    if ((*(u16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184) & 0x8) != 0 || !(*(f32 *)&s0[0x8 / 4] < 960.0f)) {
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        Scr_KillTasks(s0[0x4 / 4]);
        func_002641D0(0xA, 0);
        Scene_Request(0xC, 0);
        Scene_MarkDone();
        amTask_Kill((void *)s0[0]);
        s0[0] = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003063B0);
extern f32 func_002B06A0(void);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_Stop(s32);
extern void SoundRpc_SendWord(s32);
extern void Scr_KillTasks(s32);
extern void func_002641D0(s32, s32);
extern void Scene_Request(s32, s32);
extern void Scene_MarkDone(void);
extern void func_003063B0(void);
void func_00306500(s32 *a0) {
    s32 *s0 = (s32 *)D_0047097C;
    s32 *s1 = a0;
    f32 t = func_002B06A0();
    f32 v = *(f32 *)&s0[0x8 / 4] + t;
    *(f32 *)&s0[0x8 / 4] = v;
    if (!(v < 90.0f)) {
        amAdx_PlayAfs(1, 0x21050, 0);
        {
            void *f = func_003063B0;
            s1[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
    s0 = (s32 *)D_0047097C;
    if ((*(u16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184) & 0x8) != 0 || !(*(f32 *)&s0[0x8 / 4] < 960.0f)) {
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        Scr_KillTasks(s0[0x4 / 4]);
        func_002641D0(0xA, 0);
        Scene_Request(0xC, 0);
        Scene_MarkDone();
        amTask_Kill((void *)s0[0]);
        s0[0] = 0;
    }
}
extern s32 Scr_Alloc(s32, s32, s32);
extern void Scr_SetData(s32, s32);
extern void Scr_SetCallback44(s32, s32);
extern void Scr_SetStartCallback(s32, s32);
extern void Scr_SetEndCallback(s32, s32);
extern void Scr_SetTaskStartCallback(s32, s32);
extern void Scr_SetTaskEndCallback(s32, s32);
extern void func_00305CB0(void);
extern void func_00306500(s32 *);
extern void func_00305AD0(void);
extern void TourMap_StopAdx(void *);
extern void func_00264140(s32, s32);
extern char D_00454680[];

void Shenron_SetupScript(s32 *a0) {
    s32 *s0 = (s32 *)D_0047097C;
    void *f;
    s0[1] = Scr_Alloc(0x3000, 1, 1);
    if (s0[1] != -1) {
        Scr_SetData(s0[1], s0[0xD8 / 4]);
        Scr_SetCallback44(s0[1], (s32)D_00454680);
        Scr_SetStartCallback(s0[1], (s32)func_00305AD0);
        Scr_SetEndCallback(s0[1], (s32)TourMap_StopAdx);
        Scr_SetTaskStartCallback(s0[1], 0);
        Scr_SetTaskEndCallback(s0[1], 0);
    }
    func_00305CB0();
    f = func_00306500;
    a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    func_00264140(-1, 0);
}
extern void func_00131F00(s32 *, f32, f32);
extern void func_00132DF0(s32);
extern void func_002641D0(s32, s32);
extern void Scr_KillTasks(s32);
extern s32 func_00283BF0(void);
extern void SklSheet_Free(void);

extern void func_00131D00(s32 *, s32, f32, f32);
extern void func_00131F00(s32 *, f32, f32);
extern void func_00132DF0(s32);
extern void func_002641D0(s32, s32);
extern void Scr_KillTasks(s32);
extern s32 func_00283BF0(void);
extern void SklSheet_Free(void);

void func_003066F0(s32 *a0) {
    s32 *s0 = (s32 *)D_0047097C;
    s32 blk[24];
    void *f;
    func_00131D00(blk, 0, 0.0f, 0.0f);
    func_00131F00(blk, 0.0f, 0.0f);
    func_00132DF0(0);
    if (func_00283BF0() >= 8) {
        SklSheet_Free();
        func_002641D0(9, 0);
        Scr_KillTasks(s0[0x4 / 4]);
        f = (void *)Shenron_SetupScript;
        s0[0x8 / 4] = 0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#if 0
// func_003067A0: 39 of 80 differ: the global goes to f2 here and f1 in the original (zero in f1 vs f2), and the call block sits two nops later (its skip branch lands 2 instructions past the original end); the `(flags & 8) || !(x < 200)` form and the early return both tried
extern void func_00305130(f32 *, f32 *, s32, s32, s32);
extern void SklSheet_SetIndex(s16);
extern void func_003066F0(s32 *);
void func_003067A0(s32 *a0) {
    s32 *s2 = a0;
    s32 *s1;
    u16 s0;
    f32 va[4];
    f32 vb[4];
    f32 t;
    s0 = *(u16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184);
    t = func_002B06A0();
    s1 = (s32 *)D_0047097C;
    *(f32 *)&s1[0x8 / 4] = *(f32 *)&s1[0x8 / 4] + t;
    va[0] = 320.0f;
    va[1] = 400.0f;
    va[2] = 0.0f;
    va[3] = 1.0f;
    vb[0] = 1.0f;
    vb[1] = 1.0f;
    vb[2] = 1.0f;
    vb[3] = 1.0f;
    if (0.0f < *(f32 *)&((s32 *)D_0047097C)[0x8 / 4]) {
        if (*(f32 *)&((s32 *)D_0047097C)[0x8 / 4] < 200.0f) {
            func_00305130(va, vb, ((s32 *)D_0047097C)[0x15C / 4], 2, 0x800000);
        }
    }
    if ((s0 & 0x8) != 0 || !(*(f32 *)&s1[0x8 / 4] < 200.0f)) {
        SklSheet_SetIndex(0);
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        {
            void *f = (void *)func_003066F0;
            s2[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003067A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003068E0);
#if 0
// func_00306AD0: the original keeps the global in s0 across the calls (frame 0x20, sq s0); ours reads it through v0; 27 of 71 differ with the early-return shape, 21 of 72 with the combined test
extern f32 func_002B06A0(void);
extern void func_00305590(void);
extern s32 amAdx_IsStopped(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void func_003068E0(void);
extern void func_003062B0(void);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern char D_0046F9D8[];
extern char D_00492FCE[];
extern s8 D_004B4B63[];

void func_00306AD0(void) {
    s32 *s0;
    f32 t;
    void *f;
    t = func_002B06A0();
    s0 = (s32 *)D_0047097C;
    *(f32 *)&s0[0x8 / 4] = *(f32 *)&s0[0x8 / 4] + t;
    func_00305590();
    if ((*(u16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184) & 0x8) == 0) {
        s0 = (s32 *)D_0047097C;
        if (*(f32 *)&s0[0x8 / 4] < 1650.0f) {
            return;
        }
        if (amAdx_IsStopped(1) == 0) {
            return;
        }
    }
    *(s16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184) = 0;
    SoundRpc_SendWord(0);
    amAdx_Stop(1);
    f = (void *)func_003068E0;
    ((s32 *)((s32 *)D_0047097C)[0])[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    amTask_Create((void *)func_003062B0, 0, 0x5000, 0x4000, 2, D_0046F9D8);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306AD0);
extern void func_00305590(void);
extern s32 amAdx_IsStopped(s32);
extern void func_003068E0(void);
extern void func_003062B0(void);
extern void func_00306AD0(void);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern char D_0046F9D8[];
// func_00306BF0: 19 of 93 differ: the task-pointer store (the original stores f into the task before the amTask_Create argument setup; ours sinks it into the call delay slot) and the end label 2 instructions later; the sibling of 306500 (matched) otherwise
void func_00306BF0(s32 *a0)
{
  int new_var;
  s32 *s0 = (s32 *) D_0047097C;
  s32 *new_var3;
  int new_var2;
  s32 *s1 = a0;
  f32 t = func_002B06A0();
  *((f32 *) (&s0[0x8 / 4])) = (*((f32 *) (&s0[0x8 / 4]))) + t;
  func_00305590();
  if (!((*((f32 *) (&s0[0x8 / 4]))) < 1400.0f))
  {
    amAdx_PlayAfs(1, 0x21051, 0);
    {
      void *f = func_00306AD0;
      s1[0x1C / 4] = (s32) ((f == 0) ? (0) : (f));
    }
  }
  s0 = (s32 *) D_0047097C;
  new_var2 = (*((u16 *) (((char *) D_00492FCE) + (((s32) D_004B4B63[0]) * 184)))) & 0x8;
  if ((new_var2 != 0) || ((!((*((f32 *) (&s0[0x8 / 4]))) < 1650.0f)) && (amAdx_IsStopped(1) != 0)))
  {
    *((u16 *) (((char *) D_00492FCE) + (((s32) D_004B4B63[0]) * 184))) = 0;
    SoundRpc_SendWord(0);
    amAdx_Stop(1);
    new_var3 = (s32 *) s0[0];
    {
      void *f = (void *) func_003068E0;
      s32 r = (s32) ((f == 0) ? (0) : (f));
      s32 *tk = new_var3;
      new_var = 0x1C / 4;
      tk[new_var] = r;
    }
    amTask_Create((void *) func_003062B0, 0, 0x5000, 0x4000, 2, D_0046F9D8);
  }
}

INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306D60);
extern void BtbDraw_InitState(void);
extern void func_00306060(void);
extern s32 Scr_Alloc(s32, s32, s32);
extern void func_00131B90(s32 *);
extern void func_00131F00(s32 *, f32, f32);
extern void func_00132DF0(s32);
extern void Scr_SetData(s32, s32);
extern void Scr_SetCallback44(s32, s32);
extern void Scr_SetStartCallback(s32, s32);
extern void Scr_SetEndCallback(s32, s32);
extern void Scr_SetTaskStartCallback(s32, s32);
extern void Scr_SetTaskEndCallback(s32, s32);
extern void func_00305E90(void);
extern void func_00305C20(void);
extern void func_00305B60(void);
extern char D_00454680[];
extern void func_00306D60(s32 *);

void Shenron_SetupBgScript(s32 *a0) {
    s32 *s1;
    s32 blk[24];
    void *f;
    if (((s16 *)(((s32 *)((s32 *)D_0047097C)[0xD0 / 4])))[2] == 3) {
        BtbDraw_InitState();
        func_00306060();
        s1 = (s32 *)D_0047097C;
        s1[0x4 / 4] = Scr_Alloc(0x3000, 1, 1);
        func_00131B90(blk);
        func_00131F00(blk, 0.0f, 0.0f);
        func_00132DF0(0);
        if (s1[0x4 / 4] != -1) {
            Scr_SetData(s1[0x4 / 4], s1[0xD4 / 4]);
            Scr_SetCallback44(s1[0x4 / 4], (s32)D_00454680);
            Scr_SetStartCallback(s1[0x4 / 4], (s32)func_00305C20);
            Scr_SetEndCallback(s1[0x4 / 4], (s32)func_00305B60);
            Scr_SetTaskStartCallback(s1[0x4 / 4], 0);
            Scr_SetTaskEndCallback(s1[0x4 / 4], 0);
        }
        func_00305E90();
        func_00264140(-1, 0);
        f = (void *)func_00306D60;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void Shenron_Clear(void) {
    D_0047097C = 0;
    D_00470980 = 0;
}
#if 0
// func_003070A0: the byte increment at D_004E6560+0x2AF19: the original adds the 0x30000 part in a separate lui/addu for the load and again for the store, and keeps D_004E6560 in a2; ours folds or reorders; 6 variants tried
extern s8 D_00511479[];
extern s8 D_004E066D[];
extern s8 D_004E6560[];
extern void func_00305910(void);
extern void Help_Exit(void);
extern void amHeap_Free(void *);

void func_003070A0(void) {
    char *base = (char *)D_004E6560;
    s32 *s0 = (s32 *)D_0047097C;
    s32 a1 = *(s32 *)((char *)s0 + 0x14 + s0[0x20 / 4] * 4);
    s32 b0 = (u8)D_00511479[a1];
    s32 b1 = (u8)D_004E066D[a1 * 40];
    if (b0 < b1) {
        char *p = base + a1;
        s32 v = ((u8 *)(p + 0x30000))[-0x50E7];
        ((u8 *)(p + 0x30000))[-0x50E7] = (u8)(v + 1);
    }
    func_00305910();
    if (s0[0] != 0) {
        amTask_Kill((void *)s0[0]);
        s0[0] = 0;
    }
    if (D_0047097C != 0) {
        amHeap_Free((void *)D_0047097C);
        D_0047097C = 0;
    }
    Help_Exit();
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003070A0);

extern void Scene_SetReady(void);
extern void Shenron_SetupBgScript(s32 *);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern char D_0046F9E8[];

void Shenron_Start(void) {
    s32 *s0;
    Scene_SetReady();
    s0 = (s32 *)D_0047097C;
    *s0 = amTask_Create((void *)Shenron_SetupBgScript, 0, 0x3100, 0x4000, 2, D_0046F9E8);
}
#if 0
// func_003071C0: the copy loop: the original counts with v1 and keeps the source in a1 (lui a1 first); ours takes the other registers, unrolled or swapped; 8 variants tried
typedef struct Copy16Sh {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16Sh;
extern void func_00306140(void);
extern void Help_Load(void);
extern void SoundSlot_ClearAll(void);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_00458E70[];

void func_003071C0(void) {
    s32 ids[44];
    s32 *s0;
    s32 i;
    s32 k;
    Copy16Sh *dq;
    Copy16Sh *sq;
    Shenron_Create();
    func_00306140();
    Help_Load();
    SoundSlot_ClearAll();
    s0 = (s32 *)D_0047097C;
    dq = (Copy16Sh *)ids;
    sq = (Copy16Sh *)D_00458E70;
    i = 0xB;
    do {
        *dq = *sq;
        sq++;
        dq++;
        i--;
    } while (i > 0);
    for (k = 0; k < 0x2C; k++) {
        s0[0x24 / 4] = amCdFs_ReadFileId(ids[k], 0, 1);
        s0++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003071C0);
