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
} SndWork;

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

extern s32 D_00470328;
extern void *D_005AA550[];
extern Ctl *D_005AA574[];
extern Ctl *D_005AA59C[];
extern void *D_005AA5A0[];
extern SndWork *D_005AA604[];
extern void *D_005AA608[];
extern s32 D_005AA640[];
extern s32 D_005AA644[];
extern char D_0046BB70[];

extern void func_00143B50(s32, s32);
extern void func_00143870(Msg3 *);
extern void func_002980F0(Proc *);
extern void func_002984A0(void);
extern void func_001F07D0(void);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void func_0012D900(s32);
extern void func_0028EB40(Proc *, s32, void (*)(void), s32);
extern void func_001F0830();
extern s32 func_002908D0(s32);
extern s32 func_00290AE0(s32);
extern void func_00290410(Slot *);
extern void func_00290390(s32, s32);
extern void func_002904C0(Slot *);
extern void func_001258F8(void *, s32, s32);
extern void func_0029A8E0(void);
extern void func_00290320(void);
extern void func_002BFCF0(void);
extern void func_00145180(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0025C9D0(void *);
extern void func_0022D0E0(void *, s32);
extern void func_001CA8A0(void *);
extern void func_002BFD90(void);
extern void func_0029A8F0(void);
extern void func_00291380(void);
extern void func_002B5EF0(void);
extern void func_00298770(Proc *);
extern void *func_00144FC0(void (*)(Proc *), s32, s32, s32, s32, char *);

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

    if (D_00470328 == 0) {
        func_00143B50(10, 1);
        m.a = 1;
        m.b = D_005AA59C[0]->f44;
        m.c = D_005AA59C[0]->f50;
        func_00143870(&m);
        fp = func_002980F0;
        if (fp == NULL) {
            fp = NULL;
        }
        o->f1C = fp;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_002984A0);
void func_00298770(Proc *o) {
    if (D_005AA574[0]->f4 == 3) {
        func_001F07D0();
        func_00144B70(-1);
        func_00144650(0);
        func_0012D900(-1);
        func_0028EB40(o, 10, func_002984A0, 0);
    }
}
void func_002987E0(s32 n) {
    switch (n) {
    case 0:
        func_001F0830(9);
        D_005AA640[0] = 9;
        break;
    case 1:
        func_001F0830(0xB);
        D_005AA640[0] = 0xB;
        break;
    case 2:
        func_001F0830(0xC);
        D_005AA640[0] = 0xC;
        break;
    case 3:
        func_001F0830(6);
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
#if 0
/* the original reloads D_005AA604 after the stores, this keeps it in a register */
void func_00298910(s32 n) {
    SndWork *w = D_005AA604[0];
    Slot *s;
    s32 i;

    if (n != w->f11E0) {
        D_005AA644[0] |= 1;
        w->f11E0 = n;
        s = D_005AA604[0]->slot;
        for (i = 0; i < 64; i++, s++) {
            func_00290410(s);
            s->id = -1;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00298910);
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
void func_00298AB0(s32 id, s32 a) {
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
#if 0
/* the two inline searches get other registers (i, the slot and the work pointer) */
void func_00298B70(s32 id, s32 nid) {
    Slot *s;

    if (Snd_FindSlot(nid) == NULL) {
        s = Snd_FindSlot(id);
        if (s != NULL) {
            func_00290390(id, nid);
            s->id = nid;
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
void func_00298E60(void) {
    func_001258F8(D_005AA550, 0, 0xE30);
    func_0029A8E0();
    func_00290320();
    func_002BFCF0();
}
void func_00298EA0(void) {
    s32 i;

    func_00145180(2, 0x20000, 0);
    for (i = 0; i < 10; i++) {
        if (D_005AA550[i] != NULL) {
            func_0025C800(D_005AA550[i], 0);
        }
        if (D_005AA550[i + 10] != NULL) {
            func_0025C9D0(D_005AA550[i + 10]);
        }
    }
    for (i = 0; i < 7; i++) {
        if (D_005AA550[i + 37] != NULL) {
            func_0022D0E0(D_005AA550[i + 37], 1);
        }
    }
    if (D_005AA608[0] != NULL) {
        func_001CA8A0(D_005AA608[0]);
    }
    func_002BFD90();
    func_001258F8(D_005AA550, 0, (u8 *)D_005AA604 - (u8 *)D_005AA550);
    D_005AA608[0] = NULL;
    func_0029A8F0();
    func_00291380();
    func_002B5EF0();
}
void func_00298FC0(void) {
    D_005AA5A0[0] = func_00144FC0(func_00298770, 0, 0x9000, 2, 0x20000, D_0046BB70);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00299000);
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00299240);
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_00299390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_297C60", func_002995F0);
