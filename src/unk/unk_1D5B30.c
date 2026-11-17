#include "common.h"

/* FIGHTER BEGIN */
typedef struct Fighter {
    char pad0[0x6];
    s8 f6;
    char pad7[0x29];
    s32 f30;
    f32 f34;
    f32 f38;
    s32 f3C;
    char pad40[0x500];
    void * f540;
    char pad544[0x4];
    s32 f548;
    char pad54C[0x1C];
    s32 f568;
    char pad56C[0xD4];
    s32 f640;
    s32 f644;
    s32 f648;
    char pad64C[0x20];
    s8 f66C;
    char pad66D[0x45C];
    s8 fAC9;
    char padACA[0x3];
    s8 fACD;
    char padACE[0xA2];
    s32 fB70;
    void * fB74;
    char padB78[0x10];
    void *fB88;
    void *fB8C;
    char padB90[0xC];
    s32 fB9C;
    char padBA0[0x4];
    s32 fBA4;
    s32 fBA8;
    char padBAC[0xAC];
    f32 fC58;
    char padC5C[0x40];
    s32 fC9C;
    char padCA0[0xC];
    s16 fCAC;
    s16 fCAE;
    char padCB0[0x2];
    u16 fCB2;
    s16 fCB4;
    s16 fCB6;
    f32 fCB8;
    char padCBC[0x694];
    s32 f1350;
    struct Fighter *f1354;
    struct Fighter *f1358;
    char pad135C[0x48];
    s16 f13A4;
    char pad13A6[0x126];
    s32 f14CC;
    char pad14D0[0x28C];
    s32 f175C;
    char pad1760[0x20];
    f32 f1780;
    f32 f1784;
    f32 f1788;
    char pad178C[0x18];
    s32 f17A4;
    s32 f17A8;
    s32 f17AC;
    s32 f17B0;
    s32 f17B4;
    s32 f17B8;
    char pad17BC[0x14];
    f32 f17D0;
    f32 f17D4;
    char pad17D8[0x8];
    s32 f17E0;
    f32 f17E4;
    char pad17E8[0x4];
    s32 f17EC;
    char pad17F0[0x4];
    s32 f17F4;
    char pad17F8[0x47];
    s8 f183F;
    s32 f1840;
    char pad1844[0x4];
    f32 f1848;
    s32 f184C;
    char pad1850[0xC];
    s32 f185C;
    s32 f1860;
    s32 f1864;
    char pad1868[0x4];
    s32 f186C;
    char pad1870[0x38];
    s32 f18A8;
    char pad18AC[0x14];
    s32 f18C0;
    char pad18C4[0x18];
    s32 f18DC;
    s32 f18E0;
    char pad18E4[0x80];
    u8 f1964;
    u8 f1965;
    s16 f1966[0x40];
    u8 f19E6;
    u8 f19E7;
    char pad19E8[0x58];
    f32 f1A40;
    char pad1A44[0x4];
    s32 f1A48;
    char pad1A4C[0xC];
    s16 f1A58;
    char pad1A5A[0x16];
    s32 f1A70;
    s32 f1A74;
    s32 f1A78;
    s32 f1A7C;
    s32 f1A80;
    char pad1A84[0xC];
    s32 f1A90;
    s32 f1A94;
    char pad1A98[0x8];
    s32 f1AA0;
    s32 f1AA4;
    s32 f1AA8;
    s32 f1AAC;
    s32 f1AB0;
    s32 f1AB4;
    s16 f1AB8;
    char pad1ABA[0xE];
    void *f1AC8;
    char pad1ACC[0x2];
    s16 f1ACE;
    s16 f1AD0;
    s16 f1AD2;
    s16 f1AD4;
    s16 f1AD6;
    s32 f1AD8;
    s32 f1ADC;
    char pad1AE0[0x210];
    s32 f1CF0;
    s32 f1CF4;
    void *f1CF8;
    s32 f1CFC;
    char pad1D00[0x2C3];
    s8 f1FC3;
    char pad1FC4[0x4];
    s8 f1FC8;
    char pad1FC9[0x2];
    s8 f1FCB;
    char pad1FCC[0x1A];
    s16 f1FE6;
    s16 f1FE8;
    char pad1FEA[0x2];
    s16 f1FEC;
    s16 f1FEE;
    s16 f1FF0;
    char pad1FF2[0x6];
    s8 f1FF8;
    s8 f1FF9;
    char pad1FFA[0x5];
    u8 f1FFF;
    u8 f2000;
    s8 f2001;
    s8 f2002;
    s8 f2003;
    s8 f2004;
    char pad2005[0x8];
    s8 f200D;
    char pad200E[0x1];
    s8 f200F;
    s8 f2010;
    s8 f2011;
    s8 f2012;
    s8 f2013;
    char pad2014[0x1];
    s8 f2015;
    s8 f2016;
} Fighter;
/* FIGHTER END */

/* The global work block D_00470570 as this file reads it. */
typedef struct Slot {
    s32 a;
    s32 b;
} Slot;

typedef struct Game {
    char pad0[0x268];
    Slot f268[5];
    char pad290[0x330];
    s32 f5C0;
    char pad5C4[0x21E];
    s16 f7E2;
    char pad7E4[0x80F4];
    s32 f88D8;
    char pad88DC[0x10];
    s32 f88EC;
    f32 f88F0;
    char pad88F4[0x4];
    s32 f88F8;
    char pad88FC[0x20];
    s32 f891C;
    char pad8920[0x8];
    s32 f8928;
    char pad892C[0x18];
    s16 f8944;
    char pad8946[0x4];
    s16 f894A;
    char pad894C[0x2B];
    s8 f8977;
    char pad8978[0x6];
    s16 f897E;
    char pad8980[0x128];
    s32 f8AA8;
    char pad8AAC[0x1];
    s8 f8AAD;
    char pad8AAE[0x4];
    s8 f8AB2;
    s8 f8AB3;
    char pad8AB4[0xEC3];
    s8 f9977;
} Game;

extern Game *D_00470570;

extern void func_001A3610(s32);
extern void func_001E6F70(void *, ...);
extern void func_00233E50(void *);
extern void func_00236110(void);
extern void func_002361D0(void);
extern void func_002361E0(void);
extern void func_002361F0(void);
extern void func_00236500(void);
extern void func_00236640(void);
extern void func_002360F0(void);
extern void func_001C7590(void *, s32);
extern void func_00125740(void *, void *, s32);
extern void amTask_KillGroup(s32, s32, s32);
extern s32 D_004705D4;
extern void func_001E9B00(void *, s32, s32, void *, f32, f32);
extern s32 func_002359F0(void *);
extern s32 func_00235B60(void *);
extern s32 func_00235BE0(void *);
extern s32 func_00144430(void *);
extern void func_00143E70(s32, s32, s32);
extern void func_00144650(s32);
extern void func_00144B70(s32);
extern void *D_004693A0[];
extern void func_001E7BE0(void *);
extern void func_00219390(void *);
extern void func_00218440(s32, void *);
extern void memset(void *, s32, s32);
extern f32 D_004E0614[];
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001D6CD0(void *);
extern char D_004695B8[];
extern s32 D_004693C0[];
extern void func_002356E0(void);
extern s32 func_002CC450(Fighter *);
extern void func_00235480(Fighter *);
void func_001E73C0(Fighter *c);
extern void func_00234C20(void);
extern void func_00234C90(void);
extern s32 func_00234D50(Fighter *c);
extern s32 func_00234EA0(Fighter *c);
extern s32 func_001E8290(void *);
extern void func_001C81D0(s32, s32);
extern void func_002378A0(s32);
extern void func_001E2290(Fighter *c);
extern s32 func_001E1D60(Fighter *c);
extern s32 func_00233D50(Fighter *c, void *p);
extern s32 func_00235A90(Fighter *c);
extern void func_00226030(s32, void *);
extern void func_00243DE0(s32, void *);
extern void func_001E5040(Fighter *c);
extern void func_001C75D0(Fighter *c, s32 a);
extern void func_001ABCE0(void *c);
extern u8 D_004E0660[];
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
extern s32 func_001DFA90(Fighter *c, s32 idx);
extern s32 func_002350A0(Fighter *c);
extern s32 D_00469478[];
extern void func_001E11E0(s32 a, void *b);
extern void func_001DFC80(Fighter *c, s32 a, f32 v);
extern void func_001D7CC0(Fighter *c, s32 a);
extern char D_004694D0[];
extern char D_004694E0[];
extern void func_001D7290(Fighter *c);
extern u32 func_0012EAE0(s32 a);
extern char D_00447450[];
extern s32 func_001DF8F0(s32 a, s32 b);
extern void func_00243DE0(s32 a, void *b);
extern void func_001E7070(char *p, s32 a);
extern s32 func_00233B20(Fighter *c, void *a, s32 v);
extern s32 func_00233850(Fighter *c, void *a);
extern void func_001F9BB0(s32 a, s32 b);
extern void func_001E7F00(void *p);
extern void func_001EA300(void);
extern void func_002376F0(s32, void *);
extern s32 func_002CC120(Fighter *c);
extern s32 func_00236020(Fighter *c);
extern void func_001D80A0(Fighter *c, s32 a);
extern s32 func_002357C0(Fighter *c);
extern void func_001D6170(Fighter *c);
extern void func_001D5C40(Fighter *c);
extern void func_001E2DE0(Fighter *c);

INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D5B30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D5C40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6470);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6640);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6770);
#if 0
void func_001D6B90(Fighter *c) {
    f32 *q;
    s32 st[4];
    s32 v;
    f32 f;

    q = (f32 *)((char *)c + 0x30);
    v = D_00469478[c->f3C];
    *(f32 *)&st[0] = 0.85f * (1.0f - c->f34 / c->f38);
    st[1] = 0x3000;
    st[2] = v;
    st[3] = v;
    func_001E11E0(c->f30, st);
    if (D_00470570->f88EC == 0) {
        f = q[1] + D_00470570->f88F0;
        q[1] = f;
        if (f < q[2]) {
            return;
        }
        amTask_Kill(c);
    }
}
#endif
// differs: 22 of 53 instructions differ with the row pointer (the first attempt was 0xC8 against 0xE0 bytes); the original keeps the object in s1 across the call
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6B90);
void func_001D6C70(Fighter *c) {
    s32 *p;

    if (D_00470570->f88EC == 0) {
        p = (s32 *)((char *)c + 0x30);
        ((void (*)(void *))D_004693A0[p[1]])(p);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6CD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D6E20);
void func_001D7280(Fighter *c) {
    func_001A3610(c->f30);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7450);
extern s8 D_00447440[];

#if 0
void func_001D79F0(Fighter *c) {
    s32 i;
    char *p;
    s8 *q;

    p = (char *)c->f1CF8 + 0xD4;
    for (i = 0; i < 8; i++) {
        *((char *)c + 0x1D0C + i) = *(s16 *)((char *)c->f1CF4 + 0x12);
        q = (s8 *)((char *)c + 0x1D0C + i);
        if (*(s8 *)(p + 6) == 8) {
            *q = 0;
        }
        if (*q >= D_00447440[*(s16 *)(p + 2) * 96 + 4]) {
            *q = 0;
        }
        p += 20;
    }
}
#endif
// differs: the original keeps the object pointer in a0 and the loop counter in t2 (c is copied to t1 here; 33 of 35 differ); declaration orders and a base pointer tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D79F0);
#if 0
void func_001D7A70(Fighter *c) {
    char *p;
    s32 x;
    s32 y;

    p = (char *)c->f1CF8;
    x = *(s16 *)(p + 0xD6);
    y = *(s16 *)(p + 0xD8);
    *(s8 *)((char *)c + 0x1D04) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0xEA);
    y = *(s16 *)(p + 0xEC);
    *(s8 *)((char *)c + 0x1D05) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0xFE);
    y = *(s16 *)(p + 0x100);
    *(s8 *)((char *)c + 0x1D06) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0x112);
    y = *(s16 *)(p + 0x114);
    *(s8 *)((char *)c + 0x1D07) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0x126);
    y = *(s16 *)(p + 0x128);
    *(s8 *)((char *)c + 0x1D08) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0x13A);
    y = *(s16 *)(p + 0x13C);
    *(s8 *)((char *)c + 0x1D09) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0x14E);
    y = *(s16 *)(p + 0x150);
    *(s8 *)((char *)c + 0x1D0A) = *(s16 *)(D_00447450 + x * 96 + y * 8);
    x = *(s16 *)(p + 0x162);
    y = *(s16 *)(p + 0x164);
    *(s8 *)((char *)c + 0x1D0B) = *(s16 *)(D_00447450 + x * 96 + y * 8);
}
#endif
// differs: the two loads of each pair land in the other registers (a3 and t0 swapped, eight times); the table math is right
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7A70);
s32 func_001D7BC0(Fighter *c) {
    if (c->f1FF8 == -1) {
        return 0;
    }
    if (c->f2010 == 0 && c->fACD <= 0) {
        return 0;
    }
    switch (c->fCAC) {
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x21:
    case 0x22:
    case 0x29:
    case 0x2A:
    case 0x2B:
        return 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7CC0);
f32 func_001D7DF0(void) {
    return 3000.0f;
}
#if 0
s32 func_001D7E10(Fighter *c) {
    s32 v = c->fB9C;
    if (v - 0xE < 2 || v == 0x11) {
        return 1;
    }
    return 0;
}
#endif
// differs: the original tests the range with sltiu into $at and lays out the returns differently; closest was 2 of 14 differing
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7E10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D7E50);
s32 func_001D7FB0(Fighter *c, s32 a1, s32 a2, u16 a3) {
    s32 v;

    v = (D_00470570 != NULL) ? (D_00470570->f8AA8 & 4) : 0;
    if (v != 0) {
        return 0;
    }
    if (c->f1FF8 != 2) {
        return 0;
    }
    if (c->fCAC == 0x12) {
        return 0;
    }
    if (c->f2013 != 0) {
        return 0;
    }
    if (a3 & 0x40) {
        return 0;
    }
    if (a2 != 0 && a2 != 5) {
        return 0;
    }
    if (func_001DFE60(c, 10, 300.0f) != 0) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D80A0);
void func_001D8320(Fighter *c) {
    if (D_00470570->f8944 != 0) {
        return;
    }
    if (c->f1AB8 <= 0) {
        return;
    }
    if (c->f2013 == 3) {
        c->f18A8 = 0;
    }
    if ((c->fCB2 & 3) == 0) {
        return;
    }
    c->fCB6 = 2;
    c->fCB4 = 1;
    c->f1864 = 1;
    func_001E5040(c);
    c->fB70 = c->f1AB8;
    if (c->f1FF9 != 0) {
        c->fB70 += 0x100;
    }
    func_001C75D0(c, 15);
    c->f1AB8 = -1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D83E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D8710);
