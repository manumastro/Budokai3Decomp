/* Draft (not built): _read_r at 0x00126BF0, size 0x60, segment sdk/libc_00126B70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 410 -> 200
 * Original: asm/nonmatchings/sdk/libc_00126B70/_read_r.s */

// _read_r 00126BF0 -O2 -G0 ee-gcc 2.96: score 410 -> 200
s32 read(s32, s32, s32);                            /* extern */
extern s32 errno;

s32 _read_r(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  volatile int new_var3;
  s32 temp_v0;
  s32 new_var;
  s32 *new_var2;
  errno = 0;
  new_var3 = read(arg1, new_var = arg2, arg3);
  temp_v0 = new_var3;
  if ((temp_v0 == (-1)) && (errno != 0))
  {
    if (1)
    {
      *(new_var2 = arg0) = errno;
    }
  }
  return temp_v0;
}
