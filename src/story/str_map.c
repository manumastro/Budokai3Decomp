#include "common.h"
#include "menu/menu.h"

typedef struct StrMapCopy16 {
    s32 w[4];
} __attribute__((aligned(16))) StrMapCopy16;

extern s32 *gStrMap;
extern void func_00299390(void);
extern void Scene_SetReady(void);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D670(s32, f32);
extern void func_0028EC50(s32, s32, s32, s32, s32, s32);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void func_00125740(char *, char *, s32);
extern char D_004E6560[];
extern char D_004B4C00[];
extern void func_0029CA40(void);
extern void *gStrTitle;

INCLUDE_ASM("asm/nonmatchings/story/str_map", func_00299CA0);
void func_0029A090(void) {
    s32 k;
    if (gStrMap[0x90 / 4] != 0) {
        func_0022D0E0(gStrMap[0x90 / 4], 1);
    }
    gStrMap[0x90 / 4] = func_0022D670(((s32 *)((s32 *)gStrMap[0x5C / 4])[0x1C / 4])[0x54 / 4], 0.0f);
    if (gStrMap[0x94 / 4] != 0) {
        func_0022D0E0(gStrMap[0x94 / 4], 1);
    }
    gStrMap[0x94 / 4] = func_0022D670(((s32 *)((s32 *)gStrMap[0x5C / 4])[0x1C / 4])[0x58 / 4], 0.0f);
    if (gStrMap[0x98 / 4] != 0) {
        func_0022D0E0(gStrMap[0x98 / 4], 1);
    }
    gStrMap[0x98 / 4] = func_0022D670(((s32 *)((s32 *)gStrMap[0x5C / 4])[0x1C / 4])[0x9C / 4], 0.0f);
    for (k = 0; k < 0x40; k++) {
        if (gStrMap[0x27 + k] != 0) {
            func_0022D0E0(gStrMap[0x27 + k], 1);
        }
        gStrMap[0x27 + k] = func_0022D670(((s32 *)((s32 *)gStrMap[0x5C / 4])[0x1C / 4])[0x44 / 4], 0.0f);
    }
}
#if 0
// func_0029A1C0: the switch chain and the condition match now (q != 0 && q->4 == 3); the original lays out an empty case block for case 1 and case 3 before the end, ours merges the empty cases; four orders tried
void func_0029A1C0(void) {
    s32 *s = gStrMap;
    s32 m = *((s8 *)s + 0x1BD);
    switch (m) {
    case 0:
        {
            s32 *q = (s32 *)s[0xC / 4];
            if (q != 0 && *(s16 *)((char *)q + 4) == 3) {
                func_00299390();
                *((s8 *)gStrMap + 0x1BD) = 2;
            }
        }
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A1C0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A250);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A4F0);
void StrMap_Clear(void) {
    gStrMap = 0;
}
extern void amCdFs_Close(s32, s32);
extern void amCdFs_ReleaseCache(s32);
extern void amHeap_Free(void *);

void func_0029A8F0(void) {
    s32 i;
    for (i = 0; i < 0xE; i++) {
        if (gStrMap[8 + i] != 0) {
            amTask_Kill((Task *)gStrMap[8 + i]);
        }
    }
    for (i = 0; i < 4; i++) {
        if (gStrMap[i] != 0) {
            amCdFs_Close(gStrMap[i], 0);
        }
        if (gStrMap[4 + i] != 0) {
            amCdFs_ReleaseCache(gStrMap[4 + i]);
        }
    }
    for (i = 0; i < 0x4D; i++) {
        if (gStrMap[0x1A + i] != 0) {
            func_0022D0E0(gStrMap[0x1A + i], 1);
        }
    }
    amHeap_Free(gStrMap);
    gStrMap = 0;
}

