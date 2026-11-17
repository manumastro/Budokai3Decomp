#include "common.h"

/* A fighter, as far as these functions read it: a state word at 0xB9C. */
typedef struct Fighter231 {
    char pad0[0xB9C];
    s32 fB9C;
} Fighter231;

extern void *func_001EA230(void);
extern u8 D_0058BBB0[];
extern u32 func_0012EAE0(s32, s32);

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
/* differs: size 0xA8 vs 0xC0. The original sign-extends the halfword with dsll32/dsra32 (a 24-bit sign extension), and
   the threshold and the result flag take the other saved registers ($s0 threshold, $s1 flag): the declaration order
   sampling (40 orders) found no order that fixes it, since the sampler's counts were not real for this function. */
#if 0
s32 func_00234C90(u8 *a0) {
    s32 idx;
    u32 q;
    s32 t;
    u32 rem;
    s32 s1;
    s32 s0;
    u32 v;

    s1 = 0;
    idx = *(s32 *)(a0 + 0x1350);
    t = *(u16 *)(*(u8 **)(D_0058BBB0 + idx * 192 + 8) + 0x134);
    t = t * 100;
    s0 = t >> 8;
    v = func_0012EAE0(0x20, idx);
    q = v / 10;
    rem = q % 100;
    if (rem < (u32)s0) {
        s1 = 1;
    }
    return s1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234C90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234D50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00234EA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002350A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_00235480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002356E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002357C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_231E70", func_002358A0);
