#include "common.h"
#include "menu/menu.h"
#include "menu/mn_TourMode.h"
#include "story/str_status.h"

extern s32 *D_0046FE44;
extern s32 *D_0047011C;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void func_00145CC0(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_002C0860(s32 *);
extern void func_002BDF50(void *, void *);
extern void func_00209530(s32);
extern void func_00215230(s32, s32);
extern void func_00214FD0(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void *D_0046FDCC;
extern char D_005BCF80[];
extern void memset(void *, s32, s32);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);
extern void func_00243ED0(void);
extern void func_002CA3F0(void);
extern void func_00209450(s32, s32);
extern void func_00243F20(void);
extern void func_002CA440(void);
extern void func_002BEA30(void);
extern void func_00215900(void);
extern void func_00244150(void);
extern void func_002BE320(s32);
extern void func_002BEB50(void);
extern void func_002CA4A0(void);
extern void func_002C03B0(s32 *);
extern void func_0022C700();
extern TourModeGlobal *gTourMode;
extern char D_0046EE10[];
extern void (*D_0046EE30[])(void *);
extern void func_0028EB40(Task *, s32, void (*)(Task *), s32);
extern void func_002BD140(Task *);
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD140);
void func_002BD3A0(Task *t) {
    if (((s16 *)D_00470910->f4)[2] == 3) {
        if (D_00470910->f284 != 0) {
            func_0028EB40(t, 10, func_002BD140, 0);
        } else {
            func_002BD140(t);
        }
    }
}
typedef struct StrStatusCopy {
    u8 b00, b01, b02, b03, b04, b05, b06, b07, b08, b09, b0A, b0B;
    s32 w0C;
    s32 w10;
    char pad14[4];
    s32 w18;
    s32 w1C;
    s32 w20;
    s32 w24;
    s32 w28;
    s32 w2C;
    s32 w30;
} StrStatusCopy;

void func_002BD400(StrStatusCopy *out) {
    out->b00 = D_00470910->f288[0];
    out->b01 = D_00470910->f288[1];
    out->b02 = D_00470910->f288[2];
    out->b03 = D_00470910->f288[3];
    out->b04 = D_00470910->f288[4];
    out->w0C = D_00470910->f2D4;
    out->w10 = 0;
    out->b05 = D_00470910->f288[5];
    out->b06 = D_00470910->f288[6];
    out->b07 = D_00470910->f288[7];
    out->b08 = D_00470910->f288[8];
    out->b09 = D_00470910->f288[9];
    out->b0A = D_00470910->f288[10];
    out->b0B = D_00470910->f288[11];
    out->w18 = D_00470910->f2DC[0];
    out->w1C = D_00470910->f2DC[1];
    out->w20 = D_00470910->f2DC[2];
    out->w24 = D_00470910->f2DC[3];
    out->w28 = D_00470910->f2DC[4];
    out->w2C = D_00470910->f2DC[5];
    out->w30 = D_00470910->f2DC[6];
}
void StrStatus_ClearWork(void) {
    D_00470910 = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD510);
void func_002BD660(s32 a, s32 b) {
    D_00470910->f274 = a;
    D_00470910->f278 = b;
    D_00470910->f38 = amTask_Create(func_002BD3A0, NULL, a, 2, b, D_0046EE10);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD6B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDC50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDD10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDE80);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDF50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE0B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE320);

