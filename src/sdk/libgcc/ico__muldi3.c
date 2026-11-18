/* Taken from https://github.com/nathanialf/ico-pc (sce/libgcc/_muldi3.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:sce/libgcc */
#include "common.h"

/* libgcc.a member _muldi3.o */
#include "libgcc2.h"

typedef int SItype;

typedef unsigned int USItype;

typedef long long DItype;

struct DIstruct {
    SItype low, high;
};

typedef union {
    struct DIstruct s;
    DItype ll;
} DIunion;

#define umul_ppmm(w1, w0, u, v)                                                                    \
    __asm__("multu %2,%3"                                                                          \
            : "=l"((USItype)(w0)), "=h"((USItype)(w1))                                             \
            : "d"((USItype)(u)), "d"((USItype)(v)))

#define __umulsidi3(u, v)                                                                          \
    ({                                                                                             \
        DIunion __w;                                                                               \
        umul_ppmm(__w.s.high, __w.s.low, u, v);                                                    \
        __w.ll;                                                                                    \
    })




DItype __muldi3(DItype u, DItype v)
{
    DIunion w;
    DIunion uu, vv;

    uu.ll = u;
    vv.ll = v;

    w.ll = __umulsidi3(uu.s.low, vv.s.low);
    w.s.high += ((USItype)uu.s.low * (USItype)vv.s.high + (USItype)uu.s.high * (USItype)vv.s.low);

    return w.ll;
}
INCLUDE_PAD(4);
