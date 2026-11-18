#include "common.h"

s32 func_00129458(s32, s32, s32, s32);          /* extern */

s32 _strtol_r(s32, s32, s32, s32);              /* extern */
extern s32 _impure_ptr;

void func_00129428(s32 arg0, s32 arg1, s32 arg2) {
    _strtol_r(_impure_ptr, arg0, arg1, arg2);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_00129458);
void func_00129688(s32 arg0, s32 arg1, s32 arg2) {
    func_00129458(_impure_ptr, arg0, arg1, arg2);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_001296B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_001297A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __sprint);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_00129970);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", vfprintf);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _vfprintf_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B110);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B2D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __svfscanf);
char *func_0012C040_x0012C040(char *tab, char *fmt) __asm__("func_0012C040");
/* __sccl: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfscanf.c, MIT); ee-gcc 2.96 -O2 -G0 */
char *func_0012C040_x0012C040(char *tab, char *fmt)
{
    int c;
    int n;
    int v;
    c = *fmt++;
    if (c == '^') {
        v = 1;
        c = *fmt++;
    } else {
        v = 0;
    }
    for (n = 0; n < 256; n++) {
        tab[n] = v;
    }
    if (c == 0) {
        return fmt - 1;
    }
    v = 1 - v;
    for (;;) {
        tab[c] = v;
    doswitch:
        n = *fmt++;
        switch (n) {
        case 0:
            return fmt - 1;
        case '-':
            n = *fmt;
            if (n == ']' || n < c) {
                c = '-';
                break;
            }
            fmt++;
            do {
                tab[++c] = v;
            } while (c < n);
            goto doswitch;
        case ']':
            return fmt;
        default:
            c = n;
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C140);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C198);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _write_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __swsetup);
