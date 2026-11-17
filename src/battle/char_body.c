#include "common.h"

#include "battle/character.h"

extern char D_00469040[];
extern u8 D_00449BA0[];
extern s32 D_0047075C;
extern s32 D_004B41F0[7];
extern void *func_0013AAB0(s32 size, s32 flag, char *file, s32 line);
extern void func_0013AC90(void *);
extern void func_001258F8(void *, s32, s32);
extern s32 func_0013DF20(void *, ...);
extern s32 func_0013BC70(void *, s32);
extern CharFile *func_0025C670(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0025C400(s32);
extern Secp *func_001D4970(s32);
extern void func_0029D1E0(void *, s32, void *, void *);
extern void *func_001CA3F0(s32, s32);
CharFile *func_001CA370(s32 heap, s32 a, s32 b, s32 c);
extern void func_0012C360(s32);
extern s32 func_001A50F0(s32, s32);
extern s32 func_0013DF40(s32, s32);
extern Model *func_0013BCF0(s32, s32, Model *);
extern void func_0013C070(Model *, s32, s32);
extern void func_001A5640(void *, Model *, s32);

typedef struct SizeQuery {
    s32 unk00[4];
    s32 count;
    s32 unk14[3];
} SizeQuery;

typedef struct SizeQuery2 {
    s32 unk00[4];
    s32 count;
    s32 unk14[7];
} SizeQuery2;

#define BODY_INDEX(ch, c, col) \
    (D_00447440[ch].costume[c].body != -1 ? D_00447440[ch].costume[c].body + (col) * D_00447440[ch].numBodyColors : -1)
#define FACE_INDEX(ch, c, col) \
    (D_00447440[ch].costume[c].face != -1 ? D_00447440[ch].costume[c].face + (col) * D_00447440[ch].numFaceColors : -1)

#if 0
/* Does not match yet: 35 of 168 instructions differ. */
CharBody *func_001C9AF0(s32 chara, s32 costume, s32 color, s32 key) {
    CharBodyEntry *e;
    CharBody *b;
    CharBody *p;
    s32 size0;
    s32 size;
    SizeQuery q0;
    SizeQuery2 q1;
    e = BODY_INDEX(chara, costume, color) >= 0 ? &D_00447440[chara].bodies[BODY_INDEX(chara, costume, color)] : 0;
    if (e == 0) {
        return 0;
    }
    for (p = e->list; p != 0; p = p->next) {
        if (p->key == key) {
            p->refs++;
            return p;
        }
    }
    q1.count = 0x80;
    q0.count = 0x80;
    size0 = (func_0013DF20(&q1) + 15) & ~15;
    size = ((func_0013BC70(&q0, 2) + 15) & ~15) + (size0 + 0x90);
    b = func_0013AAB0(size, 1, D_00469040, 175);
    func_001258F8(b, 0, size);
    b->unk48 = (u8 *)b + 0x90;
    b->model = (Model *)((u8 *)b + size0 + 0x90);
    b->entry = e;
    b->unk70 = 0;
    b->unk74 = 0;
    b->unk50 = D_00447440[chara].costume[costume].unk0;
    b->key = key;
    b->refs = 1;
    b->prev = 0;
    b->next = e->list;
    if (b->next != 0) {
        b->next->prev = b;
    }
    e->list = b;
    if (e->file != -1) {
        b->unk70 = b->unk6C = (s32)func_0025C670(e->file, 0, 1);
    }
    b->secp = func_001D4970(e->secp);
    if (b->secp != 0 && b->secp->unk3C != 0) {
        b->unk70 = b->secp->unk3C;
    }
    b->code = ((chara + 1) << 16) + 0x1000000 + ((costume + 1) << 12) + ((color + 1) << 8);
    return b;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_body", func_001C9AF0);
void func_001C9D90(void *o, void *a) {
    func_0029D1E0(o, 9, a, D_00449BA0);
}
#if 0
/* Does not match yet: 51 of 80 instructions differ. */
void func_001C9DB0(CharFace *face, CharBody *body, s32 toFace) {
    Model *sm;
    Model *dm;
    s16 *src;
    s16 *dst;
    s32 i;
    if (face == 0 || body == 0) {
        return;
    }
    if (toFace == 0) {
        sm = face->model;
        src = face->joint;
        dm = body->model;
        dst = body->joint;
    } else {
        sm = body->model;
        dm = face->model;
        src = body->joint;
        dst = face->joint;
    }
    {
        Joint *sj = sm->joints;
        Joint *dj = dm->joints;
        for (i = 0; i < 9; i++, src++, dst++) {
            if (*src >= 0 && *dst >= 0) {
                Joint *s = &sj[*src];
                Joint *d = &dj[*dst];
                d->m = s->m;
                d->v[0] = s->v[0];
                d->v[1] = s->v[1];
                d->v[2] = s->v[2];
                d->v[3] = s->v[3];
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_body", func_001C9DB0);
typedef struct BodyAnim {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ s8 unk6C;
    /* 0x6D */ s8 unk6D;
    /* 0x6E */ s8 unk6E;
    /* 0x6F */ s8 unk6F;
} BodyAnim;

void func_001C9EF0(BodyAnim *b, s32 x, s32 y) {
    if (b != 0) {
        x = (x == -1) ? b->unk6D : x;
        b->unk6C = b->unk6D;
        b->unk6E = b->unk6F;
        b->unk6D = x;
        b->unk6F = y;
    }
}
void func_001C9F30(CharFace *f) {
    if (f != 0) {
        if (--f->refs <= 0) {
            if (f->unk84 != 0) {
                func_0013AC90((void *)f->unk84);
            } else if (f->file != 0) {
                func_0025C800(f->file, 0);
            }
            if (f->prev != 0) {
                f->prev->next = f->next;
            }
            if (f->next != 0) {
                f->next->prev = f->prev;
            }
            if (f == f->entry->list) {
                f->entry->list = f->next;
            }
            func_0013AC90(f);
        }
    }
}
void func_001CA000(CharFace *f) {
    CharFile *file;
    if (f == 0 || f->unk98 != 0) {
        return;
    }
    file = f->file;
    if (file != 0) {
        f->file = 0;
        f->unk84 = file->data;
        func_0012C360(f->unk84);
        file->data = 0;
        func_0025C800(file, 0);
        f->unk88 = func_001A50F0(f->unk84, 0);
        func_0012C360(f->unk88);
        f->unk8C = func_001A50F0(f->unk84, 1);
        func_0012C360(f->unk8C);
    }
    if (f->unk88 != 0) {
        f->unk18 = func_0013DF40(f->unk88, f->unk18);
        f->model = func_0013BCF0(f->unk18, 0, f->model);
        func_0029D1E0(f, 9, f->model, D_00449BA0);
        if (f->unk8C != 0) {
            func_0013C070(f->model, 0, f->unk8C);
        }
        func_001A5640(f->unk20, f->model, 0);
    }
    f->unk98 = 1;
    f->unk94 = 0;
}
s32 func_001CA130(CharFace *f) {
    if (f == 0 || f->unk98 != 0 || f->unk94 == 0 || f->unk94->state == 3) {
        return 1;
    }
    return 0;
}
#if 0
/* Does not match yet: 21 of 124 instructions differ. */
CharFace *func_001CA180(s32 chara, s32 costume, s32 color, s32 key) {
    CharFace *f;
    CharFace *p;
    CharFaceEntry *e;
    s32 size0;
    s32 size;
    SizeQuery2 q1;
    SizeQuery q0;
    e = FACE_INDEX(chara, costume, color) >= 0 ? &D_00447440[chara].faces[FACE_INDEX(chara, costume, color)] : 0;
    if (e == 0) {
        return 0;
    }
    for (p = e->list; p != 0; p = p->next) {
        if (p->key == key) {
            p->refs++;
            return p;
        }
    }
    q1.count = 0x10;
    q0.count = 0x10;
    size0 = (func_0013DF20(&q1) + 15) & ~15;
    size = ((func_0013BC70(&q0, 0) + 15) & ~15) + (size0 + 0xB0);
    f = func_001CA3F0(2, size);
    func_001258F8(f, 0, size);
    f->unk18 = (s32)((u8 *)f + 0xB0);
    f->model = (Model *)((u8 *)f + size0 + 0xB0);
    f->entry = e;
    f->unk94 = 0;
    f->unk98 = 0;
    f->key = key;
    f->refs = 1;
    f->prev = 0;
    f->next = e->list;
    if (f->next != 0) {
        f->next->prev = f;
    }
    e->list = f;
    if (e->file != -1) {
        f->unk94 = f->file = func_001CA370(2, e->file, 0, 0);
    }
    return f;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_body", func_001CA180);
CharFile *func_001CA370(s32 heap, s32 a, s32 b, s32 c) {
    CharFile *r;
    s32 old;
    old = D_0047075C;
    func_0025C400(D_004B41F0[heap]);
    r = func_0025C670(a, b, c);
    func_0025C400(old);
    return r;
}
