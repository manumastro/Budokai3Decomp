#include "common.h"

#include "battle/character.h"

extern char D_00469380[];
extern void *func_0013AAB0(s32 size, s32 flag, char *file, s32 line);
extern void func_0013AC90(void *);
extern void func_001258F8(void *, s32, s32);
extern void func_001D3E10(void *);
extern void func_001D3D10(void *, s32);
extern void func_001D2340(void *);
extern void func_001D2710(void *);
extern void func_0029D800(f32);
extern f32 func_0029D850(void);
extern void func_001D0B90(s32 *);
extern void func_001D2580(void *);
extern void func_001D0C00(s32 *);
extern void func_001D25B0(void *);
extern void func_001D2720(void *);
extern void func_001D0E40(s32 *);
extern void func_001D0EA0(s32 *, s32, SecpSlot *);
extern void func_001D2750(void *, s32, SecpOwner *);
extern s32 func_001D0F80(s32 *);
extern s32 func_001D2B30(void *);
void func_001D3FC0(void *p);
void func_001D3FF0(void *p, s32 a);
s32 func_001D4160(void *p);
void func_001D4210(Secp *s);

INCLUDE_ASM("asm/nonmatchings/battle/char_parts", func_001D3E10);
void func_001D3FC0(void *p) {
    if (p != 0) {
        func_0013AC90(p);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_parts", func_001D3FF0);
s32 func_001D4160(void *p) {
    return 1;
}
void *func_001D4170(s32 data) {
    s32 *p;
    if (data == 0) {
        return 0;
    }
    p = func_0013AAB0(0x13A0, 1, D_00469380, 176);
    func_001258F8(p, 0, 0x13A0);
    p[1] = (s32)(p + 0x28);
    p[3] = data;
    return p;
}
void func_001D41F0(Secp *s) {
    if (s != 0) {
        s->unk41 = 1;
    }
}
static inline void Secp_Prepare(Secp *s) {
    s32 i;
    s32 j;
    if (s != 0) {
        for (i = 0; i < s->numParts; i++) {
            func_001D3E10(s->parts[i]);
        }
        for (j = 0; j < s->numMant; j++) {
            func_001D2710(s->mant[j]);
        }
    }
}

static inline void Secp_Step(Secp *s, s32 m) {
    s32 i;
    for (i = 0; i < s->numParts; i++) {
        func_001D3D10(s->parts[i], m);
    }
    for (i = 0; i < s->numMant; i++) {
        func_001D2340(s->mant[i]);
    }
}

void func_001D4210(Secp *s) {
    f32 rate;
    s32 n;
    if (s == 0) {
        return;
    }
    rate = func_0029D850();
    if (rate <= 0.0f) {
        return;
    }
    func_0029D800(3.0f * rate);
    Secp_Prepare(s);
    n = 15;
    Secp_Step(s, 0);
    do {
        Secp_Step(s, 1);
    } while (--n != 0);
    func_0029D800(rate);
}
void func_001D43F0(Secp *s) {
    s32 i;
    if (s != 0) {
        if (s->unk41 != 0) {
            s->unk41 = 0;
            func_001D4210(s);
            return;
        }
        for (i = 0; i < s->numParts; i++) {
            func_001D3D10(s->parts[i], 0);
        }
        for (i = 0; i < s->numMant; i++) {
            func_001D2340(s->mant[i]);
        }
    }
}
void func_001D44C0(Secp *s) {
    s32 i;
    if (s != 0) {
        for (i = 0; i < s->numAcsr; i++) {
            func_001D0B90(s->acsr[i]);
        }
        for (i = 0; i < s->numMant; i++) {
            func_001D2580(s->mant[i]);
        }
    }
}
void func_001D4570(Secp *s) {
    s32 i;
    if (s != 0) {
        for (i = 0; i < s->numAcsr; i++) {
            func_001D0C00(s->acsr[i]);
        }
        for (i = 0; i < s->numMant; i++) {
            func_001D25B0(s->mant[i]);
        }
    }
}
void func_001D4620(Secp *s) {
    s32 i;
    if (s != 0) {
        for (i = 0; i < s->numMant; i++) {
            func_001D2720(s->mant[i]);
        }
        for (i = 0; i < s->numAcsr; i++) {
            func_001D0E40(s->acsr[i]);
        }
        for (i = 0; i < s->numParts; i++) {
            func_001D3FC0(s->parts[i]);
        }
        func_0013AC90(s);
    }
}
#if 0
/* Does not match yet: 2 of 79 instructions differ. */
void func_001D4710(Secp *s, s32 a, SecpOwner *owner) {
    s32 i;
    if (s != 0) {
        s->unk30 = a;
        s->owner = owner;
        s->unk41 = 1;
        for (i = 0; i < s->numParts; i++) {
            func_001D3FF0(s->parts[i], a);
        }
        for (i = 0; i < s->numAcsr; i++) {
            func_001D0EA0(s->acsr[i], a, (SecpSlot *)(s->owner->data->slot[0].unk00 + i * 0x20));
        }
        for (i = 0; i < s->numMant; i++) {
            func_001D2750(s->mant[i], a, owner);
        }
        s->unk40 = 1;
        s->unk3C = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_parts", func_001D4710);
s32 func_001D4850(Secp *s) {
    s32 i;
    if (s == 0) {
        return 1;
    }
    for (i = 0; i < s->numParts; i++) {
        if (func_001D4160(s->parts[i]) == 0) {
            return 0;
        }
    }
    for (i = 0; i < s->numAcsr; i++) {
        if (func_001D0F80(s->acsr[i]) == 0) {
            return 0;
        }
    }
    for (i = 0; i < s->numMant; i++) {
        if (func_001D2B30(s->mant[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
