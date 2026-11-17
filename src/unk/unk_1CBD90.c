#include "common.h"

typedef struct Big { char pad[0x8934]; void *tbl[2]; } Big;
extern Big *D_00470570;
typedef struct Arg { char pad[0x2c]; int *p; } Arg;
typedef struct Side {
    char pad0[0xB88];
    int **blk;
    short *idx;
    char pad1[0xCC3 - 0xB90];
    signed char m;
    signed char n;
    char pad2[0x1354 - 0xCC5];
    struct Side *other;
    char pad3[0x201E - 0x1358];
    signed char out;
} Side;
extern void func_001C8480(void *, int);
extern void func_001C7D90(void *, int, void *);
extern int func_00218960(void *);
extern void func_00219270(signed char);
extern signed char func_00218B60(short, int);
extern void func_00218C40(void *, int, int, int, float, float);
extern void func_00219340(void *, float);
extern void func_00219390(void *);
extern void func_00219470(void *);
extern void func_001D9CA0(void *, int);
extern void func_001E57F0(int);
extern void func_001A8770(int, void *);
extern void func_001E18B0(void *, int);
extern void func_001E1A40(void *, int);
extern void func_001E1BD0(void *, int, int);
extern void func_001E3550(void *);
extern void func_001E4FA0(void *, int);
extern void func_001E4820(void *, f32, int);
extern void func_001C8A50(void *, int, int);
extern void func_001C89A0(void *, int);
extern s32 amMotion_FindBone(s32, s32);
extern s32 D_004B4230[];
extern f32 D_004B4234[];
extern f32 D_004B4220[];
extern f32 D_004B4224[];
extern f32 D_004B4228[];
extern f32 D_004B422C[];
extern void func_001CF6D0(void);
extern void func_001CFA00(void);
extern void func_001DD680(void *, int);
extern void func_00237000(int, void *);
extern void func_001DFC80(void *, int, f32);
extern void func_001D7CC0(void *, int);
extern void func_0029D8B0(int, int);
extern void func_001D8FE0(void *, int);
extern f32 D_004B421C[];
extern void func_001C75D0(void *, int);
extern void func_001C81D0(void *, int);
extern void func_001C8210(void *, int);
extern void func_001C8860(void *, int);
extern s32 func_001E1690(void *);
extern s32 func_001DFA90(void *, int);
extern void func_001DFE60(void *, int, f32);
extern s32 func_001C8780(void *, int);
extern f32 D_004B4218[];
extern f32 D_004B4214[];
extern f32 D_004B4210[];
extern f32 D_004B423C[];
extern f32 D_004B4238[];

