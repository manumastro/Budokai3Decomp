#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CC840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CCB70);
extern void *gBattle;
extern s32 Input_IsHeld(s32);
extern void func_0021C660(s32);
extern void func_0022C560(s32);

void func_002CCFD0(u8 *arg0)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  u8 *temp_s2;
  s32 var_s1;
  s32 new_var;
  u8 *var_s0;
  if ((*((s8 *) (((u8 *) gBattle) + 0x8975))) == 1)
  {
    goto block_3;
  }
  if (Input_IsHeld(0x80000000) != 0)
  {
    goto block_4;
  }
  block_3:
  return;

  block_4:
  if (Input_IsHeld(1) == 0)
  {
    goto block_13;
  }

  temp_s2 = arg0 + 0x30;
  new_var = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x30)))) + 0xC));
  func_0021C660(new_var);
  var_s1 = 0;
  var_s0 = temp_s2;
  loop_6:
  temp_a0 = *((s32 *) (((u8 *) var_s0) + 4));

  if (temp_a0 == 0)
  {
    goto block_8;
  }
  func_0022C560(temp_a0);
  block_8:
  var_s1 += 1;

  var_s0 += 4;
  if (var_s1 < 3)
  {
    goto loop_6;
  }
  temp_a0_2 = *((s32 *) (((u8 *) temp_s2) + 0x10));
  if (temp_a0_2 == 0)
  {
    goto block_11;
  }
  func_0022C560(temp_a0_2);
  block_11:
  temp_a0_3 = *((s32 *) (((u8 *) temp_s2) + 0x14));

  if (temp_a0_3 == 0)
  {
    goto block_13;
  }
  func_0022C560(temp_a0_3);
  block_13:
  return;

}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD0C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD1B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD2D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD480);
