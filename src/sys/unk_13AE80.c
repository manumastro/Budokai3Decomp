#include "common.h"

typedef struct Blk {
    s32 size;
    s32 pad4;
    struct Blk *prev;
    struct Blk *next;
    s32 flags;
    struct Blk *p14;
    struct Blk *p18;
    u32 magic;
} Blk;

typedef struct Mtx {
    f32 m[4][4];
} Mtx;

extern s32 D_004702E4;
extern Mtx *D_004702E0;
extern Mtx D_0047D7C0[];
extern Mtx D_0047D800[];

Blk *func_0013AE80(Blk *b, s32 size, s32 top) {
    s32 n;
    Blk *next;
    if (b->size <= size + 0x40) {
        b->size = -b->size;
        b->p18->flags = 0;
        return b;
    }
    next = b->p18;
    if (!top) {
        n = size;
        size = b->size - size - 0x40;
    } else {
        n = b->size - size - 0x40;
    }
    b->p18 = (Blk *)((s32)b + n + 0x20);
    b->p18->next = (Blk *)((s32)b->p18 + 0x20);
    b->p18->prev = b;
    b->p18->next->p14 = b->p18;
    b->p18->next->p18 = next;
    next->prev = b->p18->next;
    b->size = n;
    b->p18->next->size = size;
    if (top) b = b->p18->next;
    b->size = -b->size;
    b->p18->flags = 0;
    return b;
}
void func_0013AF80(void) {
    D_004702E4 = 0;
    D_004702E0 = D_0047D7C0;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_13AE80", func_0013AFA0);
s32 func_0013B000(s32 n) {
    D_004702E4 -= n;
    if (D_004702E4 < 0) {
        D_004702E4 = 0;
        D_004702E0 = D_0047D800;
        return 0;
    }
    D_004702E0 -= n;
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_13AE80", func_0013B060);
INCLUDE_ASM("asm/nonmatchings/sys/unk_13AE80", func_0013B0B0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_13AE80", func_0013B110);
