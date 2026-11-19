/* Draft (not built): func_0030E330 at 0x0030E330, size 0xB8, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_staffroll/func_0030E330.s */

void func_0030E330(u8 *arg0)
{
  f32 temp_f1;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_s0;
  u8 *temp_s1;
  temp_s1 = arg0 + 0x30;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x38));
  temp_a0 = *((s32 *) (((u8 *) arg0) + 0x34));
  D_00470704 = temp_a0;
  D_0047070C = 0x3000;
  D_00470708 = 0;
  amModel_SetCurrent(temp_a0, 0x3000);
  D_00470238 = 0;
  if (temp_s0 != 0)
  {
    func_0022C060(temp_s0, 1.0f);
    func_0022C560(temp_s0);
  }
  temp_f1 = (*((f32 *) (((u8 *) temp_s1) + 0xC))) + gFrameDelta;
  *((f32 *) (((u8 *) temp_s1) + 0xC)) = temp_f1;
  if (!(temp_f1 < 14116.0f))
  {
    temp_a0_2 = *((s32 *) (((u8 *) temp_s1) + 8));
    if (temp_a0_2 != 0)
    {
      *((s32 *) (((u8 *) temp_s1) + 8)) = 0;
      func_0022D0E0(temp_a0_2, 1);
    }
    *((s32 *) (((u8 *) arg0) + 0x1C)) = 0;
  }
}

/* Similar function already in C: func_0030E3F0 (src/story/str_staffroll.c), similarity 0.69.
 * It is the template below (not built). */
#if 0
void func_0030E3F0(s32 *a0) {
    s32 *s0 = (s32 *)((char *)a0 + 0x30);
    s32 s2 = a0[0x38 / 4];
    s32 v;
    s32 *q;
    void *f;
    v = a0[0x34 / 4];
    D_00470704 = v;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x3000);
    D_00470238 = 0;
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022C560(s2);
    }
    *(f32 *)&s0[0xC / 4] = *(f32 *)&s0[0xC / 4] + gFrameDelta;
    if (*(f32 *)&s0[0xC / 4] >= 13937.0f) {
        if (s0[0x8 / 4] != 0) {
            func_0022D0E0(s0[0x8 / 4], 1);
        }
        q = (s32 *)((s32 *)s0[0])[0x14 / 4];
        s0[0x8 / 4] = func_0022D860(q[0x8 / 4], 0.0f);
        f = (void *)func_0030E330;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
