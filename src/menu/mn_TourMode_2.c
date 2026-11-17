#include "common.h"
#include "menu/mn_TourMode.h"

extern char D_0046EF40[];
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load(void);

void TourMode_Load(void) {
    TourModeGlobal *g;

    gTourMode = g = amHeap_Alloc(0xC, 0, D_0046EF40, 0xB4);
    g->file[0] = amCdFs_ReadFileId(0x10836, 0, 0);
    g->file[1] = amCdFs_ReadFileId(0x10837, 0, 0);
    g->task = NULL;
    Help_Load();
}
