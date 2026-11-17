#include "common.h"

#include "battle/character.h"

extern char D_00469380[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void amHeap_Free(void *);
extern void memset(void *, s32, s32);
extern void func_001D3E10(void *);
extern void func_001D3D10(void *, s32);
extern void func_001D2340(void *);
extern void func_001D2710(void *);
extern void func_0029D800(f32);
extern f32 func_0029D850(void);
extern void Acsr_DrawIfAny(s32 *);
extern void func_001D2580(void *);
extern void func_001D0C00(s32 *);
extern void func_001D25B0(void *);
extern void CharCloth_Release(void *);
extern void CharAcsr_Release(s32 *);
extern void CharAcsr_Init(s32 *, s32, SecpSlot *);
extern void func_001D2750(void *, s32, SecpOwner *);
extern s32 func_001D0F80(s32 *);
extern s32 func_001D2B30(void *);
void CharParts_ReleaseWork(void *p);
void func_001D3FF0(void *p, s32 a);
s32 func_001D4160(void *p);
void func_001D4210(Secp *s);

INCLUDE_ASM("asm/nonmatchings/battle/char_parts", func_001D3E10);
void CharParts_ReleaseWork(void *p) {
    if (p != 0) {
        amHeap_Free(p);
    }
}
extern s32 amMotion_FindBone(void *, void *);
// GIVEN UP (round 5 chr2): the logic matches; the registers are one step off (the original keeps the part in s4, the arg in s3, the bone in s2
// and needs six saved registers; ours uses five). Tried: declaration orders (both directions), pointer loop variables s1/s5.
#if 0
void func_001D3FF0(void *p, s32 a) {
    u8 *s4;
    u8 *s3;
    u8 *s2;
    u8 *e;
    u8 *q;
    u8 *prev;
    u8 *s1;
    u8 *s5;
    s32 cnt;
    s32 v;
    s32 i;

    s4 = (u8 *)p;
    s3 = (u8 *)a;
    if (s4 == 0 || s3 == 0) {
        return;
    }
    s2 = *(u8 **)(s4 + 0xC);
    v = amMotion_FindBone(*(void **)(s3 + 4), s2);
    if (v < 0) {
        return;
    }
    e = *(u8 **)(*(u8 **)(s3 + 4) + 0x14) + v * 80;
    cnt = *(s16 *)(s2 + 0x1C);
    if (cnt == 0) {
        q = e;
        do {
            q = *(u8 **)(q + 0x38);
            cnt++;
        } while (q != 0);
    }
    *(s32 *)(s4 + 8) = cnt;
    *(u8 **)s4 = s3;
    *(u8 **)(s4 + 0xC) = s2;
    q = *(u8 **)(s4 + 4);
    prev = 0;
    for (i = 0; i < cnt && e != 0; i++) {
        *(u8 **)(q + 0x128) = e;
        *(u8 **)(q + 0x120) = prev;
        if (prev != 0) {
            *(u8 **)(prev + 0x124) = q;
        }
        e = *(u8 **)(e + 0x38);
        prev = q;
        q += 0x130;
    }
    s1 = s2 + 0x70;
    s5 = s4;
    for (i = 0; i < *(s16 *)(s2 + 0x1E); i++) {
        *(s16 *)(s5 + 0x90) = amMotion_FindBone(*(void **)(s3 + 4), s1);
        s1 += 0x20;
        s5 += 2;
    }
    func_001D3E10(s4);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_parts", func_001D3FF0);
s32 func_001D4160(void *p) {
    return 1;
}
void *CharParts_Create(s32 data) {
    s32 *p;
    if (data == 0) {
        return 0;
    }
    p = amHeap_Alloc(0x13A0, 1, D_00469380, 176);
    memset(p, 0, 0x13A0);
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
            Acsr_DrawIfAny(s->acsr[i]);
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
void CharParts_Release(Secp *s) {
    s32 i;
    if (s != 0) {
        for (i = 0; i < s->numMant; i++) {
            CharCloth_Release(s->mant[i]);
        }
        for (i = 0; i < s->numAcsr; i++) {
            CharAcsr_Release(s->acsr[i]);
        }
        for (i = 0; i < s->numParts; i++) {
            CharParts_ReleaseWork(s->parts[i]);
        }
        amHeap_Free(s);
    }
}
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
            CharAcsr_Init(s->acsr[i], a, (SecpSlot *)((s32)s->owner->data->slot + i * 0x20));
        }
        for (i = 0; i < s->numMant; i++) {
            func_001D2750(s->mant[i], a, owner);
        }
        s->unk40 = 1;
        s->unk3C = 0;
    }
}
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
