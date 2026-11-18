/* Taken from https://github.com/nathanialf/ico-pc (sce/libm/common/sf_copysign.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico */
#include "common.h"

/* libm.a member sf_copysign.o */
#include <math_private.h>

#include <math.h>

/* Float<->word access, the public-domain fdlibm idiom (netlib's fdlibm,
   math_private.h), defined in this member. */

#define GET_FLOAT_WORD(i, d)                                                                       \
    do {                                                                                           \
        ieee_float_shape_type gf_u;                                                                \
        gf_u.value = (d);                                                                          \
        (i) = gf_u.word;                                                                           \
    } while (0)

#define SET_FLOAT_WORD(d, i)                                                                       \
    do {                                                                                           \
        ieee_float_shape_type sf_u;                                                                \
        sf_u.word = (i);                                                                           \
        (d) = sf_u.value;                                                                          \
    } while (0)




float copysignf(float x, float y)
{
    unsigned int ix, iy;
    GET_FLOAT_WORD(ix, x);
    GET_FLOAT_WORD(iy, y);
    SET_FLOAT_WORD(x, (ix & 0x7fffffff) | (iy & 0x80000000));
    return x;
}
INCLUDE_PAD(4);
