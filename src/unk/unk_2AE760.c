#include "common.h"

/* An actor of this file: a task function at 0x10, a timer at 0x30. */
typedef struct Ac2AE {
    char pad0[0x10];
    void *f10;
    char pad14[0x1C];
    f32 f30;
} Ac2AE;

/* The event that starts the actor: floats in a list at 0x2C. */
typedef struct Ev2AE {
    char pad0[0x2C];
    f32 *f2C;
} Ev2AE;

extern s32 D_004708FC;
extern void A2d_SetMode(s32);
extern void func_00228430(s32);
extern s32 func_002AF420();
extern void A2d_FlushList();
extern s32 func_002AEFD0(Ac2AE *);
extern u8 D_005BCD20[];
extern u8 D_005BC9E0[];
extern u8 D_005BC180[];
extern u8 D_005BC440[];
extern void amNode_Free(void *);
extern void func_0022D0E0(s32, s32);
extern void amCdFs_ReleaseCache(void *);
extern void amHeap_Free(void *);
extern void func_002AE810(u8 *);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_00228410();
extern void amModel_SetCurrent(s32);
extern s32 func_002AF0A0(Ac2AE *, Ev2AE *);
extern s32 func_002AF220(Ac2AE *, Ev2AE *);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_0022CD00(s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE760);
void func_002AE810(u8 *a0) {
    s32 j;
    s32 i;
    void *q;

    if (*(u8 **)(a0 + 0xC) != NULL) {
        for (j = 0; j < *(s32 *)(*(u8 **)(a0 + 0xC) + 0x10); j++) {
            func_0022D0E0((*(s32 **)(a0 + 0x20))[j], 1);
        }
        for (i = 0; i < *(s32 *)(*(u8 **)(a0 + 0xC) + 0x18); i++) {
            func_0022D0E0((*(s32 **)(a0 + 0x24))[i], 1);
        }
        q = *(void **)(a0 + 0x4);
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
            *(s32 *)(a0 + 0x4) = 0;
        }
        q = *(void **)(a0 + 0x20);
        if (q != NULL) {
            amHeap_Free(q);
            *(s32 *)(a0 + 0x20) = 0;
        }
        q = *(void **)(a0 + 0x24);
        if (q != NULL) {
            amHeap_Free(q);
            *(s32 *)(a0 + 0x24) = 0;
        }
        memset(*(void **)(a0 + 0xC), 0, 0x30);
    }
    q = *(void **)(a0 + 0x8);
    if (q != NULL) {
        q = *(void **)a0;
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
            *(s32 *)a0 = 0;
        }
        memset(*(void **)(a0 + 0x8), 0, 0x20);
    }
}
s32 func_002AE970(s32 **a0, u8 *a1) {
    s32 idx;
    s32 k;
    s32 off;

    idx = **(s32 **)(a1 + 0x2C);
    if (idx != -1) {
        func_002AE810(D_005BCD20 + (**a0) * 160 + idx * 40);
    } else {
        for (k = 0, off = 0; k < 4; k++, off += 40) {
            func_002AE810(D_005BCD20 + (**a0) * 160 + off);
        }
    }
    return 1;
}
s32 func_002AEA40(s32 **a0, u8 *a1) {
    s32 idx;
    s32 k;
    s32 off;
    u8 *p;
    void *q;

    idx = **(s32 **)(a1 + 0x2C);
    if (idx != -1) {
        p = (u8 *)((idx * 208) + (D_005BC9E0 + **a0 * 416));
        q = *(void **)p;
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
        }
        memset(p, 0, 208);
    } else {
        for (k = 0, off = 0; k < 2; k++, off += 208) {
            p = (u8 *)(off + (D_005BC9E0 + **a0 * 416));
            q = *(void **)p;
            if (q != NULL) {
                amCdFs_ReleaseCache(q);
            }
            memset(p, 0, 208);
        }
    }
    return 1;
}
s32 func_002AEB60(s32 **a0, u8 *a1) {
    s32 idx;
    s32 k;
    s32 off;
    u8 *p;
    void *q;

    idx = **(s32 **)(a1 + 0x2C);
    if (idx != -1) {
        p = (u8 *)(((idx + 1) * 48) + (D_005BC440 + **a0 * 144));
        q = *(void **)p;
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
        }
        q = *(void **)(p + 8);
        if (q != NULL) {
            amNode_Free(q);
        }
        memset(p, 0, 48);
    } else {
        for (k = 0, off = 0; k < 3; k++, off += 48) {
            p = (u8 *)(off + (D_005BC440 + **a0 * 144));
            q = *(void **)p;
            if (q != NULL) {
                amCdFs_ReleaseCache(q);
            }
            q = *(void **)(p + 8);
            if (q != NULL) {
                amNode_Free(q);
            }
            memset(p, 0, 48);
        }
    }
    return 1;
}
s32 func_002AECA0(s32 **a0, u8 *a1) {
    s32 idx;
    s32 k;
    s32 off;
    u8 *p;
    void *q;

    idx = **(s32 **)(a1 + 0x2C);
    if (idx != -1) {
        p = (u8 *)((idx * 176) + (D_005BC180 + **a0 * 352));
        q = *(void **)p;
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
        }
        memset(p, 0, 176);
    } else {
        for (k = 0, off = 0; k < 2; k++, off += 176) {
            p = (u8 *)(off + (D_005BC180 + **a0 * 352));
            q = *(void **)p;
            if (q != NULL) {
                amCdFs_ReleaseCache(q);
            }
            memset(p, 0, 176);
        }
    }
    return 1;
}
void func_002AEDC0(u8 *a0) {
    s32 i;
    void *q;

    q = *(void **)a0;
    if (q != NULL) {
        amCdFs_ReleaseCache(q);
    }
    q = *(void **)(a0 + 4);
    if (q != NULL) {
        amCdFs_ReleaseCache(q);
    }
    q = *(void **)(a0 + 8);
    if (q != NULL) {
        amCdFs_ReleaseCache(q);
    }
    for (i = 0; i < 2; i++) {
        q = *(void **)(a0 + 0xC + i * 4);
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
        }
    }
    for (i = 0; i < 2; i++) {
        q = *(void **)(a0 + 0x14 + i * 4);
        if (q != NULL) {
            amCdFs_ReleaseCache(q);
        }
    }
    q = *(void **)(a0 + 0x38);
    if (q != NULL) {
        amHeap_Free(q);
    }
    q = *(void **)(a0 + 0x3C);
    if (q != NULL) {
        amHeap_Free(q);
    }
    q = *(void **)(a0 + 0x2084);
    if (q != NULL) {
        amHeap_Free(q);
    }
    memset(a0, 0, 0x20E0);
}
extern u8 D_005ABA80[];
extern void func_002AEDC0(u8 *);

