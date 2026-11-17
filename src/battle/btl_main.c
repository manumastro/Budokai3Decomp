#include "common.h"
#include "battle/battle.h"
#include "battle/stage.h"

/* The fighter's fields that battle.h does not name yet (offsets from the assembly of btl_main.c). */
#define FT_FIELD(ft, type, off) (*(type *)((u8 *)(ft) + (off)))
extern void func_001E3430(void *, s32);
extern void func_001E4E20(void *, s32);
extern void func_001E7BE0(void *, s32);
extern void func_001E3BB0(void *);
extern void func_001E7F00(void *);
extern s32 D_00470574;
extern char D_00468410[];
extern char D_00468420[];
extern char D_00468428[];
extern void (*D_004682E8[])(void);
extern s32 D_0046FD84;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_001EF1E0(s32);
extern void func_001F0820(void);
extern void func_001F9E10(void);
extern void func_001B0EC0(void);
extern void func_001E9D10(void *);
extern void func_001E9EE0(void);
extern s32 func_001E9ED0(void *);
extern void func_001EF100(void);
extern void func_0022DC00(void);
extern void (*D_004684A8[])(void *);
extern void func_002CBFF0(s32, void *);
extern void func_001E5040(void *);
extern void func_001C8E50(void);
extern void func_001A8830(void);
extern void func_001E5860(void);
extern void func_001F9E00(void);
extern void func_0021C6A0(void);
extern void func_00215AA0(void);
extern void func_001E9D60(void);
extern void func_00219870(void);
extern void func_001E9910(void);
extern void func_002CC4C0(void);
extern char D_00495B70[];
extern void func_001B05E0(s32, f32, f32);
extern char D_005116E0[];
extern void func_001CA460(s32, s32);
extern void func_001AC490(void *);
extern void func_00264300(s32, void *, s32);
extern void (*D_0046850C[])(void *);
extern void func_001D9BF0(void *);
extern void memset(void *, s32, s32);
extern void func_00219650(s32);
extern void func_00219790(s32);
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create(void (*update)(void *), void *, s32, s32, s32, char *);
extern void amFile_AddLoader(void *, void *);
void func_001AC330(void *);
void func_001AC400(void *);
void func_001AF840(void *);
void func_001B0160(void *);
void func_001B03E0(Fighter *f);
void func_001B04A0(void);
extern void (*D_00468460[])(void *);
extern s32 func_001C2B10(void *);
extern s32 func_001E94C0(void *);
typedef struct FighterCB2 {
    u8 unk0000[0xCB2];
    u16 unkCB2;
} FighterCB2;
extern void func_00226030(s32, s32 *);
extern void (*D_00468510[])(void *);
typedef struct FighterMain2 {
    u8 unk0000[0x1864];
    s32 unk1864;
    u8 unk1868[0x1FF9 - 0x1868];
    s8 unk1FF9;
} FighterMain2;
extern void (*D_004682EC[])(void);
extern void func_002A89D0(void);
extern s32 func_001F9A00(s32);
extern void func_00237000(s32, void *);
extern s32 func_001B06D0(void);
extern s32 func_001B0660(void);
extern s16 D_00495A40[];
extern s16 D_00495A42[];
extern s16 D_00495A44[];
extern s16 D_00495A46[];
extern s32 D_00495A48[];
extern s16 D_00495A4C[];
extern s16 D_00495A4E[];
extern s16 D_00495A90[];
extern s16 D_00495A92[];
extern s16 D_00495A94[];
extern s16 D_00495A96[];
extern s32 D_00495A98[];
extern s16 D_00495A9C[];
extern s16 D_00495A9E[];
extern s16 D_00495AD4[];
extern s16 D_00495AD6[];
extern s16 D_00495AD8[];
extern s16 D_00495ADA[];
extern s32 D_00495ADC[];
extern s16 D_00495AE0[];
extern s16 D_00495AE2[];
extern s16 D_00495B18[];
extern s16 D_00495B1A[];
extern s16 D_00495B1C[];
extern s16 D_00495B1E[];
extern s32 D_00495B20[];
extern s16 D_00495B24[];
extern s16 D_00495B26[];
extern s32 func_001E3D60(s32, f32);
extern void func_001E4820(f32, void *, s32);
extern void func_001E3460(void *);
extern void func_001DD680(void *);
extern void func_001D9900(void *, s32, s32);

