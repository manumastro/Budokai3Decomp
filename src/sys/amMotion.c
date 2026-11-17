#include "common.h"

typedef struct MotHdr {
    char pad[0x10];
    s32 n10;
    void *p14;
    s32 n18;
    void *p1C;
} MotHdr;

extern void *D_00470304;
extern s32 D_00470308;
extern void **D_004702F0;
extern char *D_00470300;
extern char D_003F0800[];
extern void amMotion_Create(void *);
s32 amMotion_MatchName(char *, char *);
extern void func_0013C1E0(void *, f32, f32);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern s32 func_00127BA0(char *);
extern void func_0012EFF0(void *, void *, u32);
extern void func_00125740(void *, void *, s32);


typedef struct MotObj {
    MotHdr *hdr;
} MotObj;

typedef struct MotSlot {
    s32 id;
    s32 pad4;
    f32 f8;
    f32 fC;
    char *p10;
} MotSlot;

typedef struct MotInst {
    MotHdr *hdr;
    MotHdr *model;
    char pad8[0x400];
    s32 x408;
    char pad40C[4];
    s32 x410;
    s32 x414;
    s32 n418;
    MotSlot slot0;
    char pad430[0xC];
    MotSlot slot1;
    char pad450[0xC];
    void *p45C;
    void *p460;
    char pad464[8];
    MotHdr *anim[16];
    s32 x4AC;
    s16 map[4][256];
} MotInst;

void func_0013CC40(MotInst *, MotSlot *);
typedef struct Bone {
    char pad[0x10];
    f32 pos[4];
    char pad20[0x18];
    struct Bone *child;
    struct Bone *next;
} Bone;
extern void func_0013B060(void *);
void amMotion_WalkTree(Bone *);
extern void func_00142100(void *, void *);








typedef struct Key4 { s16 frame; s16 pad; } Key4;
typedef struct Key8 { s32 frame; s32 pad; } Key8;
typedef struct Key16 { s32 frame; s32 pad[3]; } Key16;
typedef struct Track4 { char pad[8]; s32 n; Key4 key[1]; } Track4;
typedef struct Track8 { char pad[8]; s32 n; Key8 key[1]; } Track8;
typedef struct Track16 { char pad[8]; s32 n; Key16 key[1]; } Track16;








typedef struct MotJoint {
    char pad[0x14];
    f32 f14;
    char pad18[0x28];
} MotJoint;

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct MotSeq {
    s32 pad0;
    s32 n4;
    s32 n8;
    s32 nC;
} MotSeq;

typedef struct MotW {
    f32 f0;
    f32 f4;
} MotW;

extern MotSeq *D_004702EC;
extern MotW **D_004702E8;
extern Vec4 D_003F0840;
extern void func_00142280(Vec4 *, Vec4 *, void *, void *);
extern void func_0013CE50(MotInst *, MotSlot *);
extern void func_0013D360(MotInst *, MotSlot *);
extern f32 fabsf(f32);


typedef struct Key8s { s16 frame; s16 pad[3]; } Key8s;
typedef struct Track8s { char pad[8]; s32 n; Key8s key[1]; } Track8s;




extern void func_0013B960(void *);

INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B160);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B190);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B2B0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B460);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B500);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B580);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B620);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B6B0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B750);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B7D0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B850);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B8D0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B960);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013B9C0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013BA20);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013BAF0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013BBD0);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013BC00);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013BC30);
s32 amMotion_CalcSize(MotHdr *m, u32 flags) {
    s32 size;
    s32 n;
    size = 0x24B0;
    n = m->n10;
    size += m->n10 * 64;
    size += n * 128 * ((flags & 2) ? 2 : 1);
    size += n * 64 * ((flags & 1) ? 2 : 1);
    if (flags & 4) {
        size += m->n10 * 64;
        size += m->n10 * 64;
    }
    return size;
}
void amMotion_CreateFromObj(MotObj *o) {
    D_00470304 = o;
    amMotion_Create(*(void **)o->hdr->p1C);
}
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", amMotion_Create);
void amMotion_BindAnim(MotInst *o, s32 slot, MotHdr *anim) {
    s16 *map;
    MotHdr *model;
    s32 i;
    s32 found;
    s32 j;

    o->anim[slot] = anim;
    map = o->map[slot];
    model = o->model;
    for (i = 0; i < model->n10; i++) {
        found = 0;
        for (j = 0; j < anim->n18 && !found; j++) {
            found = amMotion_MatchName((char *)model->p1C + i * 32, (char *)anim->p1C + j * 32);
        }
        map[i] = found ? j - 1 : -1;
    }
}
void amMotion_Update(MotInst *o, s32 a1) {
    D_00470308 = a1;
    if (o->slot0.p10) func_0013CC40(o, &o->slot0);
    if (o->slot1.p10) func_0013CC40(o, &o->slot1);
}
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013C1E0);
void amMotion_Apply(MotInst *o, f32 a, f32 b) {
    if (b != 0.0f) {
        amMotion_Update(o, 0);
        func_0013C1E0(o, a, b);
    }
}
void amMotion_BuildMatrices(MotInst *o) {
    D_004702F0 = (void **)((char *)o + 8);
    D_00470300 = (char *)o->x408;
    func_0013B0B0(D_003F0800);
    amMotion_WalkTree((Bone *)o->model->p14);
    func_0013B110(1);
}
s32 amMotion_FindBone(MotHdr *m, void *node) {
    s32 i;
    if (!m->p1C) return -1;
    for (i = 0; i < m->n10; i++) {
        if (amMotion_MatchName((char *)m->p1C + i * 32, node)) return i;
    }
    return -1;
}
void amMotion_SavePose(MotInst *o) {
    func_0012EFF0(o->p460, o->p45C, (u32)(o->n418 << 7) >> 6);
}
void amMotion_LoadPose(MotInst *o) {
    func_0012EFF0(o->p45C, o->p460, (u32)(o->n418 << 7) >> 6);
}
void amMotion_CopyPose(MotInst *dst, MotInst *src) {
    s32 i;
    s32 found;
    s32 j;
    for (i = 0; i < src->n418; i++) {
        found = 0;
        for (j = 0; j < dst->n418; j++) {
            if (*(s8 *)((char *)src->model->p1C + i * 32) == 'X') continue;
            if (*(s8 *)((char *)dst->model->p1C + j * 32) == 'X') continue;
            found = amMotion_MatchName((char *)src->model->p1C + i * 32, (char *)dst->model->p1C + j * 32);
            if (found > 0) break;
        }
        if (found > 0) {
            func_00125740((char *)dst->p45C + j * 128, (char *)src->p45C + i * 128, 0x80);
        }
    }
}
s32 amMotion_FindKey4(Track4 *t, f32 frame) {
    s32 i;
    s32 step;
    if (frame < 1.0f) return 0;
    i = t->n >> 1;
    step = (t->n + 1) >> 1;
    while (step >= 2) {
        if ((f32)t->key[i].frame <= frame) {
            i += step >> 1;
        } else {
            i -= step >> 1;
        }
        step = (step + 1) >> 1;
    }
    return ((f32)t->key[i].frame <= frame) ? i : i - 1;
}
s32 amMotion_FindKey8(Track8 *t, f32 frame) {
    s32 i;
    s32 step;
    if (frame < 1.0f) return 0;
    i = t->n >> 1;
    step = (t->n + 1) >> 1;
    while (step >= 2) {
        if ((f32)t->key[i].frame <= frame) {
            i += step >> 1;
        } else {
            i -= step >> 1;
        }
        step = (step + 1) >> 1;
    }
    return ((f32)t->key[i].frame <= frame) ? i : i - 1;
}
s32 amMotion_FindKey16(Track16 *t, f32 frame) {
    s32 i;
    s32 step;
    if (frame < 1.0f) return 0;
    i = t->n >> 1;
    step = (t->n + 1) >> 1;
    while (step >= 2) {
        if ((f32)t->key[i].frame <= frame) {
            i += step >> 1;
        } else {
            i -= step >> 1;
        }
        step = (step + 1) >> 1;
    }
    return ((f32)t->key[i].frame <= frame) ? i : i - 1;
}
s32 amMotion_MatchName(char *a, char *b) {
    s32 i;
    s32 j;
    i = func_00127BA0(a) - 1;
    j = func_00127BA0(b) - 1;
    while (i >= 0 && j >= 0) {
        if (a[i] == b[j]) {
            i--;
            j--;
        } else {
            return 0;
        }
        if (a[i] == '_' && j < 0) return 1;
        if (a[j] == '_' && i < 0) return 1;
        if (a[i] == '_' && b[j] == '_') return 1;
    }
    if (i == j) return 1;
    return 0;
}
void func_0013CC40(MotInst *o, MotSlot *s) {
    Vec4 tmp __attribute__((aligned(16)));
    MotW *w;
    f32 f;
    s32 k;
    s32 h;
    char *p;

    if (s->f8 == s->fC) return;
    k = (u16)s->id;
    h = s->id >> 16;
    h = h - 1;
    D_004702EC = (MotSeq *)((char *)o->anim[h]->p14 + k * 16);
    if ((f32)D_004702EC->n8 - 1.0f <= s->f8) {
        func_0013CE50(o, s);
    } else {
        func_0013D360(o, s);
    }
    s->fC = s->f8;
    if (D_00470308) return;
    if (!D_004702E8) return;
    if (o->x4AC < 0) return;
    if (o->x410 < 0) return;
    if (D_004702EC->n4 < 0) return;
    w = (MotW *)((char *)D_004702E8[o->x4AC] + D_004702EC->n4 * 8);
    if (o->x414 & 8) {
        tmp = D_003F0840;
        func_00142280(&tmp, &tmp, (char *)s->p10 + (o->x410 << 6), 0);
        f = 1.0f - ((1.0f - w->f4) * __s_abs(tmp.y));
        p = (char *)s->p10;
        *(f32 *)((o->x410 << 6) + (s32)p + 0x14) *= f;
    } else if (o->x414 & 4) {
        p = (char *)s->p10;
        *(f32 *)((o->x410 << 6) + (s32)p + 0x14) *= w->f4;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013CE50);
INCLUDE_ASM("asm/nonmatchings/sys/amMotion", func_0013D360);
typedef struct McRig {
    char pad0[4];
    MotHdr *m;
} McRig;

typedef struct McDst {
    char pad0[0x10];
    u8 *p10;
} McDst;

void func_0013D9B0(McRig *a0, McDst *a1) {
    s32 n;
    s32 i;
    u8 *d;
    n = a0->m->n10;
    i = 0;
    while (i < n) {
        d = a1->p10 + i * 64;
        __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"((u8 *)a0->m->p14 + i * 80), "r"(d));
        __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(d + 0x10));
        __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"((u8 *)a0->m->p14 + i * 80 + 0x20), "r"(d + 0x20));
        *(s32 *)(d + 0x30) = -1;
        *(s32 *)(d + 0x34) = -1;
        *(s32 *)(d + 0x38) = -1;
        i++;
    }
}
s32 amMotion_FindKeyHint8(Track8s *t, f32 frame, s32 i) {
    s32 mid;
    if (frame < 1.0f) return 0;
    if (i == -1) {
        mid = t->n >> 1;
        i = (t->n + 1) >> 1;
        while (i >= 2) {
            if ((f32)t->key[mid].frame <= frame) {
                mid += i >> 1;
            } else {
                mid -= i >> 1;
            }
            i = (i + 1) >> 1;
        }
        if (!((f32)t->key[mid].frame <= frame)) mid--;
    } else {
        do {
            if ((f32)t->key[i].frame <= frame) {
                if (!((f32)t->key[i + 1].frame <= frame)) return i;
                i++;
            } else {
                i--;
            }
            if (i <= 0) return 0;
        } while (i < t->n - 1);
        mid = t->n - 1;
    }
    return mid;
}
s32 amMotion_FindKeyHint16(Track16 *t, f32 frame, s32 i) {
    s32 mid;
    if (frame < 1.0f) return 0;
    if (i == -1) {
        mid = t->n >> 1;
        i = (t->n + 1) >> 1;
        while (i >= 2) {
            if ((f32)t->key[mid].frame <= frame) {
                mid += i >> 1;
            } else {
                mid -= i >> 1;
            }
            i = (i + 1) >> 1;
        }
        if (!((f32)t->key[mid].frame <= frame)) mid--;
    } else {
        do {
            if ((f32)t->key[i].frame <= frame) {
                if (!((f32)t->key[i + 1].frame <= frame)) return i;
                i++;
            } else {
                i--;
            }
            if (i <= 0) return 0;
        } while (i < t->n - 1);
        mid = t->n - 1;
    }
    return mid;
}
void amMotion_WalkTree(Bone *b) {
    void *m;
    void *pf;
    func_0013B0B0(0);
    while (b) {
        m = (s32 *)*D_004702F0;
        __asm__ volatile ("pref 0, 0(%0)" : : "r"(pf));
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw $ACC, $vf28, $vf1x\n"
            "vmadday.xyzw $ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw $ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(b->pos));
        if (m) {
            func_0013B960(m);
        } else {
            func_00142100(b, 0);
        }
        __asm__ volatile (
            "sqc2 $vf28, 0(%0)\n"
            "sqc2 $vf29, 0x10(%0)\n"
            "sqc2 $vf30, 0x20(%0)\n"
            "sqc2 $vf31, 0x30(%0)\n"
            : : "r"(D_00470300));
        D_004702F0++;
        D_00470300 += 0x40;
        if (b->child) amMotion_WalkTree(b->child);
        b = b->next;
        func_0013B060(0);
    }
    func_0013B110(1);
}
void amMotion_WalkTreeRest(Bone *b) {
    func_0013B0B0(0);
    while (b) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw $ACC, $vf28, $vf1x\n"
            "vmadday.xyzw $ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw $ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(b->pos));
        func_00142100(b, 0);
        __asm__ volatile (
            "sqc2 $vf28, 0(%0)\n"
            "sqc2 $vf29, 0x10(%0)\n"
            "sqc2 $vf30, 0x20(%0)\n"
            "sqc2 $vf31, 0x30(%0)\n"
            : : "r"(D_00470300));
        D_00470300 += 0x40;
        if (b->child) amMotion_WalkTreeRest(b->child);
        b = b->next;
        func_0013B060(0);
    }
    func_0013B110(1);
}
