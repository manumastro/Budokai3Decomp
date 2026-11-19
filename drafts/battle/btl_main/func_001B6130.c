/* Draft (not built): func_001B6130 at 0x001B6130, size 0x194, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B6130.s */

void func_001B6130(u8 *arg0) {
    s32 var_v0;
    if (*(f32 *)((u8 *)arg0 + 0xC60) <= 10.0f) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16)(*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16)(*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
    } else {
        func_001ABD30((struct Fighter *)(arg0 + 0x1360));
    }
    Fighter_ResetMotion(arg0, 0);
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0 && *(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)*(u8 **)((u8 *)arg0 + 0xBB4) + 0xC) - *(f32 *)((u8 *)arg0 + 0x1844) <= 0.0f) {
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32)(*(s32 *)((u8 *)arg0 + 0x1864) | 8);
            *(f32 *)((u8 *)arg0 + 0xCA4) = 0.0f;
            *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
        }
        if (0 <= *(s16 *)((u8 *)arg0 + 0x13A4)) {
            var_v0 = func_001C2B10(arg0);
        } else {
            var_v0 = func_001E94C0(arg0);
        }
        func_001E5040(arg0);
        if (var_v0 == 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_v0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468460[var_v0](arg0);
        func_002CBFF0(1, arg0);
    }
}

/* Similar function already in C: func_001B64C0 (src/battle/btl_main.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void func_001B64C0(Fighter *f)
{
  FighterMain2 *new_var;
  s32 v;
  if ((*((f32 *) (((u8 *) f) + 0xC60))) <= 10.0f)
  {
    *((s16 *) (((u8 *) f) + 0xCB2)) = 1;
    if ((*((s8 *) (((u8 *) f) + 0x2010))) != 0)
    {
      ((FighterCB2 *) f)->unkCB2 |= 0x8000;
    }
    if ((*((s8 *) (((u8 *) f) + 0x2011))) != 0)
    {
      ((FighterCB2 *) f)->unkCB2 |= 0x4000;
    }
  }
  else
  {
    func_001ABD30((Fighter *) (((u8 *) f) + 0x1360));
  }
  Fighter_ResetMotion(f, 0);
  if ((*((s32 *) (((u8 *) f) + 0xC64))) != 0)
  {
    ((FighterMain2 *) f)->unk1864 = 1;
    new_var = (FighterMain2 *) f;
    if (new_var->unk1FF9 != 0)
    {
      if ((((*((f32 *) (((u8 *) f) + 0x44))) - (*((f32 *) (((u8 *) (*((void **) (((u8 *) f) + 0xBB4)))) + 0xC)))) - (*((f32 *) (((u8 *) f) + 0x1844)))) <= 0.0f)
      {
        new_var->unk1FF9 = 0;
        new_var->unk1864 |= 8;
        *((f32 *) (((u8 *) f) + 0xCA4)) = 0.0f;
        *((s32 *) (((u8 *) f) + 0xCA8)) = 0x3DCCCCCD;
      }
    }
    if ((*((s16 *) (((u8 *) f) + 0x13A4))) > (-1))
    {
      v = func_001C2B10(f);
    }
    else
    {
      v = func_001E94C0(f);
    }
    func_001E5040(f);
    if (v == 0)
    {
      *((s16 *) (((u8 *) f) + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (((u8 *) f) + 0xCB4)) = 0;
    }
    *((s8 *) (((u8 *) f) + 0x2004)) = 1;
    *((s8 *) (((u8 *) f) + 0x1FFB)) = 1;
    if (v != 0xF)
    {
      *((s16 *) (((u8 *) f) + 0xCB6)) = 0;
    }
    *((s8 *) (((u8 *) f) + 0x2006)) = 0;
    D_00468460[v](f);
    func_002CBFF0(1, f);
  }
}
#endif