#if 0
void *func_001D89E0(Fighter *c, s32 a1) {
    s8 *p;
    s32 i;
    s32 m1;

    p = (s8 *)c->f1CF8;
    i = 0;
    m1 = -1;
    do {
        if (p[0x64] == m1) {
            return NULL;
        }
        if (p[0x64] == c->f1354->fB9C) {
            if (a1 == m1 || p[0x65] == a1) {
                return p + 0x64;
            }
            return NULL;
        }
        i++;
        p += 4;
    } while (i < 12);
    return NULL;
}
#endif
// differs: same size, but the original keeps the element pointer in v0 and the counter in t1 (28 of 32 differ); three local orders and a result variable tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D89E0);
void func_001D8A50(Fighter *c) {
    if (c->f1AC8 != NULL) {
        amTask_Kill(c->f1AC8);
        c->f1AC8 = NULL;
    }
    c->f1AD0 = 0;
}
void func_001D8A90(Fighter *c, s32 a1, s32 a2) {
    char *p;

    if (c->f1AC8 != NULL) {
        amTask_Kill(c->f1AC8);
        c->f1AC8 = NULL;
    }
    c->f1AD0 = 0;
    func_001ABCE0((char *)c + 0x1360);
    c->f1ACE = 0;
    c->f1AD8 = 0;
    c->f1ADC = 0;
    c->f1AD0 = 1;
    c->f1AD6 = 0;
    c->f1AC8 = amTask_Create((void (*)(void *))func_001D6C70, NULL, 0x5080, 0x20, 0x40001000, D_004694D0);
    p = (char *)c->f1AC8;
    *(Fighter **)(p + 0x30) = c;
    *(s32 *)(p + 0x34) = a1;
    *(s32 *)(p + 0x38) = a2;
    *(s32 *)(p + 0x3C) = 0;
}
void func_001D8B50(Fighter *c) {
    Game *g = D_00470570;
    s32 t;
    s8 *p;

    if (g->f88F8 == 4) {
        if (0 < g->f88D8) {
            t = 0;
            p = (s8 *)g;
            do {
                if (p[0x2828] != -1) {
                    p[0x2828] = 2;
                }
                t++;
                p += 0x2020;
            } while (t < g->f88D8);
        }
    }
    c->f183F = -1;
    c->f1840 = 0;
}
void func_001D8BD0(Fighter *c, s32 a1, s32 a2, f32 f) {
    s32 t;
    char *p;

    if (c->f13A4 > -1) {
        switch (c->f1350) {
        case 0:
            t = 0x40000180;
            break;
        case 1:
            t = 0x40000280;
            break;
        case 2:
            t = 0x40000480;
            break;
        case 3:
            t = 0x40000880;
            break;
        }
        p = amTask_Create((void (*)(void *))func_001D7290, (void *)func_001D7280, 0x5380, 0x20, t, D_004694E0);
        *(s32 *)(p + 0x30) = c->f13A4;
        *(s32 *)(p + 0x38) = 0;
        *(f32 *)(p + 0x3C) = f;
        *(s8 *)(p + 0x34) = a1;
        *(s8 *)(p + 0x35) = a2;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D8CD0);
extern char D_004694F0[];
extern void func_001D6B90(Fighter *c);
void func_001D8FE0(Fighter *c, s32 a1) {
    s32 t;
    char *p;

    switch (c->f1350) {
    case 0:
        t = 0x4000C000;
        break;
    case 1:
        t = 0x40014000;
        break;
    case 2:
        t = 0x40024000;
        break;
    case 3:
        t = 0x40044000;
        break;
    }
    amTask_KillGroup(0x20, t, 1);
    p = amTask_Create((void (*)(void *))func_001D6B90, NULL, 0x5380, 0x20, t, D_004694F0);
    if (p != NULL) {
        *(Fighter **)(p + 0x30) = c;
        *(s32 *)(p + 0x34) = 0;
        *(s32 *)(p + 0x38) = 0x41700000;
        *(s32 *)(p + 0x3C) = a1;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D90D0);
#if 0
s32 func_001D9220(Fighter *c) {
    s32 v;

    if (D_00470570 != NULL) {
        v = D_00470570->f8AA8 & 2;
    } else {
        v = 0;
    }
    if (v != 0) {
        return 0;
    }
    if (c->f1FCB <= 0) {
        return !c->f2010;
    }
    return 0;
}
#endif
// differs: the 0x8 bytes difference is a label padded at a different place (the alignment nop after an if join); four forms tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9220);
void func_001D9280(Fighter *c) {
    c->f1860 = 0xBF800000;
}
void func_001D9290(Fighter *c) {
    *(f32 *)&c->f1860 = (f32)(s32)c->fC58;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D92B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9480);
#if 0
void func_001D96F0(void) {
    Game *g = D_00470570;
    s32 i;
    Fighter *t;
    Fighter *e;
    s16 a;
    s16 b;

    if (0 < g->f88D8) {
        i = 0;
        e = (Fighter *)((char *)g + 0x830);
        do {
            t = e->f1358;
            if (t != NULL) {
                a = e->f13A4;
                b = t->f13A4;
                e->f13A4 = b;
                t->f13A4 = a;
                e->f1358 = NULL;
                e->f2015 = 0;
            }
            i++;
            e = (Fighter *)((char *)e + 0x2020);
        } while (i < g->f88D8);
    }
}
#endif
// differs: the entry loop's counter and pointer come out in other registers (14 to 17 of 28 differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D96F0);
void func_001D9760(Fighter *c, Fighter *o) {
    Fighter *t;
    s16 a;
    s16 b;

    if (o != NULL && c->f1358 != o) {
        a = c->f13A4;
        b = o->f13A4;
        c->f13A4 = b;
        o->f13A4 = a;
        c->f1358 = o;
        c->f2015 = 1;
    } else {
        t = c->f1358;
        if (t != NULL) {
            a = c->f13A4;
            b = t->f13A4;
            c->f13A4 = b;
            t->f13A4 = a;
            c->f1358 = NULL;
            c->f2015 = 0;
        }
    }
}
void func_001D97D0(Fighter *c) {
    f32 f;

    if (c->f2013 != 3) {
        return;
    }
    if (c->f1A40 > 0.0f) {
        f = c->f17D4;
    } else {
        f = c->f17D0;
    }
    if (f < 1000.0f) {
        if (c->f1A40 > 0.0f) {
            f = c->f17D4;
        } else {
            f = c->f17D0;
        }
        func_001DFE60(c, 4, -(1000.0f - f));
    }
    func_001DFC80(c, 0, -500.0f);
    func_001D7CC0(c, 0);
}
#if 0
void func_001D98A0(Fighter *c, s32 a1, s32 a2) {
    Game *g = D_00470570;
    s32 p;
    s16 *q;

    if (c->f2015 != 0) {
        p = c->f1358->f1350;
    } else {
        p = c->f1350;
    }
    q = (s16 *)((char *)g + 0x897E + p * 72 + a1 * 2);
    if (*q < a2) {
        *q = a2;
    }
}
#endif
// differs: the table address adds its offset in another order (1 of 22 instructions differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D98A0);
#if 0
void func_001D9900(Fighter *c, s32 a1, s32 a2) {
    Game *g = D_00470570;
    s32 idx;
    s16 *q;

    if (c->f2015 != 0) {
        idx = c->f1358->f1350;
    } else {
        idx = c->f1350;
    }
    q = (s16 *)((char *)g + idx * 72 + a1 * 2 + 0x897E);
    *q = *q + (s16)a2;
}
#endif
// differs: the 0x897E table offset is kept in a register in the original (0x54 against 0x60 bytes)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9900);
void func_001D9960(Fighter *c, s32 idx, s16 val) {
    Game *g = D_00470570;
    s32 row;
    s16 *p;

    if (c->f2015 != 0) {
        row = c->f1358->f1350;
    } else {
        row = c->f1350;
    }
    p = (s16 *)((char *)g + row * 72 + 0x897E);
    if (idx >= 0 && idx < 0x23) {
        p[idx] = val;
    }
}
#if 0
s16 func_001D99C0(Fighter *c, s32 a1) {
    Game *g = D_00470570;
    s32 p;

    if (c->f2015 != 0) {
        p = c->f1358->f1350;
    } else {
        p = c->f1350;
    }
    return *(s16 *)((char *)(g + 0) + (p * 72 + 0x897E) + a1 * 2);
}
#endif
// differs: the table read's offset is added in another order (1 of 17 instructions differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D99C0);
#if 0
void func_001D9A10(Fighter *c) {
    s16 *q;
    s32 p;

    if (c->f2015 != 0) {
        p = c->f1358->f1350;
    } else {
        p = c->f1350;
    }
    q = (s16 *)((char *)D_00470570 + 0x897E + p * 72);
    memset(q, 0, 0x48);
    q[0x17] = 1;
    q[0x1D] = 1;
    q[0x1E] = 1;
    q[0x1F] = 1;
    q[0x20] = 1;
    if (c->f1FEC != 0) {
        q[0x21] = 1;
    }
}
#endif
// differs: the global's load and the saved context pointer come out in other registers (13 of 37 differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9A10);
void func_001D9AB0(Fighter *c, s32 a1) {
    s32 k;
    s32 t;
    s32 v;
    s32 w;

    t = (s8)c->f19E7 + 1;
    k = t & 0x3F;
    k = (t < 0) ? ((k != 0) ? k - 0x40 : k) : k;
    if ((s8)c->f19E6 == k) {
        v = (s8)c->f19E6 + 1;
        w = v & 0x3F;
        w = (v < 0) ? ((w != 0) ? w - 0x40 : w) : w;
        c->f19E6 = w;
    }
    if (a1 == -1) {
        a1 = c->fB70;
    }
    c->f1966[(s8)c->f19E7] = a1;
    c->f19E7 = k;
}
void func_001D9B20(Fighter *c) {
    c->f19E6 = 0;
    c->f19E7 = 0;
}
#if 0
s32 func_001D9B30(Fighter *c) {
    s32 i;
    s32 key;
    s32 t;
    s32 h;
    s32 v;
    s32 r;
    s32 w;

    r = 0;
    h = (s8)c->f1964;
    t = (s8)c->f1965;
    i = h;
    if (h != t) {
        key = c->f17F4;
        do {
            if (*(s32 *)((char *)c + 0x18E4 + i * 4) == key) {
                r = 1;
                break;
            }
            v = i + 1;
            i = v & 0x1F;
            if (v < 0 && i != 0) {
                i -= 0x20;
            }
        } while (i != t);
    }
    v = t + 1;
    t = v & 0x1F;
    if (v < 0 && t != 0) {
        t -= 0x20;
    }
    v = (s8)h;
    if (v == t) {
        w = v + 1;
        h = w & 0x1F;
        if (w < 0 && h != 0) {
            h -= 0x20;
        }
        c->f1964 = h;
    }
    v = (s8)c->f1965;
    ((s32 *)((char *)c + 0x18E4))[v] = c->f17F4;
    c->f1965 = t;
    return r;
}
#endif
// differs: 1 instruction differs: the tail wrap's delay slot takes the head read on one path only (the original repeats the read after the join)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9B30);
void func_001D9BF0(Fighter *c) {
    c->f1964 = 0;
    c->f1965 = 0;
}
void func_001D9C00(Fighter *c) {
    s32 *p = &c->f1AA0;

    if (c->f1AA4 > 0) {
        func_00144430(p);
        p[1] = 0;
    }
}
void func_001D9C40(Fighter *c, void *p, s32 n) {
    void *q = NULL;

    if (n >= 1000) {
        q = &c->f1AA0;
        n -= 1000;
    }
    func_001E9B00(p, n, 0, q, 0.0f, 1.0f);
}
void func_001D9C80(Fighter *c) {
    c->f1AA0 = -1;
    c->f1AA4 = -1;
    c->f1AA8 = -1;
    c->f1AAC = -1;
}
void func_001D9CA0(Fighter *c, s32 a1) {
    s32 *p;

    if (a1 != 0) {
        func_00219390((char *)D_00470570 + ((c->f1350 + 3) << 5) + 0x5C4);
    }
    p = &c->f1A70;
    if (*p >= 0) {
        func_00144430(p);
        *p = -1;
    }
    func_001E73C0((Fighter *)((char *)c + 0x650));
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001D9EB0);
void func_001DA150(Fighter *c) {
    c->f1A70 = -1;
    c->f1A74 = -1;
    c->f1A78 = -1;
    c->f1A7C = -1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DA170);
typedef struct Ent50 {
    char pad0[0x190];
    s32 f190;
    s32 f194;
    s16 f198;
    s16 f19A;
    char pad19C[2];
    s8 f19E;
    s8 f19F;
} Ent50;

void *func_001DA430(Fighter *c) {
    s32 idx = -1;
    s32 i = 0;
    Ent50 *p = (Ent50 *)c;
    Ent50 *e;

    do {
        if (p->f198 == 0 && p->f190 == 0) {
            idx = i;
            break;
        }
        i++;
        p = (Ent50 *)((char *)p + 0x50);
    } while (i < 16);
    if (idx < 0) {
        return NULL;
    }
    e = (Ent50 *)((char *)c + idx * 0x50);
    e->f198 = 1;
    e->f194 = 0;
    e->f19A = 0;
    e->f19E = c->f1350;
    e->f19F = c->f1350;
    return (char *)e + 0x150;
}
#if 0
void func_001DA4C0(void) {
    Game *g;
    s32 j;
    s32 i;
    char *base;
    char *v;

    g = D_00470570;
    amTask_KillGroup(0x20, 0x40000020, 1);
    for (j = 0; j < g->f88D8; j++) {
        base = (char *)g + j * 0x2020;
        v = base + 0x830;
        for (i = 0; i < 16; i += 8) {
            *(s16 *)(v + 0x198) = 0;
            *(s32 *)(v + 0x190) = 0;
            *(s16 *)(v + 0x1E8) = 0;
            *(s32 *)(v + 0x1E0) = 0;
            *(s16 *)(v + 0x238) = 0;
            *(s32 *)(v + 0x230) = 0;
            *(s16 *)(v + 0x288) = 0;
            *(s32 *)(v + 0x280) = 0;
            *(s16 *)(v + 0x2D8) = 0;
            *(s32 *)(v + 0x2D0) = 0;
            *(s16 *)(v + 0x328) = 0;
            *(s32 *)(v + 0x320) = 0;
            *(s16 *)(v + 0x378) = 0;
            *(s32 *)(v + 0x370) = 0;
            *(s16 *)(v + 0x3C8) = 0;
            *(s32 *)(v + 0x3C0) = 0;
            v += 0x280;
        }
        *(s32 *)(base + 0x830 + 0x1AE0) = 0;
        memset(base + 0x830 + 0x1AF0, 0, 0x200);
    }
    func_001EA300();
}
#endif
// differs: 0xF0 against 0x100 bytes: the original keeps the block base in a1 and the loop index in a0 (several local orders tried, the closest 2 of 62 differed only in the order of the clears)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DA4C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DA5C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DA930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DB320);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DB660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DB790);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DB7C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DBB30);
#if 0
s32 func_001DBFC0(Fighter *c) {
    f32 x;
    s32 r;

    if (c->f2003 <= 0) {
        return 0;
    }
    if (c->f2004 == 0) {
        return 0;
    }
    x = 360.0f * ((f32)c->f1354->f17AC / 65536.0f);
    if (x <= 90.0f || x >= 270.0f) {
        r = 0;
    } else {
        r = 1;
    }
    if (r != 0) {
        return 1;
    }
    if (c->fAC9 > 0) {
        return 0;
    }
    return 1;
}
#endif
// differs: 0xB8 against 0xC0 bytes: the original ends with explicit returns that the compiler merges into one boolean; the early return blocks sit at other addresses
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DBFC0);
#if 0
s32 func_001DC080(Fighter *c) {
    Fighter *p;
    char *e;
    char *base;
    s16 *q;
    f32 f;
    s32 i;

    p = c->f1354;
    base = (char *)p + 0x1360;
    e = base + p->f175C * 16;
    q = *(s16 **)(e + 0x204);
    if (q[1] != 5) {
        return 0;
    }
    switch (q[0]) {
    case 1:
        f = c->f1780;
        break;
    case 2:
        f = c->f1784;
        break;
    default:
        f = c->f1788;
        break;
    }
    for (i = 0; i < 3; i++) {
        if (f > *(f32 *)((char *)c + 0x1780 + i * 4)) {
            return 0;
        }
    }
    return f < 10.0f;
}
#endif
// differs: the table base is kept in a1 and the struct pointer in v1 in the original (register order of the two reads differs)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DC080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DC150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DC3E0);
void func_001DCB60(Fighter *c) {
    c->f2000 = 0;
    c->f18DC = 0;
    c->f18E0 = 0;
}
#if 0
void func_001DCB70(Fighter *c) {
    f32 f;
    u32 r;

    if ((s8)c->f2000 != 0) {
        if (c->fB88 != NULL) {
            if (*(s16 *)((char *)c->fB8C + 0x26) >= 0) {
                if (*(s32 *)(*(s32 *)(*(s32 *)c->fB88) + 0x20) >= 2) {
                    f = *(f32 *)&c->f18DC + *(f32 *)&c->fC9C * D_00470570->f88F0;
                    *(f32 *)&c->f18DC = f;
                    if (f > 10.0f) {
                        r = func_0012EAE0(0x20) % 300;
                        f = (f32)r;
                        *(f32 *)&c->f18DC = -f;
                    }
                    c->f18E0 = *(f32 *)&c->f18DC > 0.0f;
                }
            }
        }
    }
}
#endif
// differs: 0x100 against 0x110 bytes: the guards return through a shared 'b' block, which the nested ifs do not reproduce
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DCB70);
void func_001DCC80(Fighter *c) {
    c->f1FFF = 0;
    c->f18C0 = 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DCC90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DD680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DD880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DDA30);
