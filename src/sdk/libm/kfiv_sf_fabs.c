/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libm/math/sf_fabs.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libm */
#include "common.h"

/* libm.a member sf_fabs.o */
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




float fabsf(float x)
{
    unsigned int ix;
    GET_FLOAT_WORD(ix, x);
    SET_FLOAT_WORD(x, ix & 0x7fffffff);
    return x;
}
