/* Draft (not built): func_002C27B0 at 0x002C27B0, size 0xE4, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_status/func_002C27B0.s */

extern void SeReady_Start();
void func_002C27B0(u8 *arg0)
{
  void (*var_v1)();
  u8 *temp_a0;
  u8 *temp_a0_2;
  u8 *temp_s0;
  u8 *temp_s2;
  temp_a0 = *((u8 **) (((u8 *) temp_s0) + 4));
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  D_00470704 = (int) temp_a0;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0, 0x2000);
  D_00470238 = 0;
  temp_a0_2 = *((u8 **) (((u8 *) temp_s0) + 4));
  D_00470704 = (int) temp_a0_2;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0_2, 0x2000);
  D_00470238 = 0;
  temp_s2 = *((u8 **) (((u8 *) temp_s0) + 8));
  if (temp_s2 != NULL)
  {
    func_0022C060((s32) temp_s2, 0x3F800000);
    func_0022CD00((s32) temp_s2);
  }
  func_002C0860((s32 *) temp_s0);
  A2d_FlushList();
  func_00133B50(0, 0);
  SeReady_Start();
  var_v1 = func_002C2560;
  *((u8 *) (((u8 *) temp_s0) + 0xAC)) = (u8) ((*((u8 *) (((u8 *) temp_s0) + 0xAC))) + 1);
  *((s32 *) (((u8 *) temp_s0) + 0xC4)) = 0x41F00000;
  *((s8 *) (((u8 *) temp_s0) + 0xAF)) = 9;
  if (func_002C2560 == NULL)
  {
    var_v1 = NULL;
  }
  *((void (**)()) (((u8 *) arg0) + 0x1C)) = var_v1;
}

/* Similar function already in C: func_002C1CF0 (src/story/str_status.c), similarity 0.79.
 * It is the template below (not built). */
#if 0
void func_002C1CF0(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 s2;
    s32 v;
    s32 r;
    void *f;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s2 = s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022CD00(s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        *(u8 *)((char *)s0 + 0xAC) = *(u8 *)((char *)s0 + 0xAC) - 1;
        *(s32 *)((char *)s0 + 0xC4) = 0x41F00000;
        *(u8 *)((char *)s0 + 0xAF) = 5;
        func_002C0750(s0);
        func_002C1320(s0);
        f = (void *)func_002C2FF0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