s32 func_001DDD30(Fighter *c) {
    return c->fBA4;
}
s32 func_001DDD40(Fighter *c) {
    return c->fB9C;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DDD50);
void func_001DE490(Fighter *c) {
    c->f1FEE = c->f1FEC;
    c->f1FEC = 0;
    c->f1FF0 = 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DE4B0);
void func_001DF170(Fighter *c) {
    Game *g;

    g = D_00470570;
    func_001E2290(c);
    if (g->f8AAD == 0) {
        if (g->f88F8 == 4) {
            func_001D6170(c);
            func_001D5C40(c);
            func_001E2DE0(c);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DF1F0);
s32 func_001DF420(Fighter *c, s32 idx, s32 flags) {
    u8 *e;

    e = (u8 *)D_004E0660 + idx * 40;
    if (func_001DFA90(c, idx) <= 0) {
        return 0;
    }
    if ((e[0xB] & 2) == 0) {
        flags |= 3;
    }
    if (func_001DFE60(c, flags, (f32)(e[0xF] * 100)) == 0) {
        return 0;
    }
    return (e[0xE] & ((1 << c->fBA4) & 0xFF)) != 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DF500);
void func_001DF830(Fighter *c, s32 a1) {
    s32 k;
    s32 pair[4];

    k = *(u8 *)((char *)D_004E0660 + 40 * a1 + 0x15);
    switch (k) {
    case 6:
        c->f1FE6 = a1;
        if (c->f1FC3 < 4) {
            c->f1FC3 = c->f1FC3 + 1;
        }
        break;
    case 0xB:
        c->f1FE8 = a1;
        if (c->f1FC8 < 4) {
            c->f1FC8 = c->f1FC8 + 1;
        }
        break;
    }
    pair[0] = c->f1350;
    pair[1] = a1;
    func_00226030(0x31, pair);
    func_001D80A0(c, 2);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DF8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DFA90);
#if 0
void func_001DFBF0(Fighter *c) {
    f32 x = c->f17E4;

    x = (x > 1000.0f) ? 1000.0f : x;
    x = (x < 0.0f) ? 0.0f : x;
    if (x <= 300.0f) {
        c->f17E4 = x;
        c->f17EC = 0;
    } else if (x <= 600.0f) {
        c->f17EC = 1;
    } else {
        c->f17EC = 2;
    }
}
#endif
// differs: the clamp's branch labels fall on 8-byte boundaries that the C does not reproduce (24 of 38 differ); if-form and ?:-form tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DFBF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DFC80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001DFE60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E0200);
void func_001E09E0(Fighter *c) {
    s32 q1[4];
    s32 q2[4];

    c->f186C = 0;
    q1[1] = 0xFFFF;
    q1[0] = 0;
    q1[2] = 0;
    q1[3] = 0;
    func_00125740((char *)c + 0x1870, q1, 16);
    q2[1] = 0xFFFF;
    q2[0] = 0;
    q2[2] = 0;
    q2[3] = 0;
    func_00125740((char *)c + 0x1880, q2, 16);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E0A50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E11E0);
void func_001E1300(Fighter *c) {
    Game *g = D_00470570;
    s32 i;
    Fighter *e;

    if (g->f8AB2 != 0) {
        if (c == NULL) {
            g->f8AB2 = 0;
            g->f8AB3 = -1;
            g->f8AAD = 0;
            if (0 < g->f88D8) {
                i = 0;
                e = (Fighter *)g;
                do {
                    e->f14CC = 0x3F800000;
                    i++;
                    e = (Fighter *)((char *)e + 0x2020);
                } while (i < g->f88D8);
            }
            return;
        }
        if (g->f8AB3 == c->f1354->f1350) {
            g->f8AB2 = 0;
            g->f8AB3 = -1;
            g->f8AAD = 0;
            c->f1354->fC9C = 0x3F800000;
        }
    }
}
void func_001E13F0(Fighter *c, s32 a1) {
    Game *g = D_00470570;

    if (g->f8AB2 <= 0) {
        g->f8AAD = 1;
        g->f8AB2 = 1;
        g->f8AB3 = c->f1354->f1350;
        g->f891C = 0;
        c->f1354->fC9C = 0;
        g->f8928 = a1;
    }
}
void func_001E1460(Fighter *c, s32 flag) {
    s32 buf[12];
    s32 pair[4];

    c->f2010 = 0;
    pair[0] = c->f1350;
    pair[1] = c->f2010;
    func_00226030(0x35, pair);
    c->f17E0 = 0xBF800000;
    if (flag != 0) {
        if (c->f1AB4 != 0) {
            amTask_Kill(c->f1AB4);
            c->f1AB4 = 0;
        }
    }
    if (D_00470570->f8944 == 0) {
        buf[4] = c->f1350;
        buf[5] = 2;
        func_00243DE0(2, buf);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E1510);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E1690);
s32 func_001E1850(Fighter *c, s32 a1) {
    s32 *p;
    s32 key = c->f1CFC;

    p = D_004693C0;
    if (a1 < 0) {
        a1 = c->fBA4;
    }
    while (p[0] != -1) {
        if (key == p[0] && a1 >= p[1]) {
            return p[2];
        }
        p += 3;
    }
    return 0;
}
#if 0
void func_001E18B0(Fighter *c, s32 idx) {
    s32 a[4];
    s32 b[8];
    f32 f;
    s32 v;

    if (*(s32 *)((char *)c + 0x1DB8 + idx * 4) == 0) {
        return;
    }
    func_001E7070((char *)c + 0x650, idx);
    a[0] = c->f1350;
    a[1] = idx;
    v = *(s16 *)*(char **)((char *)c + 0xBB0);
    if (v != 0 && func_001DF8F0(0, 0x1B) > 0) {
        f = 0.0f;
    } else {
        f = (f32)(1000 * *(s8 *)((char *)c->f1CF8 + c->fBA4 * 20 + 0xDD));
    }
    a[2] = (s32)f;
    func_00226030(8, a);
    b[4] = c->f1350;
    *(s16 *)((char *)b + 0x18) = c->fBA4;
    func_00243DE0(1, b);
}
#endif
// differs: frame 0x60 against 0x70 and the table address adds its offset in another order (11 of 61 differ with the block sizes tried)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E18B0);
s32 func_001E19B0(Fighter *c) {
    s32 a;
    s32 *p;
    s32 key;
    s32 v;

    a = c->fBA4;
    p = D_004693C0;
    key = c->f1CFC;
    if (a < 0) {
        a = c->fBA4;
    }
    while (p[0] != -1) {
        if (key == p[0] && a >= p[1]) {
            v = p[2];
            goto found;
        }
        p += 3;
    }
    v = 0;
found:
    if (v == 3) {
        return 0;
    }
    return 1;
}
void func_001E1A40(Fighter *c, s32 idx) {
    char buf[0x30];
    s32 arr[3];
    f32 f;
    s32 k;
    void *bp;

    if (((s32 *)((char *)c + 0x1DB8))[idx] != 0) {
        func_001E7070((char *)c + 0x650, idx);
        arr[0] = c->f1350;
        arr[1] = idx;
        if (*(s16 *)*(void **)((char *)c + 0xBB0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
            f = 0.0f;
        } else {
            k = c->fBA4;
            bp = c->f1CF8;
            f = (f32)(((s8 *)((char *)bp + 0xDD))[k * 20] * 1000);
        }
        arr[2] = (s32)f;
        func_00226030(8, arr);
        *(s32 *)(buf + 0x10) = c->f1350;
        *(s16 *)(buf + 0x18) = (s16)c->fBA4;
        func_00243DE0(1, buf);
    }
}
s32 func_001E1B40(Fighter *c) {
    s32 a;
    s32 *p;
    s32 key;
    s32 v;

    a = c->fBA4;
    p = D_004693C0;
    key = c->f1CFC;
    if (a < 0) {
        a = c->fBA4;
    }
    while (p[0] != -1) {
        if (key == p[0] && a >= p[1]) {
            v = p[2];
            goto found;
        }
        p += 3;
    }
    v = 0;
found:
    if (v == 2) {
        return 0;
    }
    return !c->f2016;
}
void func_001E1BD0(Fighter *c, s32 a1, s32 idx) {
    char buf[0x30];
    s32 arr[3];
    f32 f;
    s32 k;
    void *bp;

    *(s32 *)((char *)c + 0x1A48) = a1;
    *(s32 *)((char *)c + 0x1A40) = 0x44E10000;
    *(s8 *)((char *)c + 0x200F) = 0;
    if (((s32 *)((char *)c + 0x1DB8))[idx] != 0) {
        func_001E7070((char *)c + 0x650, idx);
        arr[0] = c->f1350;
        arr[1] = idx;
        if (*(s16 *)*(void **)((char *)c + 0xBB0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
            f = 0.0f;
        } else {
            k = c->fBA4;
            bp = c->f1CF8;
            f = (f32)(((s8 *)((char *)bp + 0xDD))[k * 20] * 1000);
        }
        arr[2] = (s32)f;
        func_00226030(8, arr);
        *(s32 *)(buf + 0x10) = c->f1350;
        *(s16 *)(buf + 0x18) = (s16)c->fBA4;
        func_00243DE0(1, buf);
    }
}
s32 func_001E1CE0(Fighter *c) {
    s32 a;
    s32 *p;
    s32 key;
    s32 v;

    a = c->fBA4;
    p = D_004693C0;
    key = c->f1CFC;
    if (a < 0) {
        a = c->fBA4;
    }
    while (p[0] != -1) {
        if (key == p[0] && a >= p[1]) {
            v = p[2];
            goto found;
        }
        p += 3;
    }
    v = 0;
found:
    if (v == 1) {
        return 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E1D60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E1E80);
#if 0
void func_001E2070(Fighter *c) {
    s32 a;

    if (D_00470570->f8944 != 0) {
        return;
    }
    a = func_001E1D60(c);
    if (a == c->fBA4 || a == c->fBA8) {
        return;
    }
    if (c->f200F == 2) {
        c->f1A48 = -1;
        c->f200F = 0;
    }
    func_001E6F70((char *)c + 0x650);
}
#endif
// differs: the original copies the call result into a1 before its compares (move a1, v0; the C keeps it in v0); two local orders and the reversed compare tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2070);
void func_001E20F0(Fighter *c) {
    s32 n;
    char *p;
    s16 *q;
    s32 pair[4];

    n = c->fBA8;
    if (n == 0) {
        return;
    }
    p = (char *)c->f1CF8 + n * 20;
    q = (s16 *)(p + 0xD4);
    pair[0] = c->f1350;
    pair[1] = *q;
    func_00226030(0x31, pair);
    c->f1A58 = *q;
    func_001D80A0(c, 2);
    func_001E6F70((char *)c + 0x650, n);
}
void func_001E2180(Fighter *c) {
    func_001E6F70((char *)c + 0x650);
}
void func_001E2190(Fighter *c, s32 idx) {
    char buf[0x30];
    s32 arr[3];
    f32 f;
    s32 k;
    void *bp;

    if (((s32 *)((char *)c + 0x1DB8))[idx] != 0) {
        func_001E7070((char *)c + 0x650, idx);
        arr[0] = c->f1350;
        arr[1] = idx;
        if (*(s16 *)*(void **)((char *)c + 0xBB0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
            f = 0.0f;
        } else {
            k = c->fBA4;
            bp = c->f1CF8;
            f = (f32)(((s8 *)((char *)bp + 0xDD))[k * 20] * 1000);
        }
        arr[2] = (s32)f;
        func_00226030(8, arr);
        *(s32 *)(buf + 0x10) = c->f1350;
        *(s16 *)(buf + 0x18) = (s16)c->fBA4;
        func_00243DE0(1, buf);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2510);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2630);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E28F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2B00);
typedef struct PtrCount {
    void *p;
    s32 n;
} PtrCount;

extern void func_002470B0(s32, PtrCount);

void func_001E2C50(Fighter *c) {
    s32 *q;
    PtrCount arg;

    arg.p = c;
    arg.n = 7;
    func_002470B0(-1, arg);
    c->f1860 = 0xBF800000;
    q = (s32 *)((char *)c + 0x1AA0);
    if (c->f1AA4 > 0) {
        func_00144430(q);
        q[1] = 0;
    }
    c->f1CF0 = -1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2CC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E2DE0);
void func_001E3010(Fighter *c) {
    s32 buf[10];
    char *p;
    char *e;
    s32 i;
    s32 n;

    if (c->f1848 < 0.0f) {
        return;
    }
    if (c->f1848 > 0.0f) {
        buf[4] = c->f1350;
        buf[5] = c->f200D;
        buf[3] = 3;
        p = (char *)c->fB74;
        n = *(s32 *)(p + 0x28);
        e = *(char **)(p + 0x2C);
        for (i = 0; i < n; i++) {
            if (*(u16 *)e != 1) {
                e += 8;
            }
        }
        buf[7] = *(u16 *)(*(char **)(e + 4) + (*(s16 *)(e + 2) - 1) * 16);
        func_00218440(9, buf);
        func_001E9B00((void *)1, 0x21, 0, NULL, 0.0f, 1.0f);
    }
    c->f2001 = 1;
    c->f184C = 0x3F800000;
    c->f1848 = -1.0f;
}
void func_001E3100(Fighter *c) {
    s32 buf[12];

    c->f2001 = 0;
    if (c->f1848 < 0.0f) {
        c->f2002 = 0;
        return;
    }
    *(s32 *)&c->f1848 = 0xBF800000;
    buf[4] = c->f1350;
    buf[5] = c->f200D;
    buf[3] = 2;
    func_00218440(9, buf);
    func_00144430(&c->f1A80);
}
void func_001E3180(Fighter *c) {
    s32 buf[12];

    if (c->f1848 < 0.0f) {
        c->f1848 = c->fCB8;
        buf[4] = c->f1350;
        buf[5] = c->f200D;
        buf[3] = 1;
        func_00218440(9, buf);
        func_001E9B00((void *)1, 0x20, 0, &c->f1A80, 0.0f, 1.0f);
    }
}
void func_001E3200(Fighter *c) {
    if (c->f1A94 > 0) {
        func_00144430(&c->f1A90);
        c->f1A94 = 0;
    }
}
void func_001E3240(Fighter *c) {
    if (c->f1A94 <= 0) {
        func_001E9B00((void *)1, 0x52, 0, &c->f1A90, 0.0f, 1.0f);
    }
}
void func_001E3290(Fighter *c) {
    s32 *t;

    if (c->f1AB0 == 0) {
        t = amTask_Create(func_001D6CD0, 0, 0x5380, 0x20, 0x40000040, D_004695B8);
        if (t != 0) {
            c->f1AB0 = (s32)t;
            t[0xC] = (s32)c;
            t[0xD] = 0;
            t[0xE] = 0x41F00000;
            t[0xF] = 1;
            t[0x10] = 0x12;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3310);
void func_001E3430(Fighter *c) {
    func_001E7BE0((char *)c + 0x650);
    c->f184C = 0x3F800000;
}
void func_001E3460(Fighter *c) {
    s32 buf[10];

    func_001E7F00((char *)c + 0x650);
    c->f2001 = 0;
    if (c->f1848 < 0.0f) {
        c->f2002 = 0;
    } else {
        c->f1848 = -1.0f;
        buf[4] = c->f1350;
        buf[5] = c->f200D;
        buf[3] = 2;
        func_00218440(9, buf);
        func_00144430((char *)c + 0x1A80);
    }
    if (c->fCAC != 4) {
        if (c->f1AB0 != 0) {
            amTask_Kill(c->f1AB0);
            c->f1AB0 = 0;
            func_001F9BB0(c->f1350, 9);
        }
    }
    if (c->fCAC != 6 && c->fCAC != 0xB) {
        if (c->f1A94 > 0) {
            func_00144430((char *)c + 0x1A90);
            c->f1A94 = 0;
        }
    }
}
#if 0
void func_001E3550(Fighter *c) {
    if (func_001E8290((char *)c + 0x650) != 0) {
        if (D_00470570->f8944 == 0) {
            func_001C81D0(0, -1);
        }
    }
}
#endif
// differs: the original keeps the pointer in $s0 across the call (a frame), which the C does not reproduce
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E35A0);
void func_001E3900(Fighter *c) {
    c->fC9C = 0x3F800000;
    c->f1354->fC9C = 0x3F800000;
}
s32 func_001E3920(Fighter *c) {
    return c->f2012;
}
void func_001E3930(Fighter *c) {
    c->fC58 = (s32)c->fC58;
    c->fC9C = 0;
    c->f2012 = 1;
}
#if 0
void func_001E3950(Fighter *c) {
    f32 t;

    if (c->f2011 != 0) {
        t = (f32)c->f185C;
        c->f185C = (s32)(t - D_00470570->f88F0);
        if ((f32)c->f185C <= 0.0f) {
            c->f2011 = 0;
            c->f185C = 0;
            func_001C7590(c, 0x4000);
        }
    }
}
#endif
// differs: the float timer's int store and reload come out in another order (28 of 31 differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3950);
void func_001E39B0(Fighter *c) {
    c->f2011 = 0;
    c->f185C = 0;
    func_001C7590(c, 0x4000);
}
void func_001E39C0(Fighter *c) {
    c->f2011 = 1;
    c->f185C = 0x41F00000;
    c->f2012 = 0;
    c->f1354->f2012 = 0;
    func_001C75B0(c, 0x4000);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E39F0);
#if 0
void func_001E3AA0(Fighter *c) {
    u32 m;
    s32 t;

    if (*(s16 *)((char *)c + 0x1A32) < -1) {
        *(s16 *)((char *)c + 0x1A32) = *(s16 *)((char *)c->f1354 + 0x1A32);
        t = *(s16 *)((char *)c + 0x1A32);
        if (t >= 6) {
            *(s16 *)((char *)c + 0x1A32) = t - 6;
        }
        *(s32 *)((char *)c + 0xB70) = *(s16 *)((char *)c + 0x1A32) + 0xE4;
    } else if (*(s16 *)((char *)c + 0x1A32) < 0) {
        *(s16 *)((char *)c + 0x1A32) = *(s16 *)((char *)c->f1354 + 0x1A32);
        t = *(s16 *)((char *)c + 0x1A32);
        if (t >= 6) {
            *(s16 *)((char *)c + 0x1A32) = t - 6;
        }
        *(s32 *)((char *)c + 0xB70) = *(s16 *)((char *)c + 0x1A32) + 0xDE;
    } else {
        m = func_0012EAE0(0x20) % 3;
        *(s16 *)((char *)c + 0x1A32) = m + (func_0012EAE0(0x20) & 1) * 6;
        *(s32 *)((char *)c + 0xB70) = *(s16 *)((char *)c + 0x1A32) + 0xD2;
    }
    if (*(s16 *)((char *)c + 0x1A30) != 0) {
        *(s32 *)((char *)c + 0xB70) = *(s32 *)((char *)c + 0xB70) + 3;
    }
    *(s16 *)((char *)c + 0x1A30) = 1 - *(s16 *)((char *)c + 0x1A30);
}
#endif
// differs: 75 of 76 instructions: the original keeps the object in s0 and uses two saved registers (frame 0x30); the C saves a copy in s2 and an address in s0 (frame 0x40); two forms tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3AA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3BB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3C70);
s32 func_001E3D60(s32 a, f32 r) {
    f32 p;
    f32 h;

    p = ((f32)a / 65536.0f) * 360.0f;
    h = 0.5f * r;
    if (p > 180.0f - h && p < 180.0f + h) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3DD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E3EB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4440);
void func_001E4800(Fighter *c) {
    c->f17B0 = c->f17A4;
    c->f17B4 = c->f17A8;
    c->f17B8 = c->f17AC;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4820);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4CE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4DA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4E20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4F40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E4FA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5040);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5230);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E52B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E53B0);
#if 0
void func_001E5500(s32 idx, void *arg) {
    Game *g;
    Slot *e;
    Slot *base;
    s32 i;
    s32 n;

    g = D_00470570;
    base = g->f268;
    if (idx == -1) {
        i = 0;
        n = g->f88D8 * 2 + 1;
    } else {
        i = idx;
        n = idx + 1;
    }
    e = &base[i];
    for (; i < n; i++) {
        func_002376F0(e->a, arg);
        e++;
    }
}
#endif
// differs: 0x9C against 0xC0 bytes: the original joins the two branches before the loop's pointer setup (extra jumps to a shared block), not reproduced
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E55C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E57C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E57F0);
void func_001E5860(Fighter *c) {
}
void func_001E5870(void) {
    Slot *s = &D_00470570->f268[0];
    s32 i;

    for (i = 0; i < 5; i++) {
        func_002378A0(s->a);
        s->a = 0;
        s->b = 0;
        s++;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E58D0);
void func_001E5960(void) {
    amTask_KillGroup(0x20, 0x10000000, 1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E59F0);
s32 func_001E5AC0(Fighter *c) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5AD0);
void func_001E5C10(Fighter *c, s32 a1, s32 a2) {
    c->f568 = a1;
    c->f548 = a2;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E5C20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E62C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E66E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E6890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E6CE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E6E90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E6F70);
void func_001E7070(char *c, s32 a1) {
    char *q;
    char *t4;
    char *t0;

    q = *(char **)(c + 0x568);
    *(s32 *)(c + 0x554) = a1;
    *(s32 *)(c + 0x558) = a1;
    if (a1 < 0) {
        *(s32 *)(c + 0x52C) = 0;
        *(s8 *)(c + 0x66C) = 1;
        return;
    }
    t0 = *(char **)(q + 0x1CF8);
    if (*(u16 *)(q + 0x1DB4) & (1 << a1)) {
        t4 = q + a1 * 20 + 0x1D14;
    } else {
        t4 = t0 + a1 * 20 + 0xD4;
    }
    *(char **)(c + 0x560) = t4;
    *(s32 *)(c + 0x564) = *(s32 *)(t4 + 0x10);
    *(s32 *)(c + 0x54C) = *(s16 *)((char *)D_00447450 + *(s16 *)(t4 + 2) * 96 + *(s16 *)(t4 + 4) * 8);
    *(s32 *)(c + 0x550) = ((s8 *)(q + 0x1D0C))[a1];
    *(s32 *)(c + 0x55C) = *(s32 *)((char *)D_00447440 + *(s16 *)(t4 + 2) * 96);
    *(s32 *)(c + 0x2C0) = (a1 != 0) ? ((s32 *)(q + 0x1DFC))[a1 * 7] : 0;
    *(s32 *)(c + 0x2C4) = *(s32 *)(q + 0x1DFC);
    *(s32 *)(c + 0x2C8) = *(s32 *)((char *)D_00470570 + 0x824);
}
#if 0
void func_001E7180(Fighter *c) {
    Game *g;
    char *a3;
    s32 hi;
    s32 lo;
    s32 v;
    f32 sum;
    f32 lim;

    g = D_00470570;
    if (c->f66C != 0) {
        return;
    }
    a3 = (char *)c->f540;
    if (a3 == NULL) {
        return;
    }
    if (c->f640 < 0) {
        return;
    }
    if (g->f88EC == 0) {
        if (c->f648 == 0) {
            return;
        }
    }
    lo = c->f640 & 0xFFFF;
    hi = (c->f640 >> 16) - 1;
    sum = *(f32 *)&c->f644 + g->f88F0;
    v = *(s32 *)(*(char **)(*(s32 *)(a3 + hi * 4 + 0x2C) + 0x18) + lo * 16);
    lim = (f32)(v - 1);
    *(f32 *)&c->f644 = sum;
    if (sum < lim) {
        return;
    }
    if (c->f66C != 0) {
        return;
    }
    c->f640 = -1;
    c->f644 = 0;
    c->f648 = 0;
}
#endif
// differs: the f88EC test branches the other way (bnez/beqz), the hi/lo reads are scheduled differently, and the float add takes its operands in the other order (9 of 46 instructions differ)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E7180);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E7240);
void func_001E73C0(Fighter *c) {
    if (c->f66C == 0) {
        c->f640 = -1;
        c->f644 = 0;
        c->f648 = 0;
    }
}
#if 0
void func_001E73E0(Fighter *c, s32 a1, s32 a2) {
    s32 f530;
    void *t0;
    s32 r;
    s32 a;
    s32 lo;
    s32 v;
    void *p;

    f530 = *(s32 *)((char *)c + 0x530);
    if (*(s8 *)((char *)c + 0x66C) != 0) {
        return;
    }
    t0 = c->f540;
    *(s32 *)((char *)c + 0x640) = a1 | 0x10000;
    *(s32 *)((char *)c + 0x644) = 0;
    *(s32 *)((char *)c + 0x648) = a2;
    v = *(s32 *)((char *)c + 0x640);
    lo = v & 0xFFFF;
    a = (v >> 16) - 1;
    r = 0;
    if (a >= 0) {
        if (a < 16) {
            p = ((void **)((char *)t0 + 0x2C))[a];
            if (p != NULL) {
                if (lo >= 0) {
                    if (lo < *(s32 *)((char *)p + 0x14)) {
                        v = *(s32 *)((char *)*(void **)((char *)p + 0x18) + lo * 16 + 4);
                        r = (v > 0);
                    }
                }
            }
        }
    }
    if (r != 0) {
        func_001C9DB0(t0, f530, 1);
        return;
    }
    if (*(s8 *)((char *)c + 0x66C) == 0) {
        *(s32 *)((char *)c + 0x640) = -1;
        *(s32 *)((char *)c + 0x644) = 0;
        *(s32 *)((char *)c + 0x648) = 0;
    }
}
#endif
// differs: the early-return test and the stores match in shape; the original jumps to the epilogue where the C reuses the flag test (first branch target differs); nested and early-return layouts tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E73E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E74F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E7BE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E7F00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E80B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8290);
void func_001E8630(Fighter *c) {
    func_00125740((char *)c + 0x160, c, 0x160);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8640);
s32 func_001E8740(Fighter *c) {
    Game *g;
    s32 arr[7];
    s32 k;

    g = D_00470570;
    if (g->f8944 == 0) {
        goto ret0;
    }
    if (c->f1AD0 != 0) {
        goto go;
    }
ret0:
    return 0;
go:
    if (g->f7E2 == 3 && g->f8977 != 3) {
        return 0;
    }
    k = g->f894A;
    arr[0] = c->f1350 == k;
    arr[1] = c->f1AD2;
    arr[2] = c->f1AD4;
    arr[3] = (s32)*(f32 *)&c->f1AD8;
    arr[4] = (s32)*(f32 *)&c->f1ADC;
    arr[5] = c->f1354->f1AD4;
    arr[6] = (s32)*(f32 *)&c->f1354->f1ADC;
    return func_00233850(c, arr);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8830);
#if 0
s32 func_001E89B0(Fighter *c) {
    s32 r = 0;
    if (D_00470570->f8944 != 0 && c->f1AD0 == 0) {
        r = 0;
    }
    return r;
}
#endif
// differs: the original always returns 0 after two dead loads; the compiler drops them
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E89B0);
#if 0
s32 func_001E89F0(Fighter *c) {
    if (*(volatile s16 *)&D_00470570->f8944 != 0) {
        if (*(volatile s16 *)&c->f1AD0 != 0) {
            return 0;
        }
    }
    return 0;
}
#endif
// differs: the original branches to two shared returns (0x40 bytes against 0x38); volatile reads needed for the dead loads
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E89F0);
#if 0
s32 func_001E8A30(Fighter *c) {
    Game *g;
    s32 k;
    s32 m;
    s32 arr[4];

    g = D_00470570;
    if (g->f8944 == 0) {
        goto ret0;
    }
    if (c->f1AD0 != 0) {
        goto go;
    }
ret0:
    return 0;
go:
    if (g->f7E2 == 3 && g->f8977 != 3) {
        return 0;
    }
    arr[1] = c->f1AD2;
    arr[2] = c->f1354->f1ACE;
    m = 0xF;
    k = g->f894A;
    arr[3] = m;
    arr[0] = c->f1350 == k;
    return func_00233B20(c, arr, k) & 0xF;
}
#endif
// differs: same operands as the 180-byte neighbours: the original keeps the constant 0xF in v0 across the global load (the register of the field read differs, and the ret-0 blocks are 8 bytes shorter)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8A30);
s32 func_001E8AF0(Fighter *c) {
    Game *g;
    s32 pair[2];

    g = D_00470570;
    if (g->f8944 == 0) {
        goto ret0;
    }
    if (c->f1AD0 != 0) {
        goto go;
    }
ret0:
    return 0;
go:
    if (g->f7E2 == 3 && g->f8977 != 3) {
        return 0;
    }
    pair[0] = c->f1AD2;
    pair[1] = c->f1AD4;
    return func_00233D50(c, pair);
}
void func_001E8B80(void *p) {
    func_00233E50(p);
}
#if 0
s32 func_001E8B90(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    if (D_00470570->f7E2 != 3 || D_00470570->f9977 == 3) {
        func_00234C20();
    } else {
        return 0;
    }
}
#endif
// differs: the global field test is laid out as branches the C does not reproduce (0x6C-0x64 bytes against 0x80); five shapes tried
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8B90);
#if 0
s32 func_001E8C10(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    if (D_00470570->f7E2 == 3) {
        if (D_00470570->f9977 != 3) {
            return 0;
        }
    }
    func_00234C90();
}
#endif
// differs: same shape as func_001E8B90 (size 0x64 against 0x80)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8C10);
#if 0
s32 func_001E8C90(Fighter *c) {
    Game *g;

    if (c->f1FF8 < 2) {
        return 0;
    }
    g = D_00470570;
    if (g->f7E2 == 3) {
        if (g->f8977 != 3) {
            return 0;
        }
    }
    return func_00234D50(c);
}
#endif
// differs: 0x64 bytes against 0x80: the original lays the Game field test out with the call block after a second branch (layout tried with ifs, else, gotos)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8C90);
#if 0
s32 func_001E8D10(Fighter *c) {
    Game *g;

    if (c->f1FF8 < 2) {
        return 0;
    }
    g = D_00470570;
    if (g->f7E2 == 3) {
        if (g->f8977 != 3) {
            return 0;
        }
    }
    return func_00234EA0(c);
}
#endif
// differs: same shape as func_001E8C90 (0x64 bytes against 0x80)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8D10);
#if 0
s32 func_001E8D90(Fighter *c) {
    Game *g;
    s32 v;

    if (c->f1FF8 < 2) {
        return 0;
    }
    g = D_00470570;
    switch (g->f7E2) {
    case 4:
        v = func_002CC450(c);
        if (v & 0x40000) {
            return 1;
        }
        if (v & 0x80000) {
            if (c->f1354->fCAE == 0x27) {
                return 1;
            }
        }
        return 0;
    case 3:
        if (g->f8977 != 3) {
            return 0;
        }
        break;
    }
    return func_002350A0(c);
}
#endif
// differs: the state is read into a1 where the original uses a0, so the compares and the case order differ (both case orders tried)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8D90);
#if 0
s32 func_001E8E70(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    if (D_00470570->f7E2 == 4) {
        if (func_002CC450(c) == 0x20000) {
            return 1;
        }
    } else if (D_00470570->f7E2 == 3) {
        if (D_00470570->f9977 != 3) {
            return 0;
        }
    }
    func_00235480(c);
}
#endif
// differs: the case order of the two tests differs; the C is 0x98 against 0xB0 bytes
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8E70);
#if 0
s32 func_001E8F20(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    if (D_00470570->f7E2 == 4) {
        return 0;
    }
    if (D_00470570->f7E2 == 3) {
        if (D_00470570->f9977 != 3) {
            return 0;
        }
    }
    if (c->f2013 >= 2) {
        return 0;
    }
    func_002356E0();
}
#endif
// differs: the guard chain is laid out with other branch targets (0x94 against 0xA0 bytes)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E8F20);
s32 func_001E8FC0(Fighter *c) {
    Game *g;
    s32 v;

    if (c->f1FF8 < 2) {
        return 0x13;
    }
    g = D_00470570;
    v = (g != NULL) ? (g->f8AA8 & 0x2000) : 0;
    if (v != 0) {
        return 0x13;
    }
    if (g->f7E2 == 3 && g->f8977 != 3) {
        return 0x13;
    }
    return func_002357C0(c);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E9050);