void func_001ABCC0(Fighter *f) {
    FT_FIELD(f, f32, 0x420) = 1000.0f;
    FT_FIELD(f, f32, 0x424) = 1000.0f;
    FT_FIELD(f, f32, 0x428) = 1000.0f;
}
void func_001ABCE0(Fighter *f) {
    FT_FIELD(f, s16, 0x42C) = 0;
    FT_FIELD(f, s16, 0x42E) = 0;
    FT_FIELD(f, s16, 0x430) = 0;
    FT_FIELD(f, s16, 0x432) = 0;
    memset((u8 *)f + 0x434, 0, 8);
    FT_FIELD(f, s8, 0x43C) = 0;
    FT_FIELD(f, s8, 0x43D) = 0;
}
void func_001ABD30(Fighter *f) {
    void *o = FT_FIELD(f, void *, 0x1E4);
    FT_FIELD(f, s32, 0x1E8) = (o != 0) ? FT_FIELD(o, s32, 0x8) : 0;
    FT_FIELD(f, s32, 0x1EC) = 0;
    FT_FIELD(f, s32, 0x1F0) = 0;
    FT_FIELD(f, s32, 0x1F4) = 0;
    FT_FIELD(f, s32, 0x3FC) = 0;
    FT_FIELD(f, s32, 0x400) = 0;
    FT_FIELD(f, s32, 0x3F8) = 1;
    FT_FIELD(f, s32, 0x40C) = 0;
    memset((u8 *)f + 0x1F8, 0, 0x200);
}
void func_001ABD80(Fighter *f) {
    void *o = FT_FIELD(f, void *, 0x1E4);
    FT_FIELD(f, s32, 0x1E8) = (o != 0) ? FT_FIELD(o, s32, 0x8) : 0;
    FT_FIELD(f, s32, 0x1EC) = 0;
    FT_FIELD(f, s32, 0x1F0) = 0;
    FT_FIELD(f, s32, 0x1F4) = 0;
    FT_FIELD(f, s32, 0x3FC) = 0;
    FT_FIELD(f, s32, 0x400) = 0;
    FT_FIELD(f, s32, 0x3F8) = 1;
    FT_FIELD(f, s32, 0x40C) = 0;
    memset((u8 *)f + 0x1F8, 0, 0x200);
    FT_FIELD(f, f32, 0x420) = 1000.0f;
    FT_FIELD(f, f32, 0x424) = 1000.0f;
    FT_FIELD(f, f32, 0x428) = 1000.0f;
    FT_FIELD(f, s32, 0x410) = 0;
    FT_FIELD(f, s32, 0x414) = 0;
    FT_FIELD(f, s32, 0x418) = 0;
    FT_FIELD(f, s32, 0x41C) = 0;
}
#if 0
// differs: the constants are loaded into registers at the top (4, 0x7530, 5) where the original keeps them; register assignment not reproduced
void func_001ABE10(void) {
    D_00495A40[0] = 0;
    D_00495A48[0] = 0;
    D_00495A42[0] = 4;
    D_00495A44[0] = 0x7530;
    D_00495A90[0] = 1;
    D_00495A46[0] = 0x7530;
    D_00495AD4[0] = 2;
    D_00495A4C[0] = 0;
    D_00495A4E[0] = 0;
    D_00495A92[0] = 5;
    D_00495A94[0] = 0x7530;
    D_00495A96[0] = 0x7530;
    D_00495A98[0] = 0;
    D_00495A9C[0] = 0;
    D_00495A9E[0] = 0;
    D_00495AD6[0] = 5;
    D_00495B1A[0] = 5;
    D_00495AD8[0] = 0x7530;
    D_00495ADA[0] = 0x7530;
    D_00495ADC[0] = 0;
    D_00495AE0[0] = 0;
    D_00495AE2[0] = 0;
    D_00495B18[0] = 0;
    D_00495B1C[0] = 0x7530;
    D_00495B1E[0] = 0x7530;
    D_00495B20[0] = 0;
    D_00495B24[0] = 0;
    D_00495B26[0] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ABE10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ABF10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC110);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC240);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC330);