extern StrMapCopy16 D_00453EA0 __attribute__((aligned(16)));
extern void func_0028EC80(s32, s32, s32, s32, void *, s32, s32, s32);
extern void StrBg_SetFlags(void *, s32, s32);
void func_0029A9F0(void) {
    StrMapCopy16 tmp;
    s32 i;
    s32 off;
    tmp = D_00453EA0;
    if (*((s8 *)gStrMap + 0x1BD) != 0) {
        func_0028EC80((s32)((char *)gStrMap + 0x20), (s32)((char *)gStrMap + 0x58), (s32)((char *)gStrMap + 0x60), (s32)((char *)gStrMap + 0x68), &tmp, gStrMap[0x1C0 / 4], gStrMap[0x1C4 / 4], 0x500000);
        i = 0;
        off = 0;
        do {
            s32 v = *(s32 *)((char *)gStrMap + off + 0x38);
            if (v != 0) {
                StrBg_SetFlags((void *)v, 1, *(s32 *)((char *)*(s32 *)((char *)gStrMap + 0x6C) + 0x30) + 0x20);
            }
            i++;
            off += 4;
        } while (i < 7);
        *((s8 *)gStrMap + 0x1BD) = 2;
    } else {
        *((s8 *)gStrMap + 0x1BD) = 3;
    }
    *((s8 *)gStrMap + 0x1BE) = 1;
}
#if 0
// func_0029AAC0: the two for loops take the compare in at (slti at) in the original, v0 here; for, do-while, reversed and != tests tried; the rest matches
extern void func_0028EA80(Task *);
extern void func_0029A1C0(Task *);
extern char D_0046BB80[];
extern char D_0046BB90[];
extern char D_0046BBA0[];

void func_0029AAC0(s32 a0, s32 a1, s32 a2) {
    s32 i;
    s32 r;
    *(s8 *)((char *)gStrMap + 0x1BC) = (s8)a2;
    gStrMap[0x1C0 / 4] = a0;
    gStrMap[0x1C4 / 4] = a1;
    *(s8 *)((char *)gStrMap + 0x1BE) = 0;
    *(s8 *)((char *)gStrMap + 0x1BD) = 0;
    for (i = 3; i < 0xE; i++) {
        if (gStrMap[8 + i] != 0) {
            amTask_Kill((Task *)gStrMap[8 + i]);
            gStrMap[8 + i] = 0;
        }
    }
    for (i = 1; i < 9; i++) {
        if (gStrMap[26 + i] != 0) {
            func_0022D0E0(gStrMap[26 + i], 1);
            gStrMap[26 + i] = 0;
        }
    }
    r = (s32)amTask_Create(func_0029A1C0, NULL, a0, 2, a1, D_0046BB80);
    gStrMap[0x2C / 4] = r;
    r = (s32)amTask_Create(func_0028EA80, NULL, a0 + 5, 2, a1, D_0046BB90);
    gStrMap[0x34 / 4] = r;
    r = (s32)amTask_Create(func_0028EA80, NULL, a0 + 0xD, 2, a1, D_0046BBA0);
    gStrMap[0x54 / 4] = r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AAC0);

void func_0029AC30(void) {
    s32 s0;
    *((s8 *)gStrMap + 0x1B2) = 1;
    if (*((s8 *)gStrMap + 0x1B1) == 1) {
        *((s8 *)gStrMap + 0x1B1) = 2;
    }
    if (*((s8 *)gStrMap + 0x1B1) == 2) {
        s0 = gStrMap[0x24 / 4];
        if (gStrMap[0x68 / 4] != 0) {
            func_0022D0E0(gStrMap[0x68 / 4], 1);
        }
        gStrMap[0x68 / 4] = func_0022D670(((s32 *)((s32 *)((s32 *)gStrMap)[0x58 / 4])[0x1C / 4])[1], 0.0f);
        func_0028EC50(s0, (s32)((char *)gStrMap + 0x68), gStrMap[0x60 / 4], 0x500000, 0, 0);
    }
}
extern void func_0029A4F0(Task *);
extern char D_0046BBB0[];

void func_0029ACE0(s32 a0, s32 a1, s32 a2) {
    s32 s0;
    *(s8 *)((char *)gStrMap + 0x1B0) = (s8)a2;
    gStrMap[0x1B4 / 4] = a0;
    gStrMap[0x1B8 / 4] = a1;
    *(s8 *)((char *)gStrMap + 0x1B2) = 0;
    if (*(s8 *)((char *)gStrMap + 0x1B1) == 1) {
        *(s8 *)((char *)gStrMap + 0x1B1) = 2;
    }
    if (gStrMap[0x24 / 4] != 0) {
        amTask_Kill((Task *)gStrMap[0x24 / 4]);
    }
    gStrMap[0x24 / 4] = (s32)amTask_Create(func_0029A4F0, NULL, a0, 2, a1, D_0046BBB0);
    if (*(s8 *)((char *)gStrMap + 0x1B1) == 2) {
        s0 = gStrMap[0x24 / 4];
        if (gStrMap[0x68 / 4] != 0) {
            func_0022D0E0(gStrMap[0x68 / 4], 1);
        }
        gStrMap[0x68 / 4] = func_0022D670(*(s32 *)(*(s32 *)(gStrMap[0x58 / 4] + 0x1C)), 0.0f);
        func_0028EC50(s0, (s32)((char *)gStrMap + 0x68), gStrMap[0x60 / 4], 0x500000, 0, 0);
    }
}