// func_001CBD90, func_001CBDF0, func_001CBE80, func_001CBEE0: register and scheduling differences; not matched yet.
// func_001CBD90: differs: the sltu / xori for the flag, and the register of the first pointer
#if 0
int func_001CBD90(void *unused, Arg *a) {
    int *p = a->p;
    Side *s = (Side *)D_00470570->tbl[p[1]];
    if (s->n > 0) {
        *(s32 *)((char *)s->blk[0] + s->n * 8 + 8) = -(p[0] == 0);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBD90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBDF0);
// func_001CBE80: differs: register and load order of the table walk
#if 0
int func_001CBE80(void *unused, Arg *a) {
    int *p = a->p;
    Side *s = (Side *)D_00470570->tbl[p[3]];
    short v = s->idx[p[1]];
    ((int *)((char *)s->blk[0] + v * 8))[2] = p[0];
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBE80);
// func_001CBEE0: differs: the load order of the parameters (p[0] before the table walk)
#if 0
int func_001CBEE0(void *unused, Arg *a) {
    int *p = a->p;
    Side *s = (Side *)((char *)D_00470570->tbl[p[3]] + p[2] * 0x680);
    if (p[1] >= 0) {
        *(s32 *)((char *)s->blk[0] + p[1] * 8 + 8) = p[0];
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBEE0);
int func_001CBF50(void *unused, Arg *a) {
    int x = a->p[0];
    return func_00218960((char *)D_00470570 + (x << 5) + 0x5C4) ? 1 : 3;
}
int func_001CBF90(void *unused, Arg *a) {
    *(int *)a = func_00218960((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int func_001CBFE0(void *unused, Arg *a) {
    if (*(short *)((char *)D_00470570 + 0x7E6) != -1) {
        func_00219270(-1);
    }
    return 1;
}
int func_001CC020(void *unused, Arg *a) {
    int r;
    if (*(short *)((char *)D_00470570 + 0x7E6) != -1) {
        r = func_00218B60(*(short *)((char *)D_00470570 + 0x7E4), 1);
        func_00219270(r);
    }
    return 1;
}
int func_001CC070(void *unused, Arg *a) {
    char *q = *(char **)unused;
    int *p = a->p;
    func_00218C40((char *)D_00470570 + (p[2] << 5) + 0x5C4, *(int *)(q + 0x10), *(int *)(q + 0x14), *(int *)(q + 0x18), *(float *)&p[1], (float)p[0]);
    return 1;
}
int func_001CC0C0(void *unused, Arg *a) {
    int *p = a->p;
    func_00219340((char *)D_00470570 + (p[1] << 5) + 0x5C4, *(float *)p);
    return 1;
}
int func_001CC100(void *unused, Arg *a) {
    int *p = a->p;
    char *e = (char *)(p[0] << 5);
    *(float *)((char *)a + 0x40) = *(float *)(e + (int)D_00470570 + 0x5C4);
    return 1;
}
int func_001CC130(void *unused, Arg *a) {
    func_00219390((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int func_001CC170(void *unused, Arg *a) {
    func_00219470((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC1B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC270);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC4B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC710);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC7C0);
int func_001CC850(void *unused, Arg *a) {
    func_001D9CA0(D_00470570->tbl[a->p[0]], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC9A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCA90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCBF0);
int func_001CCC70(void *unused, Arg *a) {
    func_001E57F0(1);
    return 1;
}
int func_001CCC90(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x18) : 0.0f;
    return 1;
}
int func_001CCCC0(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x14) : 0.0f;
    return 1;
}
int func_001CCCF0(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x10) : 0.0f;
    return 1;
}
int func_001CCD20(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x8) : 0.0f;
    return 1;
}
int func_001CCD50(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x4) : 0.0f;
    return 1;
}
int func_001CCD80(void *unused, Arg *a) {
    char *p = *(char **)((char *)D_00470570 + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)p : 0.0f;
    return 1;
}
int func_001CCDB0(void *unused, Arg *a) {
    D_004B4218[0] = *(f32 *)a->p;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCDD0);
int func_001CCF30(void *unused, Arg *a) {
    func_001A8770(3, 0);
    return 1;
}
int func_001CCF60(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    f32 buf[6];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    f32 x4 = f[4];
    buf[0] = x4;
    buf[1] = x3;
    buf[2] = x2;
    buf[3] = 1.0f;
    buf[4] = x1;
    buf[5] = x0;
    func_001A8770(2, buf);
    return 1;
}
int func_001CCFC0(void *unused, Arg *a) {
    D_004B4214[0] = *(f32 *)a->p;
    return 1;
}
int func_001CCFE0(void *unused, Arg *a) {
    D_004B4210[0] = *(f32 *)a->p;
    return 1;
}
int func_001CD000(void *unused, Arg *a) {
    D_004B4210[0] = ((f32 *)a->p)[3];
    D_004B4214[0] = ((f32 *)a->p)[2];
    D_004B4218[0] = ((f32 *)a->p)[1];
    D_004B421C[0] = ((f32 *)a->p)[0];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD050);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD270);
int func_001CD2C0(void *unused, Arg *a) {
    func_001D8FE0(D_00470570->tbl[a->p[0]], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD340);
int func_001CD530(void *unused, Arg *a) {
    int *p = a->p;
    char *e = (char *)D_00470570->tbl[p[2]] + p[1] * 0x680;
    int *blk = *(int **)(e + 0xB88);
    *(s32 *)a = amMotion_FindBone(blk[1], *(int *)((char *)a + 0x20) + p[0]);
    return 1;
}
int func_001CD5B0(void *unused, Arg *a) {
    int *p = a->p;
    char *t = D_00470570->tbl[p[1]];
    func_001E18B0(t, p[0]);
    func_001E3550(t);
    return 1;
}
int func_001CD610(void *unused, Arg *a) {
    *((char *)D_00470570->tbl[a->p[0]] + 0x2016) = 1;
    return 1;
}
int func_001CD640(void *unused, Arg *a) {
    int *p = a->p;
    char *t = D_00470570->tbl[p[1]];
    func_001E1A40(t, p[0]);
    func_001E3550(t);
    return 1;
}
int func_001CD6A0(void *unused, Arg *a) {
    int *p = a->p;
    char *t = D_00470570->tbl[p[2]];
    func_001E1BD0(t, p[1], p[0]);
    func_001E3550(t);
    return 1;
}
int func_001CD700(void *unused, Arg *a) {
    void *x[2];
    x[0] = D_00470570->tbl[0];
    x[1] = D_00470570->tbl[1];
    func_00237000(6, x);
    return 1;
}
int func_001CD750(void *unused, Arg *a) {
    char *t = D_00470570->tbl[a->p[0]];
    *(s32 *)a = 0;
    if (*(s8 *)(t + 0x1FF8) > -1) {
        *(s32 *)a = *(s8 *)(t + 0x2013);
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD7A0);
int func_001CD800(void *unused, Arg *a) {
    char *t = D_00470570->tbl[a->p[0]];
    *(f32 *)((char *)a + 0x40) = 360.0f * ((f32)*(s32 *)(t + 0x17A4) / 65536.0f);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD850);
int func_001CD8B0(void *unused, Arg *a) {
    func_001DD680(D_00470570->tbl[a->p[0]], 1);
    return 1;
}
int func_001CD8F0(void *unused, Arg *a) {
    *(s32 *)a = *(s8 *)((char *)D_00470570->tbl[a->p[0]] + 0x1FF8) <= -1;
    return 1;
}

int func_001CD930(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = func_001DFA90(D_00470570->tbl[p[1]], p[0]);
    return 1;
}
int func_001CD980(void *unused, Arg *a) {
    char *q = *(char **)((char *)D_00470570->tbl[a->p[0]] + 0x1CF4);
    *(s32 *)a = *(s16 *)(q + 0x12);
    return 1;
}
int func_001CD9C0(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)D_00470570->tbl[p[1]] + p[0] * 0x680 + 0xBA0);
    return 1;
}
int func_001CDA10(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)D_00470570->tbl[p[1]] + p[0] * 0x680 + 0xBA4);
    return 1;
}
int func_001CDA60(void *unused, Arg *a) {
    *(s32 *)a = *(s32 *)((char *)D_00470570->tbl[a->p[0]] + 0x1CFC);
    return 1;
}
int func_001CDA90(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)D_00470570->tbl[p[1]] + p[0] * 0x680 + 0xB9C);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDAE0);
int func_001CDB20(void *unused, Arg *a) {
    char *t = D_00470570->tbl[*a->p];
    f32 f = (*(f32 *)(t + 0x1A40) > 0.0f) ? *(f32 *)(t + 0x17D4) : *(f32 *)(t + 0x17D0);
    *(s32 *)a = (s32)f;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDB80);
