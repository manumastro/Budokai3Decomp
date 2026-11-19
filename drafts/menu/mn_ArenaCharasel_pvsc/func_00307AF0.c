/* Draft (not built): func_00307AF0 at 0x00307AF0, size 0x10C, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307AF0.s */

s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00307AF0(u8 *arg0)
{
  s32 var_s2;
  s32 var_s1;
  u8 *temp_a0;
  u8 *var_s0;
  temp_a0 = *((u8 **) (((u8 *) arg0) + 4));
  D_00470704 = temp_a0;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent(temp_a0, 0x2000);
  D_00470238 = 0;
  var_s2 = 0;
  var_s1 = 0;
  var_s0 = arg0;
  do
  {
    *((s32 *) (((u8 *) var_s0) + 0x70)) = func_0022D860(*((s32 *) (((u8 *) ((*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14))) + var_s1)) + 0x1C)), 0);
    var_s2 += 1;
    var_s1 += 4;
    var_s0 += 4;
  }
  while (var_s2 < 7);
  *((s32 *) (((u8 *) arg0) + 0x5C)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14)))) + 8)), 0);
  *((s32 *) (((u8 *) arg0) + 0x60)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14)))) + 0xC)), 0);
  *((s32 *) (((u8 *) arg0) + 0x64)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14)))) + 0x10)), 0);
  *((s32 *) (((u8 *) arg0) + 0x68)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14)))) + 0x14)), 0);
  *((s32 *) (((u8 *) arg0) + 0x6C)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14)))) + 0x18)), 0);
}

/* Similar function already in C: StrSelect_InitObjects (src/story/str_select.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void StrSelect_InitObjects(StrSelectWork *w) {
    s32 v;
    s32 n;
    s32 i;

    D_00470704 = v = (s32)w->tex;
    D_0047070C = n = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, n);
    D_00470238 = 0;
    for (i = 0; i < 7; i++) {
        w->f28[i] = func_0022D860(w->model->obj[i + 7], 0.0f);
    }
    w->f14 = func_0022D860(w->model->obj[2], 0.0f);
    w->f18 = func_0022D860(w->model->obj[3], 0.0f);
    w->f1C = func_0022D860(w->model->obj[4], 0.0f);
    w->f20 = func_0022D860(w->model->obj[5], 0.0f);
    w->f24 = func_0022D860(w->model->obj[6], 0.0f);
}
#endif
