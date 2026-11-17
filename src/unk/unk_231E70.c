#include "common.h"

/* A fighter, as far as these functions read it: a state word at 0xB9C. */
typedef struct Fighter231 {
    char pad0[0xB9C];
    s32 fB9C;
} Fighter231;

extern void *func_001EA230(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00231E70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00233850);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00233B20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00233D50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00233E50);
/* differs: the original has three separate exits to one "return 1" and a "b" for the non-0x20 path (0x70 bytes, ours 0x54) */
#if 0
s32 func_00234C20(Fighter231 *o) {
    s32 r = 0;

    if (o->fB9C == 0x29 || (o->fB9C == 0x20 && func_001EA230() == NULL)) {
        r = 1;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234C20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234C90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234D50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234EA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002350A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00235480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002356E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002357C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002358A0);