#if 0
// differs: a leaf loop over a table of entries; Metrowerks keeps a frame here (sq s0-s2), the original none
void func_001AC400(void *vp) {
    u8 *p = vp;
    s32 i;
    u8 *t;
    FT_FIELD(p, s32, 0x8) += (s32)p;
    t = FT_FIELD(p, u8 *, 0x8);
    for (i = 0; i < FT_FIELD(p, s32, 0x4); i++) {
        s32 j;
        s32 cnt = FT_FIELD(t, s16, 0xE);
        for (j = 0; j < cnt; j++) {
            FT_FIELD(t, s32, 0x40 + j * 4) += (s32)p;
        }
        t = t + 0x40 + cnt * 4;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC400);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC490);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC670);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC7C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC990);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACA80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACBC0);
void func_001ACFD0(void) {
    BW_FIELD(D_00470570, f32, 0x8910) = BW_FIELD(D_00470570, f32, 0x890C);
    BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0) + BW_FIELD(D_00470570, f32, 0x890C);
    if (BW_FIELD(D_00470570, f32, 0x890C) > 1e8f) {
        BW_FIELD(D_00470570, f32, 0x8910) = 0.0f;
        BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0);
    }
}
void func_001AD070(void) {
    BattleWork *bw = D_00470570;
    BW_FIELD(bw, s32, 0x88F8) = 8;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    func_001CA460(-1, 1);
    func_001AC490(D_005116E0);
    func_00264300(-1, func_001B04A0, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD0E0);
#if 0
// differs: 8 of 49 instructions differ: register assignment of the constants 7 and 5 (the original keeps 7 in a0 and 5 in v1)
void func_001AD210(void) {
    BattleWork *bw = D_00470570;
    s32 tmp[3];
    s32 x;
    Fighter *ft;
    BW_FIELD(bw, s32, 0x88F8) = 7;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    x = BW_FIELD(bw, s16, 0x7E2);
    switch (x) {
    case 0:
        ft = bw->fighter[1];
        tmp[0] = ft->unk1350;
        tmp[1] = ft->unk13A4;
        tmp[2] = 5;
        func_00226030(0, tmp);
        break;
    case 1:
    case 5:
        tmp[0] = -1;
        tmp[1] = -1;
        tmp[2] = 1;
        func_00226030(0, tmp);
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD210);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD2E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADB80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADD90);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADEE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE5C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE720);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE890);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE980);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AEBF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AEDB0);
void func_001AEEB0(void) {
    BattleWork *bw = D_00470570;
    s32 tbl[6];
    BW_FIELD(bw, s32, 0x88F8) = 1;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    BW_FIELD(bw, s8, 0x14ED) = 1;
    BW_FIELD(bw, s8, 0x350D) = 1;
    tbl[0] = (s32)((u8 *)bw + 0x830);
    tbl[1] = (s32)((u8 *)bw + 0x2850);
    tbl[2] = func_001F9A00(1);
    tbl[3] = 8;
    tbl[4] = (s32)func_001B06D0;
    tbl[5] = (s32)func_001B0660;
    func_00237000(4, tbl);
    if (BW_FIELD(bw, s16, 0x8948) < 0) {
        BW_FIELD(bw, s16, 0x8944) = 0;
        D_004682E8[0]();
    }
}
void func_001AEF70(void) {
    BW_FIELD(D_00470570, f32, 0x8910) = BW_FIELD(D_00470570, f32, 0x890C);
    BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0) + BW_FIELD(D_00470570, f32, 0x890C);
    if (BW_FIELD(D_00470570, f32, 0x890C) > 1e8f) {
        BW_FIELD(D_00470570, f32, 0x8910) = 0.0f;
        BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF010);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF100);
