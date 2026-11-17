#include "common.h"
#include "menu/menu.h"

typedef struct StrTitleWork {
    void *file[2];
    char pad8[0xD0 - 8];
    s32 fD0;
    char padD4[0xE0 - 0xD4];
} StrTitleWork;

extern StrTitleWork *gStrTitle;
extern char D_0046EA38[];
extern void memset(void *, s32, s32);
extern void *func_0025C670(s32, s32, s32);

void StrTitle_Load(void) {
    if (gStrTitle != NULL) {
        func_0013AC90(gStrTitle);
    }
    gStrTitle = func_0013AAB0(0xE0, 0, D_0046EA38, 0x52);
    memset(gStrTitle, 0, 0xE0);
    gStrTitle->fD0 = -1;
    gStrTitle->file[0] = func_0025C670(0x107EB, 0, 1);
    gStrTitle->file[1] = func_0025C670(0x107EC, 0, 1);
}
