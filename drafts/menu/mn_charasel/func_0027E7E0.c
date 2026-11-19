/* Draft (not built): func_0027E7E0 at 0x0027E7E0, size 0x98, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027E7E0.s */

s32 amCdFs_ReadFileId(s32, s32, s32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_0046B6D0;
void func_0027E7E0(void)
{
  u8 *temp_v0;
  if (D_00470810 != NULL)
  {
    *((s8 *) (((u8 *) D_00470810) + 0x10)) = (s8) ((*((s8 *) (((u8 *) D_00470810) + 0x10))) + 1);
    return;
  }
  D_00470810 = temp_v0;
  temp_v0 = amHeap_Alloc(0x14, 0, &D_0046B6D0, 0x123);
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 0)) = amCdFs_ReadFileId(0x10820, 0, 0);
  *((s32 *) (((u8 *) temp_v0) + 4)) = amCdFs_ReadFileId(0x10821, 0, 0);
  *((s8 *) (((u8 *) temp_v0) + 0x10)) = 1;
  *((s32 *) (((u8 *) temp_v0) + 0xC)) = 0;
}

/* Similar function already in C: DataErase_Acquire (src/story/str_dataerase.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void DataErase_Acquire(void) {
    s32 *s0;
    if (D_0047099C != 0) {
        *((s8 *)D_0047099C + 0x10) = *((s8 *)D_0047099C + 0x10) + 1;
    } else {
        D_0047099C = (s32)(s0 = (s32 *)amHeap_Alloc(0x14, 0, D_0046FC30, 0x63));
        s0[0] = amCdFs_ReadFileId(0x107D8, 0, 0);
        s0[1] = amCdFs_ReadFileId(0x107D9, 0, 0);
        s0[2] = 0;
        s0[3] = 0;
        *((s8 *)s0 + 0x10) = 1;
    }
}
#endif
