#include "common.h"

typedef int (*PutFn_BE70_x0010BE70)(void *, int *, int);
int func_001210F8_x0010BE70(double) __asm__("func_001210F8");
int ftoi_x0010BE70(long) __asm__("ftoi");
int func_0010CE08_x0010BE70(PutFn_BE70_x0010BE70, void *, int *, const char *, ...) __asm__("func_0010CE08");
extern char D_0045D460_x0010BE70[] __asm__("D_0045D460");
extern char D_0045D468_x0010BE70[] __asm__("D_0045D468");
extern char D_0045D470_x0010BE70[] __asm__("D_0045D470");
int func_0010BE70_x0010BE70(PutFn_BE70_x0010BE70 put, void *arg, int *w, double value) __asm__("func_0010BE70");
int func_0010BE70_x0010BE70(PutFn_BE70_x0010BE70 put, void *arg, int *w, double value)
{
    int exponent = 0;
    int total = 0;
    int digits;

    if (*w == 0) return 0;
    if (value < 0.0) {
        value = 0.0 - value;
        total = 1;
        put(arg, w, '-');
        (*w)--;
    }
    if (value < 0.1) {
        while (value < 0.1) {
            value *= 10.0;
            exponent--;
        }
    } else if (value >= 1.0) {
        while (value >= 1.0) {
            value /= 10.0;
            exponent++;
        }
    }
    digits = ftoi_x0010BE70(func_001210F8_x0010BE70(value * 1000000.0));
    total += func_0010CE08_x0010BE70(put, arg, w, D_0045D460_x0010BE70, digits);
    if (exponent >= 0) {
        total += func_0010CE08_x0010BE70(put, arg, w, D_0045D468_x0010BE70, exponent);
    } else {
        total += func_0010CE08_x0010BE70(put, arg, w, D_0045D470_x0010BE70, exponent);
    }
    return total;
}
__asm__("# rebind func_0010BE70 0x0010BE70");
typedef char *VaL_C048_x0010C048;
typedef int (*PutFn_C048_x0010C048)(void *, int *, int);
int func_0010BE70_x0010C048(PutFn_C048_x0010C048 put, void *arg, int *w, double d) __asm__("func_0010BE70");
int func_0010C048_x0010C048(PutFn_C048_x0010C048 put, void *arg, int n, const unsigned char *fmt, VaL_C048_x0010C048 ap) __asm__("func_0010C048");
int func_0010C048_x0010C048(PutFn_C048_x0010C048 put, void *arg, int n, const unsigned char *fmt, VaL_C048_x0010C048 ap)
{
    char buf[32];
    char prefix[32];
    char *end;
    char *cp;
    char *start;
    const char *digits;
    int *pn;
    int flags;
    int width;
    int prec;
    int plen;
    int total;
    int size;
    int i;
    int t;
    int pad;
    int c;
    short ch;
    short z;
    long v;
    unsigned long u;
    char *s;
    float f;

    end = &buf[31];
    total = 0;
    c = *fmt;
    while ((ch = c) != 0) {
        z = (char)ch;
        pn = &n;
        flags = 0;
        width = 0;
        prec = 0;
        plen = 0;
        if (z != '%') goto lit;
    again:
        fmt++;
        c = *fmt;
        z = c;
        switch ((char)c) {
        case '-': flags |= 1; goto again;
        case '+': flags |= 2; goto again;
        case '0': flags |= 4; goto again;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9':
            i = 0;
            do {
                t = i * 10 - '0';
                i = t + (char)c;
                c = *++fmt;
            } while (c >= '0' && c <= '9');
            width = i;
        num:
            if (c == 0) goto next;
            fmt--;
            goto again;
        case '.':
            fmt++;
            flags |= 0x20;
            t = (char)*fmt;
            c = *fmt;
            if ((char)t == '*') {
                i = (*(int *)((ap += 8) - 8));
                prec = i < -1 ? -1 : i;
                goto again;
            }
            i = 0;
            while (c >= '0' && c <= '9') {
                t = i * 10 - '0';
                i = t + (char)c;
                c = *++fmt;
            }
            prec = i < -1 ? -1 : i;
            goto num;
        case ' ': flags |= 8; goto again;
        case '#': flags |= 0x10; goto again;
        case 'l': flags |= 0x40; goto again;
        case 'h': flags |= 0x80; goto again;
        case 'o':
            if (flags & 0x40) u = (*(unsigned long *)((ap += 8) - 8));
            else if (flags & 0x80) u = (*(unsigned short *)((ap += 8) - 8));
            else u = (*(unsigned int *)((ap += 8) - 8));
            cp = end;
            if (u == 0) {
                if (!(flags & 0x20) || prec != 0) *cp-- = '0';
            } else {
                do {
                    *cp-- = (u & 7) + '0';
                    u >>= 3;
                } while (u);
                if (flags & 0x10) *cp-- = '0';
            }
            start = cp + 1;
            size = end - cp;
            goto out;
        case 'x':
            digits = "0123456789abcdef";
            if (flags & 0x10) {
                prefix[0] = '0';
                prefix[1] = 'x';
                plen = 2;
            }
            goto hex;
        case 'X':
            digits = "0123456789ABCDEF";
            if (flags & 0x10) {
                prefix[0] = '0';
                prefix[1] = 'X';
                plen = 2;
            }
        hex:
            if (flags & 0x40) u = (*(unsigned long *)((ap += 8) - 8));
            else if (flags & 0x80) u = (*(unsigned short *)((ap += 8) - 8));
            else u = (*(unsigned int *)((ap += 8) - 8));
            cp = end;
            if (u == 0) {
                plen = 0;
                if (!(flags & 0x20) || prec != 0) *cp-- = '0';
            } else {
                do {
                    *cp-- = digits[u & 0xF];
                    u >>= 4;
                } while (u);
            }
            start = cp + 1;
            size = end - cp;
            goto out;
        case 'd':
        case 'i':
            if (flags & 0x40) v = (*(long *)((ap += 8) - 8));
            else if (flags & 0x80) v = (*(short *)((ap += 8) - 8));
            else v = (*(int *)((ap += 8) - 8));
            cp = end;
            if (v >= 0) {
                if (flags & 2) {
                    prefix[0] = '+';
                    plen = 1;
                } else if (flags & 8) {
                    prefix[0] = ' ';
                    plen = 1;
                }
            } else {
                prefix[0] = '-';
                plen = 1;
            }
            if (v == 0) {
                if (!(flags & 0x20) || prec != 0) *cp-- = '0';
            } else {
                if (v < 0) v = -v;
                while (v) {
                    *cp-- = v % 10 + '0';
                    v /= 10;
                }
            }
            start = cp + 1;
            size = end - cp;
            goto out;
        case 'u':
            if (flags & 0x40) u = (*(unsigned long *)((ap += 8) - 8));
            else if (flags & 0x80) u = (*(unsigned short *)((ap += 8) - 8));
            else u = (*(unsigned int *)((ap += 8) - 8));
            cp = end;
            if (u == 0) {
                if (!(flags & 0x20) || prec != 0) *cp-- = '0';
            } else {
                do {
                    *cp-- = u % 10 + '0';
                    u /= 10;
                } while (u);
            }
            start = cp + 1;
            size = end - cp;
            goto out;
        case 'e':
        case 'f':
            f = (*(double *)((ap += 8) - 8));
            if (f == 0) {
                total += put(arg, pn, '0');
                c = *fmt;
            } else {
                total += func_0010BE70_x0010C048(put, arg, pn, f);
                c = *fmt;
            }
            goto next;
        case 's':
            s = (*(char * *)((ap += 8) - 8));
            if (s == 0) {
                put(arg, pn, '(');
                put(arg, pn, 'n');
                put(arg, pn, 'u');
                put(arg, pn, 'l');
                put(arg, pn, 'l');
                put(arg, pn, ')');
                c = *fmt;
                goto next;
            }
            cp = s;
            if (flags & 0x20) {
                for (i = 0; i < prec && *cp++; i++)
                    ;
                size = i;
            } else {
                for (size = 0; *cp; cp++)
                    size++;
            }
            start = s;
            goto out;
        case 'c':
            cp = end;
            v = (*(char *)((ap += 8) - 8));
            flags |= 0x100;
            prec = 1;
            *cp-- = v;
            start = cp + 1;
            size = end - cp;
            goto out;
        case 'p':
            u = (*(unsigned int *)((ap += 8) - 8));
            digits = "0123456789abcdef";
            cp = end;
            if (u == 0) {
                if (!(flags & 0x20) || prec != 0) *cp-- = '0';
            } else {
                do {
                    *cp-- = digits[u & 0xF];
                    u >>= 4;
                } while (u);
            }
            prefix[0] = '0';
            prefix[1] = 'x';
            plen = 2;
            start = cp + 1;
            size = end - cp;
            goto out;
        default:
            if ((char)z == 0) goto next;
            cp = end;
            flags |= 0x100;
            prec = 1;
            *cp-- = (char)c;
            break;
        }
        size = end - cp;
        start = cp + 1;
    out:
        if (size < prec) prec -= size;
        else prec = 0;
        width = width - size - plen - prec;
        cp = start + size;
        if (flags & 0x100)
            pad = (flags & 4) && width > 0 ? '0' : ' ';
        else
            pad = (flags & 0x24) == 4 && width > 0 ? '0' : ' ';
        if (flags & 1) {
            for (i = 0; i < plen; i++) total += put(arg, pn, prefix[i]);
            for (i = 0; i < prec; i++) total += put(arg, pn, '0');
            while (start < cp) total += put(arg, pn, *start++);
            for (i = 0; i < width; i++) total += put(arg, pn, ' ');
            c = *fmt;
        } else if (flags & 4) {
            if (pad == '0') {
                for (i = 0; i < plen; i++) total += put(arg, pn, prefix[i]);
                for (i = 0; i < width; i++) total += put(arg, pn, pad);
            } else {
                for (i = 0; i < width; i++) total += put(arg, pn, pad);
                for (i = 0; i < plen; i++) total += put(arg, pn, prefix[i]);
            }
            for (i = 0; i < prec; i++) total += put(arg, pn, '0');
            while (start < cp) total += put(arg, pn, *start++);
            c = *fmt;
        } else {
            for (i = 0; i < width; i++) total += put(arg, pn, pad);
            for (i = 0; i < plen; i++) total += put(arg, pn, prefix[i]);
            for (i = 0; i < prec; i++) total += put(arg, pn, '0');
            while (start < cp) total += put(arg, pn, *start++);
            c = *fmt;
        }
        goto next;
    lit:
        if (z == 0) goto next;
        total += put(arg, pn, z);
        c = *fmt;
    next:
        if (c) fmt++;
        ch = *fmt;
        c = ch;
    }
    put(arg, &n, 0);
    return total;
}
__asm__("# rebind func_0010C048 0x0010C048");
__asm__("# fphazard func_0010C048");
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
s32 deci2Putchar_x0010CDB8(s32) __asm__("deci2Putchar");
s32 func_0010CDB8_x0010CDB8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0010CDB8");
s32 func_0010CDB8_x0010CDB8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        deci2Putchar_x0010CDB8(arg2);
    }
    return 1;
}
s32 serialPutchar_x0010CDE0(s32) __asm__("serialPutchar");
s32 func_0010CDE0_x0010CDE0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0010CDE0");
s32 func_0010CDE0_x0010CDE0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        serialPutchar_x0010CDE0(arg2);
    }
    return 1;
}
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
s32 func_0010C048_x0010CE58(void *, void *, s32, s32, s32) __asm__("func_0010C048");
void func_0010CD60_x0010CE58() __asm__("func_0010CD60");
s32 func_0010CE58_x0010CE58(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0010CE58");
s32 func_0010CE58_x0010CE58(s32 a0, s32 a1, s32 a2, s32 a3)
{
    s32 buf[4];
    buf[0] = a0;
    return func_0010C048_x0010CE58(func_0010CD60_x0010CE58, buf, a1, a2, a3);
}
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
int DI_x0010CED8(void) __asm__("DI");
int EI_x0010CED8(void) __asm__("EI");
void func_0010CDB8_x0010CED8(void) __asm__("func_0010CDB8");
int func_0010C048_x0010CED8(void *, int *, unsigned int, int, int) __asm__("func_0010C048");
void func_0010CED8_x0010CED8(int a, int b) __asm__("func_0010CED8");
void func_0010CED8_x0010CED8(int a, int b)
{
    int x;
    int intr;

    x = 0;
    intr = DI_x0010CED8();
    func_0010C048_x0010CED8(func_0010CDB8_x0010CED8, &x, -1, a, b);
    if (intr) {
        EI_x0010CED8();
    }
}
int DIntr_x0010CF48(void) __asm__("DI");
int EIntr_x0010CF48(void) __asm__("EI");
extern int func_003B1E40_x0010CF48() __asm__("func_0010CDB8");
extern void _sceSnprintf_x0010CF48() __asm__("func_0010C048");
void scePrintf_x0010CF48(char *fmt, ...) __asm__("scePrintf");
/* func_003B1F28: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b1f28.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void scePrintf_x0010CF48(char *fmt, ...) {
    int ctx;
    int intr;
    ctx = 0;
    intr = DIntr_x0010CF48();
    _sceSnprintf_x0010CF48(func_003B1E40_x0010CF48, &ctx, 0xFFFFFFFFU, fmt, (char *)__builtin_next_arg(fmt) - 0x38);
    if (intr) {
        EIntr_x0010CF48();
    }
}
__asm__("# noswap scePrintf");
int DIntr_x0010CFC8(void) __asm__("DI");
int EIntr_x0010CFC8(void) __asm__("EI");
extern int func_003B1E68_x0010CFC8() __asm__("func_0010CDE0");
extern void _sceSnprintf_x0010CFC8() __asm__("func_0010C048");
void kprintf_x0010CFC8(char *fmt, ...) __asm__("kprintf");
/* func_003B1FA8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b1fa8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void kprintf_x0010CFC8(char *fmt, ...) {
    int ctx;
    int intr;
    ctx = 0;
    intr = DIntr_x0010CFC8();
    _sceSnprintf_x0010CFC8(func_003B1E68_x0010CFC8, &ctx, 0xFFFFFFFFU, fmt, (char *)__builtin_next_arg(fmt) - 0x38);
    if (intr) {
        EIntr_x0010CFC8();
    }
}
__asm__("# noswap kprintf");
