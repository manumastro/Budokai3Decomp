#include "common.h"
#include "menu/menu.h"

extern f32 gFrameDelta;
extern char D_0046FBB0[];
extern void amSofdec_StartFname(s32, char *, s32);
extern void func_0030DB10(s32 *);
extern void func_0030E170(s32 *);
extern s32 func_002A8F90(void);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void func_0030D970(char *);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern s32 D_00470998;
extern s32 D_0046FD5C;
extern s32 amSofdec_Create(s32 *);
extern void func_0030DC70(s32 *);
extern s32 amSofdec_GetStat(s32);
extern void amSofdec_Stop(s32);
extern void amSofdec_Destroy(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022C560(s32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0030E4D0(s32 *);
extern void func_00136E80(s32, void *, s32, s32, s32);
extern void func_00137560(void *, void *);
extern void amDraw_FlushPacket(void);
extern f32 D_0047042C;
extern f32 D_00470430;

typedef struct {
    f32 f[4];
} __attribute__((aligned(16))) StfVec;
extern StfVec D_004591A0;
extern StfVec D_004591B0;
extern StfVec D_004591C0;
extern StfVec D_004591D0;
extern StfVec D_00459100;
extern StfVec D_00459110;
extern StfVec D_00459120;
extern StfVec D_00459130;
extern StfVec D_00459160;
extern StfVec D_00459170;
extern StfVec D_00459180;
extern StfVec D_00459190;

void func_0030D630(s32 *a0) {
    StfVec c50;
    StfVec c40;
    StfVec c30;
    StfVec c20;
    u8 *p;
    u8 *e;
    u8 *tb;
    s32 idx;

    c50 = D_004591A0;
    c40 = D_004591B0;
    c30 = D_004591C0;
    c20 = D_004591D0;
    p = (u8 *)a0[1];
    idx = (s16)(*(s32 *)(p + 0x10) - 2);
    tb = (u8 *)(*(s32 *)(p + 0x14) + (s32)p);
    e = p + *(s32 *)(tb + ((idx - *(s32 *)(p + 0x18)) << 2));
    c50.f[0] = (D_0047042C - (f32)*(s16 *)(e + 0x10)) / 2.0f;
    c40.f[0] = (D_0047042C + (f32)*(s16 *)(e + 0x10)) / 2.0f;
    c50.f[1] = (D_00470430 - (f32)*(s16 *)(e + 0x12)) / 2.0f;
    c40.f[1] = (D_00470430 + (f32)*(s16 *)(e + 0x12)) / 2.0f;
    c20.f[0] = (f32)*(s16 *)(e + 0x10) - 0.5f;
    c20.f[1] = (f32)*(s16 *)(e + 0x12) - 0.5f;
    amModel_SetCurrent(a0[1], 0x1000);
    func_00136E80(0x40000C20, 0, idx, 0x44, 5);
    func_00137560(&c50, &c30);
    func_00137560(&c40, &c20);
    amDraw_FlushPacket();
}

void func_0030D7D0(s32 *a0) {
    StfVec c50;
    StfVec c40;
    StfVec c30;
    StfVec c20;
    u8 *p;
    u8 *e;
    u8 *tb;
    s32 idx;

    c50 = D_00459160;
    c40 = D_00459170;
    c30 = D_00459180;
    c20 = D_00459190;
    p = (u8 *)a0[1];
    idx = (s16)(*(s32 *)(p + 0x10) - 1);
    tb = (u8 *)(*(s32 *)(p + 0x14) + (s32)p);
    e = p + *(s32 *)(tb + ((idx - *(s32 *)(p + 0x18)) << 2));
    c50.f[0] = (D_0047042C - (f32)*(s16 *)(e + 0x10)) / 2.0f;
    c40.f[0] = (D_0047042C + (f32)*(s16 *)(e + 0x10)) / 2.0f;
    c50.f[1] = (D_00470430 - (f32)*(s16 *)(e + 0x12)) / 2.0f;
    c40.f[1] = (D_00470430 + (f32)*(s16 *)(e + 0x12)) / 2.0f;
    c20.f[0] = (f32)*(s16 *)(e + 0x10) - 0.5f;
    c20.f[1] = (f32)*(s16 *)(e + 0x12) - 0.5f;
    amModel_SetCurrent(a0[1], 0x1000);
    func_00136E80(0x40000C20, 0, idx, 0x44, 5);
    func_00137560(&c50, &c30);
    func_00137560(&c40, &c20);
    amDraw_FlushPacket();
}

void func_0030D970(char *a0) {
    StfVec c50;
    StfVec c40;
    StfVec c30;
    StfVec c20;
    u8 *p;
    u8 *e;
    u8 *tb;
    s32 sum;

    c50 = D_00459100;
    c40 = D_00459110;
    c30 = D_00459120;
    c20 = D_00459130;
    amModel_SetCurrent(*(s32 *)(a0 + 4), 0x3000);
    sum = *(s16 *)(a0 + 0xA) + *(s16 *)(a0 + 0xC);
    p = (u8 *)*(s32 *)(a0 + 4);
    tb = (u8 *)(*(s32 *)(p + 0x14) + (s32)p);
    e = p + *(s32 *)(tb + ((sum - *(s32 *)(p + 0x18)) << 2));
    c50.f[0] = *(f32 *)(a0 + 0x18) - (f32)*(s16 *)(e + 0x10) / 2.0f;
    c40.f[0] = *(f32 *)(a0 + 0x18) + (f32)*(s16 *)(e + 0x10) / 2.0f;
    c50.f[1] = *(f32 *)(a0 + 0x1C) - (f32)*(s16 *)(e + 0x12) / 2.0f;
    c40.f[1] = *(f32 *)(a0 + 0x1C) + (f32)*(s16 *)(e + 0x12) / 2.0f;
    c20.f[0] = (f32)*(s16 *)(e + 0x10) - 0.5f;
    c20.f[1] = (f32)*(s16 *)(e + 0x12) - 0.5f;
    func_00136E80(0x40000C20, 0, sum, 0x44, 5);
    func_00137560(&c50, &c30);
    func_00137560(&c40, &c20);
    amDraw_FlushPacket();
}

void func_0030DB10(s32 *a0) {
    char *s0 = (char *)a0 + 0x30;
    func_0030D970(s0);
    *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) + gFrameDelta;
    if (*(f32 *)(s0 + 0x14) < *(f32 *)(s0 + 0x10)) {
        return;
    }
    *(s16 *)(s0 + 0xC) = *(s16 *)(s0 + 0xC) + 1;
    if (*(s16 *)(s0 + 0xC) < *(s16 *)(s0 + 0x8)) {
        *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) - *(f32 *)(s0 + 0x10);
    } else {
        a0[0x1C / 4] = 0;
    }
}
void func_0030DBB0(s32 *a0) {
    s32 *a1 = a0 + 0x30 / 4;
    f32 v = *(f32 *)&a0[0x44 / 4] + gFrameDelta;
    *(f32 *)&a0[0x44 / 4] = v;
    if (v < 317.0f) {
        return;
    }
    a1[0x14 / 4] = 0;
    {
        void *f = func_0030DB10;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
// func_0030DC00: the original takes the pointer in t1, the short 3 in t0 and the float bits in a1 (temps in other registers); the early-constant forms gave the same code; four forms tried
void func_0030DC00(s32 *a0)
{
  s32 *t1 = (s32 *) a0[0x34 / 4];
  s16 n;
  n = (s16) ((*((s32 *) (((char *) t1) + 0x10))) - 5);
  *((s16 *) (((char *) a0) + 0x38)) = n;
  *((s16 *) (((char *) a0) + 0x3A)) = 3;
  *((s16 *) (((char *) a0) + 0x3C)) = 0;
  *((f32 *) (&a0[0x48 / 4])) = 300.0f;
  *((f32 *) (&a0[0x4C / 4])) = 342.0f;
  *((f32 *) (&a0[0x40 / 4])) = 13260.0f / ((f32) n);
  a0[0x44 / 4] = 0;
  {
    void *f = func_0030DBB0;
    a0[0x1C / 4] = (s32) ((f == 0) ? (0) : (func_0030DBB0));
  }
}

INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030DC70);
void func_0030E170(s32 *arg0) {
    s32 temp_v0;
    s32 temp_a0;
    s32 *temp_s0;

    temp_s0 = (s32 *)((u8 *)arg0 + 0x30);
    func_0030DC70(temp_s0);
    *(f32 *)((u8 *)temp_s0 + 8) = *(f32 *)((u8 *)temp_s0 + 8) + gFrameDelta;
    temp_v0 = amSofdec_GetStat(*temp_s0);
    switch (temp_v0) {
    case 1:
    case 2:
        return;
    }
    temp_a0 = *temp_s0;
    if (temp_a0 >= 0) {
        amSofdec_Stop(temp_a0);
        amSofdec_Destroy(*temp_s0);
        *temp_s0 = -1;
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
}

void StaffRoll_TaskEnding(s32 *a0) {
    s32 *a1 = a0 + 0x30 / 4;
    f32 v = *(f32 *)&a0[0x38 / 4] + gFrameDelta;
    *(f32 *)&a0[0x38 / 4] = v;
    if (v < 77.0f) {
        return;
    }
    amSofdec_StartFname(a1[0], D_0046FBB0, 1);
    {
        void *f = func_0030E170;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#if 0
// func_0030E290: the original frame is 0x60 (ours 0x50: a second local block of 16 bytes is missing) and the stores are scheduled in another order; two forms tried
s32 func_0030E290(s32 *a0) {
    s32 arg[8];
    s16 h;
    s32 *s0;
    arg[1] = 1;
    arg[2] = 0x600000;
    arg[0] = 0;
    s0 = a0 + 0x30 / 4;
    arg[3] = 0x400;
    h = 0;
    arg[4] = 0x200;
    arg[5] = 3;
    arg[6] = -1;
    arg[7] = D_0046FD5C;
    s0[0] = amSofdec_Create(arg);
    s0[2] = 0;
    s0[3] = 0;
    {
        void *f = StaffRoll_TaskEnding;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E290);
void func_0030E330(u8 *arg0)
{
  u8 *p;
  u8 *blk;
  s32 st;
  s32 tmp;
  f32 f;

  p = arg0;
  blk = p + 0x30;
  st = *(s32 *)(p + 0x38);
  tmp = *(s32 *)(arg0 + 0x34);
  D_00470704 = tmp;
  D_0047070C = 0x3000;
  D_00470708 = 0;
  amModel_SetCurrent(tmp, 0x3000);
  D_00470238 = 0;
  if (st != 0)
  {
    func_0022C060(st, 1.0f);
    func_0022C560(st);
  }
  f = *(f32 *)(blk + 0xC) + gFrameDelta;
  *(f32 *)(blk + 0xC) = f;
  if (!(f < 14116.0f))
  {
    tmp = *(s32 *)(blk + 8);
    if (tmp != 0)
    {
      func_0022D0E0(tmp, 1);
      *(s32 *)(blk + 8) = 0;
    }
    *(s32 *)(p + 0x1C) = 0;
  }
}
extern void func_0030E330(u8 *);

void func_0030E3F0(s32 *a0) {
    s32 *s0 = (s32 *)((char *)a0 + 0x30);
    s32 s2 = a0[0x38 / 4];
    s32 v;
    s32 *q;
    void *f;
    v = a0[0x34 / 4];
    D_00470704 = v;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x3000);
    D_00470238 = 0;
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022C560(s2);
    }
    *(f32 *)&s0[0xC / 4] = *(f32 *)&s0[0xC / 4] + gFrameDelta;
    if (*(f32 *)&s0[0xC / 4] >= 13937.0f) {
        if (s0[0x8 / 4] != 0) {
            func_0022D0E0(s0[0x8 / 4], 1);
        }
        q = (s32 *)((s32 *)s0[0])[0x14 / 4];
        s0[0x8 / 4] = func_0022D860(q[0x8 / 4], 0.0f);
        f = (void *)func_0030E330;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void func_0030E4D0(s32 *a0) {
    s32 *s0 = (s32 *)((char *)a0 + 0x30);
    s32 s2 = a0[0x38 / 4];
    s32 v;
    s32 *q;
    void *f;
    v = a0[0x34 / 4];
    D_00470704 = v;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x3000);
    D_00470238 = 0;
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022C560(s2);
    }
    *(f32 *)&s0[0xC / 4] = *(f32 *)&s0[0xC / 4] + gFrameDelta;
    if (*(f32 *)&s0[0xC / 4] >= 77.0f) {
        if (s0[0x8 / 4] != 0) {
            func_0022D0E0(s0[0x8 / 4], 1);
        }
        q = (s32 *)((s32 *)s0[0])[0x14 / 4];
        s0[0x8 / 4] = func_0022D860(q[0x4 / 4], 0.0f);
        f = (void *)func_0030E3F0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void func_0030E5B0(s32 *a0) {
    s32 *p = a0 + 0x30 / 4;
    s32 v = a0[0x34 / 4];
    D_00470704 = v;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x3000);
    D_00470238 = 0;
    p[2] = func_0022D860(*(s32 *)(*(s32 *)((char *)p[0] + 0x14)), 0.0f);
    p[3] = 0;
    {
        void *f = func_0030E4D0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void func_0030E630(s32 *a0) {
    char *p = (char *)a0[0x30 / 4];
    if (func_002A8F90() == 0) {
        p[0x1C] = 10;
        Scene_Request(6, 0);
        Scene_FadeTo(-1, 0);
        a0[0x1C / 4] = 0;
    }
}
extern void Ball_Start(void);
extern void func_00137C10(void *, void *);
extern s8 D_004B4B63[];
extern u8 D_00492FCE[];
extern StfVec D_00459140;
extern StfVec D_00459150;

#if 0
// differs: about 41 of 128 instructions: the table copies and the zero-loop pointer/counter take other registers
// (tried: switch with the cases in reverse, bgtz loop, 120 declaration orders, copy order, loop set-up first)
void func_0030E690(s32 *a0) {
    u8 *s1;
    s16 flag;
    StfVec c60;
    StfVec c50;
    StfVec c40;
    u8 *q;
    s32 n;
    void *fn;
    u8 st;

    s1 = (u8 *)a0[0xC];
    flag = 0;
    st = s1[0x1C];
    switch (st) {
    case 6:
        *(f32 *)(s1 + 0x18) = *(f32 *)(s1 + 0x18) - 0.01f * gFrameDelta;
        if (*(f32 *)(s1 + 0x18) <= 0.0f) {
            *(f32 *)(s1 + 0x18) = 0.0f;
            s1[0x1C] = 7;
        }
        break;
    case 7:
        *(f32 *)(s1 + 0x18) = 0.0f;
        if (*(u16 *)(D_00492FCE + D_004B4B63[0] * 184) & 8) {
            s1[0x1C] = 8;
        }
        break;
    case 8:
        *(f32 *)(s1 + 0x18) = *(f32 *)(s1 + 0x18) + 0.01f * gFrameDelta;
        if (*(f32 *)(s1 + 0x18) >= 1.0f) {
            *(f32 *)(s1 + 0x18) = 1.0f;
            flag = 1;
        }
        break;
    }
    func_0030D630((s32 *)s1);
    q = (u8 *)&c40;
    n = 0x10;
    c60 = D_00459140;
    c50 = D_00459150;
    c50.f[0] = D_0047042C;
    c50.f[1] = D_00470430;
    if (q != 0) {
        do {
            *q = 0;
            q++;
            n--;
        } while (n != 0);
    }
    c40.f[3] = *(f32 *)(s1 + 0x18);
    func_00136E80(0x900, &c40, -1, 0x44, 5);
    func_00137C10(&c60, &c50);
    amDraw_FlushPacket();
    if (flag != 0) {
        s1[0x1C] = 9;
        Ball_Start();
    }
    fn = (void *)func_0030E630;
    *(s32 *)((u8 *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E690);
#if 0
// differs: same copy and zero-loop tail as func_0030E690 (the register set of the table copies differs)
void func_0030E890(s32 *a0) {
    u8 *s1;
    s16 flag;
    StfVec c60;
    StfVec c50;
    StfVec c40;
    u8 *q;
    s32 n;
    void *fn;
    u8 st;

    s1 = (u8 *)a0[0xC];
    flag = 0;
    st = s1[0x1C];
    switch (st) {
    case 3:
        *(f32 *)(s1 + 0x18) = *(f32 *)(s1 + 0x18) - 0.01f * gFrameDelta;
        if (*(f32 *)(s1 + 0x18) <= 0.0f) {
            *(f32 *)(s1 + 0x18) = 0.0f;
            s1[0x1C] = 4;
        }
        break;
    case 4:
        *(f32 *)(s1 + 0x18) = 0.0f;
        *(f32 *)(s1 + 0x14) = *(f32 *)(s1 + 0x14) - gFrameDelta;
        if ((*(u16 *)(D_00492FCE + D_004B4B63[0] * 184) & 8) != 0 || *(f32 *)(s1 + 0x14) <= 0.0f) {
            s1[0x1C] = 5;
        }
        break;
    case 5:
        *(f32 *)(s1 + 0x18) = *(f32 *)(s1 + 0x18) + 0.01f * gFrameDelta;
        if (*(f32 *)(s1 + 0x18) >= 1.0f) {
            *(f32 *)(s1 + 0x18) = 1.0f;
            flag = 1;
        }
        break;
    }
    func_0030D7D0((s32 *)s1);
    c60 = D_00459140;
    c50 = D_00459150;
    c50.f[0] = D_0047042C;
    c50.f[1] = D_00470430;
    q = (u8 *)&c40;
    n = 0x10;
    if (q != 0) {
        do {
            *q = 0;
            q++;
            n--;
        } while (n != 0);
    }
    c40.f[3] = *(f32 *)(s1 + 0x18);
    func_00136E80(0x900, &c40, -1, 0x44, 5);
    func_00137C10(&c60, &c50);
    amDraw_FlushPacket();
    if (flag != 0) {
        if (s1[0x1E] != 0) {
            s1[0x1C] = 6;
            fn = (void *)func_0030E690;
            *(s32 *)((u8 *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        } else {
            s1[0x1C] = 9;
            Ball_Start();
            fn = (void *)func_0030E630;
            *(s32 *)((u8 *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E890);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030EAE0);
extern void func_0030E290(s32 *);
extern void amCdFs_Close(void *, s32);
extern void func_0022E0B0(void *);
extern void amFile_Load(void *);
extern s32 func_002A8C50(s32);
extern void func_002A8A60(void);
extern void Fade_Request(s32, s32, s32);
extern void func_0030EAE0(void);
extern char D_0046FBC8[];
extern char D_0046FBD8[];
extern char D_0046FBE8[];
extern u8 D_004590B0[];

#if 0
// differs: frame 0x80 with s0-s4 in the original, ours 0x70 with s0-s3; the table at sp+0x60 takes s3 and the loop pointer s2
// (tried: 120 declaration orders of the five locals, the array size; the whole body is shifted by the frame)
void func_0030EDA0(s32 *a0) {
    u8 *s0;
    s32 *s2;
    s16 *ps;
    s32 s4;
    s32 cnt;
    void *fn;
    u8 tbl[0x20] __attribute__((aligned(16)));

    s0 = (u8 *)a0[0xC];
    s2 = (s32 *)D_00470998;
    if (*(s16 *)((u8 *)s2[1] + 4) == 3) {
        *(s32 *)s0 = *(s32 *)((u8 *)s2[0] + 0x54);
        *(s32 *)((u8 *)s2[0] + 0x54) = 0;
        amCdFs_Close((void *)s2[0], 0);
        s2[0] = 0;
        *(s32 *)(s0 + 4) = *(s32 *)((u8 *)s2[1] + 0x54);
        *(s32 *)((u8 *)s2[1] + 0x54) = 0;
        amCdFs_Close((void *)s2[1], 0);
        s2[1] = 0;
        func_0022E0B0(*(void **)s0);
        amFile_Load(*(void **)(s0 + 4));
        *(void **)(s0 + 8) = amTask_Create((void (*)(struct Task *))func_0030E5B0, 0, 0x2200, 8, 2, D_0046FBC8);
        *(s32 *)(*(u8 **)(s0 + 8) + 0x30) = *(s32 *)s0;
        *(s32 *)(*(u8 **)(s0 + 8) + 0x34) = *(s32 *)(s0 + 4);
        *(s32 *)(*(u8 **)(s0 + 8) + 0x38) = 0;
        *(s32 *)(*(u8 **)(s0 + 8) + 0x3C) = 0;
        *(void **)(s0 + 0xC) = amTask_Create((void (*)(struct Task *))func_0030E290, 0, 0x2100, 8, 2, D_0046FBD8);
        *(s32 *)(*(u8 **)(s0 + 0xC) + 0x38) = 0;
        *(s32 *)(*(u8 **)(s0 + 0xC) + 0x30) = -1;
        *(s32 *)(*(u8 **)(s0 + 0xC) + 0x34) = -1;
        *(void **)(s0 + 0x10) = amTask_Create((void (*)(struct Task *))func_0030DC00, 0, 0x2300, 8, 2, D_0046FBE8);
        *(s32 *)(*(u8 **)(s0 + 0x10) + 0x30) = *(s32 *)s0;
        *(s32 *)(*(u8 **)(s0 + 0x10) + 0x34) = *(s32 *)(s0 + 4);
        *(s32 *)(*(u8 **)(s0 + 0x10) + 0x44) = 0;
        s0[0x1C] = 1;
        *(s32 *)tbl = *(s32 *)D_004590B0;
        *(s32 *)(tbl + 4) = *(s32 *)(D_004590B0 + 4);
        *(s32 *)(tbl + 8) = *(s32 *)(D_004590B0 + 8);
        *(s32 *)(tbl + 12) = *(s32 *)(D_004590B0 + 12);
        *(f32 *)(tbl + 0x10) = *(f32 *)(D_004590B0 + 0x10);
        *(s16 *)(tbl + 0x14) = *(s16 *)(D_004590B0 + 0x14);
        s4 = 0;
        ps = (s16 *)tbl;
        do {
            if (func_002A8C50(*ps) != 0) {
                s0[0x1D] = 1;
                break;
            }
            s4++;
            ps++;
        } while (s4 < 11);
        s0[0x1E] = 1;
        cnt = 0;
        ps = (s16 *)tbl;
        do {
            if (func_002A8C50(*ps) == 0) {
                s0[0x1E] = 0;
                break;
            }
            cnt++;
            ps++;
        } while (cnt < 11);
        Fade_Request(-1, 0, 0);
        fn = (void *)func_0030EAE0;
        *(s32 *)((u8 *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        func_002A8A60();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030EDA0);
extern void func_0030EDA0(void);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);
extern char D_0046FC00[];

void StaffRoll_Load(s32 *a0) {
    s32 *s0 = (s32 *)((char *)a0 + 0x30);
    s32 *s2;
    s32 v;
    void *f;
    if (*(s16 *)((char *)a0 + 0x34) == 0) {
        v = *(s16 *)((char *)a0 + 0x34);
        v = v + 1;
        *(s16 *)((char *)s0 + 4) = v;
        return;
    }
    s2 = (s32 *)(D_00470998 = (s32)amHeap_Alloc(0xC, 0, D_0046FC00, 0xD4));
    s2[0] = amCdFs_ReadFileId(0x1082E, 0, 0);
    s2[1] = amCdFs_ReadFileId(0x1082F, 0, 0);
    s2[2] = (s32)a0;
    {
        void *m = amHeap_Alloc(0x20, 0, D_0046FC00, 0xE3);
        s0[0] = (s32)m;
        memset(m, 0, 0x20);
    }
    f = func_0030EDA0;
    a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
}
void StaffRoll_Clear(void) {
    D_00470998 = 0;
}
extern void amHeap_Free(void *);
typedef struct StfRoot {
    u8 *f0;
    u8 *f4;
    Task *f8;
} StfRoot;
void func_0030F0E0(void)
{
  u8 *temp_s3;
  Task *temp_s1;
  s32 *temp_s2;
  Task *temp_s1_2;
  Task *temp_a0_3;
  s32 temp_a0;
  s32 temp_a0_2;
  StfRoot *temp_s0;
  u8 *temp_a0_4;
  u8 *temp_a0_5;
  u8 *temp_a0_6;
  u8 *temp_a0_7;
  temp_s0 = (StfRoot *) D_00470998;
  if (temp_s0 != 0)
  {
    temp_s3 = *((u8 **) (((u8 *) temp_s0->f8) + 0x30));
    temp_s1 = *((Task **) (((u8 *) temp_s3) + 8));
    if (temp_s1 != NULL)
    {
      temp_a0 = *((s32 *) (((u8 *) temp_s1) + 0x38));
      if (temp_a0 != 0)
      {
        func_0022D0E0(temp_a0, 1);
      }
      amTask_Kill(temp_s1);
    }
    temp_s1_2 = *((Task **) (((u8 *) temp_s3) + 0xC));
    if (temp_s1_2 != NULL)
    {
      temp_s2 = (s32 *) (((u8 *) temp_s1_2) + 0x30);
      temp_a0_2 = *temp_s2;
      if (temp_a0_2 >= 0)
      {
        amSofdec_Stop(temp_a0_2);
        amSofdec_Destroy(*temp_s2);
      }
      amTask_Kill(temp_s1_2);
    }
    temp_a0_3 = *((Task **) (((u8 *) temp_s3) + 0x10));
    if (temp_a0_3 != NULL)
    {
      amTask_Kill(temp_a0_3);
    }
    temp_a0_4 = *((u8 **) (((u8 *) temp_s3) + 4));
    if (temp_a0_4 != NULL)
    {
      amHeap_Free(temp_a0_4);
    }
    temp_a0_5 = *((u8 **) (((u8 *) temp_s3) + 0));
    if (temp_a0_5 != NULL)
    {
      amHeap_Free(temp_a0_5);
    }
    amHeap_Free(temp_s3);
    amTask_Kill(temp_s0->f8);
    temp_a0_6 = temp_s0->f0;
    if (temp_a0_6 != NULL)
    {
      amCdFs_Close(temp_a0_6, 0);
    }
    temp_a0_7 = temp_s0->f4;
    if (temp_a0_7 != NULL)
    {
      amCdFs_Close(temp_a0_7, 0);
    }
    amHeap_Free((u8 *) temp_s0);
    D_00470998 = 0;
  }
}
