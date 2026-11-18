#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010BE70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010C048);
int func_0010CD60_x0010CD60(char **pp, int *pn, int c) __asm__("func_0010CD60");
/* func_003B1DE8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b0268.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010CD60_x0010CD60(char **pp, int *pn, int c)
{
    char *p;
    if (*pn == 0)
        return 1;
    if (c < 0x100) {
        if (*pn == 1)
            c = 0;
        p = *pp;
        *p = c;
        p = p + 1;
        *pn = *pn - 1;
        *pp = p;
        return 1;
    }
    **pp = 0;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010CDB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010CDE0);
extern int _sceSnprintf_x0010CE08(void *cb, void *state, int a, int b, void *ap) __asm__("func_0010C048");
typedef void *va_list_x0010CE08;
int func_0010CE08_x0010CE08(void *cb, void *state, int *pn, int fmt, ...) __asm__("func_0010CE08");
/* _sceSnprintf_pf: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b0268.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010CE08_x0010CE08(void *cb, void *state, int *pn, int fmt, ...) {
    int n;
    va_list_x0010CE08 ap;
    (ap = (void *)((char *)__builtin_next_arg( fmt) - 0x20));
    n = _sceSnprintf_x0010CE08(cb, state, *pn, fmt, ap);
    *pn = *pn - n;
    return n;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010CE58);
extern int _sceSnprintf_x0010CE90(void *cb, void *state, int a, int b, void *ap) __asm__("func_0010C048");
extern int func_003B1DE8_x0010CE90() __asm__("func_0010CD60");
typedef void *va_list_x0010CE90;
int func_0010CE90_x0010CE90(int a0, int a1, int a2, ...) __asm__("func_0010CE90");
/* func_003B1EE0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b1ee0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010CE90_x0010CE90(int a0, int a1, int a2, ...) {
    int state;
    va_list_x0010CE90 ap;
    state = a0;
    (ap = (void *)((char *)__builtin_next_arg( a2) - 0x28));
    return _sceSnprintf_x0010CE90((void *)func_003B1DE8_x0010CE90, &state, a1, a2, ap);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", func_0010CED8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", scePrintf);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010BE70", kprintf);
