#include "common.h"

extern void Option_Load(void);
extern u8 *gBattle;
extern u8 *D_00470958;
extern u8 D_0046F678[];
extern u8 D_0046F680[];
extern void func_002E9B10(void *, void *);
extern void func_002E9B90(s32);
extern u8 D_0046F668[];
extern u8 D_0046F670[];
extern u8 D_0046F658[];
extern u8 D_0046F660[];
extern u8 D_0046F648[];
extern u8 D_0046F650[];
extern u8 D_0046F638[];
extern u8 D_0046F640[];
extern u8 D_0046F628[];
extern u8 D_0046F630[];
extern u8 D_0046F608[];
extern u8 D_0046F618[];
extern u8 D_0046F5F8[];
extern u8 D_0046F600[];
extern void func_002E9970(s32, s32);
extern s32 func_002E9900(void);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(s32, f32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 func_0022BF80(s32);
extern void (*D_004573F4[])(void);
extern s32 amGs_SetReg32(s32, s32);
extern void func_002EA4A0(void);
extern void func_0022C560(s32);
extern void amCdFs_ReleaseCache(s32);
extern void amCdFs_Close(s32, s32);
extern void memset(void *, s32, s32);
extern void func_0022D0E0(s32, s32);
extern u8 D_005C9F80[];
extern s32 D_00470194;
extern s32 D_00470198;
extern s32 D_00457410[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_0022D670(s32, f32);
extern u8 D_00457440[];
extern void (*D_004573F0[])(void);

void func_002EA0B0(void) {
    Option_Load();
}
s32 func_002EA0C0(void) {
    if (*(f32 *)(gBattle + 0x8930) >= 1.0f) {
        return 2;
    }
    return 1;
}
void func_002EA0F0(void) {
    u8 *g = gBattle;
    u8 *o = D_00470958;
    g[0x8AB2] = 1;
    *(s8 *)(g + 0x8AB3) = -1;
    *(s32 *)(g + 0x891C) = 0;
    *(void **)(o + 0x24) = func_002EA0C0;
}
void func_002EA140(void) {
    func_002E9B10(D_0046F678, D_0046F680);
    func_002E9B90(1);
}
void func_002EA170(void) {
    func_002E9B10(D_0046F678, D_0046F680);
    func_002E9B90(1);
}
void func_002EA1A0(void) {
    func_002E9B10(D_0046F668, D_0046F670);
    func_002E9B90(1);
}
void func_002EA1D0(void) {
    func_002E9B10(D_0046F658, D_0046F660);
    func_002E9B90(1);
}
void func_002EA200(void) {
    func_002E9B10(D_0046F648, D_0046F650);
    func_002E9B90(1);
}
void func_002EA230(void) {
    func_002E9B10(D_0046F638, D_0046F640);
    func_002E9B90(1);
}
void func_002EA260(void) {
    func_002E9B10(D_0046F628, D_0046F630);
    func_002E9B90(1);
}
void func_002EA290(void) {
    func_002E9B10(D_0046F608, D_0046F618);
    func_002E9B90(1);
}
void func_002EA2C0(void) {
    func_002E9B10(D_0046F5F8, D_0046F600);
    func_002E9B90(1);
}
void func_002EA2F0(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 5);
    *(void **)(p + 0x24) = func_002E9900;
}
void func_002EA330(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 4);
    *(void **)(p + 0x24) = func_002E9900;
}
void func_002EA370(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 3);
    *(void **)(p + 0x24) = func_002E9900;
}
void func_002EA3B0(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 2);
    *(void **)(p + 0x24) = func_002E9900;
}
void func_002EA3F0(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 1);
    *(void **)(p + 0x24) = func_002E9900;
}
s32 func_002EA430(void) {
    return func_002E9900() ? 2 : 0;
}
void func_002EA460(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 0);
    *(void **)(p + 0x24) = func_002EA430;
}
#if 0
// differs: 0x1F8 of 0x220 bytes; frame 128 vs 176, float operation order and load scheduling
typedef struct {
    f32 x;
    f32 y;
    s32 z;
    s32 w;
} Vec4u;
extern void func_00136E80();
extern void func_00137560();
extern void amDraw_FlushPacket();

