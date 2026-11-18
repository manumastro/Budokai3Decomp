#include "common.h"

extern s32 D_003EDD0C;

INCLUDE_ASM("asm/nonmatchings/sdk/libpad_00117A70", func_00117A70);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad_00117A70", func_00117AD8);
s32 func_00117C00(s32 arg0) {
    D_003EDD0C = arg0;
    return 1;
}
