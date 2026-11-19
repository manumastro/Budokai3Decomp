#include "common.h"

extern const char _ctype__x00127738[] __asm__("_ctype_");
int func_00127738_x00127738(const char *s1, const char *s2) __asm__("func_00127738");
/* strcasecmp: from https://github.com/DabDavis/socom2-decomp (src/lib/libc/strcasecmp.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
int func_00127738_x00127738(const char *s1, const char *s2)
{
        while (*s1 != '\0' && __extension__ ({ int __x = (*s1); ((_ctype__x00127738 + 1)[(unsigned)(__x)] & 01) ? (__x - 'A' + 'a') : __x; }) == __extension__ ({ int __x = (*s2); ((_ctype__x00127738 + 1)[(unsigned)(__x)] & 01) ? (__x - 'A' + 'a') : __x; })) {
                s1++;
                s2++;
        }
        return __extension__ ({ int __x = (*(unsigned char *)s1); ((_ctype__x00127738 + 1)[(unsigned)(__x)] & 01) ? (__x - 'A' + 'a') : __x; }) - __extension__ ({ int __x = (*(unsigned char *)s2); ((_ctype__x00127738 + 1)[(unsigned)(__x)] & 01) ? (__x - 'A' + 'a') : __x; });
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00127810);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00127940);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00127A88);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", strlen);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00127CD8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00127E88);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00127738", func_00128040);
