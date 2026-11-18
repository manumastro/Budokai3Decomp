/* Draft (not built): func_00104810 at 0x00104810, size 0x8C, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 350 -> 250
 * Original: asm/sdk/libmpeg.s */

// func_00104810 00104810 -O2 -G0 ee-gcc 2.9-991111-01: score 350 -> 250
s64 func_001045A8(void *);                          /* extern */
s32 func_00104938(void *);                      /* extern */

u32 func_00104810(u8 *arg0, s32 arg1)
{
  long new_var;
  if (((*((s32 *) (((u8 *) arg0) + 0x828))) != 0) || ((*((s32 *) (((u8 *) arg0) + 0x84C))) < arg1))
  {
    func_00104938(arg0);
    *((s32 *) ((unsigned short) 0x10002000)) = 0x40000000;
    *((s32 *) (((u8 *) arg0) + 0x828)) = 0;
    *((s32 *) (((u8 *) arg0) + 0x82C)) = 0x40000000;
    new_var = func_001045A8(arg0) << 0x20;
    *((u32 *) (((u8 *) arg0) + 0x848)) = (u32) (((s64) new_var) >> 0x20);
    *((s32 *) (((u8 *) arg0) + 0x84C)) = 0x20;
  }
  return ((u32) (*((u32 *) (((u8 *) arg0) + 0x848)))) >> (-arg1);
}