s32 func_001E9190(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    return func_002359F0(c);
}
#if 0
s32 func_001E91D0(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    if (D_00470570->f7E2 == 4) {
        if (func_002CC450(c) & 0x100000) {
            return 0;
        }
    }
    return func_00235A90(c);
}
#endif
// differs: 0x78 bytes against 0x80: the original branches to the tail call with a 'b' from the not-taken path (if/else layout, as func_001E8C90)
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E91D0);
s32 func_001E9250(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    return func_00235B60(c);
}
s32 func_001E9290(Fighter *c) {
    if (c->f1FF8 < 2) {
        return 0;
    }
    return func_00235BE0(c);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E92D0);
s32 func_001E9400(Fighter *c) {
    Game *g;
    s32 v;

    g = D_00470570;
    if (*(s8 *)((char *)g + 0x2020 * c->f6 + 0x2828) < 2) {
        return -1;
    }
    switch (g->f7E2) {
    case 3:
        if (g->f8977 != 3) {
            return -2;
        }
        break;
    case 4:
        v = func_002CC120(c);
        if (v != -3) {
            return v;
        }
        break;
    }
    return func_00236020(c);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E94C0);
void func_001E9910(void) {
    func_002360F0();
}
void func_001E9920(void) {
    func_00236110();
}
void func_001E9930(void) {
    func_002361D0();
}
void func_001E9940(void) {
    func_002361E0();
}
void func_001E9950(void) {
    func_002361F0();
}
void func_001E9960(void) {
    func_00236500();
}
void func_001E9970(void) {
    func_00236640();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E9980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E9B00);
