/* Draft (not built): func_00198938 at 0x00198938, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 495 -> 240
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198938.s */

// func_00198938 00198938 -O2 -G0 ee-gcc 2.96: score 495 -> 240
s32 func_00179018(s32, s32);            /* extern */
s32 func_001989A8(void *);                      /* extern */

void func_00198938(u8 *arg0)
{
  if (1)
  {
 do { func_00179018(0, 0x372); func_001989A8(arg0); *((s32 *) (((u8 *) arg0) + 0xD98)) = 0; *((s32 *) (((u8 *) arg0) + 0xDC4)) = -1; *((s32 *) (((u8 *) arg0) + 0xDB8)) = -8; *((s32 *) (((u8 *) arg0) + 0xDBC)) = 1; *((s32 *) (((u8 *) arg0) + 0xD9C)) = 0; } while (0);
    *((s32 *) (((u8 *) arg0) + 0xDA0)) = -8;
    *((s32 *) (((u8 *) arg0) + 0xDA4)) = 1;
    *((s32 *) (((u8 *) arg0) + 0xDA8)) = -1;
  }
  *((s32 *) (((u8 *) arg0) + 0xDAC)) = -1;
  *((s32 *) (((u8 *) arg0) + 0xDB0)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xDB4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xDC0)) = 0;
}
