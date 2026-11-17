#ifndef MENU_MN_CSSUBSTAT_H
#define MENU_MN_CSSUBSTAT_H

#include "common.h"

/* A 0/1 flag written as an enum: `c ? CSSUB_ON : CSSUB_OFF` keeps the li 1 / movz of the original, where
   `c ? 1 : 0` folds into the test itself. */
typedef enum CsSubFlag {
    CSSUB_OFF,
    CSSUB_ON
} CsSubFlag;

/* The character select's slot that opens a sub screen (mn_cssubstat, mn_cssubArena). */
typedef struct CsSubParent {
    char pad0[6];
    u8 f6;              /* bits 0-2: flags copied into the sub screen */
    char pad7[0xD - 7];
    u8 fD;
    char padE[0x78 - 0xE];
    char *f78;          /* + 0x446: the name given to SklEdit_Open */
} CsSubParent;

#endif
