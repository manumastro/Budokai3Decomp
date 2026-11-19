/* Draft (not built): func_0030F0E0 at 0x0030F0E0, size 0x13C, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_staffroll/func_0030F0E0.s */

extern void amHeap_Free(void *);
void func_0030F0E0(void)
{
  u8 *temp_s3;
  Task *temp_a0_3;
  Task *temp_s1;
  Task *temp_s1_2;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_s0;
  u8 *temp_a0_4;
  u8 *temp_a0_5;
  u8 *temp_a0_6;
  u8 *temp_a0_7;
  temp_s0 = D_00470998;
  if (temp_s0 != 0)
  {
    temp_s3 = *((u8 **) (((u8 *) (*((u8 **) (((u8 *) temp_s0) + 8)))) + 0x30));
    temp_s1 = *((Task **) (((u8 *) temp_s3) + 8));
    if (temp_s1 != NULL)
    {
      temp_a0 = *((s32 *) (((u8 *) temp_s1) + 0x38));
      if (temp_a0 != 0)
      {
        func_0022D0E0(temp_a0, 1);
      }
      amTask_Kill(temp_s1);
    }
    temp_s1_2 = *((Task **) (((u8 *) temp_s3) + 0xC));
    if (temp_s1_2 != NULL)
    {
      temp_a0_2 = (int) temp_s1_2->data.work;
      if (temp_a0_2 >= 0)
      {
        amSofdec_Stop(temp_a0_2);
        amSofdec_Destroy((s32) temp_s1_2->data.work);
      }
      amTask_Kill(temp_s1_2);
    }
    temp_a0_3 = *((Task **) (((u8 *) temp_s3) + 0x10));
    if (temp_a0_3 != NULL)
    {
      amTask_Kill(temp_a0_3);
    }
    temp_a0_4 = *((u8 **) (((u8 *) temp_s3) + 4));
    if (temp_a0_4 != NULL)
    {
      amHeap_Free(temp_a0_4);
    }
    temp_a0_5 = *((u8 **) (((u8 *) temp_s3) + 0));
    if (temp_a0_5 != NULL)
    {
      amHeap_Free(temp_a0_5);
    }
    amHeap_Free(temp_s3);
    amTask_Kill(*((Task **) (((u8 *) temp_s0) + 8)));
    temp_a0_6 = *((u8 **) (((u8 *) temp_s0) + 0));
    if (temp_a0_6 != NULL)
    {
      amCdFs_Close(temp_a0_6, 0);
    }
    temp_a0_7 = *((u8 **) (((u8 *) temp_s0) + 4));
    if (temp_a0_7 != NULL)
    {
      amCdFs_Close(temp_a0_7, 0);
    }
    amHeap_Free((u8 *) temp_s0);
    D_00470998 = 0;
  }
}

/* Similar function already in C: ArenaList_Free (src/menu/mn_ArenaList.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void ArenaList_Free(void) {
    u8 *s1;
    u8 *s0;

    s0 = (u8 *)D_00470968;
    s1 = *(u8 **)(*(u8 **)(s0 + 0xC) + 0x30);
    func_002EE5C0(s1);
    if (*(void **)(s1 + 0x23C) != 0) {
        amHeap_Free(*(void **)(s1 + 0x23C));
    }
    if (*(void **)(s1 + 0x240) != 0) {
        amHeap_Free(*(void **)(s1 + 0x240));
    }
    if (*(void **)(s1 + 0x244) != 0) {
        amHeap_Free(*(void **)(s1 + 0x244));
    }
    amHeap_Free(s1);
    amTask_Kill(*(void **)(s0 + 0xC));
    if (*(void **)s0 != 0) {
        amCdFs_Close(*(void **)s0, 0);
    }
    if (*(void **)(s0 + 0x4) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x4), 0);
    }
    if (*(void **)(s0 + 0x8) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x8), 0);
    }
    amHeap_Free(s0);
    D_00470968 = 0;
    Help_Exit();
    InputPass_Release();
}
#endif
