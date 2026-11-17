#ifndef MENU_MN_TOURMODE_H
#define MENU_MN_TOURMODE_H

#include "menu/menu.h"

/* The tournament mode's global block (0xC bytes, gTourMode). */
typedef struct TourModeGlobal {
    void *file[2];
    Task *task;
} TourModeGlobal;

extern TourModeGlobal *gTourMode;

#endif