int func_001CDBC0(void *unused, Arg *a) {
    *(s32 *)a = (s32)*(f32 *)((char *)D_00470570->tbl[a->p[0]] + 0x17C0);
    return 1;
}
int func_001CDC00(void *unused, Arg *a) {
    *(s32 *)a = *(s32 *)((char *)D_00470570->tbl[a->p[1]] + 0xB70);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDC30);
int func_001CDCA0(void *unused, Arg *a) {
    *(s32 *)a = *(s8 *)((char *)D_00470570->tbl[a->p[0]] + 0x1FF9);
    return 1;
}
int func_001CDCD0(void *unused, Arg *a) {
    int *p = a->p;
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)D_00470570->tbl[p[1]] + p[0] * 0x680 + 0xCB8);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDD20);
int func_001CDD80(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)D_00470570 + 0x8968);
    return 1;
}
int func_001CDDA0(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)D_00470570 + 0x8964);
    return 1;
}
int func_001CDDC0(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)D_00470570 + 0x8960);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDDE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDE40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDEA0);
int func_001CDF00(void *unused, Arg *a) {
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDF10);
int func_001CDF80(void *unused, Arg *a) {
    int *p = a->p;
    func_001DFE60(D_00470570->tbl[p[1]], 0, (f32)-p[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDFD0);
// func_001CE030: differs: register order of the arguments and the loads through p[0]
#if 0
int func_001CE030(void *unused, Arg *a) {
    int *p = a->p;
    func_001DFC80(D_00470570->tbl[p[2]], p[1], (f32)*(s32 *)p[0]);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE110);
int func_001CE1F0(void *unused, Arg *a) {
    char *t = D_00470570->tbl[a->p[0]];
    *(f32 *)(t + 0x17C0) = *(f32 *)(t + 0x17C4);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE2A0);
// func_001CE340: differs: the register of the first pointer and the sltu / xori flag
#if 0
int func_001CE340(void *unused, Arg *a) {
    int *p = a->p;
    *(s8 *)((char *)D_00470570->tbl[p[2]] + p[1] * 0x680 + 0xCBE) = p[0] == 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE340);
// func_001CE3A0: differs: the same as func_001CE340
#if 0
int func_001CE3A0(void *unused, Arg *a) {
    int *p = a->p;
    *(s8 *)((char *)D_00470570->tbl[p[2]] + p[1] * 0x680 + 0xCBD) = p[0] == 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE3A0);
int func_001CE400(void *unused, Arg *a) {
    *(f32 *)((char *)D_00470570->tbl[a->p[1]] + 0x1A08) = *(f32 *)a->p;
    return 1;
}
int func_001CE430(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    char *t = D_00470570->tbl[a->p[5]];
    f32 v0 = f[0];
    f32 v1 = f[1];
    f32 v2 = f[2];
    f32 v3 = f[3];
    f32 v4 = f[4];
    *(f32 *)(t + 0x19F4) = v4;
    *(f32 *)(t + 0x19F8) = v3;
    *(f32 *)(t + 0x19FC) = v2;
    *(f32 *)(t + 0x1A00) = v1;
    *(f32 *)(t + 0x1A04) = v0;
    return 1;
}
int func_001CE480(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    f32 x0 = f[0];
    f32 x1 = f[1];
    char *t = D_00470570->tbl[p[3]];
    int e = p[2] * 0x680;
    *(f32 *)(t + e + 0xCA4) = x1;
    *(f32 *)(t + e + 0xCA8) = x0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE4E0);
// func_001CE560: differs: the original is li 1 / movz for the flag argument, not sltu
#if 0
int func_001CE560(void *unused, Arg *a) {
    int *p = a->p;
    func_001D7CC0(D_00470570->tbl[p[1]], p[0] != 0);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE560);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE5B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE610);
// func_001CE740: differs: the same float constant register as func_001CEE80
#if 0
int func_001CE740(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    char *t = D_00470570->tbl[p[3]];
    *(s8 *)(t + 0x1A5E) = p[2];
    *(s8 *)(t + 0x1A64) = p[2] != -1;
    *(s16 *)(t + 0x1A66) = p[1];
    *(f32 *)(t + 0x1A68) = *(f32 *)((char *)D_00470570 + 0x88F0);
    *(s32 *)(t + 0x1A60) = (s32)(65536.0f * (f[0] / 360.0f));
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE7C0);
int func_001CE820(void *unused, Arg *a) {
    *(f32 *)((char *)D_00470570->tbl[a->p[1]] + 0x182C) = *(f32 *)a->p;
    return 1;
}
int func_001CE850(void *unused, Arg *a) {
    D_004B423C[0] = *(f32 *)a->p;
    return 1;
}
int func_001CE870(void *unused, Arg *a) {
    D_004B4238[0] = *(f32 *)a->p;
    return 1;
}
int func_001CE890(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    s32 v4 = p[4];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    D_004B4230[0] = v4;
    D_004B4234[0] = x0;
    D_004B4220[0] = x3;
    D_004B4224[0] = x2;
    D_004B4228[0] = x1;
    D_004B422C[0] = 1.0f;
    return 1;
}
int func_001CE8F0(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    s32 v6 = p[6];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    f32 x4 = f[4];
    f32 x5 = f[5];
    D_004B4230[0] = v6;
    D_004B4234[0] = x2;
    D_004B4220[0] = x5;
    D_004B4224[0] = x4;
    D_004B4228[0] = x3;
    D_004B422C[0] = 1.0f;
    D_004B4238[0] = x1;
    D_004B423C[0] = x0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE960);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CED20);
