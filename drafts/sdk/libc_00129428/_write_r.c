/* Draft (not built): _write_r at 0x0012C1F0, size 0x60, segment sdk/libc_00129428 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 410 -> 25
 * Original: asm/nonmatchings/sdk/libc_00129428/_write_r.s */

// _write_r 0012C1F0 -O2 -G0 ee-gcc 2.96: score 410 -> 25
s32 write(s32, s32, s32);                           /* extern */
extern s32 errno;

unsigned long long _write_r(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_v0;
  errno = 0;
  temp_v0 = write(arg1, arg2, arg3);
  if ((temp_v0 == (-1)) && (errno != 0))
  {
    *arg0 = errno;
  }
  return temp_v0;
}
