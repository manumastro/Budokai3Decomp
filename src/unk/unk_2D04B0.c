#include "common.h"

typedef struct AnimKey {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} AnimKey;

typedef struct AnimTrack {
    AnimKey ch[6];
    char pad60[0x20];
} AnimTrack;

typedef struct AnimHdr {
    u8 f0;
    char pad1[3];
    s32 f4;
    AnimTrack *f8;
} AnimHdr;

void func_002D04B0(AnimHdr *h) {
    AnimTrack *tr;
    AnimKey *k;
    s32 i;
    s32 j;

    h->f8 = (AnimTrack *)((s32)h->f8 + (s32)h);
    tr = h->f8;
    for (i = 0; i < h->f4; i++) {
        k = tr[i].ch;
        for (j = 0; j < 6; j++) {
            if (k[j].f8 != 0) {
                k[j].f8 += (s32)h;
            }
        }
    }
    h->f0 = 0x21;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D0530);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D0830);

extern f32 D_004E0610[];
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_Pause(s32, s32);

void func_002D09B0(void) {
    amAdx_SetVolume(0, D_004E0610[0]);
    amAdx_PlayAfs(0, 0x210A8, 0);
    amAdx_Pause(0, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D0A00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D0B60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D0C90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D04B0", func_002D12B0);
