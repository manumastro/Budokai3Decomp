/* Draft (not built): _close_r at 0x001222D8, size 0x58, segment sdk/libc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 400 -> 220
 * Original: asm/nonmatchings/sdk/libc/_close_r.s */

// _close_r 001222D8 -O2 -G0 ee-gcc 2.96: score 400 -> 220
s32 close(s32);                                     /* extern */
extern s32 errno;

void _close_r(s32 *arg0, s32 arg1)
{
  volatile unsigned int new_var;
  new_var = arg1;
  errno = 0;
  if ((close(new_var) == (-1)) && (errno != 0))
  {
    *arg0 = errno;
  }
}

/* Similar function already in C: _lseek_r (src/sdk/libc/ico_lseekr.c), similarity 0.96.
 * It is the template below (not built). */
#if 0
long _lseek_r(Reent *ptr, int fd, long pos, int whence)
{
    long ret;
    errno = 0;
    ret = lseek(fd, pos, whence);
    if (ret == -1) {
        if (errno != 0) {
            ptr->err = errno;
        }
    }
    return ret;
}
#endif
