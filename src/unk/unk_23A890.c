#include "common.h"

extern u8 *D_00470740[2];
extern u8 *D_00470570;
extern u8 *D_0046FE48;
extern s32 D_00452130[];
void amHeap_Free(void *);
void amTask_Kill(s32);
void func_00215040(s16, s32, s32);
void func_0023B6B0(s32);
void func_0023B4C0(void);

extern s32 D_00451B10[];
extern s32 D_00451970[];
extern u8 D_0058CAA0[];
s32 amCdFs_ReadFileId(s32, s32, s32);
void func_0020DE30(void);
void func_00248C60(void);
void func_00252B00(void);
void func_0025BE20(void);
void func_002CA3F0(void);

extern u8 D_004508F0[];
extern u8 D_00450B60[];
extern u8 *D_0046FE44;
extern u8 *D_0046FE4C;
extern u8 D_0058C6C0[];
extern u8 D_0058C5B0[];
extern s32 D_00470238;
void memset(void *, s32, s32);
void func_00242870(void);
void func_00242290(void);
void func_0021B070(void);
void func_00244F00(s32, s32);
void func_00248D70(s32, s32);
void func_00252C20(s32, s32);
void func_00208F70(s32);
void func_001F5F50(u8 *);
void func_00248910(s32, u8 *);
void func_001D9C40(u8 *, s32, s32);
void func_00145CC0(s32, s32);
void func_001F3DF0(u8 *);
void func_00208D70(s32);
void func_001F3D80(u8 *);
void func_00241600(s32);

extern s32 D_00470734;
void func_00240A90(void);
void func_00245240(void);
void func_00215230(s16, s16);
void func_00241500(s32, s32);
void func_00241EB0(s32, s32);
void func_00241FA0(s32, s32);
void func_00244CC0(s32, s32);
void func_00244D80(s32, s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023A890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023AA50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023AB60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023AEE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023B080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023B3C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023B4C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023B6B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023B7D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023BBE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023C690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023CE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023D360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023D680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023D970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023DB40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023DC10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023E260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023E570);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023E7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023E950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023ED30);
void func_0023F370(void) {
    s32 i;

    if (func_0021C280(0x200000)) {
        if (0 < *(s32 *)(D_00470570 + 0x88D8)) {
            i = 0;
            do {
                func_0023B6B0(i);
                i++;
            } while (i < *(s32 *)(D_00470570 + 0x88D8));
        }
        func_0023B4C0();
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023F3F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023F610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023F7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023FBB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_0023FC80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002400E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002401A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002408C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240A90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240C30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240CD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240D70);
void func_00240E10(void) {
    func_00240A90();
}
void func_00240E20(void) {
    func_00240A90();
}
void func_00240E30(void) {
    func_00240A90();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240E40);
void func_00240EE0(void) {
}
u8 *func_00240EF0(s32 i) {
    return D_004508F0 + i * 0x38;
}
u8 *func_00240F10(s32 a, s32 b) {
    return D_00450B60 + a * 0x28 + b * 0x5;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240F40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00240FF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241010);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002410D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241280);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241710);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241AC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241C10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241D60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241EB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00241FA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002420F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242490);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242540);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242A10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242B40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00242E10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243020);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243280);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002433F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002439E0);
void func_00243AC0(u8 *o) {
    func_00215230(*(s16 *)(o + 0x10), 4);
}
void func_00243AD0(u8 *o) {
    func_00241500(*(s32 *)(o + 0x10), 3);
}
void func_00243AE0(u8 *o) {
    func_00241500(*(s32 *)(o + 0x10), 2);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243AF0);
void func_00243BC0(u8 *o) {
    func_00241EB0(*(s32 *)(o + 0x10), *(s32 *)(o + 0x14));
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243BD0);
#if 0
void func_00243D80(u8 *o) {
    s16 v = *(s16 *)(o + 0x18);
    s32 idx = *(s32 *)(o + 0x10);
    u8 *p = D_0046FE44 + (idx << 7);

    if (v < 8) {
        *(s16 *)(p + 0x34) = v;
    }
    func_00241600(*(s32 *)(o + 0x10));
}
// differs: the loads come in another order (lw of the index, lh of the value, then the table base); the register roles are swapped
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243D80);
void func_00243DB0(u8 *o) {
    func_00241FA0(*(s32 *)(o + 0x10), *(s32 *)(o + 0x14));
}
u8 *func_00243DC0(s32 i) {
    return D_0046FE48 + i * 0x1A4;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243DE0);
#if 0
s32 func_00243E50(s32 i, s32 j) {
    s32 *s0 = (s32 *)(D_0046FE48 + i * 0x1A4);

    if (D_00452130[j] != -1) {
        *s0 = amCdFs_ReadFileId(D_00452130[j], 0, 1);
        return *s0;
    }
    return 0;
}
// differs: the original loads the table entry and the global base in another order, and keeps the object pointer in its own register (not folded into the offsets)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243E50);
void func_00243ED0(void) {
    func_0021B070();
    memset(D_0058C6C0, 0, 0x3D4);
    memset(D_0058C5B0, 0, 0x110);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00243F20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244040);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002440C0);