void func_002EA4A0(void) {
    u8 *g = D_00470958;
    u8 *s4;
    u8 *s3;
    Vec4u p0;
    Vec4u p1;
    Vec4u p2;
    Vec4u pc;
    f32 h = 0.5f;

    if (*(u8 **)(g + 4) != 0 && *(s32 *)(g + 0xC) == 1) {
        s4 = *(u8 **)(*(u8 **)(g + 4) + 0x30);
        amModel_SetCurrent(*(s32 *)(g + 0x58), 0x5100000);
        s3 = *(u8 **)(g + 0x4C);
        p0.x = *(f32 *)(s4 + 0x20) - h * (f32)*(s16 *)(s3 + 0x10);
        p0.z = 0;
        p0.w = 1;
        p0.y = *(f32 *)(s4 + 0x24) - h * (f32)*(s16 *)(s3 + 0x12);
        p1.x = *(f32 *)(s4 + 0x20) + h * (f32)*(s16 *)(s3 + 0x10);
        p1.y = *(f32 *)(s4 + 0x24) + h * (f32)*(s16 *)(s3 + 0x12);
        p1.z = 0;
        p1.w = 1;
        *(s32 *)&pc.x = 0;
        *(s32 *)&pc.y = 0;
        pc.z = 1;
        pc.w = 1;
        p2.x = (f32)*(s16 *)(s3 + 0x10) - h;
        p2.z = 1;
        p2.w = 1;
        p2.y = (f32)*(s16 *)(s3 + 0x12) - h;
        func_00136E80(0x40000C24, 0, *(s32 *)(g + 0x48), 0x44, 5);
        func_00137560(&p0, &pc);
        func_00137560(&p1, &p2);
        amDraw_FlushPacket();
        D_00470704 = *(s32 *)(g + 0x54);
        D_0047070C = 0x5000000;
        D_00470708 = 0;
        amModel_SetCurrent(*(s32 *)(g + 0x54), 0x5000000);
        D_00470238 = 0;
        func_0022C060(*(s32 *)(g + 8), 1.0f);
        *(f32 *)(*(u8 **)(*(u8 **)(g + 8) + 0x30) + 0x20) = *(f32 *)(*(u8 **)(*(u8 **)(g + 8) + 0x30) + 0x20) + h * (p0.x + p1.x);
        *(f32 *)(*(u8 **)(*(u8 **)(g + 8) + 0x30) + 0x24) = *(f32 *)(*(u8 **)(*(u8 **)(g + 8) + 0x30) + 0x24) + p1.y;
        func_0022C560(*(s32 *)(g + 8));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA4A0);
void func_002EA6C0(void) {
    u8 *s0 = D_00470958;
    u8 *a1;
    s32 v;
    s32 w;
    w = *(s32 *)(s0 + 0x54);
    D_00470704 = w;
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(w, 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(s0 + 0x4), 1.0f);
    v = func_0022BF80(*(s32 *)(s0 + 0x4));
    if (v == 0xFF) {
        *(s32 *)(s0 + 0xC) = -1;
        if (*(u8 **)(s0 + 0x18) != NULL && (*(s8 *)(*(u8 **)(s0 + 0x18)) & 0x1)) {
            a1 = *(u8 **)(s0 + 0x58);
            *(u8 **)(s0 + 0x4C) = a1 + *(s32 *)(*(s32 *)(a1 + 0x14) + (u32)a1 + ((*(s32 *)(s0 + 0x48) - *(s32 *)(a1 + 0x18)) << 2));
            if ((*(s8 *)(*(u8 **)(s0 + 0x18) + 0x2)) == 0 || (*(s8 *)(*(u8 **)(s0 + 0x18) + 0x2)) == 2) {
                D_004573F0[0]();
            } else {
                D_004573F4[0]();
            }
        }
    }
}

#if 0
void func_002EA7B0(void) {
    u8 *v = D_00470958;
    u8 *s0;
    u8 *info;
    u8 *p;
    s32 s1;
    s32 s2;
    s32 s3;
    s32 a1;
    f32 f1;
    *(s32 *)(v + 0xC) = 2;
    s0 = D_00470958;
    info = *(u8 **)(v + 0x18);
    p = *(u8 **)(s0 + 4);
    s3 = ((s8 *)info)[1];
    s2 = ((s8 *)info)[2];
    s1 = *(s32 *)(v + 0xC);
    if (p != 0) {
        func_0022D0E0((s32)p, 1);
        *(s32 *)(s0 + 4) = 0;
    }
    a1 = s2 + (s3 << 3);
    p = *(u8 **)(s0 + 0x4C);
    f1 = 0.75f * (f32)*(s32 *)(s0 + 0x28 + s2 * 4);
    if (f1 < (f32)*(s16 *)(p + 0x10)) {
        a1 += 4;
    } else {
        f1 = 0.75f * (f32)*(s32 *)(s0 + 0x38 + s2 * 4);
        if (f1 < (f32)*(s16 *)(p + 0x12)) {
            a1 += 4;
        }
    }
    p = *(u8 **)(s0 + 0x50);
    *(s32 *)(s0 + 4) = func_0022D670(*(s32 *)(*(u8 **)(p + 0x1C) + ((s8 *)D_00457440 + a1)[0] + s1) * 4 + 0, 0.0f);
    D_00470704 = *(s32 *)(s0 + 0x54);
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(*(s32 *)(s0 + 0x54), 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(s0 + 4), 0.0f);
}
// differs: 53 of 83 instructions differ (50 with one declaration order): the same pointer-and-global pattern as the parked func_002EA940; the info bytes are in the other saved registers and the join of the two clamp arms is laid out differently.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA7B0);
void func_002EA8F0(void) {
    u8 *p = D_00470958;
    s32 v = *(s32 *)(p + 0x54);
    D_00470704 = v;
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(p + 4), 1.0f);
}
#if 0
void func_002EA940(void) {
    s32 a1 = 1;
    u8 *info;
    u8 *p;
    s32 s1;
    s32 s2;
    s32 s3;
    f32 f1;
    u8 *ob = D_00470958;
    ob = D_00470958;
    *(s32 *)(ob + 0xC) = a1;
    s1 = *(s32 *)(ob + 0xC);
    ob = D_00470958;
    info = *(u8 **)(ob + 0x18);
    p = *(u8 **)(ob + 4);
    s3 = ((s8 *)info)[1];
    if (p != 0) {
        func_0022D0E0((s32)p, 1);
        *(s32 *)(ob + 4) = 0;
    }
    s2 = ((s8 *)info)[2];
    a1 = s2 + (s3 << 3);
    p = *(u8 **)(ob + 0x4C);
    f1 = 0.75f * (f32)*(s32 *)(ob + 0x28 + s2 * 4);
    if (f1 < (f32)*(s16 *)(p + 0x10)) {
        a1 += 4;
    } else {
        f1 = 0.75f * (f32)*(s32 *)(ob + 0x38 + s2 * 4);
        if (f1 < (f32)*(s16 *)(p + 0x12)) {
            a1 += 4;
        }
    }
    p = *(u8 **)(ob + 0x50);
    *(s32 *)(ob + 4) = func_0022D670(*(s32 *)(*(u8 **)(p + 0x1C) + ((s8 *)D_00457440 + a1)[0] + s1) * 4 + 0, 0.0f);
    D_00470704 = *(s32 *)(ob + 0x54);
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(*(s32 *)(ob + 0x54), 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(ob + 4), 0.0f);
}
// differs: 60 of 81 instructions differ for every declaration order (all 120 tried): the struct field reads and the float compares are in the same order, but the original keeps the object pointer in s0 and reloads it; the early a1 += 4 arms and the globals D_00470704/0C/08 are right. Structural difference not found.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA940);
void func_002EAA80(void) {
    u8 *p = D_00470958;
    s32 v = *(s32 *)(p + 0x54);
    D_00470704 = v;
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(p + 4), 1.0f);
    if (func_0022BF80(*(s32 *)(p + 4)) == 0xFF) {
        D_004573F4[0]();
    }
}
#if 0
void func_002EAAF0(void) {
    u8 *s0;
    s32 s1;
    s32 t1;
    s32 t2;
    s32 a1;
    s32 x;
    u8 *q;
    s0 = D_00470958;
    *(s32 *)(s0 + 0xC) = 0;
    s1 = *(s32 *)(s0 + 0xC);
    s0 = D_00470958;
    {
        u8 *pl = *(u8 **)(s0 + 0x18);
        t1 = *(s8 *)(pl + 1);
        t2 = *(s8 *)(pl + 2);
    }
    if (*(s32 *)(s0 + 4) != 0) {
        func_0022D0E0(*(s32 *)(s0 + 4), 1);
        *(s32 *)(s0 + 4) = 0;
    }
    a1 = t2 + t1 * 8;
    q = *(u8 **)(s0 + 0x4C);
    x = *(s32 *)(s0 + 0x28 + t1 * 4);
    if (0.75f * (f32)x < (f32)*(s16 *)(q + 0x10) ||
        0.75f * (f32)*(s32 *)(s0 + 0x38 + t1 * 4) < (f32)*(s16 *)(q + 0x12)) {
        a1 += 4;
    }
    {
        u8 *c = *(u8 **)(s0 + 0x50);
        s32 idx = (s8)D_00457440[a1] + s1;
        *(s32 *)(s0 + 4) = func_0022D670(*(s32 *)(*(u8 **)(c + 0x1C) + idx * 4), 0.0f);
    }
    D_00470704 = *(s32 *)(s0 + 0x54);
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    amModel_SetCurrent(*(s32 *)(s0 + 0x54), 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(s0 + 4), 0.0f);
}
// differs: the float tests and the table lookup match in shape; the registers of the count and the two table indices differ (25 of 79 instructions)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAAF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAC30);
void func_002EAEB0(void)
{
    u8 *s = D_00470958;
    while (!(((*((s8 *)*((u8 **)((s + 0x18))))) & 4)))
    {
        *((s32 *)((s + 0x20))) += 1;
        if (((*((s8 *)*((u8 **)((s + 0x18))))) & 1))
        {
            *((s32 *)((s + 0x48))) += 1;
        }
        *((u8 **)((s + 0x18))) += 8;
        if ((*((void **)((*((u8 **)((s + 0x18))) + 4))) != NULL))
        {
            (((void (*) (void))*((void **)((*((u8 **)((s + 0x18))) + 4)))))();
        }
    }
}
#if 0
// differs: compiles to 0x14C of 0x160; the battle index/CSE order and the join nop differ
extern void func_001C75D0(void *, s32);
extern void func_002EAC30(void);
typedef s32 (*S32Fn)(void);

