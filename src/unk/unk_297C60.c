#include "common.h"

typedef struct Vec4f {
    f32 x, y, z, w;
} Vec4f;

typedef struct Slot {
    s32 id;
    s32 f4;
    s32 f8;
    f32 fC;
    Vec4f f10;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    char pad3C[4];
} Slot;

typedef struct SndWork {
    char pad0[0x80];
    Slot slot[64];
    s32 f1080[72];
    s32 f11A0[8];
    Vec4f f11C0;
    s32 f11D0;
    s32 f11D4;
    s32 f11D8;
    char pad11DC[4];
    s8 f11E0;
    s8 f11E1;
    s8 f11E2;
    s8 f11E3;
    s8 f11E4;
    s8 f11E5;
    s8 f11E6;
} SndWork;

typedef struct Vec4i {
    s32 v[4];
} Vec4i;

typedef struct Ctl {
    char pad0[0x4];
    s16 f4;
    char pad6[0x44 - 0x6];
    s32 f44;
    char pad48[0x50 - 0x48];
    s32 f50;
} Ctl;

typedef struct Msg3 {
    s32 a;
    s32 b;
    s32 c;
} Msg3;

typedef struct Proc {
    char pad0[0x1C];
    void (*f1C)(struct Proc *);
} Proc;

extern s32 gSoundState;
extern void *D_005AA550[];
extern Ctl *D_005AA574[];
extern Ctl *D_005AA59C[];
extern void *D_005AA5A0[];
extern SndWork *D_005AA604[];
extern void *D_005AA608[];
extern s32 D_005AA640[];
extern s32 D_005AA644[];
extern char D_0046BB70[];
extern Vec4i D_00453DA0;
extern s32 D_00453C80[];
extern s32 D_00453980[][5];
extern void *D_005AA554[];
extern void *D_005AA558[];
extern void *D_005AA55C[];
extern void *D_005AA560[];
extern void *D_005AA564[];
extern void *D_005AA568[];
extern void *D_005AA56C[];
extern void *D_005AA570[];
extern void func_0029D6C0(Vec4i *);
extern s32 Flight_MapIndex(s32);
extern void *func_001CAAB0(s32, s32, s32, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void func_002BFEE0(s32, s32, s32);
extern void Help_Load(void);
extern void StrMap_Load(s32);
extern void func_00291390(s32);
extern u8 D_004E6560[];
extern s8 D_00511450[];
extern Vec4f D_00453D90;
extern Vec4f D_005AA680;
extern Vec4f D_005AA690;
extern s32 D_005AA664[];
extern s32 D_005AA668[];
extern s32 D_005AA670[];
extern void func_001F0660(void);
extern f32 func_00146E90(Vec4f *);
extern f32 func_0011F680(f32, f32);
extern void Scr_SetRecord(Vec4f *, s32);

extern void func_00143B50(s32, s32);
extern void amSound_LoadBank(Msg3 *);
extern void func_002980F0(Proc *);
extern void func_002984A0(void);
extern void Scene_SetReady(void);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void func_0028EB40(Proc *, s32, void (*)(void), s32);
extern void Scene_Request();
extern s32 func_002908D0(s32);
extern s32 func_00290AE0(s32);
extern void func_00290410(Slot *);
extern void func_00290390(s32, s32);
extern void func_002904C0(Slot *);
extern void memset(void *, s32, s32);
extern void StrMap_Clear(void);
extern void StrBg_Clear(void);
extern void func_002BFCF0(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void func_0022D0E0(void *, s32);
extern void Character_Release(void *);
extern void func_002BFD90(void);
extern void StrMap_Free(void);
extern void StrBg_Stop(void);
extern void Help_Exit(void);
extern void Flight_TaskMain(Proc *);
extern void *amTask_Create(void (*)(Proc *), s32, s32, s32, s32, char *);

static inline Slot *Snd_FindSlot(s32 id) {
    Slot *s = D_005AA604[0]->slot;
    s32 i;

    for (i = 0; i < 64; i++, s++) {
        if (s->id == id) {
            return s;
        }
    }
    return NULL;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00297C60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_002980F0);
void func_00298420(Proc *o) {
    Msg3 m;
    void (*fp)(Proc *);

    if (gSoundState == 0) {
        func_00143B50(10, 1);
        m.a = 1;
        m.b = D_005AA59C[0]->f44;
        m.c = D_005AA59C[0]->f50;
        amSound_LoadBank(&m);
        fp = func_002980F0;
        if (fp == NULL) {
            fp = NULL;
        }
        o->f1C = fp;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_002984A0);
void Flight_TaskMain(Proc *o) {
    if (D_005AA574[0]->f4 == 3) {
        Scene_SetReady();
        SoundRpc_SendWord2(-1);
        SoundRpc_SendWord(0);
        amAdx_Stop(-1);
        func_0028EB40(o, 10, func_002984A0, 0);
    }
}
void func_002987E0(s32 n) {
    switch (n) {
    case 0:
        Scene_Request(9);
        D_005AA640[0] = 9;
        break;
    case 1:
        Scene_Request(0xB);
        D_005AA640[0] = 0xB;
        break;
    case 2:
        Scene_Request(0xC);
        D_005AA640[0] = 0xC;
        break;
    case 3:
        Scene_Request(6);
        D_005AA640[0] = 6;
        break;
    }
}
void func_00298890(s32 a, s32 b) {
    s32 r = func_002908D0(a);

    if (r != -1) {
        D_005AA604[0]->f11A0[r] = b;
    }
}
void func_002988D0(s32 a, s32 b) {
    s32 r = func_00290AE0(a);

    if (r != -1) {
        D_005AA604[0]->f1080[r] = b;
    }
}
/* differs: the original keeps the byte address in a register (addiu a2, a1, 0x11E0) and is 8 bytes longer (10 of 31 with the plain form) */
#if 0
void func_00298910(s32 n) {
    Slot *s;
    s32 i;

    if (n != D_005AA604[0]->f11E0) {
        D_005AA644[0] |= 1;
        D_005AA604[0]->f11E0 = n;
        s = D_005AA604[0]->slot;
        for (i = 0; i < 64; i++, s++) {
            func_00290410(s);
            s->id = -1;
        }
    }
}
#endif
void func_00298910(s32 a0) {
    u8 *b = (u8 *)D_005AA604[0];

    if (a0 != *(s8 *)(b + 0x11E0)) {
        u8 *e;
        s32 i = 0;
        D_005AA644[0] |= 1;
        *(s8 *)(b + 0x11E0) = a0;
        e = ((u8 * volatile *)D_005AA604)[0] + 0x80;
        for (; i < 0x40; i++) {
            func_00290410((Slot *)e);
            *(s32 *)e = -1;
            e += 0x40;
        }
    }
}
void func_00298990(s32 a, s32 b, s32 c) {
    SndWork *w = D_005AA604[0];

    if (a != w->f11E1 || b != w->f11E2 || c != w->f11E3) {
        D_005AA644[0] |= 2;
        w->f11E1 = a;
        w->f11E2 = b;
        w->f11E3 = c;
    }
}
void func_002989F0(s32 id, s32 a, s32 b) {
    Slot *s = Snd_FindSlot(id);

    if (s != NULL) {
        s->f34 = a;
        s->f38 = b;
    }
}
void func_00298A50(s32 id, s32 a) {
    Slot *s = Snd_FindSlot(id);

    if (s != NULL) {
        s->f30 = a;
    }
}
void Snd_SetSlotF2C(s32 id, s32 a) {
    Slot *s = Snd_FindSlot(id);

    if (s != NULL) {
        s->f2C = a;
    }
}
void func_00298B10(s32 id, s32 a, s32 b, s32 c) {
    Slot *s = Snd_FindSlot(id);

    if (s != NULL) {
        s->f20 = a;
        s->f24 = b;
        s->f28 = c;
    }
}
/* differs: 28 of 49 instructions. Two inline searches (the original keeps the table base in $a3, the pointer in $a2,
   the counter in $a1, and zeroes the pointer on the natural loop exit with no `i == 64` compare); the branch shape of
   the found path (bne + out-of-line b) and the register picks did not follow from any declaration or case order. */
#if 0
void func_00298B70(s32 a0, s32 a1) {
    SndWork *base;
    Slot *s;
    s32 i;

    base = D_005AA604[0];
    s = (Slot *)((u8 *)base + 0x80);
    for (i = 0; i < 0x40; i++, s++) {
        if (s->id != a1) {
            continue;
        }
        break;
    }
    if (i == 0x40) {
        s = 0;
    }
    if (s == 0) {
        s = (Slot *)((u8 *)base + 0x80);
        for (i = 0; i < 0x40; i++, s++) {
            if (s->id != a0) {
                continue;
            }
            break;
        }
        if (i == 0x40) {
            s = 0;
        }
        if (s != 0) {
            func_00290390(a0, a1);
            s->id = a1;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00298B70);
void func_00298C40(s32 id) {
    Slot *s = Snd_FindSlot(id);

    if (s != NULL) {
        func_00290410(s);
        s->id = -1;
    }
}
#if 0
/* with the search taking the work pointer (see the note in the text), only the registers of i and the work pointer are swapped */
void func_00298CC0(s32 id, s32 a, s32 b, Vec4f *v, f32 f) {
    Slot *s = Snd_FindSlot(id);

    if (s == NULL) {
        s = Snd_FindSlot(-1);
    }
    s->id = id;
    s->f4 = a;
    s->f8 = b;
    s->fC = f;
    s->f10.x = v->x;
    s->f10.y = v->y;
    s->f10.z = v->z;
    s->f10.w = v->w;
    s->f20 = -1;
    s->f2C = -1;
    s->f30 = -1;
    s->f34 = -1;
    s->f38 = 100;
    func_002904C0(s);
}
#endif
/* differs: the search loops return to one join with a "bnez" on the found pointer, the original exits the loop with a "b" to it (20 of 55) */
#if 0
void func_00298CC0(s32 a0, s32 a1, s32 a2, f32 f12, f32 *a3) {
    u8 *t0;
    u8 *t1;
    s32 i;

    t0 = (u8 *)D_005AA604[0];
    t1 = t0 + 0x80;
    for (i = 0; i < 0x40; i++) {
        if (*(s32 *)t1 == a0) {
            break;
        }
        t1 += 0x40;
    }
    if (i == 0x40) {
        t1 = NULL;
    }
    if (t1 == NULL) {
        i = 0;
        t1 = t0 + 0x80;
        for (; i < 0x40; i++) {
            if (*(s32 *)t1 == -1) {
                break;
            }
            t1 += 0x40;
        }
        if (i == 0x40) {
            t1 = NULL;
        }
    }
    *(s32 *)t1 = a0;
    *(s32 *)(t1 + 4) = a1;
    *(s32 *)(t1 + 8) = a2;
    *(f32 *)(t1 + 0xC) = f12;
    *(f32 *)(t1 + 0x10) = a3[0];
    *(f32 *)(t1 + 0x14) = a3[1];
    *(f32 *)(t1 + 0x18) = a3[2];
    *(f32 *)(t1 + 0x1C) = a3[3];
    *(s32 *)(t1 + 0x20) = -1;
    *(s32 *)(t1 + 0x2C) = -1;
    *(s32 *)(t1 + 0x30) = -1;
    *(s32 *)(t1 + 0x34) = -1;
    *(s32 *)(t1 + 0x38) = 100;
    func_002904C0((Slot *)t1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00298CC0);
void func_00298DA0(void) {
    s32 i;
    Slot *s = D_005AA604[0]->slot;

    for (i = 0; i < 64; i++, s++) {
        func_00290410(s);
        s->id = -1;
    }
}
void func_00298E00(s32 a) {
    D_005AA604[0]->f11D8 = a;
}
void func_00298E10(s32 a) {
    SndWork *w = D_005AA604[0];

    w->f11D4 = a;
    w->f11D8 = a;
}
void func_00298E30(Vec4f *v, s32 a) {
    SndWork *w = D_005AA604[0];

    w->f11C0.x = v->x;
    w->f11C0.y = v->y;
    w->f11C0.z = v->z;
    w->f11C0.w = v->w;
    w->f11D0 = a;
}
void StrSelect_ClearWork(void) {
    memset(D_005AA550, 0, 0xE30);
    StrMap_Clear();
    StrBg_Clear();
    func_002BFCF0();
}
void Flight_Exit(void) {
    s32 i;

    amTask_KillGroup(2, 0x20000, 0);
    for (i = 0; i < 10; i++) {
        if (D_005AA550[i] != NULL) {
            amCdFs_Close(D_005AA550[i], 0);
        }
        if (D_005AA550[i + 10] != NULL) {
            amCdFs_ReleaseCache(D_005AA550[i + 10]);
        }
    }
    for (i = 0; i < 7; i++) {
        if (D_005AA550[i + 37] != NULL) {
            func_0022D0E0(D_005AA550[i + 37], 1);
        }
    }
    if (D_005AA608[0] != NULL) {
        Character_Release(D_005AA608[0]);
    }
    func_002BFD90();
    memset(D_005AA550, 0, (u8 *)D_005AA604 - (u8 *)D_005AA550);
    D_005AA608[0] = NULL;
    StrMap_Free();
    StrBg_Stop();
    Help_Exit();
}
void Flight_Start(void) {
    D_005AA5A0[0] = amTask_Create(Flight_TaskMain, 0, 0x9000, 2, 0x20000, D_0046BB70);
}
void Flight_Load(void) {
    Vec4i v;
    SndWork *w;
    s32 k;

    v = D_00453DA0;
    func_0029D6C0(&v);
    w = D_005AA604[0];
    if (D_005AA608[0] != NULL) {
        Character_Release(D_005AA608[0]);
    }
    D_005AA608[0] = func_001CAAB0(Flight_MapIndex(w->f11E1), w->f11E2, w->f11E3, 3, 1);
    D_005AA568[0] = amCdFs_ReadFileId(D_00453C80[w->f11E1], 0, 1);
    func_002BFEE0(w->f11E1, w->f11E2, 1);
    Help_Load();
    D_005AA550[0] = amCdFs_ReadFileId(0x107E3, 0, 1);
    D_005AA554[0] = amCdFs_ReadFileId(0x107E4, 0, 1);
    k = D_005AA604[0]->f11E3;
    if (D_005AA604[0]->f11E2 >= 3) {
        k = 4;
    }
    D_005AA560[0] = amCdFs_ReadFileId(0xEDE, 0, 1);
    D_005AA564[0] = amCdFs_ReadFileId(D_00453980[D_005AA604[0]->f11E1][k], 0, 1);
    D_005AA558[0] = amCdFs_ReadFileId(D_005AA604[0]->f11E6 * 2 + 0xEE0, 0, 1);
    D_005AA55C[0] = amCdFs_ReadFileId(D_005AA604[0]->f11E6 * 2 + 0xEE1, 0, 1);
    StrMap_Load(D_005AA604[0]->f11E0);
    func_00291390(D_005AA604[0]->f11E0);
    D_005AA56C[0] = amCdFs_ReadFileId(0x107E1, 0, 1);
    D_005AA570[0] = amCdFs_ReadFileId(0x107E0, 0, 1);
    D_005AA574[0] = amCdFs_ReadFileId(0x107E2, 0, 1);
}
void StrSelect_Reset(s32 n) {
    Vec4f v;
    f32 f;

    memset(D_005AA550, 0, 0xE30);
    StrMap_Clear();
    StrBg_Clear();
    func_002BFCF0();
    func_001F0660();
    D_00511450[0] = n;
    D_005AA604[0] = (SndWork *)(D_004E6560 + n * 0x1210 + 0x80);
    v = D_00453D90;
    D_005AA680.x = 0.0f;
    D_005AA680.y = 0.0f;
    D_005AA680.z = func_00146E90(&v);
    D_005AA680.w = 0.0f;
    D_005AA690.x = 0.0f;
    D_005AA690.y = 0.0f;
    D_005AA690.z = 0.0f;
    D_005AA690.w = 1.0f;
    D_005AA664[0] = 0;
    f = func_0011F680(v.y, v.z);
    D_005AA670[0] = 0;
    D_005AA668[0] = -(s32)(32768.0f * f / 3.141592f);
    Scr_SetRecord(&D_005AA604[0]->f11C0, D_005AA604[0]->f11D0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00299390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_002995F0);
