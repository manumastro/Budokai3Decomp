#include "common.h"
#include "menu/menu.h"

typedef struct EssEditWork {
    void *file[2];
    char pad8[0x20 - 8];
    s32 slot;           /* 0x20 */
    s32 f24;
    s32 f28;
    char pad2C[0x58 - 0x2C];
} EssEditWork;

/* One of the arrays of 0xD680-byte records at D_0058F680. */
typedef struct EssRecord {
    char pad0[0x8A0];
    s16 f8A0;
    char pad8A2[0xD41D - 0x8A2];
    char fD41D[0xD680 - 0xD41D];
} EssRecord;

extern EssEditWork *gEssEdit;
extern s8 gEssEditSlot;
extern EssRecord D_0058F680[];
extern char D_0046B490[];
extern void func_001258F8(void *, s32, s32);
extern void func_0027E7E0(void);
extern void SklEdit_Open(s32, char *, s32, s32, s32);
extern void func_002B5030(s32, s32, s32);
extern void *func_0025C670(s32, s32, s32);

void EssEdit_Load(s32 slot) {
    if (gEssEdit != NULL) {
        func_0013AC90(gEssEdit);
    }
    gEssEdit = func_0013AAB0(0x58, 0, D_0046B490, 0x3F);
    func_001258F8(gEssEdit, 0, 0x58);
    gEssEditSlot = slot;
    func_0027E7E0();
    SklEdit_Open(0x3010, D_0058F680[slot].fD41D, slot, 0x11404000, 1);
    func_002B5030(0, 2, 0);
    gEssEdit->slot = slot;
    gEssEdit->f24 = D_0058F680[slot].f8A0;
    gEssEdit->file[0] = func_0025C670(0x107ED, 0, 1);
    gEssEdit->file[1] = func_0025C670(0x107EE, 0, 1);
    gEssEdit->f28 = 0;
}