void func_00244150(void) {
    func_00242870();
    if (*(s16 *)(D_0046FE44 + 0x100) == 0) {
        func_00242290();
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244190);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244280);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244580);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244A60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244CC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244D80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00244F00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00245240);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002453D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002454B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00245A80);
void func_00245BE0(u8 *o) {
    func_00244CC0(*(s32 *)(o + 0x1350), 1);
}
void func_00245BF0(u8 *o) {
    func_00244D80(*(s32 *)(o + 0x1350), 1);
}
void func_00245C00(u8 *o) {
    func_00244F00(*(s32 *)(o + 0x1350), 1);
    func_00248D70(*(s32 *)(o + 0x1350), 1);
    func_00252C20(*(s32 *)(o + 0x1350), 1);
}
s32 func_00245C50(u8 *o) {
    u8 *p = D_0046FE4C + *(s32 *)(o + 0x1350) * 0x480;
    u8 **q = (u8 **)(p + 0x270);

    if (*(s32 *)(p + 0x284) != 0) {
        return 1;
    }
    if (*q != 0 && *(s16 *)(*q + 4) == 3) {
        return 1;
    }
    return 0;
}
void func_00245CC0(u8 *o, s32 idx) {
    s32 *q = (s32 *)(D_0046FE4C + *(s32 *)(o + 0x1350) * 0x480 + 0x270);

    if (D_00451B10[idx] != -1) {
        q[0] = amCdFs_ReadFileId(D_00451B10[idx], 0, 1);
        q[5] = 0;
    }
}
void func_00245D30(u8 *o, s32 idx) {
    s32 *q = (s32 *)(D_0046FE4C + *(s32 *)(o + 0x1350) * 0x480 + 0x270);

    if (D_00451970[idx] != -1) {
        q[0] = amCdFs_ReadFileId(D_00451970[idx], 0, 1);
        q[5] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00245DA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002463B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00246680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00246800);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00246AB0);
u8 *func_00246CA0(s32 i, s32 j) {
    u8 *a2 = D_00470570 + i * 0x2020 + 0x830;

    if (j < 0) {
        if (*(s32 *)(a2 + 0x1CFC) == 0x23) {
            if (*(s32 *)(a2 + 0xBA4) != 0) {
                j = 1;
            } else {
                j = 0;
            }
        } else {
            j = 0;
        }
    }
    return D_0046FE4C + i * 0x480 + j * 0x220 + 0x50;
}
void func_00246D20(void) {
    *(s16 *)(D_0046FE4C + 0x914) = 0;
    *(s32 *)(D_0046FE4C + 0x910) = 0;
    *(s16 *)(D_0046FE4C + 0x918) = 0;
    *(s16 *)(D_0046FE4C + 0x91A) = 0;
}
void func_00246D50(u8 *o) {
    if (*(s32 *)(o + 0xB9C) == 0x20) {
        func_00248910(0xE, o);
        func_001D9C40(o, *(s32 *)(o + 0x1350) + 2, 0x32);
    }
}
void func_00246DA0(u8 *o) {
    u8 *p;

    if (*(s32 *)(o + 0xB9C) == 0x2A) {
        func_00215040(*(s16 *)(o + 0x1350), 0x800, 0xC6);
        p = D_0046FE4C + *(s32 *)(o + 0x1350) * 0x480 + 0x10;
        if (*(s32 *)(p + 0x24) != 0) {
            amTask_Kill(*(s32 *)(p + 0x24));
            *(s32 *)(p + 0x24) = 0;
        }
        *(s16 *)(D_0046FE4C + 0x91A) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00246E20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00246EB0);
void func_00247060(u8 *o, f32 x) {
    s32 n = *(s32 *)(o + 0x1350);

    *(f32 *)(D_0046FE4C + n * 0x480 + 0x20) = x;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247080);
void func_00247090(u8 *o, s32 x) {
    s32 n = *(s32 *)(o + 0x1350);

    *(s32 *)(D_0046FE4C + n * 0x480 + 0x24) = x;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002470B0);
void func_00247280(void) {
    if (*(s16 *)(D_0046FE4C + 0x916) != 0) {
        func_0020DE30();
        *(s16 *)(D_0046FE4C + 0x916) = 0;
    }
    memset(D_0058CAA0, 0, 0x9B0);
    func_00248C60();
    func_00252B00();
    func_0025BE20();
    func_002CA3F0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002472F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247500);
void func_002475D0(void) {
    func_00245240();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002475E0);
#if 0
void func_00247770(u8 *o) {
    s32 *p = (s32 *)(o + 0x30);

    func_00208F70(*(s32 *)(o + 0x38));
    if (*(s32 *)(*(s32 *)(p + 2) + 0x38) < 0) {
        func_001F5F50(o);
    }
}
// differs: the original keeps the object in s1 and o+0x30 in s0 (a 0x30 frame, three saves); here the object stays in s0 and the second load is folded
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247770);
#if 0
void func_002477C0(u8 *o) {
    s32 *p = (s32 *)(o + 0x30);

    D_00470238 = 0;
    func_00145CC0(*(s32 *)(o + 0x34), 0x2003000);
    func_001F3DF0(o);
    func_00208D70(p[2]);
    func_001F3D80(o);
}
// differs: same frame as func_00247770: the original keeps the object in s1 and o+0x30 in s0 (0x30 frame)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002477C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247820);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_002479B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247AB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247C80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247F70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00247FF0);
void func_00248350(s32 x) {
    D_00470734 = x;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00248360);
#if 0
void func_00248410(void) {
    s32 i;

    for (i = 0; i < 2; i++) {
        u8 *v = D_00470740[i];

        if (v != 0) {
            u8 *s1 = v + 0x30;

            amHeap_Free(*(void **)(v + 0x38));
            amHeap_Free(*(void **)(s1 + 0xC));
            D_00470740[i] = 0;
        }
    }
}
// differs: the original loads the table entry and the global base in another order, and keeps the object pointer in its own register (not folded into the offsets)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00248410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_23A890", func_00248480);
