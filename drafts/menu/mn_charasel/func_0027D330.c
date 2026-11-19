/* Draft (not built): func_0027D330 at 0x0027D330, size 0x80, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027D330.s */

extern s16 D_0046B5B0;
void func_0027D330(u8 *arg0, s32 arg1)
{
  u8 *temp_t2;
  s16 *var_a3;
  s16 temp_v1;
  s32 var_t1;
  s64 var_t0;
  if (arg0 != NULL)
  {
    temp_t2 = *((u8 **) (((u8 *) arg0) + 0x30));
    var_t1 = 0;
    var_t0 = 0;
    var_a3 = &D_0046B5B0;
    do
    {
      if (arg1 & (1 << var_t0))
      {
        temp_v1 = *var_a3;
        if (temp_v1 != (-1))
        {
          var_t1 |= 1 << ((s64) temp_v1);
        }
      }
      var_t0 += 1;
      var_a3 += 2;
    }
    while (var_t0 < 0x2C);
    *((s64 *) (((u8 *) temp_t2) + 0x18)) = (s64) ((*((s64 *) (((u8 *) temp_t2) + 0x18))) | (var_t1 & (*((s64 *) (((u8 *) temp_t2) + 0x20)))));
  }
}