void func_002BE4E0(s32 *a0) {
    s32 m = a0[0x14 / 4];
    s32 *g = D_0046FE44;
    switch (m) {
    case 0:
        g[0x2C / 4] = g[0x2C / 4] | 2;
        break;
    case 1:
        g[0x2C / 4] = g[0x2C / 4] & -3;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE530);
void func_002BE710(s32 *a0) {
    s32 m = a0[0x14 / 4];
    switch (m) {
    case 0:
        if (D_0047011C[0x1B4 / 4] != 0) {
            func_00209530(D_0047011C[0x1B4 / 4]);
            D_0047011C[0x1B4 / 4] = 0;
        }
        *(s16 *)((char *)a0 + 0x2A) = 0xE;
        *(s16 *)((char *)a0 + 0x2C) = 0;
        a0[0x24 / 4] = 0x400010;
        func_002BDF50((void *)((char *)D_0047011C + 0x1B4), a0);
        break;
    case 1:
        if (D_0047011C[0x1B4 / 4] != 0) {
            func_00209530(D_0047011C[0x1B4 / 4]);
            D_0047011C[0x1B4 / 4] = 0;
        }
        break;
    }
}

void func_002BE7C0(s32 *a0) {
    s32 m = a0[0x14 / 4];
    switch (m) {
    case 0:
        D_0047011C[0x1BC / 4] = D_0047011C[0x1BC / 4] | 1;
        D_0047011C[0x1C0 / 4] = 0;
        break;
    case 1:
        D_0047011C[0x1BC / 4] = D_0047011C[0x1BC / 4] & -2;
        D_0047011C[0x1C0 / 4] = 0;
        break;
    }
}

void func_002BE830(char *p) {
    *(s16 *)(p + 0x2A) = 6;
    *(s16 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x24) = 0x400010;
    func_002BDF50((char *)D_0047011C + (D_0047011C[0x1A8 / 4] << 2) + 0x160, p);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE870);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEA30);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEB50);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

#if 0
// func_002BECB0: the layout of the table test (the then-block after a branch to the join) differs; three forms tried
s32 func_002BECB0(s32 a0, s32 a1) {
    s32 s1 = D_0046EE50[a0];
    s32 s0 = a1;
    s32 *s2;
    s32 r;
    if (s1 != 7) {
        ;
    } else {
        if (a1 == 3) {
            s0 = 4;
        }
    }
    *(s32 *)((char *)D_0046FE48 + 0x3C8) = amCdFs_ReadFileId(0xC, 0, 1);
    *(s16 *)((char *)D_0046FE44 + 0x102) = 1;
    r = func_00243E50(0, s1);
    s2 = D_0046FE44;
    memset(s2, 0, 0x80);
    s2[0] = 0;
    *(f32 *)&s2[1] = 1.0f;
    s2[2] = 0;
    *(f32 *)&s2[3] = 1.0f;
    *(s8 *)((char *)s2 + 0x38) = 0;
    *(s16 *)((char *)s2 + 0x34) = (s16)s0;
    *(s16 *)((char *)s2 + 0x36) = (s16)s1;
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BECB0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BED90);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEEE0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEF00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF000);

void func_002BF310(void) {
    s32 i;
    s32 off = 0;
    for (i = 0; i < 8; i++) {
        if (*(s32 *)((char *)D_0047011C + off + 0x160) != 0) {
            func_00209530(*(s32 *)((char *)D_0047011C + off + 0x160));
            *(s32 *)((char *)D_0047011C + off + 0x160) = 0;
        }
        *(s32 *)((char *)D_0047011C + off + 0x180) = -1;
        off += 4;
    }
    if (D_0047011C[0x1AC / 4] != 0) {
        amTask_Kill((Task *)D_0047011C[0x1AC / 4]);
        D_0047011C[0x1AC / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF3B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF520);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF610);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF850);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF970);

void func_002BFC00(s32 *p) {
    if (p[4] >= 0 && p[4] < 6) {
        D_0046EE30[p[4]](p);
    }
}

