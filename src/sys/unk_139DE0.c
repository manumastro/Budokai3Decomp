#include "common.h"

typedef struct Blk {
    s32 size;
    s32 pad4;
    struct Blk *prev;
    struct Blk *next;
    s32 flags;
    struct Blk *p14;
    struct Blk *p18;
    u32 magic;
} Blk;

typedef struct Part {
    s32 type;
    s32 pad[2];
    void *data;
} Part;

typedef struct Model {
    char pad[0x14];
    Part *parts;
} Model;

extern Blk *D_004702B8;
extern Blk *D_004702BC;
extern void (*D_004702DC)(void);
extern void func_00128040(char *, char *, s32);
extern s32 D_004702C0, D_004702C4, D_004702C8, D_004702CC, D_004702D0, D_004702D4, D_004702D8;
extern s32 func_00124B70(s32);
extern void memset(void *, s32, s32);
extern void func_00139E60(s32, Part *, void *);
extern void func_0013A1E0(s32, Part *, void *);
void func_0013AA10(void);
Blk *func_0013ADE0(s32, s32);
extern Blk *func_0013AE80(Blk *, s32, s32);









typedef struct Light {
    char pad0[0x20];
    f32 color[4];
    u16 type;
    u16 flags;
    f32 near;
    f32 far;
    f32 pad3C;
    f32 intensity;
    f32 atten;
} Light;

typedef struct LObj {
    char pad[0x10];
    f32 f10;
} LObj;

extern f32 func_00146E30(Light *, LObj *);

void func_00139DE0(s32 a0, Model *m, s32 i) {
    Part *p;
    void *d;
    void *d2;
    p = &m->parts[i];
    d = p->data;
    d2 = p->data;
    switch (p->type) {
    case 10:
        func_00139E60(a0, p, d);
        break;
    case 0x29:
    case 9:
        func_0013A1E0(a0, p, d2);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_139DE0", func_00139E60);
INCLUDE_ASM("asm/nonmatchings/sys/unk_139DE0", func_0013A1E0);
s32 func_0013A690(Light *l, LObj *o) {
    f32 *c;
    u16 mode;
    f32 t;
    f32 lum;
    f32 d;

    if (!(l->flags & 3)) return 0;
    c = l->color;
    switch (l->type) {
    case 0:
        l->intensity = 0.299f * c[0] + 0.587f * c[1] + 0.114f * c[2];
        l->atten = 1.0f;
        break;
    case 1:
        mode = l->flags & 0x30;
        if (!mode) {
            l->atten = 1.0f;
        } else {
            d = func_00146E30(l, o);
            d -= o->f10;
            if (d <= l->near) {
                l->atten = 1.0f;
            } else if (!(d < l->far)) {
                l->atten = 0.0f;
            } else {
                if (l->far != l->near) {
                    t = (d - l->near) / (l->far - l->near);
                } else {
                    if (d - l->near >= 0.0f) {
                        t = 0.0f;
                    } else {
                        t = 1.0f;
                    }
                }
                if (mode & 0x20) {
                    l->atten = 1.0f - t * t;
                } else if (mode & 0x10) {
                    l->atten = 1.0f - t;
                }
            }
        }
        if (l->atten <= 0.0f) return 0;
        lum = 0.299f * c[0] + 0.587f * c[1] + 0.114f * c[2];
        l->intensity = lum;
        l->intensity = lum * l->atten;
        break;
    case 2:
    default:
        return 0;
    }
    return 1;
}
void func_0013A960(s32 size) {
    s32 base;
    s32 pad;
    D_004702CC = func_00124B70(size);
    base = D_004702CC;
    if (base & 0x3F) {
        pad = 0x40 - (base & 0x3F);
        base += pad;
        size -= pad;
    }
    base += 0x20;
    size -= 0x40;
    D_004702B8 = (Blk *)base;
    if (size & 0x3F) size -= size & 0x3F;
    base = (s32)(D_004702B8 + 1) + size;
    base -= 0x40;
    size -= 0x40;
    D_004702BC = (Blk *)base;
    D_004702D0 = size;
    func_0013AA10();
    D_004702DC = 0;
    D_004702D8 = 0;
}
void func_0013AA10(void) {
    memset(D_004702B8, 0, 0x20);
    D_004702B8->size = D_004702D0;
    D_004702B8->p18 = D_004702BC;
    D_004702B8->magic = 0xD2ACD2AC;
    memset(D_004702BC, 0, 0x20);
    D_004702BC->size = 0xD2ACD2AC;
    D_004702BC->prev = D_004702B8;
    D_004702C0 = 0;
    D_004702C4 = 0;
    D_004702C8 = 0;
    D_004702D4 = 0;
}
void *func_0013AAB0(s32 size, s32 mode, char *name, s32 tag) {
    s32 top;
    Blk *b;
    size = (size + 0x3F) & ~0x3F;
    top = 0;
    switch (mode) {
    case 2:
        break;
    case 3:
        top = 1;
        break;
    case 1:
        top = 1;
    default:
        if (D_004702D4) top = 1 - top;
    }
    b = func_0013ADE0(size, top);
    if (!b) {
        if (D_004702DC) D_004702DC();
        return 0;
    }
    b = func_0013AE80(b, size, top);
    D_004702C0++;
    if (!mode) D_004702C4++;
    D_004702C8 -= b->size;
    D_004702C8 += 0x40;
    b->p18->pad4 = tag;
    b->magic = 0xD2ACD2AC;
    b->p18->size = 0xD2ACD2AC;
    memset((char *)b + 4, 0, 0x10);
    func_00128040((char *)b + 4, name, 0xF);
    if (mode == 1) b->p18->flags |= 1;
    return b + 1;
}
void func_0013AC90(void *ptr) {
    Blk *h;
    if (ptr) {
        h = (Blk *)ptr - 1;
        D_004702C0--;
        if (!(((Blk *)ptr)[-1].p18->flags & 1)) D_004702C4--;
        if (D_004702C0 < 0) {
            D_004702C0 = 0;
            return;
        }
        h->size = -h->size;
        D_004702C8 -= h->size;
        if (h->p14 && h->p14->prev->size > 0) {
            h->p14->prev->size += h->size + 0x40;
            h->p14->prev->p18 = h->p18;
            h->p18->prev = h->p14->prev;
            h = h->p14->prev;
            D_004702C8 -= 0x40;
        }
        if (h->p18->next && h->p18->next->size > 0) {
            h->size += h->p18->next->size + 0x40;
            h->p18 = h->p18->next->p18;
            h->p18->prev = h;
            D_004702C8 -= 0x40;
        }
    }
}
Blk *func_0013ADE0(s32 size, s32 fromTop) {
    Blk *b;
    if (!fromTop) {
        for (b = D_004702B8; b; b = b->p18->next) {
            if (b->size >= size) return b;
        }
    } else {
        for (b = D_004702BC->prev; b; b = b->p14->prev) {
            if (b->size >= size) return b;
            if (!b->p14) break;
        }
    }
    return 0;
}
