/* Taken from https://github.com/karamzov123/fzero-gx-decomp (src/dol/ADXPD_Create.c, CC0-1.0); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: fz:include */
#include "common.h"

#include "types.h"

typedef struct AdxXpndParams {
    int channel_count;
    const signed char *input;
    int num_blocks;
    short *output_left;
    short *output_right;
} AdxXpndParams;

typedef struct AdxXpnd {
    int used;
    int index;
    int mode;
    int status;
    int num_decoded_blocks;
    AdxXpndParams params;
    short delay[2][2];
    short coefficients[2];
    short random_state;
    short random_multiplier;
    short random_increment;
    short reserved;
} AdxXpnd;

void fn_80046D94(int cutoff, int sample_rate, short *coefficient0, short *coefficient1);

void *memset(void *destination, int value, unsigned long size);

extern AdxXpnd lbl_8017E5BC[16];




AdxXpnd *ADXPD_Create(void) {
    int index;
    AdxXpnd *candidate;
    AdxXpnd *decoder;
    candidate = lbl_8017E5BC;
    for (index = 0; index < 16; candidate++, index++) {
        if (candidate->used == 0) {
            break;
        }
    }
    if (index == 16) {
        return 0;
    }
    decoder = &lbl_8017E5BC[index];
    memset(decoder, 0, sizeof(*decoder));
    decoder->used = 1;
    decoder->index = index;
    decoder->mode = 0;
    decoder->status = 0;
    fn_80046D94(500, 44100, &decoder->coefficients[0], &decoder->coefficients[1]);
    memset(decoder->delay, 0, sizeof(decoder->delay));
    return decoder;
}
INCLUDE_PAD(4);