void func_001E9D10(void) {
    s32 i;

    for (i = 0; i < 7; i++) {
        func_00143E70(i, -1, 1);
    }
    func_00144650(-1);
    func_00144B70(-1);
}
void func_001E9D60(void) {
    D_004705D4 = 0;
}
void func_001E9D70(void) {
}
typedef struct Ent1D5 {
    char pad0[0x3C];
    f32 f3C;
    s32 f40;
    char buf44[0x80];
    s32 fC4;
    s32 fC8;
} Ent1D5;

void func_001E9D80(void) {
    Game *g = D_00470570;
    Ent1D5 *q;
    Ent1D5 *e;
    s32 i;
    s32 off = 0;

    g->f5C0 = 0x12000000;
    q = (Ent1D5 *)((char *)g + 0x290);
    for (i = 0; i < 4; i++) {
        q->f3C = D_004E0614[0];
        q->f40 = 0;
        e = (Ent1D5 *)((char *)D_00470570 + off + 0x290);
        memset(e->buf44, 0, 0x80);
        e->fC4 = 0;
        e->fC8 = 0;
        q = (Ent1D5 *)((char *)q + 0xCC);
        off += 0xCC;
    }
}
void func_001E9E20(void) {
}
void func_001E9E30(void) {
    Game *g = D_00470570;
    Ent1D5 *q;
    Ent1D5 *e;
    s32 i;
    s32 off = 0;

    g->f5C0 = 0x12000000;
    q = (Ent1D5 *)((char *)g + 0x290);
    for (i = 0; i < 4; i++) {
        q->f3C = D_004E0614[0];
        q->f40 = 0;
        e = (Ent1D5 *)((char *)D_00470570 + off + 0x290);
        memset(e->buf44, 0, 0x80);
        e->fC4 = 0;
        e->fC8 = 0;
        q = (Ent1D5 *)((char *)q + 0xCC);
        off += 0xCC;
    }
}
s32 func_001E9ED0(void) {
    return !D_004705D4;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1D5B30", func_001E9EE0);