#if 0
// differs: the first load of the global field is folded as li/addu, the original as lui 0x1 and a -0x755C displacement
void func_001AF650(void) {
    BattleWork *bw = D_00470570;
    void *f;
    f = BW_FIELD(bw, void *, 0x8AA4);
    if (f != 0) {
        BW_FIELD(bw, void *, 0x8AA4) = FT_FIELD(f, void *, 0x40);
        BW_FIELD(bw, s32, 0x8AA0) = FT_FIELD(BW_FIELD(D_00470570, void *, 0x8AA4), s32, 0x50);
        FT_FIELD(f, s32, 0x40) = 0;
        amCdFs_Close(f, 0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF650);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF6C0);
#if 0
// differs: the original keeps the global in s0 across the call and zeroes v0 before the branch; not reproduced
void func_001AF7A0(void *p) {
    BattleWork *bw;
    s32 id = FT_FIELD(p, s32, 0x160);
    s32 r = 0;
    bw = D_00470570;
    if (id != -1) {
        r = amCdFs_ReadFileId(id, 0, 1);
        BW_FIELD(bw, s32, 0x8AA4) = r;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF7A0);
#if 0
// differs: the original reads the global through its address (a2) and has one more instruction; not reproduced
void func_001AF7F0(void) {
    s32 *p = &D_0046FD84;
    BattleWork *bw = D_00470570;
    u8 *s0 = (u8 *)bw + 0x810;
    s32 r = 0;
    if (D_0046FD84 != -1) {
        r = amCdFs_ReadFileId(*p, 0, 1);
        FT_FIELD(s0, s32, 0x1C) = r;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF7F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF840);
void func_001AF980(void) {
    s8 *p = (s8 *)((u8 *)D_00470570 + 0x8975);
    *p = 1 - *p;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF9A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFAB0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFC50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFD60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFDF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFFA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0160);
void func_001B0380(Fighter *f) {
    s32 fn;
    if (func_001E9ED0(f) != 0) {
        func_0022DC00();
        func_001EF100();
        fn = (s32)func_001B0160;
        if (fn == 0) {
            fn = 0;
        }
        FT_FIELD(f, s32, 0x1C) = fn;
    }
}
void func_001B03E0(Fighter *f) {
    s32 fn;
    func_001E9D10(f);
    func_00219650(1);
    func_00219790(1);
    func_001E9EE0();
    fn = (s32)func_001B0380;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void func_001B0440(Fighter *f) {
    BattleWork *bw = D_00470570;
    void *v = BW_FIELD(bw, void *, 0x8970);
    s32 fn;
    if (v == 0 || FT_FIELD(v, s16, 0x4) != 3) {
        return;
    }
    BW_FIELD(bw, s32, 0x8970) = 0;
    FT_FIELD(f, s32, 0x30) = 0;
    fn = (s32)func_001B03E0;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void func_001B04A0(void) {
    func_001B0EC0();
    func_001EF1E0(D_00470574);
    func_001F0820();
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B04D0);
void func_001B05A0(void) {
    amFile_AddLoader(D_00468420, func_001AC400);
    amFile_AddLoader(D_00468428, func_001AC330);
}
void func_001B05E0(s32 a0, f32 x, f32 y) {
    BattleWork *bw = D_00470570;
    if (a0 == 0) {
        x = (BW_FIELD(bw, f32, 0x8920) > x) ? BW_FIELD(bw, f32, 0x8920) : x;
        y = (BW_FIELD(bw, f32, 0x8924) > y) ? BW_FIELD(bw, f32, 0x8924) : y;
    }
    BW_FIELD(bw, f32, 0x8920) = x;
    BW_FIELD(bw, f32, 0x8924) = y;
}
s32 func_001B0660(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s16, 0x8948) = -1;
    BW_FIELD(bw, s16, 0x8944) = 0;
    func_001F9E10();
    D_004682E8[0]();
    return 0;
}
s32 func_001B06D0(void) {
    if (D_00470570 == 0) {
        return 0;
    }
    BW_FIELD(D_00470570, s32, 0x8914) = 0;
    return 0;
}
s32 func_001B0700(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    func_002A89D0();
    BW_FIELD(bw, s8, 0x8AAD) = 0;
    BW_FIELD(bw, s8, 0x8AAE) = 1;
    BW_FIELD(bw, s16, 0x8948) = -1;
    BW_FIELD(bw, s16, 0x8944) = 0;
    switch (BW_FIELD(bw, s16, 0x7E2)) {
    case 0:
        D_004682EC[0]();
        break;
    case 5:
        D_004682EC[0]();
        break;
    }
    return 0;
}
s32 func_001B07C0(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s32, 0x8914) = 0;
    BW_FIELD(bw, s8, 0x8AAD) = 1;
    BW_FIELD(bw, s8, 0x8AAE) = 0;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0810);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0B10);
s32 func_001B0D10(void) {
    if (D_00470570 == 0) {
        return -2;
    }
    if (BW_FIELD(D_00470570, s8, 0x8AAC) != 0) {
        return BW_FIELD(D_00470570, s32, 0x88F8);
    }
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0D60);
void func_001B0E40(void) {
    func_001C8E50();
    func_001A8830();
    func_001E5860();
    func_001F9E00();
    func_0021C6A0();
    func_00215AA0();
    func_001E9D60();
    func_00219870();
    func_001E9910();
    func_002CC4C0();
    memset(D_00495B70, 0, 0x8AC0);
    D_00470570 = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0EC0);
void func_001B1090(void) {
    void *t = amTask_Create(func_001AF840, 0, 0x4000, 0x20, 0x80000000, D_00468410);
    FT_FIELD(t, s32, 0x30) = 5;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B10D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B13F0);
void func_001B18B0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
#if 0
// differs: the flag word 0x1864 is kept in an address register across the 0x1FF9 branch (CSE); the original stores it directly
void func_001B1900(Fighter *f) {
    s32 r;
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterMain2 *)f)->unk1FF9 = 0;
                ((FighterMain2 *)f)->unk1864 |= 8;
            }
        }
        func_001E5040(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1900);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1A10);
