/* Draft (not built): func_001BF570 at 0x00468F10, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001BF570.s */

// src/battle/btl_main.c func_001BF570 diff diff=93/109
void func_001BF570(u8 *arg0) {
    s16 temp_v0;
    s32 var_v0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    temp_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    switch (temp_v0) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
        break;
    case 4:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
        break;
    case 5:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
        break;
    case 6:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
        break;
    case 7:
    case 8:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
        break;
    case 9:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
        break;
    case 11:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
        break;
    default:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = 0;
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    func_001E3460(arg0);
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        var_v0 = 0x3CF5C28F;
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3BA3D70A;
    } else {
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3BA3D70A;
        var_v0 = 0x3C23D70A;
    }
    *(s32 *)((u8 *)arg0 + 0xCA8) = var_v0;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    func_001DD680(arg0);
}

/* Similar function already in C: func_001B3320 (src/battle/btl_main.c), similarity 0.87.
 * It is the template below (not built). */
#if 0
void func_001B3320(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x2C;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  new_var = (u8 *) arg0;
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x3B;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3E4CCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3E4CCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001D97D0(arg0);
}
#endif