// func_001CEDE0: differs: the same as func_001CEE80 (float constant register)
#if 0
int func_001CEDE0(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    char *t = D_00470570->tbl[a->p[3]];
    *(f32 *)(t + 0x1828) = f[2];
    *(s32 *)(t + 0x1838) = (s32)(65536.0f * (f[0] / 360.0f));
    *(s32 *)(t + 0x1834) = (s32)(65536.0f * (f[1] / 360.0f));
    *(s8 *)(t + 0x183C) = 5;
    func_001C75D0(t, 20);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEDE0);
// func_001CEE80: differs: float constant 360.0f kept in another register; the original loads it first
#if 0
int func_001CEE80(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    char *t = D_00470570->tbl[a->p[3]];
    *(f32 *)(t + 0x1828) = f[1];
    *(s32 *)(t + 0x1834) = (s32)(65536.0f * (f[0] / 360.0f));
    *(s32 *)(t + 0x1838) = 0;
    *(s8 *)(t + 0x183C) = a->p[2];
    func_001C75D0(t, 20);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEF00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEF60);
int func_001CEFF0(void *unused, Arg *a) {
    func_001C75D0(D_00470570->tbl[a->p[0]], 0);
    return 1;
}
int func_001CF030(void *unused, Arg *a) {
    char *t = D_00470570->tbl[a->p[0]];
    func_001E4FA0(t, 2);
    func_001E4FA0(*(void **)(t + 0x1354), 2);
    func_001E4820(t, 1.0f, 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF0A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF100);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF2C0);