extern void amTask_Kill(Task *);

void StrMap_KillTask(void) {
    if (*((s8 *)gStrMap + 0x19D) == 2) {
        *((s8 *)gStrMap + 0x19D) = 1;
    }
    if (gStrMap[0x28 / 4] != 0) {
        amTask_Kill((Task *)gStrMap[0x28 / 4]);
    }
    gStrMap[0x28 / 4] = 0;
}
extern void func_0029A250(Task *);
extern char D_0046BBB8[];

void StrMap_Start(s32 a0, s32 a1, s32 a2) {
    gStrMap[0x1A0 / 4] = a0;
    gStrMap[0x1A4 / 4] = a1;
    *((s8 *)gStrMap + 0x19E) = a2;
    *((s8 *)gStrMap + 0x19D) = 0;
    if (gStrMap[0x28 / 4] != 0) {
        amTask_Kill((Task *)gStrMap[0x28 / 4]);
    }
    gStrMap[0x28 / 4] = (s32)amTask_Create(func_0029A250, NULL, a0, 2, a1, D_0046BBB8);
}
extern void amFile_Load(s32);

extern void amFile_Load(s32);

#if 0
// func_0029AEF0: the if-nest with the return 0 at the end matches apart from the loop test: the original computes it in $at (slti $at), ours in v0; for, while, do-while, continue and reversed tests tried
extern void amFile_Load(s32);

s32 func_0029AEF0(void) {
    s32 i;
    if (gStrMap[3] != 0) {
        if (*(s16 *)((char *)gStrMap[3] + 4) != 3) {
            return 1;
        }
        for (i = 0; i < 4; i++) {
            if (gStrMap[i] != 0) {
                gStrMap[4 + i] = *(s32 *)(gStrMap[i] + 0x40);
                *(s32 *)(gStrMap[i] + 0x40) = 0;
                amCdFs_Close(gStrMap[i], 0);
                gStrMap[i] = 0;
                amFile_Load(*(s32 *)(gStrMap[4 + i] + 0x50));
            }
        }
        gStrMap[0x58 / 4] = *(s32 *)(gStrMap[4] + 0x50);
        gStrMap[0x60 / 4] = *(s32 *)(gStrMap[5] + 0x50);
        gStrMap[0x5C / 4] = *(s32 *)(gStrMap[6] + 0x50);
        gStrMap[0x64 / 4] = *(s32 *)(gStrMap[7] + 0x50);
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AEF0);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void amHeap_Free(void *);
extern void memset(void *, s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern char D_0046BBC0[];

void func_0029B000(s32 a0) {
    s32 v;
    s32 *m;
    if (gStrMap != 0) {
        amHeap_Free(gStrMap);
    }
    gStrMap = (s32 *)amHeap_Alloc(0x1C8, 0, D_0046BBC0, 0x5A);
    memset(gStrMap, 0, 0x1C8);
    *(s8 *)((char *)gStrMap + 0x19C) = (s8)a0;
    *(s8 *)((char *)gStrMap + 0x1B1) = 0;
    *(s8 *)((char *)gStrMap + 0x19D) = 0;
    if (a0 == 0) {
        v = amCdFs_ReadFileId(0x107DC, 0, 1);
        m = gStrMap;
        m[0] = v;
        v = amCdFs_ReadFileId(0x107DD, 0, 1);
        gStrMap[1] = v;
    } else {
        v = amCdFs_ReadFileId(0x107DE, 0, 1);
        m = gStrMap;
        m[0] = v;
        v = amCdFs_ReadFileId(0x107DF, 0, 1);
        gStrMap[1] = v;
    }
    v = amCdFs_ReadFileId(0x107E3, 0, 1);
    m = gStrMap;
    m[2] = v;
    v = amCdFs_ReadFileId(0x107E4, 0, 1);
    gStrMap[3] = v;
}

INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B130);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B290);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B550);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029BA80);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C110);
extern s32 func_0022BF80(s32);
extern void Scene_FadeTo(s32, s32);

