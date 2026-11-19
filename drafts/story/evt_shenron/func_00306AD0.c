/* Draft (not built): func_00306AD0 at 0x00306AD0, size 0x118, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_shenron/func_00306AD0.s */

// src/story/evt_shenron.c func_00306AD0 diff diff=46/70
extern void func_00305590(void);
extern s32 amAdx_IsStopped(s32);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern void func_003068E0(void);
extern void func_003062B0(void);
void func_00306AD0(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    void (*var_v0)();

    temp_s0 = D_0047097C;
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) (*(f32 *)((u8 *)temp_s0 + 8) + func_002B06A0());
    func_00305590();
    temp_s0_2 = D_0047097C;
    if (!(*(D_00492FCE + (*D_004B4B63 * 0xB8)) & 8)) {
        if (!(*(f32 *)((u8 *)temp_s0_2 + 8) < 1650.0f) && (amAdx_IsStopped(1) != 0)) {
            goto block_4;
        }
    } else {
block_4:
        *(D_00492FCE + (*D_004B4B63 * 0xB8)) = 0;
        SoundRpc_SendWord(0);
        amAdx_Stop(1);
        var_v0 = func_003068E0;
        if (func_003068E0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0)) + 0x1C) = var_v0;
        amTask_Create(func_003062B0, 0, 0x5000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
    }
}

/* Similar function already in C: func_00306BF0 (src/story/evt_shenron.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
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
#endif
