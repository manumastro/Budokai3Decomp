#include "common.h"
#include "battle/stage.h"


extern void BtbBg_DrawAfterStub(void);
extern void BtbBg_DrawScrEffectStub(void);
extern void BtbBg_DrawTrsObjs(void);
extern void BtbBg_DrawPlainObjs(void);
extern void BtbBg_RunPostObjs(void);
extern void func_0013B0B0(s32);
extern void func_0013B110(s32);
extern void func_00125740(void *, s32, s32);
extern void *func_001A50F0(void *, s32);
void BtbBg_KillTasks(void);
void func_001F9270(StageWork *w);
void func_001F8DE0(StageWork *w);
void func_001F8ED0(StageWork *w);
void func_001F9660(void);
void BtbBg_TaskDraw(void);
void BtbBg_TaskPostDraw(void);
void BtbBg_TaskTrsDraw(void);
void BtbBg_TaskScrEffect(void);
void BtbBg_TaskAfterDraw(void);
void BtbBg_TaskMain(void);
void BtbBg_Start(void);

INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8420);
static void func_001F8740(StageGroupSrc *src, StageGroup *grp) {
    s32 i;
    s32 j;

    for (i = 0; i < src->nlinkA; i++) {
        for (j = 0; j < grp->count; j++) {
            if (grp->objs[j].res->info == src->linkA[i].key) {
                src->linkA[i].ref = grp->objs[j].res;
                src->linkA[i].obj = &grp->objs[j];
            }
        }
    }
    for (i = 0; i < src->nlinkB; i++) {
        for (j = 0; j < grp->count; j++) {
            if (grp->objs[j].res->info == src->linkB[i].key) {
                src->linkB[i].ref = grp->objs[j].res;
                src->linkB[i].obj = &grp->objs[j];
            }
        }
    }
    for (i = 0; i < src->nlinkC; i++) {
        for (j = 0; j < grp->count; j++) {
            if (grp->objs[j].res->info == src->linkC[i].key) {
                src->linkC[i].ref = grp->objs[j].res;
                src->linkC[i].obj = &grp->objs[j];
            }
        }
    }
    for (i = 0; i < src->nlinkD; i++) {
        for (j = 0; j < grp->count; j++) {
            if (grp->objs[j].res->info == src->linkD[i].key) {
                src->linkD[i].ref = grp->objs[j].res;
                src->linkD[i].obj = &grp->objs[j];
            }
        }
    }
}
extern char D_004698D8[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
void func_001F8420(void *src, StageObj *obj);

void func_001F89D0(s32 index, StageGroupSrc *src, StageGroup *group) {
    s32 i;

    group->index = index;
    group->src = src;
    group->count = src->count;
    group->objs = amHeap_Alloc(src->count * sizeof(StageObj), 0, D_004698D8, 0x624);
    memset(group->objs, 0, src->count * sizeof(StageObj));
    for (i = 0; i < src->count; i++) {
        func_001F8420(src->objs[i], &group->objs[i]);
    }
}
/* 18 of 97 instructions differ (register choice in the inner loop) */
#if 0
StageGroup *func_001F8AA0(StageHeader *hdr) {
    StageGroup *groups;
    StageGroup *g;
    s32 i;
    s32 j;

    if (hdr->ngroups <= 0) {
        return NULL;
    }
    groups = amHeap_Alloc(hdr->ngroups * sizeof(StageGroup), 0, D_004698D8, 0x5F2);
    memset(groups, 0, hdr->ngroups * sizeof(StageGroup));
    g = groups;
    for (i = 0; i < hdr->ngroups; i++, g++) {
        func_001F89D0(i, hdr->groups[i], g);
        if (g->objs->res->info->unk20 >= 2) {
            for (j = 0; j < g->objs->res->count; j++) {
                g->objs->res->ent[j].unk00 = D_0044AE50[gBtbBg.stage].area[i].unk0C;
            }
        }
    }
    return groups;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8AA0);
void func_001F8C30(StageWork *w) {
    StageHeader *hdr = w->hdr;
    s32 i;
    s32 j;

    if (hdr->ngroups > 0) {
        for (i = 0; i < hdr->ngroups; i++) {
            func_001F8740(hdr->groups[i], &w->groups[i]);
        }
    }
    if (hdr->nlinkA > 0) {
        for (i = 0; i < hdr->nlinkA; i++) {
            for (j = 0; j < w->nobjs; j++) {
                if (w->objs[j].res->info == hdr->linkA[i].key) {
                    hdr->linkA[i].ref = w->objs[j].res;
                    hdr->linkA[i].obj = &w->objs[j];
                }
            }
        }
    }
    if (hdr->nlinkB > 0) {
        for (i = 0; i < hdr->nlinkB; i++) {
            for (j = 0; j < w->nobjs; j++) {
                if (w->objs[j].res->info == hdr->linkB[i].key) {
                    hdr->linkB[i].ref = w->objs[j].res;
                    hdr->linkB[i].obj = &w->objs[j];
                }
            }
        }
    }
}
StageGroup *func_001F8AA0(StageHeader *hdr);

void func_001F8DE0(StageWork *w) {
    s32 i;
    StageHeader *hdr = w->hdr;

    if (hdr->ngroups > 0) {
        w->groups = func_001F8AA0(hdr);
    }
    if (hdr->nobjs > 0) {
        w->nobjs = hdr->nobjs;
        w->objs = amHeap_Alloc(hdr->nobjs * sizeof(StageObj), 0, D_004698D8, 0x59A);
        memset(w->objs, 0, hdr->nobjs * sizeof(StageObj));
        for (i = 0; i < hdr->nobjs; i++) {
            func_001F8420(hdr->objs[i], &w->objs[i]);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8ED0);
extern void amCdFs_Close(void *, s32);
extern void func_001A5160(void *);

void func_001F9270(StageWork *w) {
    w->data = (void *)w->unk14[0x54 / 4];
    w->unk14[0x54 / 4] = 0;
    amCdFs_Close(w->unk14, 0);
    w->unk14 = NULL;
    func_001A5160(w->data);
    w->hdr = func_001A50F0(w->data, 0);
    w->unk24 = func_001A50F0(w->data, 1);
    w->unk28 = func_001A50F0(w->data, 2);
    w->unk30 = func_001A50F0(w->data, 3);
    w->unk2C = func_001A50F0(w->data, 4);
    w->unk18 = 0;
}
void BtbBg_TaskAfterDraw(void) {
    if (BW_FIELD(gBattle, s8, 0x8975) != 1 && (gBtbBg.flags & 1)) {
        BtbBg_DrawAfterStub();
    }
}
void BtbBg_TaskScrEffect(void) {
    if (BW_FIELD(gBattle, s8, 0x8975) != 1 && (gBtbBg.flags & 1)) {
        func_0013B0B0(0);
        BtbBg_DrawScrEffectStub();
        func_0013B110(1);
    }
}
void BtbBg_TaskTrsDraw(void) {
    if (BW_FIELD(gBattle, s8, 0x8975) != 1 && (gBtbBg.flags & 1)) {
        func_0013B0B0(0);
        BtbBg_DrawTrsObjs();
        func_0013B110(1);
    }
}
extern void func_0012F2C0(void);
extern s32 amGs_SetReg32(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern void amDraw_FlushPacket(void);
extern void func_00133CE0(s32);
extern void BtbBg_DrawPostObjs(void);

void BtbBg_TaskPostDraw(void) {
    f32 col[4];
    s32 save;
    BattleWork *bw;
    f32 *alpha;

    if (BW_FIELD(gBattle, s8, 0x8975) != 1) {
        func_0012F2C0();
        bw = gBattle;
        alpha = &BW_FIELD(bw, f32, 0x892C);
        if (*alpha > 0.0f) {
            col[0] = (u32)BW_FIELD(bw, u8, 0x8928) / 255.0f;
            col[1] = (u32)BW_FIELD(bw, u8, 0x8929) / 255.0f;
            col[2] = (u32)BW_FIELD(bw, u8, 0x892A) / 255.0f;
            col[3] = *alpha;
            save = amGs_SetReg32(0, 0);
            amGs_SetReg32(0, 0x33001);
            func_00133780(0, 1);
            func_00139620(0x1900, col, -1, 0x44, 0, 0.0f);
            amDraw_FlushPacket();
            func_00133780(0, 0);
            amGs_SetReg32(0, save);
        }
        func_00133CE0(0);
        func_0013B0B0(0);
        if (gBtbBg.flags & 1) {
            BtbBg_DrawPostObjs();
        }
        func_0013B110(1);
    }
}
void BtbBg_TaskDraw(void) {
    if (BW_FIELD(gBattle, s8, 0x8975) != 1) {
        func_0013B0B0(0);
        if (gBtbBg.flags & 1) {
            BtbBg_DrawPlainObjs();
        }
        func_0013B110(1);
    }
}
extern void BtbBg_DrawObjs(void);
extern void func_00133B50(s32, s32);
extern void func_00133D10(s32);
extern void func_00133D50(f32, f32);
extern void func_00133D20(f32, f32);

/* 51 of 84 differ: the inlined clear of the 16-byte local is not this loop */
#if 0
void func_001F9660(void) {
    StageFog *fog;
    u8 col[16];
    u8 *p;
    s32 n;

    if (BW_FIELD(gBattle, s8, 0x8975) != 1) {
        fog = &D_0044A9C0[D_0044AE50[gBtbBg.stage].area[gBtbBg.area].fog];
        BtbBg_DrawObjs();
        p = col;
        if (p != NULL) {
            n = 16;
            while (n-- != 0) {
                *p++ = 0;
            }
        }
        func_00133B50(0, 0);
        func_00133780(0, 1);
        func_00139620(0x102, col, -1, 0, 0, 0.0f);
        amDraw_FlushPacket();
        func_00133780(0, 0);
        if (gBtbBg.flags & 0x20) {
            func_00133CE0(1);
            func_00133D10(fog->color);
            func_00133D50(fog->unk04, fog->unk08);
            func_00133D20(fog->unk0C, fog->unk10);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9660);
extern void BtbBg_RunObjMain(void);
extern void func_002CF820(void);

void BtbBg_TaskMain(void) {
    BattleWork *bw = gBattle;
    s32 t;

    if (bw->unk88EC == 0) {
        t = bw->unk8AB2 != 0 && BW_FIELD(bw, f32, 0x891C) > 0.0f;
        if (!t || bw->unk8944 != 0) {
            gBtbBg.unk44 = bw->unk88F0;
            BtbBg_RunObjMain();
            func_002CF820();
        }
    }
}
void BtbBg_SetSlot(s16 a0, s32 a1, s32 i) {
    gBtbBg.unk50[i] = a0;
    func_00125740(&gBtbBg.slot[i], a1, a0 * 2);
}
void BtbBg_ClearFlag40(void) {
    gBtbBg.flags &= ~0x40;
}
void BtbBg_SetFlag40(void) {
    gBtbBg.flags &= ~0x40;
    gBtbBg.flags |= 0x40;
}
void BtbBg_ClearFlag10(void) {
    gBtbBg.flags &= ~0x10;
}
s32 BtbBg_GetFlag8(void) {
    return gBtbBg.flags & 8;
}
void BtbBg_ClearFlag8(void) {
    gBtbBg.flags &= ~8;
}
void BtbBg_ClearFlag4(void) {
    gBtbBg.flags &= ~4;
}
s32 BtbBg_GetFlag2(void) {
    return gBtbBg.flags & 2;
}
void BtbBg_ClearFlag2(void) {
    gBtbBg.flags &= ~2;
}
void BtbBg_SetFlag2(void) {
    gBtbBg.flags &= ~2;
    gBtbBg.flags |= 2;
}
void BtbBg_ClearFlag1(void) {
    gBtbBg.flags &= ~1;
}
void BtbBg_SetFlag1(void) {
    gBtbBg.flags &= ~1;
    gBtbBg.flags |= 1;
}
void BtbBg_SetF9E(s16 a0) {
    gBtbBg.unk9E = a0;
}
void *BtbBg_GetF30(void) {
    return gBtbBg.unk30;
}
void *func_001F9A10(void) {
    return func_001A50F0(gBtbBg.unk2C, 0x7F);
}
void *func_001F9A20(void) {
    if (gBtbBg.unk9E & 1) {
        return func_001A50F0(gBtbBg.unk2C, (gBtbBg.area << 7) + 0x7E);
    }
    return (void *)*((StageGroup *)((u8 *)gBtbBg.groups + gBtbBg.area * sizeof(StageGroup)))->src->unkD8;
}
StageModel *BtbBg_GetStageModel(void) {
    return &D_0044A240[D_0044AE50[gBtbBg.stage].area[gBtbBg.area].model];
}
void *BtbBg_GetStageModelF10(void) {
    return D_0044A240[D_0044AE50[gBtbBg.stage].area[gBtbBg.area].model].unk10;
}
extern void func_002CF750(s32, s32);
extern void func_001E9B00(void *, s32, s32, s32, f32, f32);

void func_001F9B60(s32 a0, s32 a1) {
    if (a1 < 10) {
        func_002CF750(a0, a1);
    } else {
        func_001E9B00(0, a1, 0, 0, 0.0f, 1.0f);
    }
}
extern void func_00209280(s32, s32);
extern void func_00209450(s32, s32);
extern void func_002CF6E0(s32, s32);
extern void BtbObj_FreeFlagged(void);

void func_001F9BB0(s32 side, s32 cmd) {
    s32 i;

    switch (cmd) {
    case 9:
        if (side < 0) {
            func_00209280(0x2000008, 0);
            for (i = 0; i < 4; i++) {
                gBtbBg.slot[i].unk0E = 0;
                func_002CF6E0(i, 9);
            }
        } else {
            func_00209280((1 << side) | 0x2000008, 1);
            gBtbBg.slot[side].unk0E = 0;
            func_002CF6E0(side, 9);
        }
        break;
    case 13:
        BtbObj_FreeFlagged();
        break;
    default:
        func_00209450(0x2000001, 1);
        func_00209450(0x2000002, 1);
        func_00209450(0x2000008, 1);
        BtbObj_FreeFlagged();
        break;
    }
}
typedef struct BtbQuad {
    u32 w[4];
} __attribute__((aligned(16))) BtbQuad;
typedef struct BtbSlotTbl {
    BtbQuad q[3];
    s64 tail;
} __attribute__((aligned(16))) BtbSlotTbl;
typedef void (*BtbSlotFn)(s32, void *, s32, s32);
extern u8 D_0044B750[];
extern s32 D_0051CD0C[];
extern s32 func_001FFBA0(f32, f32);
extern s32 func_00209540(void *, s32, s32);
extern void func_00209B50(void *, void *, s32);
// differs: round 5 chr2: 2 of 71 differ, both the 8-byte tail of the 56-byte table copy (the original does ld/sd for bytes 48..55, ours lq/sq as the aligned struct copy): ld via s64 tail, u32 pair, separate quad copies tried.
#if 0
void func_001F9CD0(s32 a0, s32 a1, void *a2, s32 a3, s32 a4) {
    BtbSlotTbl t;
    s32 s4;
    s32 idx = a1;
    if (a4 == 0) {
        a4 |= func_001FFBA0(*(f32 *)a2, *(f32 *)((u8 *)a2 + 8));
    }
    if (idx < 14) {
        t = *(BtbSlotTbl *)D_0044B750;
        if (((u32 *)&t)[idx] != 0) {
            ((BtbSlotFn)((u32 *)&t)[idx])(a0, a2, a3, a4);
        }
    } else {
        void *r = (void *)func_001A50F0((void *)D_0051CD0C[0], idx);
        if (r != 0) {
            s4 = func_00209540(r, 0x2000001, 0);
        }
        if (s4 != 0) {
            func_00209B50((void *)s4, a2, 0);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9CD0);
void func_001F9DF0(void) {
    BtbBg_RunPostObjs();
}
void func_001F9E00(void) {
}
void BtbBg_Restart(void) {
    BtbBg_KillTasks();
    BtbBg_Start();
}
extern void amTask_Kill(s32);
extern void BtbBg_RunFunc(void);
extern void func_001F6140(void);

void BtbBg_KillTasks(void) {
    s32 i;

    if (gBtbBg.unkA4[0] != 0) {
        amTask_Kill(gBtbBg.unkA4[0]);
        gBtbBg.unkA4[0] = 0;
    }
    if (gBtbBg.unkA4[1] != 0) {
        amTask_Kill(gBtbBg.unkA4[1]);
        gBtbBg.unkA4[1] = 0;
    }
    if (gBtbBg.unkA4[2] != 0) {
        amTask_Kill(gBtbBg.unkA4[2]);
        gBtbBg.unkA4[2] = 0;
    }
    if (gBtbBg.unkA4[3] != 0) {
        amTask_Kill(gBtbBg.unkA4[3]);
        gBtbBg.unkA4[3] = 0;
    }
    if (gBtbBg.unkA4[4] != 0) {
        amTask_Kill(gBtbBg.unkA4[4]);
        gBtbBg.unkA4[4] = 0;
    }
    if (gBtbBg.unkA4[5] != 0) {
        amTask_Kill(gBtbBg.unkA4[5]);
        gBtbBg.unkA4[5] = 0;
    }
    if (gBtbBg.unkA4[6] != 0) {
        amTask_Kill(gBtbBg.unkA4[6]);
        gBtbBg.unkA4[6] = 0;
    }
    BtbBg_RunFunc();
    func_001F6140();
    func_00209450(0x2000000, 1);
}
extern char D_004698E8[];
extern char D_004698F8[];
extern char D_00469900[];
extern char D_00469910[];
extern char D_00469920[];
extern char D_00469930[];
extern char D_00469940[];
extern void *amTask_Create(void (*update)(void), void (*kill)(void), s32 prio, s32, s32, char *name);
extern void BtbBg_ResetLists(void);
extern void func_002CF8F0(void);
extern void func_001F7FA0(void);

void BtbBg_Start(void) {
    if (gBtbBg.unkA4[0] == 0) {
        gBtbBg.unkA4[0] = (s32)amTask_Create(func_001F9660, 0, 0x3100, 0x200, 0x4000004, D_004698E8);
    }
    if (gBtbBg.unkA4[1] == 0) {
        gBtbBg.unkA4[1] = (s32)amTask_Create(BtbBg_TaskDraw, 0, 0x3200, 0x200, 0x4000004, D_004698F8);
    }
    if (gBtbBg.unkA4[3] == 0) {
        gBtbBg.unkA4[3] = (s32)amTask_Create(BtbBg_TaskPostDraw, 0, 0x3300, 0x200, 0x4000004, D_00469900);
    }
    if (gBtbBg.unkA4[2] == 0) {
        gBtbBg.unkA4[2] = (s32)amTask_Create(BtbBg_TaskTrsDraw, 0, 0x3600, 0x200, 0x4000004, D_00469910);
    }
    if (gBtbBg.unkA4[4] == 0) {
        gBtbBg.unkA4[4] = (s32)amTask_Create(BtbBg_TaskScrEffect, 0, 0x3800, 0x200, 0x4000004, D_00469920);
    }
    if (gBtbBg.unkA4[5] == 0) {
        gBtbBg.unkA4[5] = (s32)amTask_Create(BtbBg_TaskAfterDraw, 0, 0x3800, 0x200, 0x4000004, D_00469930);
    }
    if (gBtbBg.unkA4[6] == 0) {
        gBtbBg.unkA4[6] = (s32)amTask_Create(BtbBg_TaskMain, 0, 0x5700, 0x200, 0x4000002, D_00469940);
    }
    BtbBg_ResetLists();
    gBtbBg.area = D_0044AE50[gBtbBg.stage].startArea;
    gBtbBg.unk48 = 1;
    gBtbBg.flags &= ~1;
    gBtbBg.flags |= 1;
    gBtbBg.flags &= ~0x20;
    gBtbBg.flags |= 0x20;
    gBtbBg.flags &= ~2;
    gBtbBg.flags |= 2;
    gBtbBg.flags &= ~8;
    gBtbBg.flags |= 8;
    func_002CF8F0();
    gBtbBg.flags &= ~0x40;
    gBtbBg.flags |= 0x40;
    func_001F7FA0();
}
extern void func_001FB110(void *);
void func_001F8C30(StageWork *w);

void func_001FA250(void) {
    func_001F9270(&gBtbBg);
    if (gBtbBg.unk24 != NULL) {
        func_001FB110(gBtbBg.unk24);
    }
    if (gBtbBg.unk28 != NULL) {
        func_001FB110(gBtbBg.unk28);
    }
    if (gBtbBg.hdr != NULL) {
        func_001FB110(gBtbBg.hdr);
    }
    if (gBtbBg.unk2C != NULL) {
        func_001FB110(gBtbBg.unk2C);
    }
    func_001F8DE0(&gBtbBg);
    func_001F8C30(&gBtbBg);
    gBtbBg.area = D_0044AE50[gBtbBg.stage].startArea;
}
void BtbBg_Clear(void) {
    func_001F8ED0(&gBtbBg);
    memset(&gBtbBg, 0, 0x40);
}
extern s32 D_00470630;

// GIVEN UP: the memset call and the table load match; the original takes the address of D_00470630 once more (an addiu gp that is unused) and is 8 bytes longer (0x60 against 0x58)
#if 0
void func_001FA360(s32 stage) {
    memset(&D_00470630, 0, 4);
    D_00470630 = D_0044AE50[stage].unk14;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001FA360);