void func_001B1BB0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1C00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1E80);
void func_001B2160(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
#if 0
// differs: the 0x1864 flag word: the original stores it directly, ours computes its address in the branch delay slot (CSE) before the store
void func_001B21B0(Fighter *f) {
    s32 r;
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        FT_FIELD(f, s32, 0x1864) = 1;
        if (FT_FIELD(f, s8, 0x1FF9) != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                FT_FIELD(f, s8, 0x1FF9) = 0;
                FT_FIELD(f, s32, 0x1864) = FT_FIELD(f, s32, 0x1864) | 8;
                FT_FIELD(f, f32, 0xCA4) = 0.0f;
                FT_FIELD(f, f32, 0xCA8) = 0.1f;
            }
        }
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B21B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B22F0);
void func_001B2490(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B24E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2600);
void func_001B27D0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2820);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2AA0);
void func_001B2C80(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2CD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2EF0);
void func_001B30E0(void) {
}
void func_001B30F0(void *p) {
    func_001E7BE0((u8 *)p + 0xCD0, 0);
}
void func_001B3100(Fighter *f) {
    void *s = (u8 *)f + 0xCD0;
    FT_FIELD(f, s16, 0x132C) = 0x2D;
    func_001E7F00(s);
    FT_FIELD(s, f32, 0x654) = 1.0f;
    FT_FIELD(s, s32, 0x658) = 0;
    FT_FIELD(s, s32, 0x668) = 0;
}
void func_001B3140(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3190);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3320);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B34B0);
#if 0
// differs: the constant 1 is loaded once where the original loads it again before the 0x2004 stores
void func_001B3660(Fighter *f) {
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, f32, 0x18A8) <= 0.0f) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterMain2 *)f)->unk1FF9 = 0;
                ((FighterMain2 *)f)->unk1864 |= 8;
            }
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468510[0](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3660);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3720);
void func_001B3960(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B39B0(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        FT_FIELD(f, s16, 0xCB4) = 0;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_0046850C[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3A20);
void func_001B3BF0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B3C40(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        FT_FIELD(f, s16, 0xCB4) = 0;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_0046850C[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3CB0);
void func_001B3E70(Fighter *f) {
    func_001E4E20(f, 0);
    FT_FIELD(f, f32, 0x17BC) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3EA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3FE0);
void func_001B4280(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B42D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B46C0);
void func_001B4C10(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.5f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B4C60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B4DC0);
void func_001B5180(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B51D0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#if 0
// differs: frame and copies of the parameter: the original keeps the fighter in s0 and folds the 0xCAC/0xCAE field addresses; not reproduced
void func_001B5320(Fighter *f) {
    s32 ret;
    FT_FIELD(f, s16, 0xCAE) = FT_FIELD(f, s16, 0xCAC);
    FT_FIELD(f, s16, 0xCAC) = 0x25;
    if (FT_FIELD(f, s16, 0xCAE) == FT_FIELD(f, s16, 0xCAC)) {
        FT_FIELD(f, s16, 0xCB0) = FT_FIELD(f, s16, 0xCB0) + 1;
    } else {
        FT_FIELD(f, s16, 0xCB0) = 0;
    }
    FT_FIELD(f, s16, 0xCB2) = 0;
    if (FT_FIELD(f, s8, 0x2010) != 0) {
        ((FighterCB2 *)f)->unkCB2 |= 0x8000;
    }
    if (FT_FIELD(f, s8, 0x2011) != 0) {
        ((FighterCB2 *)f)->unkCB2 |= 0x4000;
    }
    FT_FIELD(f, s32, 0xB70) = (FT_FIELD(f, s16, 0xCB4) == 0) ? 0x2F : 0x29;
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
    }
    ret = func_001E3D60(FT_FIELD(f, s32, 0x17AC), 180.0f);
    if (ret == 0) {
        func_001E4820(1.0f, f, 0);
    } else {
        func_001E4820(-1.0f, f, 0);
    }
    func_001E3460(f);
    FT_FIELD(f, f32, 0xCA4) = 0.1f;
    FT_FIELD(f, f32, 0xCA8) = 0.1f;
    FT_FIELD(f, s32, 0xCB8) = 0;
    FT_FIELD(f, s8, 0x2003) = 0;
    FT_FIELD(f, s8, 0x1FFD) = 1;
    FT_FIELD(f, s16, 0x181C) = 0;
    func_001DD680(f);
    FT_FIELD(f, s8, 0x2004) = 0;
    if (FT_FIELD(f, s16, 0xCAE) != 0x12 || FT_FIELD(f, s8, 0x1FFA) != 1) {
        func_001D9900(f, 0x12, 1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5320);
void func_001B5490(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B54E0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5630);
void func_001B57A0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.25f;
}
void func_001B57F0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5940);
void func_001B5AF0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
}
void func_001B5B30(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        FT_FIELD(f, s16, 0xCB4) = !(FT_FIELD(f, s16, 0xCB4) != 0);
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_004684A8[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5BC0);
void func_001B5DA0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5DB0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5E70);
void func_001B60E0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B62D0);
void func_001B6470(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B64C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6660);
void func_001B6800(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
void func_001B6820(Fighter *f) {
    func_001E3430(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6830);
void func_001B6960(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6980);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6C50);
void func_001B6EC0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
void func_001B6EE0(Fighter *f) {
    func_001E3BB0(f);
    func_001E3430(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6F10);
void func_001B7090(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B70B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7360);
void func_001B75A0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = (FT_FIELD(f, f32, 0xCB8) < 3.0f) ? 0.4f : 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7620);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7A30);
#if 0
// differs: the else store (0.0) is laid out as a branch target; the original is 16 bytes longer, layout not reproduced
void func_001B7C50(Fighter *f) {
    f32 v = 0.0f;
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    if (FT_FIELD(f, f32, 0xCB8) < 3.0f) {
        if (FT_FIELD(f, s16, 0xCB4) != 0) {
            v = -0.4f;
        } else {
            v = 0.4f;
        }
    }
    FT_FIELD(f, f32, 0x17BC) = v;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7C50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7CF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B80D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B82E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B82F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8380);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B84F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8600);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8780);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B87F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8E50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9040);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9070);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B91B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9330);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B93A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9800);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9A80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9B00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9CA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9E70);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA070);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA7B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA7F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAB10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BACE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAE10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAFF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BB2C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BB310);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BBC60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BBF50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BBFD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC110);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC220);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC270);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC3F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC4D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC7C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCA80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCC30);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCCD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCE50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCF30);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD020);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD300);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD490);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD520);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD530);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD6D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD760);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD900);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDAA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDB20);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDE30);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDF20);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDF80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE280);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE360);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE3B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE4F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE670);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE6C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE8D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEA60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEB50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEC70);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BED60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEE60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF090);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF170);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF230);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF350);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF400);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF450);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF730);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BFD60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C0130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C09A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C21C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C2340);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C24C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C26A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C27E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C28F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C2A00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C2B10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3120);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C37F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3AF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3D10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3E10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4000);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4250);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4710);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4870);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4C10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C55D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5870);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5D50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5F20);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5FE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6120);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C61A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6350);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C63F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6780);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6860);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C73B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7590);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C75B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C75D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7670);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D30);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D70);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D90);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8020);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8050);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C80E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C81D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8210);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C82C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8340);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8480);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8600);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8780);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8860);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C89A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8A50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8B50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8E50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8E60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8EE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8FE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C90D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9310);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9390);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9440);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C95F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9610);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9840);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9910);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9A70);
