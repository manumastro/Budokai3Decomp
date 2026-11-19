/* Draft (not built): func_001BA570 at 0x00468D30, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x228, original 0x240
 * Original: asm/nonmatchings/battle/btl_main/func_001BA570.s */

// src/battle/btl_main.c func_001BA570 size diff=86/138
void func_001BA570(u8 *arg0) {
    s16 var_v0;
    s32 var_v0_2;
    u8 *temp_a0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x12;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {
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
    var_v0_2 = 0x24;
    if (*(s16 *)((u8 *)arg0 + 0xCB4) != 0) {

    } else {
        var_v0_2 = 0x2A;
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = var_v0_2;
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    func_001E3460(arg0);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3A83126F;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3AC49BA6;
        if (*(s16 *)((u8 *)arg0 + 0xCAE) == 0x10) {
            temp_a0 = arg0 + 0xD0;
            func_00146F10(temp_a0, temp_a0, 0.35f);
        } else {
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
        }
        *(s8 *)((u8 *)arg0 + 0x1FFA) = 1;
    } else {
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
        *(s8 *)((u8 *)arg0 + 0x1FFA) = 0;
    }
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s32 *)((u8 *)arg0 + 0x18A4) = 0x42F00000;
    if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (*(s8 *)((u8 *)arg0 + 0x2013) == 1)) {
        *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    }
}

/* Similar function already in C: func_001BD300 (src/battle/btl_main.c), similarity 0.81.
 * It is the template below (not built). */
#if 0
void func_001BD300(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 9;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 8U;
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

  if ((*((s8 *) (((u8 *) arg0) + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (((u8 *) arg0) + 0x2011))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x4000);
  }
  *((s32 *) (((u8 *) arg0) + 0xB70)) = 9;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F333333;
  *((s32 *) (new_var + 0xCA8)) = 0x3E99999A;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
}
#endif
