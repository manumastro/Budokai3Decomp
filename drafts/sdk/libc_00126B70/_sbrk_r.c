/* Draft (not built): _sbrk_r at 0x001273A8, size 0x58, segment sdk/libc_00126B70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 400 -> 220
 * Original: asm/nonmatchings/sdk/libc_00126B70/_sbrk_r.s */

// _sbrk_r 001273A8 -O2 -G0 ee-gcc 2.96: score 400 -> 220
s32 sbrk(s32);                                      /* extern */
extern s32 errno;

void _sbrk_r(s32 *arg0, s32 arg1)
{
  int new_var;
  volatile long new_var2;
  new_var = 0;
  errno = (new_var2 = 0);
  if ((sbrk(arg1) == (-1)) && (errno != new_var))
  {
    if (errno)
    {
      *arg0 = errno;
    }
    else
    {
      *arg0 = errno;
    }
  }
}
