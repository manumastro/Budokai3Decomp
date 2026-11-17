#include "common.h"

extern void func_002E0D40(void);
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
extern void func_00145CC0(s32, s32);
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
    func_002E0D40();
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
    func_00145CC0(w, 0x5000000);
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

INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA7B0);
void func_002EA8F0(void) {
    u8 *p = D_00470958;
    s32 v = *(s32 *)(p + 0x54);
    D_00470704 = v;
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    func_00145CC0(v, 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(p + 4), 1.0f);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA940);
void func_002EAA80(void) {
    u8 *p = D_00470958;
    s32 v = *(s32 *)(p + 0x54);
    D_00470704 = v;
    D_0047070C = 0x5000000;
    D_00470708 = 0;
    func_00145CC0(v, 0x5000000);
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
    func_00145CC0(*(s32 *)(s0 + 0x54), 0x5000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)(s0 + 4), 0.0f);
}
// differs: the float tests and the table lookup match in shape; the registers of the count and the two table indices differ (25 of 79 instructions)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAAF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAC30);
#if 0
void func_002EAEB0(void) {
    u8 *s = D_00470958;
    while (!((*(s8 *)*(u8 **)(s + 0x18)) & 4)) {
        *(s32 *)(s + 0x20) += 1;
        if ((*(s8 *)*(u8 **)(s + 0x18)) & 1) {
            *(s32 *)(s + 0x48) += 1;
            *(u8 **)(s + 0x18) += 8;
            if (*(void **)(*(u8 **)(s + 0x18) + 4) != NULL) {
                ((void (*)(void))*(void **)(*(u8 **)(s + 0x18) + 4))();
            }
        }
    }
}
// differs: a loop over a bytecode pointer; the code matches except for one alignment nop that this build does not place before the end of the if block (0xB0 bytes against 0xC0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAEB0);
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
