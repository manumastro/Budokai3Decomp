#include "common.h"
#include "battle/stage.h"


extern void func_001F63B0(void);
extern void func_001F63C0(void);
extern void func_001F6450(void);
extern void func_001F65F0(void);
extern void func_001F63D0(void);
extern void func_0013B0B0(s32);
extern void func_0013B110(s32);
extern void func_00125740(void *, s32, s32);
extern void *func_001A50F0(void *, s32);
void func_001F9E40(void);
void func_001F9270(StageWork *w);
void func_001F8DE0(StageWork *w);
void func_001F8ED0(StageWork *w);
void func_001F9660(void);
void func_001F9600(void);
void func_001F9420(void);
void func_001F93C0(void);
void func_001F9360(void);
void func_001F9310(void);
void func_001F97A0(void);
void func_001F9F50(void);

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
extern void *func_0013AAB0(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
void func_001F8420(void *src, StageObj *obj);

void func_001F89D0(s32 index, StageGroupSrc *src, StageGroup *group) {
    s32 i;

    group->index = index;
    group->src = src;
    group->count = src->count;
    group->objs = func_0013AAB0(src->count * sizeof(StageObj), 0, D_004698D8, 0x624);
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
    groups = func_0013AAB0(hdr->ngroups * sizeof(StageGroup), 0, D_004698D8, 0x5F2);
    memset(groups, 0, hdr->ngroups * sizeof(StageGroup));
    g = groups;
    for (i = 0; i < hdr->ngroups; i++, g++) {
        func_001F89D0(i, hdr->groups[i], g);
        if (g->objs->res->info->unk20 >= 2) {
            for (j = 0; j < g->objs->res->count; j++) {
                g->objs->res->ent[j].unk00 = D_0044AE50[D_0051CCE0.stage].area[i].unk0C;
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
        w->objs = func_0013AAB0(hdr->nobjs * sizeof(StageObj), 0, D_004698D8, 0x59A);
        memset(w->objs, 0, hdr->nobjs * sizeof(StageObj));
        for (i = 0; i < hdr->nobjs; i++) {
            func_001F8420(hdr->objs[i], &w->objs[i]);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8ED0);
extern void func_0025C800(void *, s32);
extern void func_001A5160(void *);

void func_001F9270(StageWork *w) {
    w->data = (void *)w->unk14[0x54 / 4];
    w->unk14[0x54 / 4] = 0;
    func_0025C800(w->unk14, 0);
    w->unk14 = NULL;
    func_001A5160(w->data);
    w->hdr = func_001A50F0(w->data, 0);
    w->unk24 = func_001A50F0(w->data, 1);
    w->unk28 = func_001A50F0(w->data, 2);
    w->unk30 = func_001A50F0(w->data, 3);
    w->unk2C = func_001A50F0(w->data, 4);
    w->unk18 = 0;
}
void func_001F9310(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_001F63B0();
    }
}
void func_001F9360(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_0013B0B0(0);
        func_001F63C0();
        func_0013B110(1);
    }
}
void func_001F93C0(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_0013B0B0(0);
        func_001F6450();
        func_0013B110(1);
    }
}
extern void func_0012F2C0(void);
extern s32 func_001339D0(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern void func_00137EE0(void);
extern void func_00133CE0(s32);
extern void func_001F64E0(void);

void func_001F9420(void) {
    f32 col[4];
    s32 save;
    BattleWork *bw;
    f32 *alpha;

    if (BW_FIELD(D_00470570, s8, 0x8975) != 1) {
        func_0012F2C0();
        bw = D_00470570;
        alpha = &BW_FIELD(bw, f32, 0x892C);
        if (*alpha > 0.0f) {
            col[0] = (u32)BW_FIELD(bw, u8, 0x8928) / 255.0f;
            col[1] = (u32)BW_FIELD(bw, u8, 0x8929) / 255.0f;
            col[2] = (u32)BW_FIELD(bw, u8, 0x892A) / 255.0f;
            col[3] = *alpha;
            save = func_001339D0(0, 0);
            func_001339D0(0, 0x33001);
            func_00133780(0, 1);
            func_00139620(0x1900, col, -1, 0x44, 0, 0.0f);
            func_00137EE0();
            func_00133780(0, 0);
            func_001339D0(0, save);
        }
        func_00133CE0(0);
        func_0013B0B0(0);
        if (D_0051CCE0.flags & 1) {
            func_001F64E0();
        }
        func_0013B110(1);
    }
}
void func_001F9600(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1) {
        func_0013B0B0(0);
        if (D_0051CCE0.flags & 1) {
            func_001F65F0();
        }
        func_0013B110(1);
    }
}
extern void func_001F6570(void);
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

    if (BW_FIELD(D_00470570, s8, 0x8975) != 1) {
        fog = &D_0044A9C0[D_0044AE50[D_0051CCE0.stage].area[D_0051CCE0.area].fog];
        func_001F6570();
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
        func_00137EE0();
        func_00133780(0, 0);
        if (D_0051CCE0.flags & 0x20) {
            func_00133CE0(1);
            func_00133D10(fog->color);
            func_00133D50(fog->unk04, fog->unk08);
            func_00133D20(fog->unk0C, fog->unk10);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9660);
extern void func_001F6330(void);
extern void func_002CF820(void);

void func_001F97A0(void) {
    BattleWork *bw = D_00470570;
    s32 t;

    if (bw->unk88EC == 0) {
        t = bw->unk8AB2 != 0 && BW_FIELD(bw, f32, 0x891C) > 0.0f;
        if (!t || bw->unk8944 != 0) {
            D_0051CCE0.unk44 = bw->unk88F0;
            func_001F6330();
            func_002CF820();
        }
    }
}
void func_001F9840(s16 a0, s32 a1, s32 i) {
    D_0051CCE0.unk50[i] = a0;
    func_00125740(&D_0051CCE0.slot[i], a1, a0 * 2);
}
void func_001F9880(void) {
    D_0051CCE0.flags &= ~0x40;
}
void func_001F98A0(void) {
    D_0051CCE0.flags &= ~0x40;
    D_0051CCE0.flags |= 0x40;
}
void func_001F98D0(void) {
    D_0051CCE0.flags &= ~0x10;
}
s32 func_001F98F0(void) {
    return D_0051CCE0.flags & 8;
}
void func_001F9900(void) {
    D_0051CCE0.flags &= ~8;
}
void func_001F9920(void) {
    D_0051CCE0.flags &= ~4;
}
s32 func_001F9940(void) {
    return D_0051CCE0.flags & 2;
}
void func_001F9950(void) {
    D_0051CCE0.flags &= ~2;
}
void func_001F9970(void) {
    D_0051CCE0.flags &= ~2;
    D_0051CCE0.flags |= 2;
}
void func_001F99A0(void) {
    D_0051CCE0.flags &= ~1;
}
void func_001F99C0(void) {
    D_0051CCE0.flags &= ~1;
    D_0051CCE0.flags |= 1;
}
void func_001F99F0(s16 a0) {
    D_0051CCE0.unk9E = a0;
}
void *func_001F9A00(void) {
    return D_0051CCE0.unk30;
}
void *func_001F9A10(void) {
    return func_001A50F0(D_0051CCE0.unk2C, 0x7F);
}
void *func_001F9A20(void) {
    if (D_0051CCE0.unk9E & 1) {
        return func_001A50F0(D_0051CCE0.unk2C, (D_0051CCE0.area << 7) + 0x7E);
    }
    return (void *)*((StageGroup *)((u8 *)D_0051CCE0.groups + D_0051CCE0.area * sizeof(StageGroup)))->src->unkD8;
}
StageModel *func_001F9AA0(void) {
    return &D_0044A240[D_0044AE50[D_0051CCE0.stage].area[D_0051CCE0.area].model];
}
void *func_001F9B00(void) {
    return D_0044A240[D_0044AE50[D_0051CCE0.stage].area[D_0051CCE0.area].model].unk10;
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
extern void func_001F3EC0(void);

void func_001F9BB0(s32 side, s32 cmd) {
    s32 i;

    switch (cmd) {
    case 9:
        if (side < 0) {
            func_00209280(0x2000008, 0);
            for (i = 0; i < 4; i++) {
                D_0051CCE0.slot[i].unk0E = 0;
                func_002CF6E0(i, 9);
            }
        } else {
            func_00209280((1 << side) | 0x2000008, 1);
            D_0051CCE0.slot[side].unk0E = 0;
            func_002CF6E0(side, 9);
        }
        break;
    case 13:
        func_001F3EC0();
        break;
    default:
        func_00209450(0x2000001, 1);
        func_00209450(0x2000002, 1);
        func_00209450(0x2000008, 1);
        func_001F3EC0();
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9CD0);
void func_001F9DF0(void) {
    func_001F63D0();
}
void func_001F9E00(void) {
}
void func_001F9E10(void) {
    func_001F9E40();
    func_001F9F50();
}
extern void func_00145120(s32);
extern void func_001F7F50(void);
extern void func_001F6140(void);

void func_001F9E40(void) {
    s32 i;

    if (D_0051CCE0.unkA4[0] != 0) {
        func_00145120(D_0051CCE0.unkA4[0]);
        D_0051CCE0.unkA4[0] = 0;
    }
    if (D_0051CCE0.unkA4[1] != 0) {
        func_00145120(D_0051CCE0.unkA4[1]);
        D_0051CCE0.unkA4[1] = 0;
    }
    if (D_0051CCE0.unkA4[2] != 0) {
        func_00145120(D_0051CCE0.unkA4[2]);
        D_0051CCE0.unkA4[2] = 0;
    }
    if (D_0051CCE0.unkA4[3] != 0) {
        func_00145120(D_0051CCE0.unkA4[3]);
        D_0051CCE0.unkA4[3] = 0;
    }
    if (D_0051CCE0.unkA4[4] != 0) {
        func_00145120(D_0051CCE0.unkA4[4]);
        D_0051CCE0.unkA4[4] = 0;
    }
    if (D_0051CCE0.unkA4[5] != 0) {
        func_00145120(D_0051CCE0.unkA4[5]);
        D_0051CCE0.unkA4[5] = 0;
    }
    if (D_0051CCE0.unkA4[6] != 0) {
        func_00145120(D_0051CCE0.unkA4[6]);
        D_0051CCE0.unkA4[6] = 0;
    }
    func_001F7F50();
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
extern void *func_00144FC0(void (*update)(void), void (*kill)(void), s32 prio, s32, s32, char *name);
extern void func_001F62A0(void);
extern void func_002CF8F0(void);
extern void func_001F7FA0(void);

void func_001F9F50(void) {
    if (D_0051CCE0.unkA4[0] == 0) {
        D_0051CCE0.unkA4[0] = (s32)func_00144FC0(func_001F9660, 0, 0x3100, 0x200, 0x4000004, D_004698E8);
    }
    if (D_0051CCE0.unkA4[1] == 0) {
        D_0051CCE0.unkA4[1] = (s32)func_00144FC0(func_001F9600, 0, 0x3200, 0x200, 0x4000004, D_004698F8);
    }
    if (D_0051CCE0.unkA4[3] == 0) {
        D_0051CCE0.unkA4[3] = (s32)func_00144FC0(func_001F9420, 0, 0x3300, 0x200, 0x4000004, D_00469900);
    }
    if (D_0051CCE0.unkA4[2] == 0) {
        D_0051CCE0.unkA4[2] = (s32)func_00144FC0(func_001F93C0, 0, 0x3600, 0x200, 0x4000004, D_00469910);
    }
    if (D_0051CCE0.unkA4[4] == 0) {
        D_0051CCE0.unkA4[4] = (s32)func_00144FC0(func_001F9360, 0, 0x3800, 0x200, 0x4000004, D_00469920);
    }
    if (D_0051CCE0.unkA4[5] == 0) {
        D_0051CCE0.unkA4[5] = (s32)func_00144FC0(func_001F9310, 0, 0x3800, 0x200, 0x4000004, D_00469930);
    }
    if (D_0051CCE0.unkA4[6] == 0) {
        D_0051CCE0.unkA4[6] = (s32)func_00144FC0(func_001F97A0, 0, 0x5700, 0x200, 0x4000002, D_00469940);
    }
    func_001F62A0();
    D_0051CCE0.area = D_0044AE50[D_0051CCE0.stage].startArea;
    D_0051CCE0.unk48 = 1;
    D_0051CCE0.flags &= ~1;
    D_0051CCE0.flags |= 1;
    D_0051CCE0.flags &= ~0x20;
    D_0051CCE0.flags |= 0x20;
    D_0051CCE0.flags &= ~2;
    D_0051CCE0.flags |= 2;
    D_0051CCE0.flags &= ~8;
    D_0051CCE0.flags |= 8;
    func_002CF8F0();
    D_0051CCE0.flags &= ~0x40;
    D_0051CCE0.flags |= 0x40;
    func_001F7FA0();
}
extern void func_001FB110(void *);
void func_001F8C30(StageWork *w);

void func_001FA250(void) {
    func_001F9270(&D_0051CCE0);
    if (D_0051CCE0.unk24 != NULL) {
        func_001FB110(D_0051CCE0.unk24);
    }
    if (D_0051CCE0.unk28 != NULL) {
        func_001FB110(D_0051CCE0.unk28);
    }
    if (D_0051CCE0.hdr != NULL) {
        func_001FB110(D_0051CCE0.hdr);
    }
    if (D_0051CCE0.unk2C != NULL) {
        func_001FB110(D_0051CCE0.unk2C);
    }
    func_001F8DE0(&D_0051CCE0);
    func_001F8C30(&D_0051CCE0);
    D_0051CCE0.area = D_0044AE50[D_0051CCE0.stage].startArea;
}
void func_001FA320(void) {
    func_001F8ED0(&D_0051CCE0);
    memset(&D_0051CCE0, 0, 0x40);
}
extern s32 D_00470630;

/* compiles 8 bytes short */
#if 0
void func_001FA360(s32 stage) {
    memset(&D_00470630, 0, 4);
    D_00470630 = D_0044AE50[stage].unk14;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001FA360);
