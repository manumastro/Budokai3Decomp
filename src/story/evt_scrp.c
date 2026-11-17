#include "common.h"
#include "menu/menu.h"

extern void func_002A0700(s32, s32, f32 *);
extern void func_002A07A0(s32, s32, f32 *);
extern void func_002A0CE0(s32, s32, f32 *);

INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1510);
extern s32 *gEvtWork;
extern u64 D_004700D8;
extern s8 D_004B4B63[];
extern char D_004E77C4[];
extern s8 D_00511450[];
extern char D_00492FCE[];
extern void amCdFs_Close(s32, s32);
extern void Scr_SetData(s32, s32);
extern void func_002A6210(void);
extern void Zenie_Update();
extern void Zenie_Draw(void);
extern void Zenie_Close(s32);
extern s32 func_002A1020(s32);

#if 0
// func_002A1640: the original loads the global into a saved register in the delay slot of amTask_Kill (lw s0); ours loads it into v0 after the call; four forms tried
void func_002A1640(void *a0) {
    void *p = a0;
    Zenie_Update(p);
    Zenie_Draw();
    if (func_002A1020(5) == 0) {
        amTask_Kill(p);
        gEvtWork[0x40 / 4] = 0;
        Zenie_Close(0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1640);
extern void func_002A1640(void *);
extern void Zenie_SetF18(s32);
extern void Zenie_SetStep(s32);

void EvtZenie_TaskMain(s32 *a0) {
    void *f;
    Zenie_Update(a0);
    Zenie_Draw();
    if (func_002A1020(4) == 0) {
        f = func_002A1640;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        Zenie_SetF18(0);
        Zenie_SetStep(0x98967F);
    }
}
#if 0
// func_002A1700: 32 of 49 differ: the blk stores of 1.0 (the original stores 48, 52, 56, 60 in order, then the division into 60 from the jal delay slot; ours reuses an address register for 60, or stores descending with a chained assignment) and the early-exit layout of the func_002A1020 test (`bnez` to the epilogue, the task store after a nop pair)
extern f32 func_002B06A0(void);
extern void func_002A1510(s32);
void func_002A1700(s32 *a0) {
    s32 *s0 = gEvtWork;
    f32 blk[4];
    f32 t;
    blk[0] = blk[1] = blk[2] = blk[3] = 1.0f;
    blk[3] = *(f32 *)&s0[0x5C / 4] / *(f32 *)&s0[0x60 / 4];
    t = func_002B06A0();
    *(f32 *)&s0[0x5C / 4] = *(f32 *)&s0[0x5C / 4] - t;
    func_002A1510((s32)blk);
    Zenie_Update();
    Zenie_Draw();
    if (*(f32 *)&s0[0x5C / 4] < 0.0f || func_002A1020(4) == 0) {
        void *f = EvtZenie_TaskMain;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1700);
#if 0
// func_002A17D0: the Zenie step: the branch end and the clamp arm are laid out differently (the original ends 8 bytes later); the a1 clamp loads come in another order; 2 forms tried
extern f32 func_002B06A0(void);
extern void func_002A1510(s32);
extern void func_002A1700(void);
extern void Zenie_SetValue(s32, s32);
extern s32 D_00511448;
extern s8 D_004E6560[];

extern f32 func_002B06A0(void);
extern void func_002A1510(s32);
extern void func_002A1700(void);
extern void Zenie_SetValue(s32, s32);
extern s32 D_00511448;
extern s8 D_004E6560[];

void func_002A17D0(s32 *a0) {
    s32 *s0 = gEvtWork;
    f32 t;
    void *f;
    s32 a1;
    t = func_002B06A0();
    *(f32 *)&s0[0x5C / 4] = *(f32 *)&s0[0x5C / 4] + t;
    func_002A1510(0);
    Zenie_Update();
    Zenie_Draw();
    if (func_002A1020(3) == 0) {
        *(s32 *)&s0[0x5C / 4] = 0x41200000;
        s0[0x60 / 4] = 0x41200000;
        f = (void *)func_002A1700;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        a1 = D_00511448 + s0[0xF4 / 4];
        if (a1 >= 0xF1B31) {
            a1 = 0xF1B30;
        }
        Zenie_SetValue(*(s32 *)(D_004E6560 + 0x30000 - 0x5118), a1);
        Zenie_SetStep(10);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A17D0);
extern f32 func_002B06A0(void);
extern void func_002A1510(s32);
extern void func_0029AC30(void);
extern s32 D_00511448;
extern void Zenie_SetValue(s32, s32);
extern void func_002A17D0(void);

extern f32 func_002B06A0(void);
extern void func_002A1510(s32);
extern void func_0029AC30(void);
extern s32 D_00511448;
extern void Zenie_SetValue(s32, s32);
extern void func_002A17D0(void);

#if 0
// func_002A18A0: the parameter copy and gEvtWork swap saved registers (move s0,a0 in ours; s1 in the original); 2 declaration orders tried
void func_002A18A0(s32 *a0) {
    s32 *s1 = a0;
    s32 *s0 = (s32 *)gEvtWork;
    s32 blk[4];
    f32 t;
    void *f;
    blk[0] = 0x3F800000;
    blk[1] = 0x3F800000;
    blk[2] = 0x3F800000;
    blk[3] = 0x3F800000;
    t = *(f32 *)&s0[0x5C / 4] / *(f32 *)&s0[0x60 / 4];
    *(f32 *)&blk[3] = t;
    t = func_002B06A0();
    *(f32 *)&s0[0x5C / 4] = *(f32 *)&s0[0x5C / 4] + t;
    func_002A1510((s32)blk);
    if (!(*(f32 *)&s0[0x5C / 4] <= *(f32 *)&s0[0x60 / 4]) || func_002A1020(3) == 0) {
        func_0029AC30();
        Zenie_SetValue(D_00511448, D_00511448);
        s0[0x5C / 4] = 0;
        s0[0x60 / 4] = 0x42F00000;
        f = (void *)func_002A17D0;
        s1[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A18A0);
extern void func_002A18A0(s32 *);

void func_002A1980(s32 *a0) {
    s32 *g = gEvtWork;
    if (g[0x64 / 4] == 1) {
        void *f = func_002A18A0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A19B0);
extern u32 func_0012EAE0(s32);
extern s8 D_004E6560[];

#if 0
// func_002A1B30: the free-slot pick: the loop index and count take the other saved registers, the frame is 0x60 in the original (ours 0x50); 4 forms tried
s32 func_002A1B30(void) {
    s32 list[8];
    s32 cnt = 0;
    s32 k;
    s32 base;
    s32 mask;
    s32 idx;
    s32 bit;
    s8 *tb = D_004E6560;
    base = (s32)D_00511450[0] * 4624;
    mask = ((s8 *)D_004E77C4)[base] & 0x7F;
    for (k = 0; k < 7; k++) {
        if ((mask & (1 << k)) == 0) {
            list[cnt] = k;
            cnt++;
        }
    }
    idx = (s32)(func_0012EAE0(3) % (u32)cnt);
    bit = (s8)(1 << list[idx]);
    tb[base + 0x1264] = (s8)(tb[base + 0x1264] | bit);
    return list[idx];
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1B30);
extern void SklSheet_Free(void);
extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern void Save_Load(s32, s32);
extern void func_002A7F70(Task *);
extern char D_0046EA78[];
extern s32 func_00283BF0(void);

#if 0
// func_002A1C20: the state switch (halfword 5,1,4,2,0 as a beq chain with the out-of-line blocks) and the second function-table call layout; with goto labels and if/else forms 57-81 lines differ (the summary shows the count); 4 forms tried
void func_002A1C20(void) {
    s32 *s0 = (s32 *)gEvtWork;
    s32 s1;
    u16 v16;
    if (s0[0xFC / 4] >= s0[0xF8 / 4]) {
        if (func_00283BF0() >= 8) {
            SklSheet_Free();
            amTask_Kill((void *)s0[0x8 / 4]);
            s0[0x8 / 4] = 0;
            s0 = (s32 *)gEvtWork;
            s0[0x14 / 4] = 0x40000002;
            v16 = (u16)s0[0x14 / 4];
            if (v16 == 5) {
                goto cd0;
            }
            if (v16 == 1) {
                goto cd0;
            }
            if (v16 == 4) {
                goto cc0;
            }
            if (v16 == 2) {
                goto cc0;
            }
            if (v16 == 0) {
                goto cc0;
            }
            goto d28;
cc0:
            Save_Load(0x3000, 0);
cd0:
            s0[0x6C / 4] = amCdFs_ReadFileId(0x107D5, 0, 0);
            s0[0x70 / 4] = amCdFs_ReadFileId(0x107D6, 0, 0);
            s0[0x8 / 4] = (s32)amTask_Create(func_002A7F70, NULL, 0xB000, 0x4000, 0, D_0046EA78);
d28:
            s0[0x98 / 4] = 0;
            return;
        }
    }
    if (func_00283BF0() >= 8) {
        s0 = (s32 *)gEvtWork;
        s1 = s0[0x100 / 4 + s0[0xFC / 4]];
        SklSheet_Free();
        func_00283D00(0x9500, s1, 1, 0x11403000);
        SklSheet_SetIndex(s0[0x110 / 4 + s0[0xFC / 4]]);
        s0[0xFC / 4] = s0[0xFC / 4] + 1;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1C20);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1DB0);
extern u8 D_004E570D[];
extern s8 D_004B4BE9[];

extern u8 D_004E570D[];
extern s8 D_004B4BE9[];

extern u8 D_004E570D[];
extern s8 D_004B4BE9[];

#if 0
// func_002A1F30: a bit-table loop (2 bits per entry over three words): the register of the constants 1 and 3 and the loop index differ (51 lines differ); 4 forms tried; the division and remainder must be signed (/ and %)
void func_002A1F30(void) {
    s32 t2 = 0;
    s32 t1 = 0;
    s32 sh;
    s32 v;
    s32 a1v;
    s32 *g;
    do {
        sh = (t2 % 16) * 2;
        v = ((s32 *)D_004E6560)[t2 / 16] & (3 << sh);
        v = (s32)((u32)v >> sh);
        if (v > 0) {
            t1 |= 1 << t2;
        }
        t2++;
    } while (t2 < 0x26);
    if ((t1 & 0x23C9D) != 0x23C9D) {
        return;
    }
    a1v = (u8)D_004E6560[0x2B11D];
    if (a1v < (s32)D_004E570D[0]) {
        D_004E6560[0x2B11D] = (s8)(a1v + 1);
        g = gEvtWork;
        *(s32 *)((char *)g + g[0xF8 / 4] * 4 + 0x100) = 0x204;
        g[0xF8 / 4] = g[0xF8 / 4] + 1;
        D_004B4BE9[0] = 1;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1F30);
extern void amCdFs_ReleaseCache(s32);
extern void memset(void *, s32, s32);
extern char D_005AB3C0[];
extern s32 D_005AB490[];
extern s32 D_005AB494[];
extern s32 D_005AB498[];
extern s32 D_005AB49C[];
extern s16 D_005AB5E6[];
extern s16 D_005AB4B8[];
extern s16 D_005AB4BE[];
extern s16 D_005AB508[];
extern s16 D_005AB50E[];
extern s16 D_005AB558[];
extern s16 D_005AB5A8[];
extern s16 D_005AB55E[];
extern s16 D_005AB5AE[];

#if 0
// func_002A2020: the constant stores (1.0f in v0, 1 in v1, 8 in a0, -1) take other registers than in the original; 23 of 112 differ; 2 forms tried
s32 func_002A2020(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *s0;
    if (a1 < 0 || a1 >= 2) {
        a1 = 0;
    }
    s0 = (s32 *)(D_005AB3C0 + a0 * 104 + a1 * 52);
    if (s0[0] != 0) {
        amCdFs_ReleaseCache(s0[0]);
        s0[0] = 0;
    }
    s0[0] = a2;
    s0[1] = a3;
    s0[2] = (s32)((char *)s0[1] + *(s8 *)((char *)s0[1] + 4));
    s0[3] = (s32)((char *)s0[1] + *(s8 *)((char *)s0[1] + 8));
    s0[4] = *(s32 *)s0[2];
    s0[5] = s0[3];
    s0[6] = s0[3] + 0x98;
    s0[7] = s0[3] + 0x130;
    s0[8] = s0[3] + 0x1C8;
    s0[9] = s0[3] + 0x260;
    s0[10] = s0[3] + 0x2F8;
    s0[11] = s0[3] + 0x390;
    s0[12] = s0[3] + 0x428;
    D_005AB49C[0] = 0x3F800000;
    D_005AB490[0] = 0;
    D_005AB494[0] = 0;
    D_005AB498[0] = 0;
    memset(D_005AB490, 0, 0x180);
    D_005AB5E6[0] = -1;
    D_005AB4B8[0] = 8;
    D_005AB4BE[0] = 1;
    D_005AB508[0] = 8;
    D_005AB50E[0] = 1;
    D_005AB558[0] = 8;
    D_005AB5A8[0] = 8;
    D_005AB55E[0] = 1;
    D_005AB5AE[0] = 1;
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2020);
extern s32 func_002A2020();

void func_002A21E0(void) {
    func_002A2020();
}
#if 0
// func_002A21F0: the signature (f32 *, f32 x) matches the caller in 2A51E0 (the float in f12); 46 of 56 differ with the stores interleaved, 49 with the loads hoisted to locals (frame 0xA0 against 0x80): the 16-byte stack vectors need the loads in the original order without locals
extern f32 D_0047043C;
extern f32 D_00470440;
extern void func_00136E80(s32, s32, s32, s32, s32);
extern void func_001377E0(s32 *, s32 *);
extern void amDraw_FlushPacket(void);
void func_002A21F0(f32 *a0, f32 x) {
    s32 st[8];
    f32 buf[8];
    f32 q0 = a0[0];
    f32 q1 = a0[1];
    f32 q2 = a0[2];
    f32 q3 = a0[3];
    f32 c1 = D_0047043C;
    f32 c0 = D_00470440;
    s32 k;
    s32 *p0;
    s32 *p1;
    st[0] = 0;
    st[4] = *(s32 *)&c1;
    st[1] = 0;
    st[5] = *(s32 *)&c0;
    *(f32 *)&st[2] = x;
    *(f32 *)&st[6] = x;
    buf[0] = q0;
    buf[4] = q0;
    buf[1] = q1;
    buf[5] = q1;
    buf[2] = q2;
    buf[6] = q2;
    buf[3] = q3;
    func_00136E80(0x20001800, 0, -1, 0x44, 0);
    buf[7] = q3;
    k = 0;
    p0 = st;
    p1 = (s32 *)buf;
    do {
        func_001377E0(p0, p1);
        k++;
        p0 += 4;
        p1 += 4;
    } while (k < 2);
    amDraw_FlushPacket();
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A21F0);
extern void func_002A5B00(void);
extern void func_0029A9F0(void);

void func_002A22C0(void) {
    s32 *s0 = gEvtWork;
    if (s0[2] != 0) {
        func_002A5B00();
    }
    if (s0[0x124 / 4] >= 0) {
        func_0029A9F0();
    }
}
extern void Fade_SetRequest(s32, void *, s32);
extern void func_002A22C0(void);

void *func_002A2310(void) {
    Fade_SetRequest(10, func_002A22C0, 0);
    return NULL;
}
void *func_002A2340(void) {
    return NULL;
}
#if 0
// func_002A2350: the 64-bit local is copied through a pointer and the table index load comes after the args load in the original; ours keeps the index load early; five forms tried
s32 func_002A2350(void *a0, char *a1) {
    u64 bits;
    u64 *pb = &bits;
    u32 *w;
    s32 *args;
    u16 row;
    *pb = D_004700D8;
    w = (u32 *)pb;
    args = *(s32 **)(a1 + 0x2C);
    row = *(u16 *)(D_00492FCE + D_004B4B63[0] * 0xB8);
    if ((row & w[args[0]]) != 0) {
        *(s32 *)a1 = 1;
    } else {
        *(s32 *)a1 = 0;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2350);
extern void func_002987E0(s32, s32);
extern void Scene_SetReady(void);

s32 func_002A23D0(void) {
    s8 *e = (s8 *)(D_004E77C4 + D_00511450[0] * 4624);
    if ((*e & 0x7F) == 0x7F) {
        func_002987E0(1, 0);
    } else {
        func_002987E0(2, 0);
    }
    Scene_SetReady();
    e = (s8 *)(D_004E77C4 + D_00511450[0] * 4624);
    *e = 0;
    return 1;
}
s32 func_002A2480(void) {
    return 3;
}
extern s32 func_002A2480(void);

s32 func_002A2490(void *p) {
    *(void **)((char *)p + 0x10) = func_002A2480;
    return 3;
}
extern void func_002AA3D0(s32, s32, s32);
extern void func_002AA340(s32, s32, s32);
extern void ScrCamSlot_Load(s32, s32, s32);
extern void func_002AA0D0(s32, s32, s32);
extern void func_002AA050(s32, s32, s32);
extern s32 D_005AB8A0[];
extern s32 D_005AB8A4[];
extern s32 D_005AB8A8[];
extern s32 D_005AB8AC[];
extern s32 D_005AB8B0[];

#if 0
// func_002A24B0: the type chain (five halfword tests against 3): the original is beq to the next test and b to the end (return 3 out of line), ours branches the other way; the calls and stores match; 2 forms tried
s32 func_002A24B0(s32 *a0, s32 a1) {
    s32 *s4 = (s32 *)D_005AB8A0[0];
    s32 *s3 = (s32 *)D_005AB8A4[0];
    s32 *s2 = (s32 *)D_005AB8A8[0];
    s32 *s1 = (s32 *)D_005AB8AC[0];
    s32 *s0 = (s32 *)D_005AB8B0[0];
    if (((s16 *)s4)[2] == 3) {
        if (((s16 *)s3)[2] == 3) {
            if (((s16 *)s2)[2] == 3) {
                if (((s16 *)s1)[2] == 3) {
                    if (((s16 *)s0)[2] == 3) {
                        func_002AA3D0(*(s32 *)a0[0], 0, ((s32 *)s4[0x40 / 4])[0x50 / 4]);
                        func_002AA340(*(s32 *)a0[0], 0, ((s32 *)s3[0x40 / 4])[0x50 / 4]);
                        ScrCamSlot_Load(*(s32 *)a0[0], 0, ((s32 *)s2[0x40 / 4])[0x50 / 4]);
                        func_002AA0D0(*(s32 *)a0[0], 0, ((s32 *)s1[0x40 / 4])[0x50 / 4]);
                        func_002AA050(*(s32 *)a0[0], 0, ((s32 *)s0[0x40 / 4])[0x50 / 4]);
                        s4[0x40 / 4] = 0;
                        s3[0x40 / 4] = 0;
                        s2[0x40 / 4] = 0;
                        s1[0x40 / 4] = 0;
                        s0[0x40 / 4] = 0;
                        amCdFs_Close((s32)s4, 0);
                        amCdFs_Close((s32)s3, 0);
                        amCdFs_Close((s32)s2, 0);
                        amCdFs_Close((s32)s1, 0);
                        amCdFs_Close((s32)s0, 0);
                        a0[4] = 0;
                        return 1;
                    }
                }
            }
        }
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A24B0);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_005AB8A0[];
extern s32 D_005AB8A4[];
extern s32 D_005AB8A8[];
extern s32 D_005AB8AC[];
extern s32 D_005AB8B0[];
extern s32 func_002A24B0(s32 *, s32);

void func_002A2670(s32 *a0, s32 a1) {
    D_005AB8A0[0] = amCdFs_ReadFileId(0x609, 0, 1);
    D_005AB8A4[0] = amCdFs_ReadFileId(0x60A, 0, 1);
    D_005AB8A8[0] = amCdFs_ReadFileId(0x608, 0, 1);
    D_005AB8AC[0] = amCdFs_ReadFileId(0x606, 0, 1);
    D_005AB8B0[0] = amCdFs_ReadFileId(0x607, 0, 1);
    a0[0x10 / 4] = (s32)func_002A24B0;
    func_002A24B0(a0, a1);
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2730);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2890);
extern void amCamera_Init(void *);
extern void func_00131B90(s32 *);
extern void func_00131D00(s32 *, s32, f32, f32);
extern s32 D_005AB800[];
extern s32 D_005AB804[];
extern s32 D_005AB808[];
extern s32 D_005AB80C[];
extern s32 D_005AB838[];
extern f32 D_005AB8C8[];
extern s32 D_005AB8CC[];
extern s32 D_005AB840[];
extern f32 D_00455924[];
extern void func_002A2890(s32 *, s32 *);
void func_002A2AA0(s32 *a0, s32 *a1) {
    f32 f22;
    f32 f21;
    f32 f20;
    s32 idx = D_00511450[0];
    f22 = *(f32 *)&((s32 *)a1[0x2C / 4])[1];
    f21 = *(f32 *)&((s32 *)a1[0x2C / 4])[0];
    f20 = *(f32 *)((char *)D_00455924 + idx * 28);
    amCamera_Init(D_005AB800);
    D_005AB800[0] = 0;
    D_005AB80C[0] = 0x3F800000;
    D_005AB804[0] = 0;
    D_005AB808[0] = 0;
    D_005AB838[0] = D_005AB838[0] | 1;
    func_00131B90(D_005AB840);
    func_00131D00(D_005AB840, 0, f22, f20);
    *(f32 *)&D_005AB8C8[0] = f21;
    D_005AB8CC[0] = 0;
    a0[0x10 / 4] = (s32)func_002A2890;
    func_002A2890(a0, a1);
}
extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

#if 0
// func_002A2BB0: the range test is laid out with the other register and branch sense; three forms tried
s32 func_002A2BB0(s32 *a0) {
    s32 s1 = D_00511450[0];
    s32 s0;
    if (s1 < 0x16) {
        ;
    } else {
        if (s1 < 0x1A) {
            s1 += 5;
        } else {
            s1 += 6;
        }
    }
    s0 = D_005AB7F0;
    if (func_0029E7F0(s0) != 0) {
        a0[0x10 / 4] = 0;
        func_0029E610(s0);
        func_0029E120(s0, s1, 1, 1.0f, 0.0f);
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2BB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2C70);
extern s32 func_00283BF0(void);
extern void SklSheet_Free(void);
extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);
extern void func_002A0D50(s32);

s32 func_002A2E50(s32 *a0) {
    s32 *g = gEvtWork;
    s32 s1v;
    if (g[0xFC / 4] >= g[0xF8 / 4]) {
        if (func_00283BF0() >= 8) {
            func_002A0D50(1);
            func_002A13C0(func_002A13B0() + 1);
            a0[0x10 / 4] = 0;
            return 1;
        }
    }
    if (func_00283BF0() >= 8) {
        s1v = g[0x100 / 4 + g[0xFC / 4]];
        SklSheet_Free();
        func_00283D00(0x9500, s1v, 1, 0x11403000);
        SklSheet_SetIndex(g[0x110 / 4 + g[0xFC / 4]]);
        g[0xFC / 4] = g[0xFC / 4] + 1;
    }
    return 3;
}
extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern void func_002A0D50(s32);

extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern void func_002A0D50(s32);
extern s32 func_002A2E50(s32 *);

extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);

s32 func_002A2F30(s32 *a0) {
    s32 *s0 = (s32 *)gEvtWork;
    if (s0[0x100 / 4] > 0) {
        func_00283D00(0x9500, s0[0x100 / 4], 1, 0x11403000);
        {
            s32 k4 = s0[0xFC / 4] * 4;
            SklSheet_SetIndex(*(s32 *)((char *)k4 + (s32)s0 + 0x110));
        }
        s0[0xFC / 4] = s0[0xFC / 4] + 1;
        func_002A0D50(0);
        a0[0x10 / 4] = (s32)func_002A2E50;
        return 3;
    }
    {
        s32 v = func_002A13B0();
        func_002A13C0(v + 1);
    }
    return 1;
}
extern s32 D_004700A0;

s32 func_002A2FD0(void *a0, char *a1) {
    D_004700A0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
extern s32 func_002A1310(void *);

s32 func_002A2FF0(void *a0, s32 *a1) {
    *a1 = func_002A1310(a0);
    return 1;
}
extern void func_002A1320(s32);
extern void func_002A12E0(s32);
extern void func_002A1300(s32);
extern void func_002A12F0(s32);

s32 func_002A3020(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 C = args[2];
    s32 A = args[1];
    s32 B = args[0];
    func_002A1320(args[3]);
    func_002A12E0(C);
    func_002A1300(A);
    func_002A12F0(B);
    return 1;
}
extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

#if 0
// func_002A3080: the local registers come out in another order (the copy of a1 and the two loads of the arguments); seven variants tried
s32 func_002A3080(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *out = (s32 *)a1;
    s32 s1 = args[1];
    s32 s0 = args[0];
    u32 r = func_0012EAE0(0x20) & 0x7FFFFFFF;
    *out = (s32)(r % (u32)(s0 - s1)) + s1;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3080);
extern void Zenie_Open(s32);
extern s32 *gEvtWork;

s32 Evt_CmdZenieOpen(void) {
    Zenie_Open(0);
    gEvtWork[0x64 / 4] = 1;
    return 1;
}
extern void func_002987E0(s32, s32);
extern void Scene_SetReady(void);
extern void func_00298E10(s32);
extern void func_00298E00(s32);
extern s32 D_004700A4;

s32 func_002A3120(void) {
    func_002987E0(0, 0);
    Scene_SetReady();
    if (D_004700A0 != -1) {
        func_00298E10(D_004700A0);
        D_004700A0 = -1;
    }
    if (D_004700A4 != -1) {
        func_00298E00(D_004700A4);
        D_004700A4 = -1;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3190);
extern void amCdFs_ReleaseCache(s32);
extern void memset(void *, s32, s32);
extern char D_005AB3C0[];

#if 0
// func_002A37E0: 1 of 76 differs: the index-path load of the key goes through the parameter register (a0), the original through the saved copy s2 (the copy is not kept); 3 forms tried
s32 func_002A37E0(s32 *a0, char *a1) {
    s32 *s2 = a0;
    s32 idx = ((s32 *)*(s32 **)(a1 + 0x2C))[0];
    s32 k;
    char *e;
    if (idx != -1) {
        e = D_005AB3C0 + *(s32 *)s2[0] * 104 + idx * 52;
        if (*(s32 *)(e + 4) != 0) {
            amCdFs_ReleaseCache(*(s32 *)e);
            *(s32 *)e = 0;
        }
        memset(e, 0, 0x34);
    } else {
        for (k = 0; k < 2; k++) {
            e = D_005AB3C0 + *(s32 *)s2[0] * 104 + k * 52;
            if (*(s32 *)(e + 4) != 0) {
                amCdFs_ReleaseCache(*(s32 *)e);
                *(s32 *)e = 0;
            }
            memset(e, 0, 0x34);
        }
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A37E0);
#if 0
// func_002A3910: the argument and state loads come in another order (the scheduler hoists the state load); three variants tried
s32 func_002A3910(s32 *a0, char *a1) {
    s32 *s1 = a0;
    s32 *s0 = (s32 *)a0[0x1C / 4];
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *a2 = (s32 *)a0[0];
    if (*(s16 *)((char *)s0 + 4) == 3) {
        s32 *q = (s32 *)s0[0x40 / 4];
        func_002A2020(*(s32 *)a2, (args[1] + 1) & 1, (s32)q, q[0x50 / 4]);
        s0[0x40 / 4] = 0;
        amCdFs_Close((s32)s0, 0);
        if (s1[0x18 / 4] != 0) {
            amCdFs_Close(s1[0x18 / 4], 0);
        }
        s1[0x18 / 4] = 0;
        s1[0x1C / 4] = 0;
        s1[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3910);
extern void func_002AFCA0(s32 *, char *);
extern s32 func_002A3910(s32 *, char *);

s32 func_002A39C0(s32 *a0, char *a1) {
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A3910;
    return func_002A3910(a0, a1);
}
extern s32 *gEvtWork;

#if 0
// func_002A3A10: the flag test gives movz for both constants (also with an early return), the original branches (b to the end); seven variants tried
s32 func_002A3A10(void) {
    s32 *g = gEvtWork;
    s32 r;
    if (g[0xC / 4] & 0x2) {
        r = 1;
    } else {
        r = 3;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A10);
#if 0
// func_002A3A40: the parameter and the global take the other saved registers in ours (s1/s2 swapped against the original); 3 orders tried
extern s32 func_002A8330(s32);
extern void func_00298B70(s32, s32);
extern void EvtScrp_Init(void);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_002A6E40(Task *);
extern s32 func_002A3A10(void);
extern s32 D_004700AC;
extern char D_0046EA68[];

s32 func_002A3A40(s32 *a0) {
    s32 *p = (s32 *)a0[0];
    s32 s0 = p[0];
    s32 s2 = D_004700AC;
    s32 s4 = (s32)((u32)s2 >> 16) & 0xFFFF;
    s32 s3;
    s32 v;
    s32 *g;
    s3 = func_002A8330(s4);
    if (s4 != 0xBB8) {
        func_00298B70(s2, s2 | 0x8000);
    }
    EvtScrp_Init();
    v = amCdFs_ReadFileId(s3, 0, 1);
    g = gEvtWork;
    g[0x18 / 4] = v;
    g[0x14 / 4] = s2;
    g[0xC / 4] = 0;
    g[0x8 / 4] = (s32)amTask_Create(func_002A6E40, NULL, 0x2000, 0x4000, 0, D_0046EA68);
    D_004700AC = -1;
    g = gEvtWork;
    g[0] = s0;
    g[0x10 / 4] = 1;
    g[0x3C / 4] = 0;
    a0[0x10 / 4] = (s32)func_002A3A10;
    return (gEvtWork[0xC / 4] & 2) ? 1 : 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A40);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3B50);
extern f32 D_00470410;
extern s32 func_002A3B50(s32 *);

s32 func_002A3C30(void *a0, char *a1) {
    s32 loc[4];
    f32 v = *(f32 *)*(s32 **)(a1 + 0x2C);
    loc[0] = 0;
    *(f32 *)&loc[1] = 0.0f;
    *(f32 *)&loc[2] = v;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    loc[0] = 0;
    *(f32 *)&loc[1] = 2.0f + (D_00470410 - 60.0f);
    *(f32 *)&loc[2] = v;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    return 3;
}
#if 0
// func_002A3CD0: 11 of 66 differ: the float callee order is right now; the original repeats `li v0,3` in both arms of the test (the then-arm ends in a b with the store in its delay slot), ours keeps one return; the duplicated-return forms gave 21 and 27 differ
s32 func_002A3CD0(s32 *a0, char *a1) {
    s32 loc[4];
    f32 av = *(f32 *)*(s32 **)(a1 + 0x2C);
    f32 pr = *(f32 *)&a0[0x2C / 4] * *(f32 *)&a0[0x38 / 4];
    loc[0] = 0;
    *(f32 *)&loc[1] = pr - 60.0f;
    *(f32 *)&loc[2] = av;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    loc[0] = 0;
    *(f32 *)&loc[1] = 2.0f + (D_00470410 - pr);
    *(f32 *)&loc[2] = av;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    *(f32 *)&a0[0x2C / 4] = *(f32 *)&a0[0x2C / 4] + 1.0f;
    if (*(f32 *)&a0[0x30 / 4] <= *(f32 *)&a0[0x2C / 4]) {
        void *f = func_002A3C30;
        a0[0x10 / 4] = (s32)((f == 0) ? 0 : f);
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3CD0);
extern s32 func_002A3CD0(s32 *, char *);

s32 Evt_CmdStartWait3CD0(s32 *p) {
    p[0x2C / 4] = 0;
    p[0x30 / 4] = 0x42080000;
    p[0x38 / 4] = 0x3FE1E1E2;
    p[0x10 / 4] = (s32)func_002A3CD0;
    return 3;
}
s32 func_002A3E10(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    if (func_002A1020(args[0]) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A3E10(s32 *, char *);

s32 Evt_CmdWaitCall2A1020(s32 *a0, char *a1) {
    a0[0x10 / 4] = (s32)func_002A3E10;
    if (func_002A1020((*(s32 **)(a1 + 0x2C))[0]) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}

s32 Evt_CmdVecCall2A0700(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0700(a0v, a1v, v);
    return 1;
}

extern char D_005AB610[];
extern void func_002A0750(s32, s32, s32, s32);

s32 Evt_CmdRowCall2A0750(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 t0 = **(s32 **)a0;
    char *row = D_005AB610 + t0 * 240 + args[2] * 24;
    func_002A0750(args[2], *(s32 *)(row + 0x14), args[1], args[0]);
    return 1;
}
extern void func_002A07D0(s32, s32, f32);

s32 Evt_CmdCall2A07D0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A07D0(args[2], args[1], *(f32 *)args);
    return 1;
}
s32 Evt_CmdVecCall2A07A0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A07A0(a0v, a1v, v);
    return 1;
}

extern s32 func_002A1360(s32);
extern s32 func_002A1340();
extern void func_002A0830(s32, s32, s32, s32);

extern s32 func_002A1360(s32);
extern s32 func_002A1340();
extern void func_002A0830(s32, s32, s32, s32);

s32 Evt_CmdAdjustCall2A0830(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s3 = args[3];
    s32 s2 = args[2];
    s32 s1 = args[1];
    s32 s0 = args[0];
    s32 v;
    if (func_002A1360(s2) != 0) {
        v = func_002A1340();
        if (s0 >= 0 && v < 0) {
            s0 -= v;
        } else if (s1 >= 0 && v > 0) {
            s1 += v;
        }
    }
    func_002A0830(s3, s2, s1, s0);
    return 1;
}
extern void func_002A09A0(s32, s32);

s32 Evt_CmdRowCall2A0750Pair(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s0 = args[0];
    char *row = D_005AB610 + (**(s32 **)a0) * 240 + s0 * 24;
    func_002A0750(s0, *(s32 *)(row + 0x14), (s0 << 8) + 0x850000, 0);
    func_002A09A0(s0, *(s32 *)(row + 0x10));
    return 1;
}
extern s32 func_002A1380(void);
extern void func_002A09C0(s32);



#if 0
// func_002A4130: the counter is set in the delay slot of the first call in the original; ours sets it before the call
s32 func_002A4130(s32 *a0) {
    s32 n = func_002A1380();
    s32 i = 0;
    s32 off = 0;
    if (0 < n) {
        do {
            char *row = D_005AB610 + (**(s32 **)a0) * 240 + off;
            func_002A09C0(*(s32 *)(row + 0x10));
            off += 24;
            i++;
            n = func_002A1380();
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4130);
#if 0
// func_002A41D0: the original moves a0 to s3 first and loads the slot into a1 before the test; reordering the locals swaps the saved registers s0/s1; 4 variants tried
s32 func_002A41D0(s32 *a0, char *a1) {
    s32 *s3 = a0;
    s32 *s2 = (s32 *)a0[0x1C / 4];
    s32 slot = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    if (*(s16 *)((char *)s2 + 4) == 3) {
        s32 idx = *(s32 *)s3[0];
        s32 *s0 = (s32 *)s2[0x40 / 4];
        s32 s1 = s0[0x50 / 4];
        s32 *s4 = (s32 *)(D_005AB610 + idx * 240 + slot * 24);
        if (s4[3] != 0) {
            amCdFs_ReleaseCache(s4[3]);
            s4[3] = 0;
        }
        s4[3] = (s32)s0;
        s4[5] = s1;
        s3[4] = 0;
        s2[0x40 / 4] = 0;
        amCdFs_Close((s32)s2, 0);
        if (s3[6] != 0) {
            amCdFs_Close(a0[6], 0);
        }
        s3[6] = 0;
        s3[7] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A41D0);
extern s32 func_002A41D0(s32 *, char *);

s32 Evt_CmdStartTask2A41D0(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    *(s32 *)a1 = args[1];
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A41D0;
    return func_002A41D0(a0, a1);
}
#if 0
// func_002A4320: same shape as func_002A41D0 (offsets 0x8/0x10); the original returns 3 through a bne with v0 set before the branch; locals reordered; not matched
s32 func_002A4320(s32 *a0, char *a1) {
    s32 *s2 = (s32 *)a0[0x1C / 4];
    s32 slot = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    s32 *s3;
    s32 idx;
    s32 *s0;
    s32 s1;
    s32 *s4;
    if (*(s16 *)((char *)s2 + 4) != 3) {
        return 3;
    }
    s3 = a0;
    idx = *(s32 *)s3[0];
    s0 = (s32 *)s2[0x40 / 4];
    s1 = s0[0x50 / 4];
    s4 = (s32 *)(D_005AB610 + idx * 240 + slot * 24);
    if (s4[2] != 0) {
        amCdFs_ReleaseCache(s4[2]);
        s4[2] = 0;
    }
    s4[2] = (s32)s0;
    s4[4] = s1;
    s3[4] = 0;
    s2[0x40 / 4] = 0;
    amCdFs_Close((s32)s2, 0);
    if (s3[6] != 0) {
        amCdFs_Close(s3[6], 0);
    }
    s3[6] = 0;
    s3[7] = 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4320);
extern s32 func_002A4320(s32 *, char *);

s32 Evt_CmdStartTask2A4320(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    *(s32 *)a1 = args[1];
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A4320;
    return func_002A4320(a0, a1);
}
extern void func_002A09F0(s32, s32, f32 *);

s32 Evt_CmdVecCall2A09F0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A09F0(a0v, a1v, v);
    return 1;
}

extern void func_002A0A30(s32, s32, s32);

s32 Evt_CmdCall2A0A30(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0A30(args[2], args[1], (s32)(f32)args[0]);
    return 1;
}
extern void func_002A0A60(s32, s32);

s32 Evt_CmdCall2A0A60(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0A60(args[1], args[0]);
    return 1;
}
extern void func_002A0AD0(s32, s32, f32 *);

s32 Evt_CmdVecCall2A0AD0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0AD0(a0v, a1v, v);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4580);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4620);
extern void func_002A0BC0(s32, s32, s32, f32 *);

s32 Evt_CmdVecCall2A0BC0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    s32 a2v = args[2];
    v[0] = t0;
    v[1] = t1;
    v[2] = 1.0f;
    v[3] = 1.0f;
    func_002A0BC0(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0C10(s32, s32, s32, f32 *);

s32 Evt_CmdVecCall2A0C10(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[5];
    f32 t0 = fa[1];
    s32 a1v = args[4];
    f32 t1 = fa[0];
    s32 a2v = args[3];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0C10(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0C60(s32, s32, s32, f32 *);

s32 Evt_CmdVecCall2A0C60(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[5];
    f32 t0 = fa[1];
    s32 a1v = args[4];
    f32 t1 = fa[0];
    s32 a2v = args[3];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0C60(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0CB0(s32, s32, s32);

s32 Evt_CmdCall2A0CB0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0CB0(args[2], args[1], args[0]);
    return 1;
}
extern void func_002A0D20(s32, s32, s32);

s32 Evt_CmdVecCall2A0CE0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[3];
    f32 t0 = fa[1];
    s32 a1v = args[2];
    f32 t1 = fa[0];
    v[0] = t0;
    v[1] = t1;
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_002A0CE0(a0v, a1v, v);
    return 1;
}
s32 Evt_CmdCall2A0D20(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0D20(args[2], args[1], args[0]);
    return 1;
}

extern s32 func_002A0D70(void *);



s32 func_002A4860(s32 *a0) {
    if (func_002A0D70(a0) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A4860(s32 *);
extern s32 func_002A3B50(s32 *);
extern f32 D_00470410;

extern s32 func_002A4860(s32 *);

extern s32 func_002A4860(s32 *);

#if 0
// func_002A48A0: the store through the copy of the pointer and the call through the parameter are ordered differently; six variants tried
s32 func_002A48A0(s32 *a0) {
    s32 *p = a0;
    func_002A0D70(p);
    p[0x10 / 4] = (s32)func_002A4860;
    if (func_002A0D70(p) == 0) {
        p[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A48A0);
extern f32 func_002A1050(s32, s32, s32);

s32 Evt_CmdGetCall2A1050Flag(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 1);
    return 1;
}
extern f32 func_002A1050(s32, s32, s32);

s32 Evt_CmdGetCall2A1050(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 0);
    return 1;
}
#if 0
// func_002A4990: the count is kept in two registers and the loop-start moves are placed differently (delay slots); four forms tried
s32 func_002A4990(void) {
    s32 i;
    s32 j;
    s32 n;
    s32 m;
    func_002A13A0();
    n = m = func_002A1390();
    if (0 < n) {
        i = 0;
        do {
            if (0 < m) {
                j = 0;
                do {
                    func_002A10F0(i, j);
                    j++;
                } while (j < m);
            }
            i++;
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4990);
extern s32 func_002A1390();
extern void func_002A11C0(s32, s32, s32);


#if 0
// func_002A4A30: the counter and the row share registers differently (original: idx in s2, counter in s1 set in the beqz delay slot); the scheduler moves the counter store after the row; four orders tried
s32 func_002A4A30(s32 *a0) {
    s32 i;
    s32 idx = **(s32 **)a0;
    s32 n = func_002A1390(a0);
    if (0 < n) {
        char *row;
        i = 0;
        row = D_005AB610 + idx * 240;
        do {
            func_002A11C0(i, *(s32 *)(row + 4), 0x800000 + ((i + 1) << 8));
            i++;
            row += 0x18;
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4A30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4AD0);
extern void func_002A4AD0(void);
#if 0
// func_002A4BD0: 0x110 vs 0x120 bytes: the saved registers now match (obj s2, the 0x40 pointer s0, the value s1); the original loads a4 after the object and flag test, and keeps a nop after the release block clear (ours does not)
s32 func_002A4BD0(s32 *a0, char *a1) {
    s32 *s2;
    s32 s1;
    s32 *s4;
    s32 *s0;
    s32 a4;
    *(s32 *)a1 = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A4AD0;
    s2 = (s32 *)a0[0x1C / 4];
    a4 = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    if (*(s16 *)((char *)s2 + 4) == 3) {
        s32 a5;
        a0[0x10 / 4] = 0;
        a5 = *(s32 *)a1;
        s0 = (s32 *)s2[0x40 / 4];
        s1 = s0[0x50 / 4];
        s4 = (s32 *)((char *)D_005AB610 + a5 * 240 + a4 * 24);
        if (s4[0] != 0) {
            amCdFs_ReleaseCache(s4[0]);
            s4[0] = 0;
        }
        s4[0] = (s32)s0;
        s4[1] = s1;
        s2[0x40 / 4] = 0;
        amCdFs_Close((s32)s2, 0);
        if (a0[0x18 / 4] != 0) {
            amCdFs_Close(a0[0x18 / 4], 0);
        }
        a0[0x18 / 4] = 0;
        a0[0x1C / 4] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4BD0);
extern s8 D_004B4B63[];
extern char D_00492FCE[];
s32 func_002A4D60(s32 *a0);

#if 0
// func_002A4CF0: the store of the function pointer comes first (as in the original); the global's test is scheduled before the index load (ours lw before lb); three forms tried
s32 func_002A4CF0(s32 *a0) {
    s32 idx;
    u16 *row;
    a0[0x10 / 4] = (s32)func_002A4D60;
    idx = D_004B4B63[0];
    row = (u16 *)(D_00492FCE + idx * 0xB8);
    if ((gEvtWork[0x14 / 4] & 0x8000) != 0) {
        if ((*row & 0x8) != 0) {
            return 1;
        }
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4CF0);
s32 func_002A4D60(s32 *a0) {
    s32 idx = D_004B4B63[0];
    u16 *row = (u16 *)(D_00492FCE + idx * 0xB8);
    if ((*row & 0x8) != 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 Evt_CmdWaitRowFlag8(s32 *a0) {
    s32 idx = D_004B4B63[0];
    u16 *row = (u16 *)(D_00492FCE + idx * 0xB8);
    a0[0x10 / 4] = (s32)func_002A4D60;
    if ((*row & 0x8) != 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A13A0(void);
extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);



s32 Evt_CmdSetIndexWrap(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s0 = args[0];
    s32 v = func_002A13A0();
    if (v <= s0) {
        s0 = v - 1;
    }
    if (s0 < 0) {
        s0 += v;
    }
    if (func_002A13B0() < s0) {
        func_002A13C0(s0);
    }
    return 1;
}
extern void func_002A1420(s32);

s32 Evt_CmdCall2A1420(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1420(args[0]);
    return 1;
}
extern void func_002A1430(s32, s32, s32, s32);

s32 func_002A4EC0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1430(args[3], args[2], args[1], args[0]);
    return 1;
}
s32 func_002A4EF0(void) {
    return 1;
}
void func_002A4F00(void) {
    gEvtWork[0x144 / 4] = 1;
}
extern void func_00264380(f32);
extern f32 gFrameDelta;

s32 func_002A4F10(s32 *a0) {
    s32 *g = gEvtWork;
    if (g[0x144 / 4] == 1) {
        a0[0x10 / 4] = 0;
        g[0x144 / 4] = 0;
        func_00264380(0.01f * gFrameDelta);
        return 1;
    }
    return 3;
}
s32 func_002A4F70(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *s1 = gEvtWork;
    f32 f20 = *(f32 *)args;
    Fade_SetRequest(10, func_002A4F00, 0);
    s1[0x144 / 4] = 0;
    func_00264380(100.0f * (0.01f * gFrameDelta) / f20);
    a0[0x10 / 4] = (s32)func_002A4F10;
    return 3;
}
extern s32 D_004700B0;

s32 func_002A5010(void *a0, char *a1) {
    D_004700B0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5030);
extern void func_002A21F0(f32 *, f32);
extern void func_002A5030(s32 *, s32 *);
extern f32 D_004708DC;
#if 0
// func_002A51E0: 30 of 51 differ. The guarded do/while byte loop (u32 counter, `if (p != 0)`) matches the loop shape; the loads of args[4] and args[3] go to $f2/$f0 here (the original: $f0 and $f2), so the stores are reordered around the `mtc1 zero`. Tried: volatile pointer (unrolled), declaration orders (6), `>=` sign test, args read at the stores (40 differ).
void func_002A51E0(s32 *a0, s32 *a1) {
    f32 *args = *(f32 **)((char *)a1 + 0x2C);
    f32 f4 = args[6];
    f32 f3 = args[5];
    f32 f0 = args[4];
    f32 f2 = args[3];
    f32 f1 = args[2];
    f32 f12 = args[0];
    f32 vec[4];
    u8 *p = (u8 *)vec;
    u32 n = 0x10;
    if (p != 0) {
        do {
            *p = 0;
            p++;
            n--;
        } while (n != 0);
    }
    vec[0] = f0;
    *(s32 *)&vec[3] = 0;
    vec[1] = f2;
    vec[2] = f1;
    D_004708DC = f4;
    if (f3 >= 0.0f) {
        D_004708DC = D_004708DC + f3;
    }
    D_004700B0 = 1;
    func_002A21F0(vec, f12);
    a0[0x10 / 4] = (s32)func_002A5030;
    func_002A5030(a0, a1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A51E0);
extern void amDraw3d_ScreenShot(void);
extern f32 func_002B06A0(void);
s32 Evt_ScreenShotStep(s32 *);

s32 Evt_CmdScreenShotTimed(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 v;
    D_004708DC = *(f32 *)args;
    a0[0x10 / 4] = (s32)Evt_ScreenShotStep;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 Evt_ScreenShotStep(s32 *a0) {
    f32 v;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 Evt_CmdScreenShot(s32 *a0) {
    f32 v;
    D_004708DC = 1.0f;
    D_004700B0 = 0;
    a0[0x10 / 4] = (s32)Evt_ScreenShotStep;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 D_005AA604[];
extern s32 D_00455760[];
extern s32 D_004708D8;
extern void func_002BD6B0(void *);
extern void StrStatus_Start(s32, s32);
extern void StrStatus_Dispatch(s32 *);
extern void func_002A5580(void);
#if 0
// func_002A5420: frame 0x90 matches with blk[10] and the byte copies are in order, but the table pointer (t0 in the original, a2 after the index) and the register of the 0x1200 word differ (79 lines); the struct copy is a plain transcription
void func_002A5420(s32 *a0) {
    s32 loc[0xD];
    s32 blk[0xA];
    char *p = (char *)loc;
    char *q = p + 5;
    char *v0 = (char *)D_005AA604;
    s32 *t0 = D_00455760;
    s32 a2;
    s32 a3;
    s32 v3;
    s32 *s0 = a0;
    p[0] = D_00511450[0];
    p[1] = v0[0x11E1];
    p[2] = v0[0x11E3];
    p[3] = v0[0x11E2];
    p[4] = v0[0x11E7];
    q[0] = v0[0x11E8];
    q[1] = v0[0x11E9];
    q[2] = v0[0x11EA];
    q[3] = v0[0x11EB];
    q[4] = v0[0x11EC];
    q[5] = v0[0x11ED];
    q[6] = v0[0x11EE];
    loc[0x5C / 4] = *(s32 *)(v0 + 0x1200);
    a2 = D_004708D8;
    v3 = *(s32 *)(v0 + 0x1200);
    a3 = v0[0x11E7];
    t0 = (s32 *)((char *)t0 + v0[0x11E1] * 4);
    a2 = a2 + a3;
    a2 = a2 * 4;
    a3 = t0[0];
    a2 = a2 + a3;
    a2 = *(s32 *)(a2 - 4);
    v3 = a2 - v3;
    loc[0x60 / 4] = v3;
    loc[0x64 / 4] = 0;
    loc[0x68 / 4] = *(s16 *)(v0 + 0x11F0);
    loc[0x6C / 4] = *(s16 *)(v0 + 0x11F2);
    loc[0x70 / 4] = *(s16 *)(v0 + 0x11F4);
    loc[0x74 / 4] = *(s16 *)(v0 + 0x11F6);
    loc[0x78 / 4] = *(s16 *)(v0 + 0x11F8);
    loc[0x7C / 4] = *(s16 *)(v0 + 0x11FA);
    loc[0x80 / 4] = *(s16 *)(v0 + 0x11FC);
    func_002BD6B0(loc);
    StrStatus_Start(0x3000, 0x80000);
    blk[4] = 2;
    StrStatus_Dispatch(blk);
    blk[5] = 0;
    func_00264140(-1, 0);
    {
        void *f = func_002A5580;
        s0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5420);

extern char *gStrStatus;
extern s32 D_004708E8;
extern void func_002BD400(void *);
extern void StrStatus_Free(void);
extern void func_002A5870(void);
#if 0
// func_002A5580: 0x120 bytes in the original, ours 0x108 (frame 0x90 not reached: the block of case 3 is 16 bytes short, the state tests use li v1 in other delay slots); 6 forms of the switch tried
void func_002A5580(void) {
    s32 d[6];
    s32 e[20];
    s32 *ev;
    switch (*(s32 *)(gStrStatus + 0x27C)) {
    case 1:
    case 0:
        D_004708E8 = 0;
        break;
    case 2:
        break;
    case 3:
        func_002BD400(e);
        *(s8 *)((char *)D_005AA604[0] + 0x11E7) = *((s8 *)e + 4);
        *(s8 *)((char *)D_005AA604[0] + 0x11E8) = *((s8 *)e + 5);
        *(s8 *)((char *)D_005AA604[0] + 0x11E9) = *((s8 *)e + 6);
        *(s8 *)((char *)D_005AA604[0] + 0x11EA) = *((s8 *)e + 7);
        *(s8 *)((char *)D_005AA604[0] + 0x11EB) = *((s8 *)e + 8);
        *(s8 *)((char *)D_005AA604[0] + 0x11EC) = *((s8 *)e + 9);
        *(s8 *)((char *)D_005AA604[0] + 0x11ED) = *((s8 *)e + 10);
        *(s8 *)((char *)D_005AA604[0] + 0x11EE) = *((s8 *)e + 11);
        *(s32 *)((char *)D_005AA604[0] + 0x1200) = e[3];
        StrStatus_Free();
        d[4] = 2;
        d[5] = 1;
        StrStatus_Dispatch((s32 *)d);
        ev = (s32 *)gEvtWork;
        if (ev[2] != 0) {
            amTask_Kill((Task *)ev[2]);
            ev[2] = 0;
        }
        if (gEvtWork != 0) {
            amHeap_Free(gEvtWork);
            gEvtWork = 0;
        }
        D_004708D8 = 0;
        func_002A5870();
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5580);
#if 0
// func_002A56A0: the copy loop keeps the counter in a2 and the pointer in a1 in the original; ours takes the other registers (240 vs 232 bytes, 41 instructions differ); 5 variants tried
extern s32 func_002B4C80(s32);
extern void func_002B4CC0(s32, s32 *);
extern void SklEdit_Close(void);
extern s32 D_005AA604;

void func_002A56A0(void) {
    s32 *g = gEvtWork;
    s32 buf[8];
    s32 i;
    s32 *p;
    s16 *tab;
    if (func_002B4C80(0) >= 9) {
        func_002A0D50(1);
        func_002A13C0(func_002A13B0() + 1);
        func_002B4CC0(0, buf);
        SklEdit_Close();
        i = 0;
        tab = (s16 *)((char *)D_005AA604 + 0x11F0);
        if (buf[0] > 0) {
            p = buf;
            do {
                tab[i] = (s16)p[1];
                p++;
                i++;
            } while (i < buf[0]);
        }
        if (i < 7) {
            s16 *q = tab + i;
            do {
                *q = -1;
                q++;
                i++;
            } while (i < 7);
        }
        amTask_Kill((void *)g[0x9C / 4]);
        g[0x9C / 4] = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A56A0);

extern void SklEdit_Open(s32, char *, s32, s32, s32);
extern void func_002B5030(s32, s32, s32);
extern void func_002B4E40(s32, void *, void *, s32);
extern void func_002A0D50(s32);
extern void func_002A56A0(void);
extern char D_00511479[];

void func_002A5790(s32 *a0) {
    s32 *g = gEvtWork;
    void *f;
    if (func_002A1020(g[0xA0 / 4]) == 0) {
        SklEdit_Open(0x5000, D_00511479, 0, 0x601000, 0);
        func_002B5030(0, D_004B4B63[0], D_00511450[0]);
        if (*(s8 *)((char *)g + 0xC4) == 1) {
            func_002B4E40(0, (char *)g + 0xA4, (char *)g + 0xA8, 0);
        } else {
            func_002B4E40(0, (char *)g + 0xA4, 0, 0);
        }
        func_002A0D50(0);
        f = func_002A56A0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5870);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5B00);
void func_002A5D70(void) {
}
#if 0
// func_002A5D80: long state task: the branch layout of the nested Zenie test differs (118 of 126 with the flag form, 100 of 120 with the and-or form); 2 forms tried
extern s32 Zenie_GetState(void);
extern void Fade_Request(s32, s32, s32);
extern void func_00298910(void);
extern void func_00298990(s32, s32, s32);
extern void func_00298E30(s32, s32);
extern void func_002988D0(s32, s32);
extern void func_00144370(s32, s32, s32, s32);
extern void SoundRpc_SendWord2(s32);
extern void Scr_Start(s32, s32);
extern s8 D_004708E0[];
extern s8 D_005ABA60[];
extern char D_005AB8D0[];
extern s32 D_005AA550[];
extern void func_002A5D70(void);

void func_002A5D80(s32 *a0) {
    s32 *s0 = (s32 *)gEvtWork;
    s32 s2;
    s32 s3;
    s32 *s1;
    s8 *p2;
    char *p1;
    s32 skip = 0;
    if ((s0[0xC / 4] & 1) != 0 && (s0[0xC / 4] & 2) != 0) {
        if (s0[0x40 / 4] != 0) {
            if (s0[0x68 / 4] == 0) {
                skip = 1;
            } else if (Zenie_GetState() <= 0) {
                skip = 1;
            }
        }
        if (skip == 0) {
            Fade_Request(-1, 0, 0);
            if (s0[0x130 / 4] != -1) {
                func_00298910();
                func_00298E10(D_004700A0);
                D_004700A0 = -1;
            }
            if (s0[0x138 / 4] < 4) {
                func_00298990(s0[0x134 / 4], s0[0x138 / 4], s0[0x13C / 4]);
            } else {
                func_00298990(s0[0x134 / 4], 3, s0[0x13C / 4]);
            }
            if (s0[0x140 / 4] != -1) {
                func_00298E30((s32)((char *)s0 + 0xE0), s0[0xF0 / 4]);
                s0[0x140 / 4] = -1;
            }
            if (D_004708E0[0] > 0) {
                s3 = 0;
                p2 = D_005ABA60;
                p1 = D_005AB8D0;
                do {
                    func_002988D0((s32)p1, *p2);
                    s3++;
                    p2++;
                    p1 += 0x10;
                } while (s3 < D_004708E0[0]);
            }
            D_004708E0[0] = 0;
            s1 = D_005AA550;
            s2 = 0;
            do {
                func_00144370(1, s2 + 0x11122233, 0, s1[0xE10 / 4]);
                s2++;
                s1++;
            } while (s2 < 8);
            SoundRpc_SendWord2(-1);
            Scr_Start(s0[0], 0);
            a0[0x1C / 4] = (s32)((func_002A5D70 == 0) ? 0 : (void *)func_002A5D70);
            s0[0xC / 4] = 0;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5D80);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5F50);
extern void amCdFs_ReleaseCache(s32);

void EvtCache_SetRow0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *row = (s32 *)(D_005AB610 + a0 * 240 + a1 * 24);
    if (row[0] != 0) {
        amCdFs_ReleaseCache(row[0]);
        row[0] = 0;
    }
    row[0] = a2;
    row[1] = a3;
}

void EvtCache_SetRow8(s32 a0, s32 a1, s32 a2, s32 a3) {
    char *row = D_005AB610 + a0 * 240 + a1 * 24;
    if (*(s32 *)(row + 0x8) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(row + 0x8));
        *(s32 *)(row + 0x8) = 0;
    }
    *(s32 *)(row + 0x8) = a2;
    *(s32 *)(row + 0x10) = a3;
}

void EvtCache_SetRowC(s32 a0, s32 a1, s32 a2, s32 a3) {
    char *row = D_005AB610 + a0 * 240 + a1 * 24;
    if (*(s32 *)(row + 0xC) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(row + 0xC));
        *(s32 *)(row + 0xC) = 0;
    }
    *(s32 *)(row + 0xC) = a2;
    *(s32 *)(row + 0x14) = a3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6210);
void func_002A6DB0(s32 *a0) {
    s32 *s1 = gEvtWork;
    s32 *p = (s32 *)s1[0x38 / 4];
    if (*(s16 *)((char *)p + 4) == 3) {
        s1[0x38 / 4] = p[0x40 / 4];
        s1[0x3C / 4] = ((s32 *)p[0x40 / 4])[0x50 / 4];
        p[0x40 / 4] = 0;
        amCdFs_Close((s32)p, 0);
        s1[0xD4 / 4] = 0;
        Scr_SetData(s1[0], s1[0x3C / 4]);
        {
            void *f = func_002A6210;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
extern void func_002A1430(s32, s32, s32, s32);
extern void func_002A1410(s32);
extern s16 D_004E05F8[];
extern void func_002A6DB0(s32 *);
extern void func_002A6210(void);

#if 0
// func_002A6E40: the chain p = gEvtWork[6] stays in a0 in the original and the later loads go through it; ours reloads gEvtWork[6] and the branch shape differs; 1 form tried
void func_002A6E40(s32 *a0) {
    s32 *s0 = (s32 *)gEvtWork;
    s32 *p = (s32 *)s0[0x18 / 4];
    s32 off;
    s32 *v;
    void *f;
    s32 a1;
    if (((s16 *)p)[2] == 3) {
        s0[0x18 / 4] = p[0x40 / 4];
        s0[0x1C / 4] = ((s32 *)s0[0x18 / 4])[0x50 / 4];
        s0[0x20 / 4] = *(s8 *)((char *)s0[0x1C / 4] + 4);
        s0[0x24 / 4] = (s32)((char *)s0[0x1C / 4] + ((s32 *)s0[0x1C / 4])[0x8 / 4]);
        s0[0x28 / 4] = (s32)((char *)s0[0x1C / 4] + ((s32 *)s0[0x1C / 4])[0xC / 4]);
        off = (s0[0x14 / 4] & 0x7FFF) * 8;
        s0[0x2C / 4] = s0[0x24 / 4] + off;
        s0[0x30 / 4] = *(s32 *)(s0[0x24 / 4] + off + 4);
        s0[0x34 / 4] = s0[0x28 / 4] + *(s32 *)s0[0x2C / 4];
        p[0x40 / 4] = 0;
        amCdFs_Close((s32)p, 0);
        v = (s32 *)s0[0x34 / 4];
        func_002A1430(v[0], v[1], v[2], v[3]);
        func_002A1410(D_004E05F8[0]);
        s0[0x34 / 4] = s0[0x34 / 4] + 0x10;
        a1 = ((s32 *)gEvtWork)[0x10 / 4] == 1;
        if (a1 == 0) {
            s0[0x34 / 4] = s0[0x34 / 4] + 8;
            if (*(s32 *)s0[0x34 / 4] != 0) {
                s0[0x38 / 4] = amCdFs_ReadFileId(*(s32 *)s0[0x34 / 4], 0, 1);
                f = (void *)func_002A6DB0;
                ((s32 *)s0[0x8 / 4])[0x1C / 4] = (s32)((f == 0) ? 0 : f);
            }
        } else {
            s0[0x34 / 4] = s0[0x34 / 4] - 4;
            f = (void *)func_002A6210;
            *(s32 *)((char *)s0 + 0xD4) = 0;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6E40);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_0022C060(s32, f32);
extern void func_00228410();
extern void func_0022CD00(s32);
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
void func_002A6FD0(void) {
    s32 *s0;
    s32 a14;
    s32 c7c;
    s32 t0;
    s32 v;
    s32 a1;
    s32 t;
    s32 x;
    u16 *row;
    x = D_004B4B63[0];
    row = (u16 *)(D_00492FCE + x * 0xB8);
    s0 = gEvtWork;
    if (*row & 0x50) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        s0[0x7C / 4] = s0[0x7C / 4] + 1;
        s0[0x7C / 4] = s0[0x7C / 4] & 1;
    }
    a14 = s0[0x14 / 4];
    c7c = s0[0x7C / 4];
    v = a14 + (s32)0xC0000000;
    if (c7c == 0) {
        t0 = s0[0x78 / 4];
        a1 = (v << 9) + 0x890000;
        D_00470704 = t0;
        D_0047070C = a1;
        D_00470708 = 0;
        amModel_SetCurrent(t0, a1);
        D_00470238 = 0;
        t = s0[0x88 / 4];
        func_00228430(0);
        func_00228430(0);
        func_0022C060(t, 1.0f);
        func_00228410();
        func_0022CD00(t);
        func_00228410();
    } else {
        t0 = s0[0x78 / 4];
        a1 = (v << 9) + 0x890000;
        D_00470704 = t0;
        D_0047070C = a1;
        D_00470708 = 0;
        amModel_SetCurrent(t0, a1);
        D_00470238 = 0;
        t = s0[0x8C / 4];
        func_00228430(0);
        func_00228430(0);
        func_0022C060(t, 1.0f);
        func_00228410();
        func_0022CD00(t);
        func_00228410();
    }
}
extern f32 func_002B06A0(void);
extern void func_0029AAC0(s32, s32, s32);
extern s32 *gStrMap;

void func_002A7160(s32 a0) {
    s32 *s0 = gEvtWork;
    f32 t;
    f32 v;
    if (s0 == 0) {
        if (a0 != 0) {
            amTask_Kill((void *)a0);
        }
        return;
    }
    if (func_002A1020(2) != 0) {
        return;
    }
    t = func_002B06A0();
    v = *(f32 *)&s0[0x12C / 4] + t;
    *(f32 *)&s0[0x12C / 4] = v;
    if (v < 10.0f) {
        return;
    }
    if (gStrMap != 0) {
        func_0029AAC0(0x3000, 0x4000, s0[0x124 / 4]);
    } else {
        if (a0 != 0) {
            amTask_Kill((void *)a0);
        }
    }
    if (s0[0x128 / 4] != 0) {
        amTask_Kill((void *)s0[0x128 / 4]);
        s0[0x128 / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7240);
extern void func_00133B50(s32, s32);
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);
extern void func_00228430(s32);
extern void func_0022C060(s32, f32);
extern void func_00228410();
extern void func_0022CD00(s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern s32 D_004700A0;
extern s8 D_004708D4;
extern void func_002A7240(void);
void func_002A7400(struct Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s2;
    s32 t0;
    s32 x;
    s32 x2;
    u16 *row;
    char *base;
    void *fn;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    t0 = s0[0x78 / 4];
    D_00470704 = t0;
    D_0047070C = 0x890100;
    D_00470708 = 0;
    amModel_SetCurrent(t0, 0x890100);
    D_00470238 = 0;
    s2 = s0[0x80 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s2, 1.0f);
    func_00228410();
    func_0022CD00(s2);
    func_00228410();
    func_002A6FD0();
    A2d_FlushList();
    x = D_004B4B63[0];
    row = (u16 *)(D_00492FCE + x * 0xB8);
    if (*row & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        if (s0[0x7C / 4] == 0) {
            if (D_004708D4 == 1) {
                x2 = D_00511450[0];
                base = (char *)D_004E6560 + x2 * 4624;
                D_004700A0 = *(s32 *)(base + 0x1254);
                *(s32 *)(base + 0x1254) = -1;
            }
            D_004708D4 = 0;
            if (s0[0x14 / 4] == 0x40000005) {
                Fade_SetRequest(10, 0, 0);
            }
        }
        s0[0x98 / 4] = 0;
        fn = (void *)func_002A7240;
        *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
    }
}
#if 0
// func_002A75C0: 60 of 71 differ on registers: the original keeps the Task in s1, gEvtWork in s0 and the value in s2; ours puts the Task in s2 and gEvtWork in s1 (declaration orders tried, none changed it); the float field is reloaded after the call as the original does
extern void func_00133B50(s32, s32);
extern void A2d_SetMode(s32);
extern s16 D_004E05F8[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void A2d_FlushList(void);
extern f32 func_002B06A0(void);
extern void func_0022BC30(s32, f32);
extern void func_002A7400(void);
void func_002A75C0(Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s2;
    f32 g;
    char *p1;
    char *p2;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    D_00470704 = s0[0x78 / 4];
    D_0047070C = 0x890100;
    amModel_SetCurrent(s0[0x78 / 4], 0x890100);
    D_00470708 = 0;
    D_00470238 = 0;
    s2 = s0[0x80 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s2, 1.0f);
    func_00228410();
    func_0022CD00(s2);
    func_00228410();
    A2d_FlushList();
    g = func_002B06A0();
    *(f32 *)((char *)s0 + 0x98) = *(f32 *)((char *)s0 + 0x98) + g;
    p1 = (char *)*(s32 *)((char *)s0 + 0x74);
    p2 = (char *)*(s32 *)(p1 + 0x1C);
    func_0022BC30(*(s32 *)(p2 + (s0[0x90 / 4] << 2)), *(f32 *)((char *)s0 + 0x98));
    if (!(*(f32 *)((char *)s0 + 0x98) < 30.0f)) {
        s0[0x98 / 4] = 0;
        TASK_SET_FUNC(a0, func_002A7400);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A75C0);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern s16 D_004E05F8[];
extern void func_00133B50(s32, s32);
extern void A2d_SetMode(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_0022C060(s32, f32);
extern void func_00228410();
extern void func_0022CD00(s32);
extern void A2d_FlushList(void);
extern f32 func_002B06A0(void);
extern s32 func_0022BC30(s32, f32);
extern void Save_Exit(void);
extern void func_002A5B00();
extern void func_0029A9F0();
void func_002A76E0(void) {
    s32 *s0 = gEvtWork;
    s32 s1;
    s32 *pp;
    s32 *tbl;
    s32 v;
    f32 t;
    f32 f;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    v = s0[0x78 / 4];
    D_00470704 = v;
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x890000);
    D_00470238 = 0;
    s1 = s0[0x84 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s1, 1.0f);
    func_00228410();
    func_0022CD00(s1);
    func_00228410();
    A2d_FlushList();
    t = func_002B06A0();
    *(f32 *)&s0[0x98 / 4] = *(f32 *)&s0[0x98 / 4] + t;
    pp = (s32 *)s0[0x74 / 4];
    tbl = *(s32 **)((char *)pp + 0x1C);
    func_0022BC30(tbl[s0[0x94 / 4]], *(f32 *)&s0[0x98 / 4]);
    f = *(f32 *)&s0[0x98 / 4];
    if (!(f < 30.0f)) {
        Save_Exit();
        s0[0x7C / 4] = 0;
        s0[0x98 / 4] = 0;
        s0 = gEvtWork;
        if (s0[0x8 / 4] != 0) {
            func_002A5B00();
        }
        if (s0[0x124 / 4] >= 0) {
            func_0029A9F0();
        }
    }
}
extern void func_00133B50(s32, s32);
extern void A2d_SetMode(s32);
extern s16 D_004E05F8[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void A2d_FlushList(void);
extern s32 Save_GetState(void);
extern void Option_ProcessTable(void);
extern void func_002A76E0(void);
#if 0
// func_002A7820: 0x100 bytes against 0x120: the Save_GetState tests and the function-address store (lui/addiu/bnez/move) are laid out differently, the Option_ProcessTable block sits elsewhere; goto and if forms tried
void func_002A7820(Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s2;
    s32 st;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    st = s0[0x78 / 4];
    D_00470704 = st;
    D_0047070C = 0x890000;
    amModel_SetCurrent(st, 0x890000);
    D_00470708 = 0;
    D_00470238 = 0;
    s2 = s0[0x80 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s2, 1.0f);
    func_00228410();
    func_0022CD00(s2);
    func_00228410();
    A2d_FlushList();
    st = Save_GetState();
    if (st == 3) {
        goto L900;
    }
    if (st == 5) {
        goto L900;
    }
    if (st != 4) {
        return;
    }
    Option_ProcessTable();
L900:
    {
        void *f = (void *)func_002A76E0;
        ((s32 *)a0)[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
    s0[0x98 / 4] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7820);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7940);
extern s32 D_004700A0;
extern s8 D_004708D4;
extern void func_002A7940(void);
void func_002A7B50(struct Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s2;
    s32 t;
    s32 v;
    void *fn;
    s8 x;
    char *base;
    f32 f;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    v = s0[0x78 / 4];
    D_00470704 = v;
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x890000);
    D_00470238 = 0;
    s2 = s0[0x80 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s2, 1.0f);
    func_00228410();
    func_0022CD00(s2);
    func_00228410();
    A2d_FlushList();
    f = func_002B06A0();
    *(f32 *)&s0[0x98 / 4] = *(f32 *)&s0[0x98 / 4] + f;
    func_0022BC30(((s32 *)((s32 *)s0[0x74 / 4])[0x1C / 4])[s0[0x90 / 4]], *(f32 *)&s0[0x98 / 4]);
    f = *(f32 *)&s0[0x98 / 4];
    if (!(f < 30.0f)) {
        s0[0x98 / 4] = 0;
        fn = (void *)func_002A7940;
        *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        t = D_004700A0;
        if (t != -1) {
            x = D_00511450[0];
            base = (char *)D_004E6560 + x * 4624;
            *(s32 *)(base + 0x1254) = t;
            *(s32 *)(base + 0x1258) = D_004700A0;
            D_004700A0 = -1;
            D_004708D4 = 1;
        }
    }
}
extern s32 func_0022D860(s32, f32);
extern char D_0046EAA8[];
extern s32 D_004700A8;
extern void func_002A75C0(struct Task *);
#if 0
// func_002A7CB0: 161 of 178 differ. The block order is wrong: the original tests 2 first (beq chain), lays out the 4/0 block first, then 5/1, then 2; ours puts the 2 block first (bne to the else chain). Reordering the source is not tried yet; the 2 block keeps the same instructions.
void func_002A7CB0(struct Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s1 = *(u16 *)((char *)s0 + 0x14);
    s32 *tbl;
    void *fn;
    if (s0[0xC / 4] & 1) {
        func_00264140(-1, 0);
        s0[0x98 / 4] = 0;
        D_00470704 = s0[0x78 / 4];
        D_0047070C = 0x870000;
        D_00470708 = 0;
        amModel_SetCurrent(s0[0x78 / 4], 0x870000);
        D_00470238 = 0;
        if (s1 == 2) {
            s0[0x90 / 4] = 0;
            s0[0x94 / 4] = 1;
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x80 / 4] = func_0022D860(tbl[s0[0x90 / 4]], 0.0f);
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x84 / 4] = func_0022D860(tbl[s0[0x94 / 4]], 0.0f);
            D_004700A8 = -1;
            fn = (void *)func_002A7B50;
            *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        } else if (s1 == 5 || s1 == 1) {
            s0[0x90 / 4] = 6;
            s0[0x94 / 4] = 7;
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x80 / 4] = func_0022D860(tbl[s0[0x90 / 4]], 0.0f);
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x84 / 4] = func_0022D860(tbl[s0[0x94 / 4]], 0.0f);
            s0 = gEvtWork;
            if (s0 != 0) {
                s0[0xC / 4] = s0[0xC / 4] | 1;
                if (s0[0x124 / 4] >= 0) {
                    s0[0x128 / 4] = (s32)amTask_Create((TaskFunc)func_002A7160, NULL, 0x8000, 0x4000, 0, D_0046EAA8);
                    s0[0x12C / 4] = 0;
                }
            }
            fn = (void *)func_002A75C0;
            *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
            D_004700A8 = -1;
        } else if (s1 == 4 || s1 == 0) {
            s0[0x90 / 4] = 4;
            s0[0x94 / 4] = 5;
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x80 / 4] = func_0022D860(tbl[s0[0x90 / 4]], 0.0f);
            tbl = (s32 *)((s32 *)s0[0x74 / 4])[0x14 / 4];
            s0[0x84 / 4] = func_0022D860(tbl[s0[0x94 / 4]], 0.0f);
            s0 = gEvtWork;
            if (s0 != 0) {
                s0[0xC / 4] = s0[0xC / 4] | 1;
                if (s0[0x124 / 4] >= 0) {
                    s0[0x128 / 4] = (s32)amTask_Create((TaskFunc)func_002A7160, NULL, 0x8000, 0x4000, 0, D_0046EAA8);
                    s0[0x12C / 4] = 0;
                }
            }
            D_004700A8 = s1 + 0x40000001;
            fn = (void *)func_002A7B50;
            *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7CB0);
extern f32 func_002B06A0(void);
extern void func_0022E0B0(s32);
extern s32 func_0022D670(s32, f32);
extern void func_0022C7D0(s32, f32, s32);
extern void func_002A7CB0(struct Task *);
void func_002A7F70(struct Task *a0) {
    s32 *s0;
    s32 *p;
    s32 *tt;
    void *fn;
    f32 t;
    s32 v;
    s0 = gEvtWork;
    if (*(f32 *)&s0[0x98 / 4] == 0.0f) {
        t = func_002B06A0();
        *(f32 *)&s0[0x98 / 4] = *(f32 *)&s0[0x98 / 4] + t;
    } else {
        p = (s32 *)s0[0x6C / 4];
        if (*(s16 *)((char *)p + 4) == 3) {
            if (*(s16 *)((char *)((s32 *)s0[0x70 / 4]) + 4) == 3) {
                s0[0x74 / 4] = p[0x54 / 4];
                s0[0x78 / 4] = ((s32 *)s0[0x70 / 4])[0x54 / 4];
                func_0022E0B0(s0[0x74 / 4]);
                ((s32 *)s0[0x6C / 4])[0x54 / 4] = 0;
                ((s32 *)s0[0x70 / 4])[0x54 / 4] = 0;
                amCdFs_Close(s0[0x6C / 4], 0);
                amCdFs_Close(s0[0x70 / 4], 0);
                s0[0x6C / 4] = 0;
                s0[0x70 / 4] = 0;
                v = s0[0x78 / 4];
                D_00470704 = v;
                D_0047070C = 0x870000;
                D_00470708 = 0;
                amModel_SetCurrent(v, 0x870000);
                D_00470238 = 0;
                tt = (s32 *)((s32 *)s0[0x74 / 4])[0x1C / 4];
                s0[0x88 / 4] = func_0022D670(tt[0x30 / 4], 0.0f);
                tt = (s32 *)((s32 *)s0[0x74 / 4])[0x1C / 4];
                s0[0x8C / 4] = func_0022D670(tt[0x34 / 4], 0.0f);
                s0[0x7C / 4] = 0;
                s0[0x98 / 4] = 0;
                func_0022C7D0(s0[0x88 / 4], 0.0f, 1);
                func_0022C7D0(s0[0x8C / 4], 0.0f, 1);
                fn = (void *)func_002A7CB0;
                *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
            }
        }
    }
}
extern void amHeap_Free(void *);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void memset(void *, s32, s32);
extern s8 D_00511450[];
extern char D_0046EAE8[];
extern s8 D_004E6560[];

void EvtScrp_Init(void) {
    s32 *g;
    s8 *e;
    if (gEvtWork != 0) {
        amHeap_Free(gEvtWork);
        gEvtWork = 0;
    }
    gEvtWork = (s32 *)amHeap_Alloc(0x150, 0, D_0046EAE8, 0xC3C);
    memset(gEvtWork, 0, 0x150);
    e = D_004E6560 + D_00511450[0] * 4624;
    g = gEvtWork;
    g[0x130 / 4] = -1;
    g[0x134 / 4] = e[0x1261];
    g[0x138 / 4] = e[0x1262];
    g[0x13C / 4] = e[0x1263];
    g[0x140 / 4] = -1;
    g[0x124 / 4] = -1;
    g[0xFC / 4] = 0;
    g[0xF8 / 4] = 0;
    g[0x100 / 4] = -1;
    g[0x104 / 4] = -1;
    g[0x108 / 4] = -1;
    g[0x10C / 4] = -1;
    g = gEvtWork;
    g[0x4C / 4] = 0;
    g[0x50 / 4] = 0;
    g[0x54 / 4] = 0;
    g[0x58 / 4] = 0;
    g[0x64 / 4] = 0;
    g[0x68 / 4] = 0;
}
extern u8 D_004700B4[];
extern u8 D_004700B8[];
#if 0
// func_002A81B0: 0x160 vs 0x180 bytes. The original tests the high halfword against 0x6A/0x68/0x66/0x64 with beq chains to one switch block, then compares the low halfword in the order 0x22, 0x11, 7, 0xD, 0xC ... 0 (beq chains); a switch sorts the cases and merges the shared table bodies (ascending chain); an if/else chain gets range tests (sltiu). Tried: if/else chain (0x138), switch (0x160).
void func_002A81B0(s32 a0) {
    s8 x = D_00511450[0];
    s32 key = (u32)(a0 & 0xFFFF0000) >> 16;
    s32 low = a0 & 0xFFFF;
    char *v;
    s32 idx;
    v = (char *)D_004E6560 + x * 4624 + 0x80;
    if (key == 0x6A || key == 0x68 || key == 0x66 || key == 0x64) {
        switch (low) {
        case 0x22:
            *(s32 *)(v + 0x11DC) = 5;
            break;
        case 0x11:
            *(s32 *)(v + 0x11DC) = 4;
            break;
        case 7:
            idx = key - 0x64;
            if (idx < 0) {
                idx += 1;
            }
            idx >>= 1;
            *(s32 *)(v + 0x11DC) = D_004700B8[idx];
            break;
        case 0xD:
        case 0xC:
        case 0xB:
        case 0xA:
        case 4:
        case 3:
        case 2:
        case 0:
            idx = key - 0x64;
            if (idx < 0) {
                idx += 1;
            }
            idx >>= 1;
            *(s32 *)(v + 0x11DC) = D_004700B4[idx];
            break;
        default:
            *(s32 *)(v + 0x11DC) = 0;
            break;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A81B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A8330);