void func_0029C290(s32 *s0) {
    s32 *g = (s32 *)gStrTitle;
    if (func_0022BF80(g[0x78 / 4 + g[0xB0 / 4]]) == 0xFF) {
        Scene_FadeTo(-1, 0);
        s0[0x1C / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C2E0);
extern StrMapCopy16 D_00454110 __attribute__((aligned(16)));
extern StrMapCopy16 D_00454150 __attribute__((aligned(16)));
extern void func_0028EBB0(char *, s32, s32 *, s32);
extern void func_0029C730(void);
extern void func_0029C2E0(void);
void func_0029C680(s32 *a0) {
    StrMapCopy16 tmp;
    s32 *g;
    tmp = D_00454150;
    if (func_0022BF80(*(s32 *)((char *)gStrTitle + 0x74)) == 0xFF) {
        g = gStrTitle;
        func_0028EE90((s32)((char *)g + 0x10), (s32)((char *)g + 0x64), (s32)((char *)g + 0x68), (s32)((char *)g + 0x6C), &tmp, 0x8000, 0x10000, 0x200000);
        g = gStrTitle;
        func_0028EBB0((char *)*(s32 *)((char *)g + 0x34), 0, (s32 *)*(s32 *)((char *)g + 0x64), *(s32 *)((char *)g + 0xB0) + 0xF);
        {
            void *f = func_0029C2E0;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C730);
extern StrMapCopy16 D_00454110 __attribute__((aligned(16)));
extern void *gStrTitle;
extern s32 func_0022BF80(s32);
extern void func_0029C730(void);
void func_0029C9B0(s32 *a0) {
    StrMapCopy16 tmp;
    s32 *g;
    tmp = D_00454110;
    if (func_0022BF80(*(s32 *)((char *)gStrTitle + 0x6C)) == 0xFF) {
        g = gStrTitle;
        func_0028EE90((s32)((char *)g + 0x10), (s32)((char *)g + 0x64), (s32)((char *)g + 0x68), (s32)((char *)g + 0x6C), &tmp, 0x8000, 0x10000, 0x200000);
        {
            void *f = func_0029C730;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CA40);
void StrTitle_TaskMain(Task *a0) {
    char *t = (char *)gStrTitle;
    s32 *u = *(s32 **)(t + 4);
    if (*(s16 *)((char *)u + 4) == 3) {
        Scene_SetReady();
        SoundRpc_SendWord2(-1);
        SoundRpc_SendWord(0);
        amAdx_Stop(-1);
        func_00125740(D_004E6560, D_004B4C00, 0x2B180);
        {
            void *f = func_0029CA40;
            *(s32 *)((char *)a0 + 0x1C) = (s32)((f == 0) ? 0 : f);
        }
    }
}
void StrTitle_Clear(void) {
    gStrTitle = NULL;
}
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(s32, s32);
extern void amCdFs_ReleaseCache(s32);
extern void amSofdec_Destroy(s32);
extern void amHeap_Free(void *);
#if 0
// func_0029CCC0: the two loops and the Sofdec / heap tail match in shape; the loop counters swap saved registers (ours s0 and s1 the other way round) and one global reload differs; two orders tried
void func_0029CCC0(void) {
    s32 i;
    s32 off;
    amTask_KillGroup(2, 0x10000, 0);
    i = 0;
    off = 0;
    do {
        if (*(s32 *)((char *)gStrTitle + off) != 0) {
            amCdFs_Close(*(s32 *)((char *)gStrTitle + off), 0);
        }
        if (*(s32 *)((char *)gStrTitle + off + 8) != 0) {
            amCdFs_ReleaseCache(*(s32 *)((char *)gStrTitle + off + 8));
        }
        i++;
        off += 4;
    } while (i < 2);
    i = 0;
    off = 0;
    do {
        if (*(s32 *)((char *)gStrTitle + off + 0x6C) != 0) {
            func_0022D0E0(*(s32 *)((char *)gStrTitle + off + 0x6C), 1);
        }
        i++;
        off += 4;
    } while (i < 0x10);
    if (*(s32 *)((char *)gStrTitle + 0xD0) >= 0) {
        amSofdec_Destroy(*(s32 *)((char *)gStrTitle + 0xD0));
    }
    amHeap_Free(gStrTitle);
    gStrTitle = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CCC0);
extern void StrTitle_TaskMain(Task *);
extern char D_0046EA28[];

void StrTitle_Start(void) {
    ((void **)gStrTitle)[4] = amTask_Create(StrTitle_TaskMain, NULL, 0x8000, 2, 0x10000, D_0046EA28);
}