void func_002EAF70(s32 arg) {
    s32 keep = arg;
    u8 *p = D_00470958;
    u8 *m;
    s32 a2;
    s32 v;
    u8 *bw;
    S32Fn fn;

    if (*(s32 *)(p + 0x18) == 0) {
        arg = 1;
    } else {
        fn = *(S32Fn *)(p + 0x24);
        if (fn != 0) {
            arg = fn();
        } else {
            arg = 1;
            if (*(s32 *)(p + 0x0C) != 1) {
                arg = 0;
            }
        }
    }
    if (arg == 0) {
        return;
    }
    if (arg == 1 && keep == 0) {
        return;
    }
    m = *(u8 **)(p + 0x18);
    if ((m[0] & 2) && (s8)m[3] < 0) {
        a2 = (s8)m[1];
        bw = gBattle + ((a2 * 257) << 5);
        v = *(s16 *)(*(u8 **)(p + 0x14) + a2 * 2 + 8) + 0x2D8;
        if (*(s32 *)(bw + 0x13A0) != v) {
            *(s16 *)(bw + 0x830 + 0xCB4) = 1;
            *(s32 *)(bw + 0x830 + 0xB70) = v;
            *(s16 *)(bw + 0x830 + 0xCB6) = 1;
            func_001C75D0(bw + 0x830, 0xF);
            *(f32 *)(bw + 0x830 + 0xCA4) = 0.1f;
            *(f32 *)(bw + 0x830 + 0xCA8) = 0.05f;
        }
    }
    *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) + 1;
    if (*(u8 *)*(u8 **)(p + 0x18) & 1) {
        *(s32 *)(p + 0x48) = *(s32 *)(p + 0x48) + 1;
    }
    func_002EAC30();
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAF70);
void func_002EB0D0(void) {
    s32 old;
    s32 q;
    if (D_00470958 != NULL) {
        old = amGs_SetReg32(0, 0x30002);
        q = *(s32 *)(D_00470958 + 4);
        if (q != 0) {
            func_0022C560(q);
        }
        func_002EA4A0();
        amGs_SetReg32(0, old);
    }
}
extern void (*D_00457400[])(void);
extern void func_001C75D0(void *, s32);
#if 0
s32 func_002EB140(void) {
    u8 *s0 = D_00470958;
    u8 *info;
    u8 *bt;
    u8 *p1;
    s32 idx;
    s32 v0;
    s32 v1;
    s32 a1;
    if (s0 == 0) {
        return 1;
    }
    info = *(u8 **)(s0 + 0x18);
    if ((*(s8 *)info & 4) != 0) {
        if (*(s32 *)(s0 + 0xC) == -1) {
            return 1;
        }
    }
    idx = *(s32 *)(s0 + 0xC);
    if (idx != -1) {
        D_00457400[idx]();
    }
    info = *(u8 **)(s0 + 0x18);
    if (((s8 *)info)[3] < 0) {
        a1 = ((s8 *)info)[1];
        bt = gBattle + ((a1 + (a1 << 8)) << 5);
        p1 = bt + 0x830;
        if (*(s32 *)(bt + 0x13A0) == 0x2D8) {
            v0 = 0;
        } else {
            v0 = *(s32 *)(p1 + 0xC64);
        }
        if (v0 != 0) {
            v0 = ((s8 *)info)[1];
            v1 = *(s32 *)(s0 + 0x14);
            v0 = *(s16 *)(v0 * 2 + v1 + 8);
            v1 = v0 + 0x2D8;
            if (*(s32 *)(bt + 0x13A0) != v1) {
                *(s16 *)(p1 + 0xCB4) = 1;
                *(s32 *)(p1 + 0xB70) = v1;
                func_001C75D0(p1, 15);
                *(s16 *)(p1 + 0xCB6) = 1;
                *(s32 *)(p1 + 0xCA4) = 0x3DCCCCCD;
                *(s32 *)(p1 + 0xCA8) = 0x3D4CCCCD;
            }
        }
    }
    return 0;
}
// differs: 22 of 79 instructions differ: the original re-reads the byte info[1] (lb 1(a2)) after the table lookup and keeps the info pointer in a2; here the compiler reuses a1 and the info pointer goes to v1. Tried the nested form, explicit returns (worse: 57 of 87).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB140);
void func_002EB280(void) {
    D_00470958 = NULL;
}
void func_002EB290(void) {
    u8 *s = D_00470958;
    if (s != NULL) {
        if (*(s32 *)(s + 0x50) != 0) {
            amCdFs_ReleaseCache(*(s32 *)(s + 0x5C));
            *(s32 *)(s + 0x50) = 0;
            *(s32 *)(s + 0x5C) = 0;
        } else if (*(s32 *)(s + 0x5C) != 0) {
            amCdFs_Close(*(s32 *)(s + 0x5C), 0);
            *(s32 *)(s + 0x5C) = 0;
        }
        if (*(s32 *)(s + 0x54) != 0) {
            amCdFs_ReleaseCache(*(s32 *)(s + 0x60));
            *(s32 *)(s + 0x54) = 0;
            *(s32 *)(s + 0x60) = 0;
        } else if (*(s32 *)(s + 0x60) != 0) {
            amCdFs_Close(*(s32 *)(s + 0x60), 0);
            *(s32 *)(s + 0x60) = 0;
        }
        if (*(s32 *)(s + 0x58) != 0) {
            amCdFs_ReleaseCache(*(s32 *)(s + 0x64));
            *(s32 *)(s + 0x58) = 0;
            *(s32 *)(s + 0x64) = 0;
        } else if (*(s32 *)(s + 0x64) != 0) {
            amCdFs_Close(*(s32 *)(s + 0x64), 0);
            *(s32 *)(s + 0x64) = 0;
        }
        memset(D_00470958, 0, 0x68);
        D_00470958 = NULL;
    }
}
void func_002EB380(void) {
    s32 i;
    s32 *p = (s32 *)D_00470958;
    if (p != NULL) {
        for (i = 0; i < 2; i++) {
            if (p[1] != 0) {
                func_0022D0E0(p[1], 1);
                p[1] = 0;
            }
            p++;
        }
    }
}
extern s32 D_00457E50[];
extern void func_002E9BA0(s32);
extern void func_002EAC30(void);
#if 0
void func_002EB3E0(s32 a0, s32 a1) {
    u8 *ob = D_00470958;
    s32 v3;
    u8 *s1;
    if (ob == 0) {
        return;
    }
    *(s32 *)ob = a0;
    *(s32 *)(ob + 0x14) = D_00457E50[a0] + a1 * 12;
    *(s32 *)(ob + 0x18) = 0;
    *(s32 *)(ob + 0x1C) = 0;
    *(s32 *)(ob + 0x20) = 0;
    *(s32 *)(ob + 0xC) = -1;
    *(s32 *)(ob + 0x48) = *(s32 *)(*(u8 **)(ob + 0x14));
    *(s32 *)(ob + 0x24) = 0;
    s1 = gBattle + 0x830;
    v3 = *(s16 *)(*(u8 **)(ob + 0x14) + 8) + 0x2D8;
    if (*(s32 *)(gBattle + 0x13A0) != v3) {
        *(s16 *)(s1 + 0xCB4) = 1;
        *(s32 *)(s1 + 0xB70) = v3;
        func_001C75D0(s1, 15);
        *(s16 *)(s1 + 0xCB6) = 1;
        *(s32 *)(s1 + 0xCA4) = 0x3F800000;
        *(s32 *)(s1 + 0xCA8) = 0;
    }
    s1 = gBattle + 0x2850;
    v3 = *(s16 *)(*(u8 **)(ob + 0x14) + 0xA) + 0x2D8;
    if (*(s32 *)(gBattle + 0x33C0) != v3) {
        *(s16 *)(s1 + 0xCB4) = 1;
        *(s32 *)(s1 + 0xB70) = v3;
        func_001C75D0(s1, 15);
        *(s16 *)(s1 + 0xCB6) = 1;
        *(s32 *)(s1 + 0xCA4) = 0x3F800000;
        *(s32 *)(s1 + 0xCA8) = 0;
    }
    func_002E9BA0(0);
    func_002E9B90(0);
    func_002EAC30();
    if (*(s32 *)(ob + 8) == 0) {
        *(s32 *)(ob + 8) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(ob + 0x50) + 0x1C) + 0xC0), 0.0f);
        D_00470704 = *(s32 *)(ob + 0x54);
        D_0047070C = 0x5000000;
        amModel_SetCurrent(*(s32 *)(ob + 0x54), 0x5000000);
        D_00470708 = 0;
        D_00470238 = 0;
        func_0022C060(*(s32 *)(ob + 8), 0.0f);
    }
}
// differs: 71 of 95 instructions differ: the first half (object fields, the D_00457E50 table entry) matches but the original reads the gBattle pointer and the table entry again after the two battle blocks; the store order inside the two blocks and the register of the object pointer differ (s0 here, s1 in ours). Declaration orders tried.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB3E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB560);
s32 func_002EB7B0(void) {
    u8 *s1 = D_005C9F80;
    s32 s0 = 0;
    s32 s2;
    s32 v;
    D_00470958 = s1;
    memset(s1, 0, 0x68);
    s2 = *(s8 *)(gBattle + 0x8AB6);
    if (D_00470194 != -1) {
        v = amCdFs_ReadFileId(D_00470194, 0, 1);
        *(s32 *)(s1 + 0x5C) = v;
        s0 = v;
    }
    if (D_00470198 != -1) {
        v = amCdFs_ReadFileId(D_00470198, 0, 1);
        *(s32 *)(s1 + 0x60) = v;
        s0 = v;
    }
    v = D_00457410[s2];
    if (v != -1) {
        v = amCdFs_ReadFileId(v | 0x10000, 0, 1);
        *(s32 *)(s1 + 0x64) = v;
        s0 = v;
    }
    return s0;
}