void func_002BFC50(void) {
    func_00215230(-1, -1);
    func_00214FD0();
    amTask_KillGroup(0x400, 0x20000, 0);
    memset(D_0046FDCC, 0, 0xA0);
    D_0047011C[0x1BC / 4] &= -3;
    if (D_0047011C[0x1A4 / 4] != 0) {
        func_00209530(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
}

void func_002BFCF0(void) {
    memset(D_0046FDCC, 0, 0xA0);
    func_00243ED0();
    func_002CA3F0();
    func_00209450(0x400008, 1);
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400040, 1);
    func_00209450(0x400080, 1);
    memset(D_005BCF80, 0, 0x2E0);
}

void func_002BFD90(void) {
    func_00215230(-1, -1);
    func_00214FD0();
    amTask_KillGroup(0x400, 0x20000, 0);
    memset(D_0046FDCC, 0, 0xA0);
    D_0047011C[0x1BC / 4] &= -3;
    if (D_0047011C[0x1A4 / 4] != 0) {
        func_00209530(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400008, 1);
    func_00243F20();
    func_002CA440();
    func_002BEA30();
}

void func_002BFE60(s32 a0) {
    if (a0 == 0 || D_0047011C[0x1C4 / 4] != 0) {
        return;
    }
    func_00215900();
    func_00244150();
    func_002BE320(a0);
    func_002BEB50();
    func_002CA4A0();
    D_0047011C[0x1C4 / 4] = 1;
    D_0047011C[0x1CC / 4] = a0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFEE0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFFD0);
extern void func_00133B50(s32, s32);
extern void func_00133780(s32, s32);
extern void func_002BFFD0(void *, s32);
extern void func_002C02C0(void);

extern void func_00133B50(s32, s32);
extern void func_00133780(s32, s32);
extern void func_002BFFD0(void *, s32);
extern void func_002C02C0(void);

void func_002C0220(s32 *a0) {
    char *s0 = (char *)a0 + 0x30;
    if ((*(u16 *)((char *)a0 + 0x3A) & 1) == 0) {
        func_00133B50(0, 0);
    }
    if ((*(u16 *)(s0 + 0xA) & 2) != 0) {
        func_00133780(0, 1);
    }
    func_002BFFD0(s0, 0);
    func_00133780(0, 0);
    {
        s32 *p = (s32 *)s0;
        if (p[0x10 / 4] != p[0xC / 4]) {
            void *f = func_002C02C0;
            p[0x10 / 4] = p[0xC / 4];
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C02C0);
extern void func_002C02C0(void);

extern void func_002C02C0(void);

#if 0
// func_002C03B0: the store through the sub-struct pointer (a2 = a0 + 0x30) is folded into a0 + 0x40 by the compiler; the original keeps a2 in a register
void func_002C03B0(s32 *a0) {
    s32 a1 = a0[0x3C / 4];
    if (a1 != -1) {
        void *f = func_002C02C0;
        s32 *a2 = a0 + 0x30 / 4;
        a2[0x10 / 4] = a1;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03B0);

#if 0
// func_002C03E0: all but the last two registers agree; the function address and the constant 2 swap registers; four variants tried
void func_002C03E0(s32 *a0) {
    s32 *s0 = a0 + 0x30 / 4;
    s32 *p;
    *(s16 *)((char *)a0 + 0x38) = 1;
    p = (s32 *)a0[0x30 / 4];
    if (*(s16 *)((char *)p + 4) == 3) {
        s0[1] = p[0x54 / 4];
        ((s32 *)s0[0])[0x54 / 4] = 0;
        amCdFs_Close(s0[0], 0);
        s0[0] = 0;
        amFile_Load(s0[1]);
        {
            void *f = func_002C03B0;
            *(s16 *)((char *)s0 + 8) = 2;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03E0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0470);
void func_002C0490(void *p, s16 v) {
    ((s32 *)p)[0xF] = v;
}
void *func_002C04A0(void) {
    return NULL;
}
void func_002C04B0(Task *p) {
    s32 *s0 = (s32 *)((char *)p + 0x30);
    if (s0[0] != 0) {
        amCdFs_Close(s0[0], 0);
    }
    if (s0[1] != 0) {
        amHeap_Free((void *)s0[1]);
    }
    amTask_Kill(p);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0510);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0630);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0750);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0860);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0FC0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1160);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1320);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C15E0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1720);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1860);

void func_002C19F0(Task *task) {
    func_0022C700(task);
}
// func_002C1A00: the loads of the work block and the order of the two calls differ; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1A00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1AA0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1BC0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1CF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1E10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1F90);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2470);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2560);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C27B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C28A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C29A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2FF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3120);
// func_002C3220: the same shape as func_002C1A00; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3220);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C32C0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3A10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3B40);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3D20);

void StrStatus_ClearTourMode(void) {
    gTourMode = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3E40);