int func_001CF4A0(void *unused, Arg *a) {
    *(s32 *)a = func_001E1690(D_00470570->tbl[a->p[0]]);
    return 1;
}
int func_001CF4F0(void *unused, Arg *a) {
    char *t = D_00470570->tbl[a->p[0]];
    func_001C81D0(t, *(s32 *)(t + 0xBA8));
    return 1;
}
int func_001CF530(void *unused, Arg *a) {
    int *p = a->p;
    func_001C8210(D_00470570->tbl[p[1]], p[0]);
    return 1;
}

int func_001CF570(void *unused, Arg *a) {
    int side = a->p[1];
    int id = a->p[0];
    func_001C8480(D_00470570->tbl[side], id);
    func_001C7D90(D_00470570->tbl[side], id, D_00470570->tbl[1 - side]);
    return 1;
}
// func_001CF600: size: the original also loads p[0] and p[1], which the source does not use
#if 0
int func_001CF600(void *unused, Arg *a) {
    int *p = a->p;
    char *t = D_00470570->tbl[p[3]];
    int s0 = p[2];
    char *q = *(char **)(t + 0x1CF8);
    short v = *(short *)(q + s0 * 20 + 0xD6);
    func_001C8A50(t, s0, v);
    func_001C89A0(t, s0);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF600);
int func_001CF690(void *unused, Arg *a) {
    int *p = a->p;
    func_001C8860(D_00470570->tbl[p[1]], p[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF6D0);
int func_001CF730(void *o, Arg *a) {
    int *p = a->p;
    s32 b = p[0];
    *(s8 *)((char *)o + 0x28) = p[1];
    *(s8 *)((char *)o + 0x29) = b;
    *(void **)((char *)o + 0x10) = func_001CF6D0;
    return 3;
}
int func_001CF760(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = func_001C8780(D_00470570->tbl[p[1]], p[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF7B0);
int func_001CF810(void *unused, Arg *a) {
    int *p = a->p;
    char *t = D_00470570->tbl[p[2]];
    s32 b = p[0];
    *(s16 *)(t + 0x1AD2) = p[1];
    *(s16 *)(t + 0x1AD4) = b;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF850);
int func_001CF8B0(void *unused, Arg *a) {
    if (*a->p != 0) {
        func_0029D8B0(-5, 0);
    } else {
        func_0029D8B0(-1, 4);
    }
    return 1;
}
int func_001CF900(void *unused, Arg *a) {
    *(s8 *)((char *)D_00470570 + 0x8AAE) = *a->p;
    return 1;
}
int func_001CF920(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)D_00470570 + 0x88F0);
    return 1;
}
int func_001CF940(void *unused, Arg *a) {
    *(s32 *)a = (s32)(0.5f + *(f32 *)((char *)D_00470570 + 0x8914));
    return 1;
}
int func_001CF970(void *unused, Arg *a) {
    *(s32 *)((char *)D_00470570 + 0x8914) = 0;
    return 1;
}
int func_001CF990(void *o, Arg *a) {
    int r;
    if (0.5f + *(f32 *)((char *)D_00470570 + 0x8914) >= (f32)*(s32 *)((char *)o + 0x24)) {
        *(void **)((char *)o + 0x10) = 0;
        r = 1;
    } else {
        r = 3;
    }
    return r;
}
int func_001CF9E0(void *o, Arg *a) {
    *(s32 *)((char *)o + 0x24) = *a->p;
    *(void **)((char *)o + 0x10) = func_001CF990;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFA00);
// func_001CFA60: differs: the original loads D_00470570 and a->p before the stores, in another order
#if 0
int func_001CFA60(void *o, Arg *a) {
    *(void **)((char *)o + 0x10) = func_001CFA00;
    *(s32 *)((char *)o + 0x24) = *a->p;
    *(f32 *)((char *)o + 0x2C) = *(f32 *)((char *)D_00470570 + 0x8914);
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFA60);

int func_001CFAA0(void *unused, Arg *a) {
    return 1;
}
int func_001CFAB0(void *unused, Arg *a) {
    return 1;
}
int func_001CFAC0(void *unused, Arg *a) {
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFAD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFB80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFE50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFF90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D00C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D01C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D02C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D03E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D05D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D06F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0860);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0990);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0A20);