s32 func_002AEEF0(s32 **a0, Ev2AE *a1) {
    s32 idx;
    s32 i;
    s32 off;

    idx = **(s32 **)((u8 *)a1 + 0x2C);
    if (idx != -1) {
        func_002AEDC0((idx * 0x20E0) + (D_005ABA80 + **a0 * 0x8380));
    } else {
        i = 0;
        off = 0;
        do {
            func_002AEDC0(off + (D_005ABA80 + **a0 * 0x8380));
            i++;
            off += 0x20E0;
        } while (i < 4);
    }
    return 1;
}
s32 func_002AEFD0(Ac2AE *o) {
    f32 d;

    A2d_SetMode(D_004708FC);
    func_00228430(0);
    d = o->f30 - 1.0f;
    o->f30 = d;
    if (d <= 0.0f) {
        o->f10 = NULL;
        return 1;
    }
    return 3;
}
s32 func_002AF040(Ac2AE *o, Ev2AE *e) {
    o->f30 = 1.0f + e->f2C[0];
    A2d_SetMode(D_004708FC);
    func_00228430(0);
    o->f10 = (void *)func_002AEFD0;
    return 3;
}
/* differs: 11 of 50 (the jal/lui relocations are counted too): the original loads the event pointer into $a1 and
   the second field into $a1 before the copy of $a0 into $s0; the copy of $a0 comes first here */
