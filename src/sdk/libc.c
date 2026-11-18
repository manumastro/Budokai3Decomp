#include "common.h"

extern s32 _impure_ptr;

INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001221A8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001221C0);
long strtol_x001221D8(const char *s, char **ptr, int base) __asm__("func_00129428");
int func_001221D8_x001221D8(void *str) __asm__("func_001221D8");
/* atoi: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/atoi.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001221D8_x001221D8(void *str)
{
    return (int)strtol_x001221D8(str, 0, 0xA);
}
typedef unsigned int size_t_x00122200;
extern int atexit (void (*__func_x00122200)(void)) __asm__("__func");
extern void * bsearch (const void * __key,
                       const void * __base,
                       size_t_x00122200 __nmemb,
                       size_t_x00122200 __size,
                       int (* _compar_x00122200) (const void *, const void *)) __asm__("_compar");
extern void qsort (void * __base, size_t_x00122200 __nmemb, size_t_x00122200 __size, int(*_compar_x00122200)(const void *, const void *)) __asm__("_compar");
long strtol_x00122200 (const char *__n, char **__end_PTR, int __base) __asm__("func_00129428");
long
func_00122200_x00122200(const char *s) __asm__("func_00122200");
/* atol: from newlib 1.10.0 (sourceware.org) (libc/stdlib/atol.c, BSD-style, notices in LICENSES/THIRD_PARTY.md); ee-gcc 2.96 -O2 -G0 */
long
func_00122200_x00122200(const char *s)
{
  return strtol_x00122200 (s, ((void*)0), 10);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc", _calloc_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", _close_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_00122330);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_00122560);
s32 __errno(void) {
    return _impure_ptr;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001237D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", fflush);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001239A0);
