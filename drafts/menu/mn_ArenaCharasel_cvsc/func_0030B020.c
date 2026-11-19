/* Draft (not built): func_0030B020 at 0x0030B020, size 0x88, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030B020.s */

s32 memset(s32, s32, s32);
void func_0030B020(void) {
    s32 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_v0;
    temp_s0 = D_00470990;
    *(u8 **)((u8 *)temp_s0 + 0xC) = temp_v0;
    temp_v0 = amTask_Create(func_0030AA40, 0, 0x2000, 8);
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0xA;
    temp_v0_2 = (int)amHeap_Alloc(0x28, 0, D_0046FB60, 0x95);
    *(s32 *)((u8 *)temp_v0 + 0x30) = temp_v0_2;
    memset(temp_v0_2, 0, 0x28);
    Scene_SetReady();
}

/* Similar function already in C: func_00309CD0 (src/menu/mn_ArenaCharasel_pvsp.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void func_00309CD0(void)
{
  u8 *t;
  u8 *m;
  u8 *s0;
  s0 = D_0047098C;
  *((void **) (s0 + 8)) = (t = amTask_Create(func_00309680, 0, 0x2000, 8, 2, D_0046FAC0));
  m = t + 0x30;
  *((s32 *) (t + 0x34)) = 0xA;
  s0 = m;
  *((void **) s0) = (m = amHeap_Alloc(32, 0, D_0046FAE0, 156));
  memset(m, 0, 32);
  Scene_SetReady();
}
#endif
