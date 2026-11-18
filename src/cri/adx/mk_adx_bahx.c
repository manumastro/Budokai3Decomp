/* Taken from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/adxt/adx_bahx.c, CC0-1.0); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: mk: */
#include "common.h"

typedef struct AhxDecoder AhxDecoder;

typedef struct SjHandle SjHandle;

typedef struct AdxBasicAhx {
    /* The preceding ADXB fields are not accessed by this backend adapter. */
    unsigned char reserved_00[0xB4];
    AhxDecoder* decoder;
    int max_decoded_samples;
    int max_decoded_blocks;
} AdxBasicAhx;

typedef void (*AhxSetInputSjFunc)(AhxDecoder* decoder, SjHandle* input_sj);

typedef void (*AhxSetDecodedSamplesFunc)(AhxDecoder* decoder, int samples);

typedef void (*AhxTermSupplyFunc)(AhxDecoder* decoder);

typedef void (*AhxExecFunc)(AdxBasicAhx* adxb);

#define ahxsetsjifunc D_00400E78
#define ahxsetdecsmplfunc D_00400E74
#define ahxtermsupplyfunc D_00400E70
#define ahxexecfunc D_00400E7C
extern AhxSetInputSjFunc ahxsetsjifunc;

extern AhxSetDecodedSamplesFunc ahxsetdecsmplfunc;

extern AhxTermSupplyFunc ahxtermsupplyfunc;

extern AhxExecFunc ahxexecfunc;




void ADXB_AhxTermSupply(AdxBasicAhx* adxb)
{
    if (adxb->decoder != 0) {
        ahxtermsupplyfunc(adxb->decoder);
    }
}


void ADXB_SetAhxDecSmpl(AdxBasicAhx* adxb, int samples)
{
    if (adxb->decoder != 0) {
        ahxsetdecsmplfunc(adxb->decoder, samples);
    }

    adxb->max_decoded_samples = samples;
    adxb->max_decoded_blocks = samples / 96;
}


void ADXB_ExecOneAhx(AdxBasicAhx* adxb)
{
    ahxexecfunc(adxb);
}


void ADXB_SetAhxInSj(AdxBasicAhx* adxb, SjHandle* input_sj)
{
    if (adxb->decoder != 0) {
        ahxsetsjifunc(adxb->decoder, input_sj);
    }
}
