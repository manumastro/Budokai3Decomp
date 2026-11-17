#include "common.h"

#include "battle/battle.h"
#include "battle/character.h"

typedef struct SecpArg {
    /* 0x00 */ Fighter *fighter;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s16 id;
} SecpArg;

extern s32 func_001AAEA0(void *, s32);
extern s16 func_001AA9D0(s32);
extern s16 func_001E8830(Fighter *, s32);
extern s16 func_001E89B0(Fighter *);
extern s16 func_001E89F0(Fighter *);
extern s16 func_001E8A30(Fighter *);
extern s16 func_001E8AF0(Fighter *);
extern s32 func_001E8740(Fighter *);

extern char D_00469390[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
extern void *CharParts_Create(s32);
extern s32 *CharAcsr_Load(s32);
extern void *func_001D2B40(s32);

Secp *CharSecp_Create(SecpData *data) {
    Secp *s;
    s32 i;
    if (data == 0) {
        return 0;
    }
    s = amHeap_Alloc(sizeof(Secp), 1, D_00469390, 134);
    memset(s, 0, sizeof(Secp));
    s->data = data;
    s->numParts = data->numParts;
    s->numAcsr = data->numAcsr;
    s->numMant = data->numMant;
    s->unk40 = 0;
    s->unk3C = 0;
    for (i = 0; i < data->numParts; i++) {
        s->parts[i] = CharParts_Create(data->parts[i]);
    }
    for (i = 0; i < data->numAcsr; i++) {
        s->acsr[i] = CharAcsr_Load(data->acsr[i]);
        if (s->acsr[i] != 0 && s->acsr[i][11] != 0) {
            s->unk3C = s->acsr[i][11];
        }
    }
    for (i = 0; i < data->numMant; i++) {
        s->mant[i] = func_001D2B40(data->mant[i]);
    }
    return s;
}
INCLUDE_ASM("asm/nonmatchings/battle/char_secp", func_001D4AF0);
s32 func_001D4FD0(SecpArg *p) {
    Fighter *f = p->fighter;
    BattleWork *bw = gBattle;
    s32 r;
    f32 rate;
    s32 i;
    s32 best;
    s32 n;
    s32 v;
    if (f->unk13A4 > -1) {
        r = (s16)func_001AAEA0(f->unk1360, 15);
    } else {
        r = func_001E8740(f);
    }
    f->unk1ACE = 0;
    if (f->unk1AD6) {
        return 0;
    }
    rate = f->unk17E4 / f->unk17E8;
    if (bw->fighter[0] == f) {
        rate *= 0.5f;
    }
    f->unk1AD8 += bw->unk88F0 * (2.5f * (1.0f + rate));
    if (f->unk1AD8 > 100.0f) {
        f->unk1AD8 -= 100.0f;
    }
    if (r) {
        n = (s32)f->unk1AD8;
        best = 1;
        n -= 2;
        for (i = 0; i < 4; i++) {
            v = (n + i + 101) % 101;
            if (best < v) {
                best = v;
            }
        }
        f->unk1ACE = best;
        f->unk1ADC += best;
        f->unk1AD8 = 0.0f;
        return 1;
    }
    return 0;
}
s32 func_001D5160(SecpArg *p) {
    Fighter *f = p->fighter;
    if (f->unk13A4 > -1) {
        f->unk1ACE = func_001AAEA0(f->unk1360, p->id);
        if (f->unk1ACE) {
            return 1;
        }
    } else {
        f->unk1ACE = func_001E8830(f, p->id);
        if (f->unk1ACE) {
            return 1;
        }
    }
    return 0;
}
s32 func_001D51F0(SecpArg *p) {
    Fighter *f = p->fighter;
    if (f->unk13A4 > -1) {
        f->unk1ACE = func_001AA9D0(f->unk13A4);
    } else {
        f->unk1ACE = func_001E89B0(f);
    }
    return 0;
}
s32 func_001D5250(SecpArg *p) {
    Fighter *f = p->fighter;
    if (f->unk13A4 > -1) {
        f->unk1ACE = func_001AA9D0(f->unk13A4);
    } else {
        f->unk1ACE = func_001E89F0(f);
    }
    return 0;
}
s32 func_001D52B0(SecpArg *p) {
    Fighter *f = p->fighter;
    if (f->unk13A4 > -1) {
        f->unk1ACE = func_001AAEA0(f->unk1360, p->id);
        if (f->unk1ACE) {
            return 1;
        }
    } else {
        f->unk1ACE = func_001E8A30(f);
        if (f->unk1ACE) {
            return 1;
        }
    }
    return 0;
}
s32 func_001D5330(SecpArg *p) {
    Fighter *f = p->fighter;
    s16 r;
    if (f->unk13A4 > -1) {
        r = func_001AAEA0(f->unk1360, 15);
        if (r == 0) {
            return 0;
        }
        f->unk1ACE = r == *(s32 *)&p->id ? 1 : -1;
        return 1;
    }
    f->unk1ACE = func_001E8AF0(f);
    return f->unk1ACE != 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/char_secp", func_001D53D0);
INCLUDE_ASM("asm/nonmatchings/battle/char_secp", func_001D54A0);
INCLUDE_ASM("asm/nonmatchings/battle/char_secp", func_001D5900);