#if 0
s32 func_002AF0A0(Ac2AE *o, Ev2AE *e) {
    s32 k;
    s32 t;
    s32 *s2;
    s32 s1;
    s32 x0;
    s32 x1;
    f32 d;

    e = (Ev2AE *)*(s32 **)((u8 *)e + 0x2C);
    k = ((s32 *)e)[1];
    t = k * 5;
    s2 = (s32 *)(D_005BCD20 + (**(s32 **)o) * 160 + (t << 3));
    func_00228410((u8 *)(t << 3), (u8 *)t);
    s1 = s2[4];
    x1 = s2[5];
    x0 = s2[2];
    D_00470704 = x0;
    D_0047070C = x1;
    amModel_SetCurrent(x0);
    D_00470708 = s1;
    A2d_FlushList();
    D_00470238 = s1;
    d = o->f30 - 1.0f;
    o->f30 = d;
    if (d <= 0.0f) {
        o->f10 = NULL;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF0A0);
/* differs: 21 of 44 instructions. The float constant 1.0f lands in $f1 (the original puts it in $f0 and loads the field
   into $f1), the field loads of the event and the callee arguments are in another order; no declaration order fixes it
   (80 orders sampled, best 21). */
#if 0
s32 func_002AF170(u8 *a0, u8 *a1) {
    f32 *p;
    u8 *s2;
    f32 f;
    s32 s1;
    s32 t8;
    s32 t14;

    p = *(f32 **)(a1 + 0x2C);
    f = 1.0f + p[0];
    s2 = D_005BCD20 + (**(s32 **)a0) * 160 + ((s32 *)p)[1] * 40;
    *(f32 *)(a0 + 0x30) = f;
    func_00228410(a0, D_005BCD20);
    s1 = *(s32 *)(s2 + 0x10);
    t14 = *(s32 *)(s2 + 0x14);
    t8 = *(s32 *)(s2 + 0x8);
    D_00470704 = t8;
    D_0047070C = t14;
    amModel_SetCurrent(t8);
    D_00470708 = s1;
    D_00470238 = s1;
    *(void **)(a0 + 0x10) = func_002AF0A0;
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF170);
/* differs: 16 of 66 instructions (the calls and the vec are right; the original loads t0[4], then t0[0] into $f1, then
   **a0, then t0[1] into $f0, while the compiler orders the loads by the expression tree: 720 orders of the setup
   statements and float locals tried, best 16) */
#if 0
s32 func_002AF220(Ac2AE *o, Ev2AE *e) {
    f32 *p;
    f32 v[4];
    u8 *s1;
    s32 idx;
    f32 d;

    p = e->f2C;
    s1 = D_005BCD20 + (**(s32 **)o) * 160 + ((s32 *)p)[4] * 40;
    idx = ((s32 *)p)[3];
    v[0] = p[1];
    ((s32 *)v)[2] = 0;
    v[1] = p[0];
    v[3] = 1.0f;
    func_00228430(0);
    func_00227A30((u8 *)v);
    func_0022C060(1.0f, (*(s32 **)(s1 + 0x20))[idx]);
    func_00228410();
    func_0022CD00((*(s32 **)(s1 + 0x20))[idx]);
    d = o->f30 - 1.0f;
    o->f30 = d;
    if (d <= 0.0f) {
        o->f10 = NULL;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF220);
/* differs: 20 of 57 instructions: same family as func_002AF220 (the original loads t0[4], t0[0] into $f1, **a0, then
   t0[1] and t0[2]; the compiler orders the loads by the expression tree; the statement orders tried put 16-24 differing) */
#if 0
s32 func_002AF330(Ac2AE *o, Ev2AE *e) {
    f32 *p;
    f32 v[4];
    u8 *s1;
    s32 idx;

    p = e->f2C;
    s1 = D_005BCD20 + (**(s32 **)o) * 160 + ((s32 *)p)[4] * 40;
    idx = ((s32 *)p)[3];
    o->f30 = p[2];
    v[0] = p[1];
    ((s32 *)v)[2] = 0;
    v[1] = p[0];
    v[3] = 1.0f;
    func_00228430(0);
    func_00227A30((u8 *)v);
    func_0022C060(1.0f, (*(s32 **)(s1 + 0x20))[idx]);
    func_00228410();
    func_0022CD00((*(s32 **)(s1 + 0x20))[idx]);
    o->f10 = (void *)func_002AF220;
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF330);
/* differs: 114 of 138 instructions (the first load of the list and the second A2d/amModel block are in another order; the -1 branch and the 16-byte zero loop are unverified); draft below */
#if 0
s32 func_002AF420(Ac2AE *o, Ev2AE *e) {
    f32 *p;
    f32 lf;
    u8 *s2;
    s32 idx;
    s32 k;
    u8 buf[16];
    f32 d;

    p = e->f2C;
    lf = p[0];
    idx = ((s32 *)p)[2];
    s2 = D_005BCD20 + (**(s32 **)o) * 160 + ((s32 *)p)[3] * 40;
    A2d_SetMode(D_004708FC);
    D_00470704 = ((s32 *)s2)[2];
    D_0047070C = ((s32 *)s2)[5];
    amModel_SetCurrent(((s32 *)s2)[2]);
    D_00470708 = ((s32 *)s2)[4];
    func_00228430(0);
    D_00470238 = ((s32 *)s2)[4];
    if (idx == -1) {
        for (k = 0; k < *(s32 *)(*(u8 **)(s2 + 0xC) + 0x18); k++) {
            func_00228430(0);
            func_0022C060(1.0f, (*(s32 **)(s2 + 0x24))[k]);
            func_00228410();
            func_0022CD00((*(s32 **)(s2 + 0x24))[k]);
        }
    } else {
        func_00228430(0);
        for (k = 0; k < 16; k++) {
            buf[k] = 0;
        }
        *(f32 *)(buf + 8) = lf;
        func_00227A30(buf);
        func_0022C060(1.0f, (*(s32 **)(s2 + 0x24))[idx]);
        func_00228410();
        func_0022CD00((*(s32 **)(s2 + 0x24))[idx]);
    }
    func_00228410();
    A2d_FlushList();
    d = o->f30;
    if (d <= -2.0f) {
        return 3;
    }
    if (d <= 0.0f) {
        o->f10 = NULL;
        return 1;
    }
    o->f30 = d - 1.0f;
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF420);
void func_002AF630(Ac2AE *o, Ev2AE *e) {
    o->f30 = e->f2C[1];
    o->f10 = (void *)func_002AF420;
    func_002AF420(o, e);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF650);
