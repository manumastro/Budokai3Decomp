#include "common.h"

typedef struct PadState {
    char pad0[0xC];
    u16 fC;
    u16 fE;
    u16 f10;
    u16 f12;
    char pad14[4];
    s8 f18;
    s8 f19;
    s8 f1A;
    s8 f1B;
    char pad1C[0x6C - 0x1C];
    u16 f6C;
    u16 f6E;
    u16 f70;
    u16 f72;
    char pad74[0xB8 - 0x74];
} PadState;

typedef struct PadSave {
    char pad0[0x2C];
    u16 f2C;
    u16 f2E;
    u16 f30[2];
    u16 f34[2];
    u16 f38[2];
    u16 f3C[2];
    u16 f40[2];
    u16 f44[2];
    u16 f48[2];
    u16 f4C[2];
    s8 f50[2];
    s8 f52[2];
    s8 f54[2];
    s8 f56[2];
    u8 f58;
} PadSave;

extern PadSave *gHelp;
extern PadState D_00492FC0[];

void func_002B5460(void) {
    PadSave *s = gHelp;
    s32 i;

    for (i = 0; i < 2; i++) {
        D_00492FC0[i].fC = s->f3C[i];
        D_00492FC0[i].fE = s->f30[i];
        D_00492FC0[i].f10 = s->f38[i];
        D_00492FC0[i].f12 = s->f34[i];
        D_00492FC0[i].f6C = s->f4C[i];
        D_00492FC0[i].f6E = s->f48[i];
        D_00492FC0[i].f70 = s->f40[i];
        D_00492FC0[i].f72 = s->f44[i];
        D_00492FC0[i].f18 = s->f50[i];
        D_00492FC0[i].f19 = s->f52[i];
        D_00492FC0[i].f1A = s->f54[i];
        D_00492FC0[i].f1B = s->f56[i];
    }
}
void func_002B5500(void) {
    PadSave *s = gHelp;
    s32 i;

    s->f2C = 0;
    s->f2E = 0;
    for (i = 0; i < 2; i++) {
        if (s->f58 & (1 << i)) {
            s->f2C |= (u16)(D_00492FC0[i].fE | D_00492FC0[i].f6E);
            s->f2E |= (u16)(D_00492FC0[i].fC | D_00492FC0[i].f6C);
        }
        s->f30[i] = D_00492FC0[i].fE;
        s->f34[i] = D_00492FC0[i].f12;
        s->f38[i] = D_00492FC0[i].f10;
        s->f3C[i] = D_00492FC0[i].fC;
        s->f40[i] = D_00492FC0[i].f6E;
        s->f44[i] = D_00492FC0[i].f72;
        s->f48[i] = D_00492FC0[i].f70;
        s->f4C[i] = D_00492FC0[i].f6C;
        s->f50[i] = D_00492FC0[i].f18;
        s->f52[i] = D_00492FC0[i].f19;
        s->f54[i] = D_00492FC0[i].f1A;
        s->f56[i] = D_00492FC0[i].f1B;
        D_00492FC0[i].fC = 0;
        D_00492FC0[i].fE = 0;
        D_00492FC0[i].f10 = 0;
        D_00492FC0[i].f12 = 0;
        D_00492FC0[i].f6C = 0;
        D_00492FC0[i].f6E = 0;
        D_00492FC0[i].f70 = 0;
        D_00492FC0[i].f72 = 0;
        D_00492FC0[i].f18 = 0;
        D_00492FC0[i].f19 = 0;
        D_00492FC0[i].f1A = 0;
        D_00492FC0[i].f1B = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B5460", func_002B5620);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B5460", func_002B58A0);
