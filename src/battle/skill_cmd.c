#include "common.h"
#include "battle/battle.h"

/*
 * Recipe (round 4, unblock): operand order of a sum. When a give-up says the sum is added in the other order (a
 * base plus an index, a pointer plus an offset), write the attempt, then try both operands of every `A + B` in
 * the statements (atoms: identifiers, casts like (s32)p, parenthesised groups, a[i], p->f, x * n, x << n), all
 * combinations, in one translation unit with the game's flags (-O4,p -sdatathreshold 8 -str readonly), and compare
 * each function with the ROM. func_00252C20 matched with the first sum swapped: `(pp[2] << 2) + (s32)pp + 0x20`.
 * A sum that still differs by one instruction after the swap needs something else (a declaration order, a local).
 */



typedef struct SkillBuf {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ s16 unk60;
    /* 0x62 */ s16 unk62;
} SkillBuf;

extern void Obj_ResetF38(s32);
extern void amTask_Kill(s32);
extern s32 func_0021C460(s32);
extern s32 func_0021C360(s32);
extern s32 *func_00259CC0(s32 *, s32);
extern void func_002525A0(u8 *, u8 *, s32);
extern u8 D_0046FE4C[];
extern u8 D_004529B8[];
extern s32 D_0058D4D0[];
extern s32 func_0022D0B0(s32, s32);
extern s32 func_0022D570(s32, s32, s32, s32);
extern void func_00209450(s32, s32);
extern void BtbObj_RemoveByIdx(s32, s32);
extern s32 *func_001F5EF0(s32, s32);
extern void func_001F5B10(s32, s32);
extern u8 D_00452740[];
extern char D_0046AE20[];
extern s32 func_00246CA0(s32, s32);
extern s32 func_00127E88(char *, char *, s32);
extern u8 D_004E066A[];
extern void *D_0046FE54;
extern u8 D_00452900[];
extern s32 D_0051CD20[];
extern void func_00248350(s32);
extern void func_002CF070(s32, s32);
extern void func_001D9280(s32);
extern f32 D_00470710;
extern void func_0022C7D0(s32, f32, s32);
extern void func_0022C060(s32, f32);
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_002543B0(u8 *);
extern void func_0022ACF0(s32);
extern s32 func_0020B020(s32, s32, s32);
extern s32 func_0020AD30(s32, s32, s32);
extern s32 func_0020AE80(s32, s16, s16);
extern void func_00208D60();
extern void func_00209D20(s32);
extern void func_00208D70(s32);
extern void func_00209C50(void);
extern void amHeap_Free(void *);
extern void amFile_Load(s32);
extern s32 func_001A50F0(s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);

extern u8 *gBtlSys;
extern void func_001F9BB0(s32, s32);
extern void BtbObj_FreeFlag400(s32, s32);
extern void BtbBg_CreatePlanet(s32);
extern void BtbBg_SetF9E(s32);
extern void BtbBg_ClearFlag40(s32, s32);
extern void BtbBg_SetFlag40(s32, s32);
extern void BtbBg_ClearFlag1(s32, s32);
extern void BtbBg_SetFlag1(s32, s32);
extern void func_00125740(void *, void *, s32);
extern void func_001F7470(s32);
extern void func_001F7490(s32);
extern void func_001F7720(s32);
extern void func_001F7990(s32);
extern void func_001F7C80(s32);
extern s32 Input_IsHeld(s32);
extern void amModel_SetCurrent(s32, s32);
extern void amDraw_SetPacketMode(s32);
extern void amDraw_KickPending(void);
extern void func_0022C560(s32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;


INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00248E00);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00249100);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002499A0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00249B00);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00249D50);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00249F50);
/* An object of the battle's skill code: the fighter it belongs to, a flags word (0x4000 set once it
 * is lowered, 0x8000 once its value ran out), a float value and two sub-objects. */
typedef struct SkillObj {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ s16 unk04;
    /* 0x08 */ Fighter *unk08;
    /* 0x0C */ u8 unk0C[0x54 - 0x0C];
    /* 0x54 */ void *unk54;
    /* 0x58 */ void *unk58;
    /* 0x5C */ f32 unk5C;
} SkillObj;

extern void func_00208F70(void *);
extern void func_00209390(void *);
extern void func_00249D50(SkillObj *, s32);
extern s8 D_004703F4;

static inline f32 SkillObj_Scale(void) {
    if (gBattle != NULL) {
        return gBattle->unk88F0;
    }
    return (D_004703F4 != 3) ? 1.0f : 1.2f;
}

#if 0
/* differs: the table offset is computed in $v1 (the original keeps it in $a0), and the call's
 * `move a0, s1` fills the delay slot of the first bc1t in the original. */
s32 func_0024A0B0(SkillObj *ob) {
    s32 side = ob->unk08->unk1350;
    f32 t;
    s32 off;

    if (ob->unk04 & 0x8000) {
        return 1;
    }
    if (!(ob->unk04 & 0x4000) && (ob->unk00 <= 12.0f || (ob->unk04 & 0x2000))) {
        func_001D9280((s32)ob->unk08);
        if (ob->unk54 != NULL) {
            func_00209390(ob->unk54);
        }
        if (ob->unk58 != NULL) {
            func_00209390(ob->unk58);
        }
        ob->unk00 = 12.0f;
        ob->unk04 |= 0x4000;
    }
    t = ob->unk00 - SkillObj_Scale();
    ob->unk00 = t;
    if (t < 0.0f) {
        ob->unk00 = 0.0f;
        ob->unk04 |= 0x8000;
    }
    ob->unk5C = ob->unk5C + SkillObj_Scale();
    off = side << 4;
    if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x38) == 0 && ob->unk5C > 5.0f) {
        func_00249D50(ob, 1);
    } else if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x3C) == 0 && ob->unk5C > 10.0f) {
        func_00249D50(ob, 2);
    } else if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x40) == 0 && ob->unk5C > 15.0f) {
        func_00249D50(ob, 3);
    }
    if (ob->unk54 != NULL) {
        func_00208F70(ob->unk54);
        if (*(s32 *)((u8 *)ob->unk54 + 0x38) < 0) {
            ob->unk54 = NULL;
        }
    }
    if (ob->unk58 != NULL) {
        func_00208F70(ob->unk58);
        if (*(s32 *)((u8 *)ob->unk58 + 0x38) < 0) {
            ob->unk58 = NULL;
        }
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024A0B0);

void SkillKill_Kind14(s32 *a0) {
    s32 s0;
    s32 i;
    s32 o;

    s0 = ((Fighter *)a0[2])->unk1350;
    if (a0[21] != 0) {
        Obj_ResetF38(a0[21]);
        a0[21] = 0;
    }
    if (a0[22] != 0) {
        Obj_ResetF38(a0[22]);
        a0[22] = 0;
    }
    s0 = s0 << 4;
    for (i = 0, o = 0; i < 4; i++, o += 4) {
        if (*(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14) != 0) {
            amTask_Kill(*(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14));
        }
        *(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14) = 0;
        *(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x34) = 0;
    }
    if (a0[20] != 0) {
        amTask_Kill(a0[20]);
        a0[20] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024A440);
void func_0024A680(s32 *a0) {
    s32 *p0 = a0;
    u8 *s2 = (u8 *)a0[3];
    s32 s1 = ((Fighter *)a0[2])->unk1350;
    s32 s0;
    s32 v;
    s32 t;

    s0 = func_0020B020(s1, *(s16 *)(s2 + 0x20), *(s16 *)(s2 + 0x22));
    v = func_0020AD30(s1, *(s16 *)(s2 + 0x20), *(s16 *)(s2 + 0x22));
    amModel_SetCurrent(s0, v);
    t = *(s16 *)(s2 + 0x60);
    if (t != 0) {
        a0 = (s32 *)func_0020AE80(s1, *(s16 *)(s2 + 0x5A), (s16)t);
        if (a0 != 0) {
            func_00208D60();
        }
    }
    if (p0[17] != 0) {
        func_00209D20(0);
        func_00208D70(p0[17]);
        func_00209C50();
    }
}
// GIVEN UP: the sub-object pointer is kept in the other saved register, and the original loads a0[2] without using it (4 forms tried)
#if 0
extern s8 D_004703F4;
extern void func_001E2630(void);
extern void func_00208F70(s32);
s32 func_0024A760(s32 *a0) {
    f32 f2;
    f32 f1;
    u8 *a1 = (u8 *)a0[3];

    if (gBattle != 0) {
        f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 == 3) {
        f2 = 0.6f;
    } else {
        f2 = 1.0f;
    }
    f1 = *(f32 *)(a1 + 0xD0);
    f1 = f1 * f2;
    *(f32 *)((u8 *)a0 + 0x4C) = *(f32 *)((u8 *)a0 + 0x4C) + f1;
    if (gBattle != 0) {
        f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 == 3) {
        f2 = 0.6f;
    } else {
        f2 = 1.0f;
    }
    f1 = *(f32 *)((u8 *)a0 + 0x50) + f2;
    *(f32 *)((u8 *)a0 + 0x50) = f1;
    if (f1 > 32.0f) {
        if ((*(s16 *)((u8 *)a0 + 4) & 0x800) != 0) {
            func_001E2630();
            *(s16 *)((u8 *)a0 + 4) = *(s16 *)((u8 *)a0 + 4) & -0x801;
        }
    }
    if (a0[17] != 0) {
        func_00208F70(a0[17]);
        if (((s32 *)a0[17])[14] < 0) {
            a0[17] = 0;
            return 1;
        }
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024A760);
void SkillKill_Kind13(s32 *p) {
    if (p[17] != 0) {
        Obj_ResetF38(p[17]);
        p[17] = 0;
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
extern void func_0020D400(s32, s32, s32);
extern void func_002499A0(s32 *, s32, s32, s32, f32);
extern s32 func_00209540(s32, s32, s32);
extern void func_00209B50(s32, s32, s32);
extern void func_001D9C40(s32, s32, s32);

void func_0024A8F0(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    s32 v;
    s32 src;
    s32 *tp;
    s32 tmp[4];

    s3 = a0;
    s1 = *(u8 **)(a0 + 0x8);
    s0 = *(s32 *)(s1 + 0x1350);
    s2 = *(u8 **)(a0 + 0xC);
    *(s32 *)(a0 + 0x40) = *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400((s32)(a0 + 0x10), (s32)s1, 1);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(a0 + 0x10));
    tp = tmp;
    src = (s32)(a0 + 0x10);
    func_002499A0(tp, src, (s32)s1, (s32)s2, 30.0f);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(tmp));
    *(f32 *)(s3 + 0x4C) = *(f32 *)(s2 + 0xCC);
    *(f32 *)(s3 + 0x50) = 0.0f;
    v = func_0020B020(s0, *(s16 *)(s2 + 0x58), *(s16 *)(s2 + 0x5E));
    *(s32 *)(s3 + 0x44) = func_00209540(v, (s0 != 0) ? 0x4000020 : 0x4000010, 0);
    func_00209B50(*(s32 *)(s3 + 0x44), (s32)(s3 + 0x20), 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024AA00);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024ACE0);
void SkillKill_Kind12(s32 *p) {
    if (p[21] != 0) {
        Obj_ResetF38(p[21]);
        p[21] = 0;
    }
    if (p[20] != 0) {
        amTask_Kill(p[20]);
        p[20] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024B2B0);
void func_0024B660(void) {
}
s32 func_0024B670(void) {
    return 0;
}
void SkillKill_Kind11(void) {
}
void func_0024B690(void) {
}
// GIVEN UP: 17 of 89 differ: the original keeps the object in s1 (move s1,a0) and the data pointer in s0; mwcc swaps them whatever the declaration order (5 forms), and the stack-array VU0 copies are in the other order
#if 0
void func_0024B6A0(u8 *ob) {
    s32 side;
    s32 r;
    u8 *s0;
    u8 *s1 = ob;
    s32 t;
    s32 k;
    s32 tmp[4] __attribute__((aligned(16)));

    s0 = *(u8 **)(s1 + 0xC);
    side = *(s32 *)(*(u8 **)(s1 + 0x8) + 0x1350);
    r = func_0020B020(side, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22));
    amModel_SetCurrent(r, func_0020AD30(side, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22)));
    k = *(s16 *)(s0 + 0x60);
    if (k != 0) {
        t = func_0020AE80(side, *(s16 *)(s0 + 0x5A), k);
        if (t != 0) {
            func_00208D60(t);
        }
    }
    func_0013B0B0(0);
    __asm__ volatile ("lqc2 $vf28, 0x0(%0) ; lqc2 $vf29, 0x10(%0) ; lqc2 $vf30, 0x20(%0) ; lqc2 $vf31, 0x30(%0)"
        : : "r"((u8 *)gBattle + 0x60));
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%1)"
        : : "r"(*(u8 **)((u8 *)gBattle + 0x264)), "r"(tmp), "r"(ob + 0x20));
    func_00209D70(tmp);
    if (*(s32 *)(ob + 0x44) != 0) {
        func_0013B060(0);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf31, $vf31, $vf0w"
            : : "r"(ob + 0x20));
        func_00208D70(*(s32 *)(ob + 0x44));
    }
    if (*(s32 *)(ob + 0x48) != 0) {
        func_0013B060(0);
        func_00209B50(*(s32 *)(ob + 0x48), (s32)(ob + 0x20), 0);
        func_00208D70(*(s32 *)(ob + 0x48));
    }
    func_0013B110(1);
    func_00209C50();
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024B6A0);
#if 0
/* differs: 0x284 bytes against 0x2A0. The original keeps the table offset (side << 4) in $a0 across the whole
 * else-if chain, so the `move a0, s1` of each call block is not hoisted into the bc1t delay slot and the
 * chain's join lands 8 bytes later. Tried: offset as an expression, as a local, declared first or last. */
typedef struct SkillObjB {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ s16 unk04;
    /* 0x08 */ Fighter *unk08;
    /* 0x0C */ u8 unk0C[0x44 - 0x0C];
    /* 0x44 */ void *unk44;
    /* 0x48 */ void *unk48;
    /* 0x4C */ u8 unk4C[0x50 - 0x4C];
    /* 0x50 */ f32 unk50;
} SkillObjB;

s32 func_0024B810(SkillObjB *ob) {
    s32 off;
    s32 side;
    f32 t;

    side = ob->unk08->unk1350;
    if (ob->unk04 & 0x8000) {
        return 1;
    }
    if (!(ob->unk04 & 0x4000) && (ob->unk00 <= 12.0f || (ob->unk04 & 0x2000))) {
        func_001D9280((s32)ob->unk08);
        if (ob->unk44 != NULL) {
            func_00209390(ob->unk44);
        }
        if (ob->unk48 != NULL) {
            func_00209390(ob->unk48);
        }
        ob->unk00 = 12.0f;
        ob->unk04 |= 0x4000;
    }
    t = ob->unk00 - SkillObj_Scale();
    ob->unk00 = t;
    if (t < 0.0f) {
        ob->unk00 = 0.0f;
        ob->unk04 |= 0x8000;
    }
    ob->unk50 = ob->unk50 + SkillObj_Scale();
    off = side << 4;
    if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x38) == 0 && ob->unk50 > 5.0f) {
        func_00249D50((SkillObj *)ob, 1);
    } else if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x3C) == 0 && ob->unk50 > 10.0f) {
        func_00249D50((SkillObj *)ob, 2);
    } else if (*(s32 *)(off + (u8 *)D_0046FE54 + 0x40) == 0 && ob->unk50 > 15.0f) {
        func_00249D50((SkillObj *)ob, 3);
    }
    if (ob->unk44 != NULL) {
        func_00208F70(ob->unk44);
        if (*(s32 *)((u8 *)ob->unk44 + 0x38) < 0) {
            ob->unk44 = NULL;
        }
    }
    if (ob->unk48 != NULL) {
        func_00208F70(ob->unk48);
        if (*(s32 *)((u8 *)ob->unk48 + 0x38) < 0) {
            ob->unk48 = NULL;
        }
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024B810);
void SkillKill_Kind10(s32 *a0) {
    s32 s0;
    s32 i;
    s32 o;

    s0 = ((Fighter *)a0[2])->unk1350;
    if (a0[17] != 0) {
        Obj_ResetF38(a0[17]);
        a0[17] = 0;
    }
    if (a0[18] != 0) {
        Obj_ResetF38(a0[18]);
        a0[18] = 0;
    }
    s0 = s0 << 4;
    for (i = 0, o = 0; i < 4; i++, o += 4) {
        if (*(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14) != 0) {
            amTask_Kill(*(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14));
        }
        *(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x14) = 0;
        *(s32 *)((u8 *)(s0 + (s32)D_0046FE54) + o + 0x34) = 0;
    }
    if (a0[16] != 0) {
        amTask_Kill(a0[16]);
        a0[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024BBA0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024BE30);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024BFA0);
void SkillKill_Kind09(s32 *p) {
    if (p[18] != 0) {
        Obj_ResetF38(p[18]);
        p[18] = 0;
    }
    if (p[19] != 0) {
        Obj_ResetF38(p[19]);
        p[19] = 0;
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024C2C0);
void func_0024C4E0(u8 *ob) {
    u8 *s3 = *(u8 **)(ob + 0xC);
    s32 side = *(s32 *)(*(u8 **)(ob + 0x8) + 0x1350);
    s32 r;
    s32 t;
    s32 tmp[4] __attribute__((aligned(16)));

    r = func_0020B020(side, *(s16 *)(s3 + 0x20), *(s16 *)(s3 + 0x22));
    amModel_SetCurrent(r, func_0020AD30(side, *(s16 *)(s3 + 0x20), *(s16 *)(s3 + 0x22)));
    t = func_0020AE80(side, *(s16 *)(s3 + 0x5A), *(s16 *)(s3 + 0x60));
    if (t != 0) {
        func_00208D60(t);
    }
    if (*(s32 *)(ob + 0x44) != 0) {
        func_0013B0B0(0);
        __asm__ volatile ("lqc2 $vf28, 0x0(%0) ; lqc2 $vf29, 0x10(%0) ; lqc2 $vf30, 0x20(%0) ; lqc2 $vf31, 0x30(%0)"
            : : "r"((u8 *)gBattle + 0x60));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%1)"
            : : "r"(*(u8 **)((u8 *)gBattle + 0x264)), "r"(tmp), "r"(ob + 0x10));
        func_00209D70(tmp);
        func_0013B060(0);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf31, $vf31, $vf0w"
            : : "r"(ob + 0x10));
        func_00208D70(*(s32 *)(ob + 0x44));
        func_0013B110(1);
        func_00209C50();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024C610);
void SkillKill_Kind08(s32 *p) {
    if (p[17] != 0) {
        Obj_ResetF38(p[17]);
        p[17] = 0;
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024C950);
// GIVEN UP: differs: 4 of 86: the VU0 pair (ob+0x20 and ob+0x30 pointers) is computed in the other order and register, the rest is relocation-masked calls; tried operand order, local pointers (6 of 86), 4 forms
#if 0
extern s32 func_00209540(s32, s32, s32);
extern void func_00146F30(s32 *);
extern void func_00146F10(s32 *, s32 *, f32);
void func_0024CB00(SkillObj *ob) {
    u8 *s2 = *(u8 **)((u8 *)ob + 0xC);
    u8 *s1 = (u8 *)ob->unk08;
    s32 side = ((Fighter *)s1)->unk1350;
    s32 r;
    s32 tmp[4] __attribute__((aligned(16)));

    *(s32 *)ob = 0;
    *(s16 *)((u8 *)ob + 4) = *(s16 *)((u8 *)ob + 4) & ~0x1000;
    if (ob->unk54 != NULL) {
        Obj_ResetF38((s32)ob->unk54);
        ob->unk54 = NULL;
    }
    if (ob->unk58 != NULL) {
        Obj_ResetF38((s32)ob->unk58);
        ob->unk58 = NULL;
    }
    r = func_0020B020(side, *(s16 *)(s2 + 0x30), *(s16 *)(s2 + 0x36));
    ob->unk54 = (void *)func_00209540(r, side ? 0x4000020 : 0x4000010, 0);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(*(u8 **)(s1 + 0x1354) + 0x660), "r"(tmp));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; lqc2 $vf2, 0x0(%0) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%2)"
        : : "r"((u8 *)ob + 0x20), "r"(tmp), "r"((u8 *)ob + 0x30));
    func_00146F30((s32 *)((u8 *)ob + 0x30));
    func_00146F10((s32 *)((u8 *)ob + 0x30), (s32 *)((u8 *)ob + 0x30), *(f32 *)(s2 + 0x28) * SkillObj_Scale());
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024CB00);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024CC60);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024CDD0);
void SkillKill_Kind07(s32 *p) {
    if (p[21] != 0) {
        Obj_ResetF38(p[21]);
        p[21] = 0;
    }
    if (p[22] != 0) {
        Obj_ResetF38(p[22]);
        p[22] = 0;
    }
    if (p[20] != 0) {
        amTask_Kill(p[20]);
        p[20] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024D060);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024D4C0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024DB10);
void SkillKill_Kind06(s32 *p) {
    func_001D9280(p[2]);
    if (p[22] != 0) {
        Obj_ResetF38(p[22]);
        p[22] = 0;
    }
    if (p[23] != 0) {
        Obj_ResetF38(p[23]);
        p[23] = 0;
    }
    if (((SkillBuf *)D_0046FE54)->unk5C != 0) {
        if (((SkillBuf *)D_0046FE54)->unk62 == ((Fighter *)p[2])->unk1350) {
            Obj_ResetF38(((SkillBuf *)D_0046FE54)->unk5C);
            ((SkillBuf *)D_0046FE54)->unk5C = 0;
        }
    }
    if (p[20] != 0) {
        amTask_Kill(p[20]);
        p[20] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024E1A0);
void func_0024E440(s32 *a0) {
    u8 *v1 = (u8 *)a0[3];
    s16 *s1 = (s16 *)(v1 + 0x20);
    s16 *s2 = (s16 *)(v1 + 0x22);
    s32 s3 = ((Fighter *)a0[2])->unk1350;
    s32 r1;
    u32 mask;
    s32 r2;

    r1 = func_0020B020(s3, *(s16 *)(v1 + 0x20), *(s16 *)(v1 + 0x22));
    r2 = func_0020AD30(s3, *s1, *s2);
    amModel_SetCurrent(r1, r2);
    if (a0[21] != 0) {
        func_00209D20(0);
        func_00208D70(a0[21]);
        func_00209C50();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024E4D0);
void SkillKill_Kind05(s32 *p) {
    if (p[21] != 0) {
        Obj_ResetF38(p[21]);
        p[21] = 0;
    }
    if (p[20] != 0) {
        amTask_Kill(p[20]);
        p[20] = 0;
    }
}
#if 0
// differs: 23 of 85 at the start (s1/s2 order fixed by declaration order), then 33 of 87: the original computes
// &a0->0x30 into a0 and loads the 0.5 scale (lwc1 f0) before move a1,a0 and the jal; a local pointer moves it to s1.
extern s8 D_004703F4;
void func_0024E7B0(s32 a0) {
    u8 *s2;
    u8 *s1;
    s32 s0;
    s32 v;
    f32 f1;

    s1 = *(u8 **)(a0 + 0x8);
    s0 = *(s32 *)(s1 + 0x1350);
    s2 = *(u8 **)(a0 + 0xC);
    *(s32 *)(a0 + 0x50) = *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400(a0 + 0x10, (s32)s1, *(s32 *)(s2 + 0x2C));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(a0 + 0x10));
    func_002499A0((s32 *)(a0 + 0x30), a0 + 0x10, (s32)s1, (s32)s2, 30.0f);
    *(f32 *)(a0 + 0x34) = *(f32 *)(a0 + 0x34) + 0.5f;
    func_00146F30((s32 *)(a0 + 0x30));
    if (gBattle != 0) {
        f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else {
        if (D_004703F4 != 3) {
            f1 = 1.0f;
        } else {
            f1 = 1.2f;
        }
    }
    func_00146F10((s32 *)(a0 + 0x30), (s32 *)(a0 + 0x30), *(f32 *)(s2 + 0x28) * f1);
    v = func_0020B020(s0, *(s16 *)(s2 + 0x58), *(s16 *)(s2 + 0x5E));
    *(s32 *)(a0 + 0x54) = func_00209540(v, (s0 != 0) ? 0x4000020 : 0x4000010, 0);
    func_00209B50(*(s32 *)(a0 + 0x54), a0 + 0x20, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024E7B0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024E910);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024ECE0);
void SkillKill_Kind04(s32 *p) {
    if (p[17] != 0) {
        Obj_ResetF38(p[17]);
        p[17] = 0;
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024EFA0);
extern void func_00209950(s32, void *, s32);
void func_0024F150(s32 *a0) {
    s32 *s1 = a0;
    s32 *s0 = (s32 *)a0[2];
    u8 *s4 = (u8 *)a0[3];
    s32 s3 = s0[0x1350 / 4];
    s32 s2;
    s32 r2;
    s32 t;

    s2 = func_0020B020(s3, *(s16 *)(s4 + 0x20), *(s16 *)(s4 + 0x22));
    r2 = func_0020AD30(s3, *(s16 *)(s4 + 0x20), *(s16 *)(s4 + 0x22));
    amModel_SetCurrent(s2, r2);
    t = *(s16 *)(s4 + 0x60);
    if (t != 0) {
        a0 = (s32 *)func_0020AE80(s3, *(s16 *)(s4 + 0x5A), (s16)t);
        if (a0 != 0) {
            func_00208D60();
        }
    }
    if (s1[21] != 0) {
        func_00209D20(0);
        if (*(s32 *)((u8 *)s0 + 0x1CFC) == 0x1B || *(s32 *)((u8 *)s0 + 0xB9C) == 0x20) {
            func_00209950(s1[21], (u8 *)s1 + 0x40, 0);
        }
        func_00208D70(s1[21]);
        func_00209C50();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024F260);
void SkillKill_Kind03(s32 *p) {
    if (p[21] != 0) {
        Obj_ResetF38(p[21]);
        p[21] = 0;
    }
    if (p[20] != 0) {
        amTask_Kill(p[20]);
        p[20] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024F520);
// GIVEN UP: differs: size 0x124 vs 0x140 (7 instructions short, in the call tail after the VU0 subtract); the param copy and the side register order differ; 4 forms of declaration order
#if 0
void func_0024F6B0(s32 *a0) {
    s32 *o = a0;
    u8 *s0 = (u8 *)a0[3];
    s32 s3 = ((Fighter *)a0[2])->unk1350;
    s32 s2 = func_0020B020(s3, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22));
    s32 v = func_0020AD30(s3, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22));
    s32 tmp[4] __attribute__((aligned(16)));

    amModel_SetCurrent(s2, v);
    if (*(s16 *)(s0 + 0x60) != 0) {
        if (func_0020AE80(s3, *(s16 *)(s0 + 0x5A), *(s16 *)(s0 + 0x60)) != 0) {
            func_00208D60();
        }
    }
    if (o[17] != 0) {
        func_0013B0B0(0);
        __asm__ volatile ("lqc2 $vf28, 0x0(%0) ; lqc2 $vf29, 0x10(%0) ; lqc2 $vf30, 0x20(%0) ; lqc2 $vf31, 0x30(%0)"
            : : "r"((u8 *)gBattle + 0x60));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%2)"
            : : "r"(*(u8 **)((u8 *)gBattle + 0x264)), "r"((u8 *)o + 0x20), "r"(tmp));
        func_00209D70(tmp);
        func_0013B060(0);
        func_00209B50(o[17], (s32)((u8 *)o + 0x20), 0);
        func_00208D70(o[17]);
        func_0013B110(1);
        func_00209C50();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024F6B0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024F7F0);
void SkillKill_Kind02(s32 *p) {
    if (p[17] != 0) {
        Obj_ResetF38(p[17]);
        p[17] = 0;
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}

void func_0024FB20(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    s32 v;
    s32 src;
    s32 *tp;
    s32 tmp[4];

    s3 = a0;
    s1 = *(u8 **)(a0 + 0x8);
    s0 = *(s32 *)(s1 + 0x1350);
    s2 = *(u8 **)(a0 + 0xC);
    *(s32 *)(a0 + 0x40) = *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400((s32)(a0 + 0x10), (s32)s1, 1);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(a0 + 0x10));
    tp = tmp;
    src = (s32)(a0 + 0x10);
    func_002499A0(tp, src, (s32)s1, (s32)s2, 30.0f);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(tmp));
    *(f32 *)(s3 + 0x4C) = *(f32 *)(s2 + 0xCC);
    *(f32 *)(s3 + 0x50) = 0.0f;
    v = func_0020B020(s0, *(s16 *)(s2 + 0x58), *(s16 *)(s2 + 0x5E));
    *(s32 *)(s3 + 0x44) = func_00209540(v, (s0 != 0) ? 0x4000020 : 0x4000010, 0);
    func_00209B50(*(s32 *)(s3 + 0x44), (s32)(s3 + 0x20), 0);
    if (*(s32 *)(s1 + 0xB9C) == 0x2A) {
        func_001D9C40((s32)s1, s0 + 2, 0x2E);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024FC50);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_0024FEA0);
void SkillKill_Kind01(s32 *p) {
    if (p[17] != 0) {
        Obj_ResetF38(p[17]);
        p[17] = 0;
    }
    if (p[18] != 0) {
        Obj_ResetF38(p[18]);
        p[18] = 0;
    }
    if (((SkillBuf *)D_0046FE54)->unk5C != 0) {
        if (((SkillBuf *)D_0046FE54)->unk62 == ((Fighter *)p[2])->unk1350) {
            Obj_ResetF38(((SkillBuf *)D_0046FE54)->unk5C);
            ((SkillBuf *)D_0046FE54)->unk5C = 0;
        }
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00250500);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002507B0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00250DC0);
void SkillKill_Kind00(s32 *p) {
    func_001D9280(p[2]);
    if (p[18] != 0) {
        Obj_ResetF38(p[18]);
        p[18] = 0;
    }
    if (p[19] != 0) {
        Obj_ResetF38(p[19]);
        p[19] = 0;
    }
    if (((SkillBuf *)D_0046FE54)->unk5C != 0) {
        if (((SkillBuf *)D_0046FE54)->unk62 == ((Fighter *)p[2])->unk1350) {
            Obj_ResetF38(((SkillBuf *)D_0046FE54)->unk5C);
            ((SkillBuf *)D_0046FE54)->unk5C = 0;
        }
    }
    if (p[16] != 0) {
        amTask_Kill(p[16]);
        p[16] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002514B0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002518B0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00251A60);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00251C20);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00251DA0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00251F30);
extern s32 D_00450250[];
void func_002523B0(s32 *a0) {
    s32 *x;

    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        x = (s32 *)a0[12];
        ((void (*)(s32 *))D_00450250[*(s16 *)((u8 *)(s32 *)x[3] + 0x10)])(x);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00252410);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002525A0);
#if 0
// differs: 27 of 88. Prologue, memset, the two 16-byte copies and the table walk match; the entry pointer
// lives in $a1 here and in $a2 in the original (declaration order, operand order and a table pointer local tried).
extern void func_00251DA0(s32 *);
extern void func_00251C20(s32 *);
void func_00252780(s32 a0, u8 *a1) {
    u8 buf[0x40] __attribute__((aligned(16)));
    u8 t50[0x10] __attribute__((aligned(16)));
    s32 s1;
    s32 s0;
    s32 e;
    s32 *tb;
    s32 cur;

    s1 = *(s32 *)(*(u8 **)(a1 + 0x1354) + 0x1350);
    memset(buf, 0, 0x40);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x20), "r"(a1 + 0x130));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(t50), "r"(a1 + 0xD0));
    func_00146F30((s32 *)t50);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x30), "r"(t50));
    *(s32 *)(buf + 0x8) = *(s32 *)(a1 + 0x1354);
    for (s0 = 0; s0 < *(s32 *)((u8 *)D_0046FE54 + (s1 << 2) + 8); s0++) {
        tb = (s32 *)((u8 *)D_0046FE54 + (s1 << 2));
        e = *tb + (((s0 << 4) - s0) << 4);
        if (*(s16 *)(e + 0x16) != 0) {
            if (*(s16 *)(e + 0x16) != *(s32 *)(*(u8 **)(a1 + 0x1354) + 0xBA4)) {
                continue;
            }
        } else {
            cur = *(s32 *)(*(u8 **)(a1 + 0x1354) + 0xBA4);
            if (cur < *(s16 *)(e + 0xDC)) {
                continue;
            }
            if (*(s16 *)(e + 0xDE) < cur) {
                continue;
            }
        }
        if (*(s16 *)(e + 0x12) != a0) {
            continue;
        }
        if (*(s16 *)(e + 0x10) != 0xB) {
            continue;
        }
        *(s32 *)(buf + 0xC) = e;
        func_00251DA0((s32 *)buf);
        func_00251C20((s32 *)buf);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00252780);
void func_002528E0(s32 a0, s32 a1) {
    switch (a1) {
    case 0:
        ((SkillBuf *)D_0046FE54)->unk60 &= ~(s16)a0;
        break;
    case 1:
        ((SkillBuf *)D_0046FE54)->unk60 = ((SkillBuf *)D_0046FE54)->unk60 | a0;
        break;
    case 2:
        ((SkillBuf *)D_0046FE54)->unk60 &= ~0x80;
        ((SkillBuf *)D_0046FE54)->unk60 &= ~0x40;
        ((SkillBuf *)D_0046FE54)->unk60 &= ~0x20;
        ((SkillBuf *)D_0046FE54)->unk60 &= ~0x10;
        break;
    default:
        ((SkillBuf *)D_0046FE54)->unk60 = 0;
        break;
    }
}
// GIVEN UP: the -1 test of the first store and the loop head are scheduled in other registers (3 forms tried)
#if 0
static inline s32 SkillEntry_Match(u8 *e, s32 v) {
    if (*(s16 *)(e + 0x16) != 0) {
        return *(s16 *)(e + 0x16) == v;
    }
    if (v < *(s16 *)(e + 0xDC)) {
        return 0;
    }
    if (*(s16 *)(e + 0xDE) < v) {
        return 0;
    }
    return 1;
}

s32 func_002529B0(s32 a0, u8 *a1, s32 a2) {
    s32 side;
    u8 *p;
    s32 i;
    s32 off;
    s32 s0;
    s32 v;
    u8 *e;

    side = *(s32 *)(a1 + 0x1350);
    p = (u8 *)D_0046FE4C + side * 0x480;
    if (*(s32 *)(p + 0x24) == -1) {
        *(s32 *)(p + 0x24) = *(s32 *)(a1 + 0xB70);
    }
    s0 = side << 2;
    for (i = 0, off = 0; i < *(s32 *)((u8 *)D_0046FE54 + s0 + 8); i++, off += 0xF0) {
        e = *(u8 **)((u8 *)D_0046FE54 + s0) + off;
        v = *(s32 *)(a1 + 0xBA4);
        if (SkillEntry_Match(e, v) && *(s16 *)(e + 0x12) == a0 && *(s16 *)(e + 0x10) != 0xB) {
            func_002525A0(a1, e, a2);
        }
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002529B0);
void func_00252B00(void) {
    memset(D_0046FE54, 0, 0x68);
}
void func_00252B10(void) {
    memset(D_0046FE54, 0, 0x68);
}
void func_00252B20(void) {
    func_00209450(0x4000010, 1);
    func_00209450(0x4000020, 1);
}
void func_00252B60(void) {
    s32 i;
    u8 *s1;
    s32 o;
    s32 *pp;

    memset(D_0046FE54, 0, 0x68);
    for (i = 0, o = 0; i < 2; i++, o += 4) {
        *(s32 *)((u8 *)D_0046FE54 + o) = 0;
        pp = (s32 *)func_00246CA0(i, -1);
        s1 = *(u8 **)((u8 *)pp + pp[2] * 4 + 0x20);
        if (func_00127E88((char *)s1, D_0046AE20, 4) == 0) {
            *(u32 *)((u8 *)D_0046FE54 + o) = (u32)s1 + *(u32 *)(s1 + 0xC);
            *(u32 *)((u8 *)D_0046FE54 + o + 8) = *(u32 *)(s1 + 8);
        }
    }
}
void func_00252C20(s32 a0, s32 a1) {
    s32 s0;
    u8 *s1;
    s32 *pp;

    s0 = a0 << 2;
    *(s32 *)((u8 *)D_0046FE54 + s0) = 0;
    pp = (s32 *)func_00246CA0(a0, a1);
    s1 = *(u8 **)((pp[2] << 2) + (s32)pp + 0x20);
    if (func_00127E88((char *)s1, D_0046AE20, 4) == 0) {
        *(u32 *)((u8 *)D_0046FE54 + s0) = (u32)s1 + *(u32 *)(s1 + 0xC);
        *(u32 *)(s0 + (s32)D_0046FE54 + 8) = *(u32 *)(s1 + 8);
    }
}
s32 func_00252CB0(s32 a0, s32 *a1) {
    func_00248350(((s32 *)a1[11])[0]);
    return 1;
}
s32 func_00252CE0(s32 a0, s32 a1) {
    func_002CF070(a0, a1);
    return 1;
}
extern void func_001F9B60(s32, s32, s32);
// GIVEN UP: the global is loaded and the element address computed in other registers (3 declaration orders and 2 expression forms tried)
s32 func_00252D00(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    Fighter *f = gBattle->fighter[q[2]];

    func_001F9B60(q[2], q[0], (s32)((u8 *)f + (q[1] << 4) + 0x650));
    return 1;
}
extern s32 amMotion_FindBone(s32, s32);
extern void func_001F3FE0(s32, s32, s32, s32, f32);
s32 func_00252D50(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    s32 x = a1[8] + q[3];
    f32 f = ((f32 *)q)[1];
    s32 s1 = q[0];
    s32 s0 = q[2];
    s32 *r = func_001F5EF0(q[5], q[4]);
    s32 *m = (s32 *)((s32 *)r[1])[0];
    s32 bone = amMotion_FindBone(((s32 *)m[7])[0], x);

    func_001F3FE0((s32)r, bone, s0, s1, f);
    return 1;
}
// GIVEN UP: the argument -1 is set before a0 is copied in the original (tried two forms)
s32 func_00252DF0(s32 a0, s32 a1) {
    func_001F9BB0(-1, -1);
    return 1;
}
typedef struct SkillVec {
    s32 a, b, c, d;
} __attribute__((aligned(16))) SkillVec;

extern void func_001F9CD0(s32, s32, s32, s32, s32);

// GIVEN UP: the VU0 subtraction is right, but the original computes the two element addresses again for each
// use (no common subexpression) and loads the call's fields in another order (2 forms tried)
#if 0
s32 func_00252E20(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    s32 idx = q[2];
    SkillVec tmp;
    u8 *f = (u8 *)gBattle->fighter[idx];
    u8 *e = f + (q[1] << 4);

    __asm__ volatile ("lqc2 $vf1, 0x650(%0) ; lqc2 $vf2, 0x7B0(%0) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%1)"
        : : "r"(e), "r"(&tmp));
    func_001F9CD0(idx, q[0], (s32)(e + 0x650), (s32)&tmp, 0);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00252E20);
s32 func_00252EA0(s32 a0, s32 a1) {
    BtbObj_FreeFlag400(a0, a1);
    return 1;
}
s32 func_00252EC0(s32 a0, s32 *a1) {
    BtbBg_CreatePlanet(((s32 *)a1[11])[0]);
    return 1;
}
s32 func_00252EF0(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    s32 s = q[0];
    s32 *r = func_001F5EF0(q[2], q[1]);

    func_001F5B10(r[1], s);
    return 1;
}
// GIVEN UP: the call result is kept in another saved register and stored from the result register; the scheduler puts the f32 load first (or in the delay slot), the original loads q[1] before the first call and the float in its delay slot (6 forms tried)
#if 0
extern s32 D_0051CD0C[];
extern void func_001F5B70(s32 *);
s32 func_00252F30(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    f32 f = ((f32 *)q)[0];
    s32 *r = (s32 *)q[1];

    func_001F5EF0(q[3], q[2]);
    r = (s32 *)func_001A50F0(D_0051CD0C[0], (s32)r);
    *(s32 *)r[4] = (s32)r;
    *(f32 *)((u8 *)r[4] + 4) = f;
    func_001F5B70(r);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00252F30);
extern void BtbObj_ApplyMotSet(s32 *);
s32 func_00252FA0(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    f32 f = ((f32 *)q)[0];
    s32 s = q[1];
    s32 *r = func_001F5EF0(q[3], q[2]);

    *(s32 *)((u8 *)r[3] + 0x10) = s;
    *(f32 *)((u8 *)r[3] + 4) = f;
    BtbObj_ApplyMotSet(r);
    return 1;
}
extern void func_001F5BE0(s32 *);
s32 func_00253000(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    f32 f = ((f32 *)q)[0];
    s32 s = q[1];
    s32 *r = func_001F5EF0(q[3], q[2]);

    *(s32 *)((u8 *)r[2] + 0x10) = s;
    *(f32 *)((u8 *)r[2] + 4) = f;
    func_001F5BE0(r);
    return 1;
}
s32 func_00253060(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];

    BtbObj_RemoveByIdx(q[1], q[0]);
    return 1;
}

s32 func_00253090(s32 a0, s32 *a1) {
    s32 *q = (s32 *)a1[11];
    s32 x = q[0];

    switch (q[1]) {
    case 0:
        func_001F7470(x);
        break;
    case 1:
        func_001F7C80(x);
        break;
    case 2:
        func_001F7990(x);
        break;
    case 3:
        func_001F7720(x);
        break;
    case 4:
        func_001F7490(x);
        break;
    }
    return 1;
}
extern void BtbBg_StartCrossFade(s32, s32, s32, f32, f32);
s32 func_00253140(s32 *a0, s32 *a1) {
    s32 *p = (s32 *)a0[0];
    s32 *q = (s32 *)a1[11];

    BtbBg_StartCrossFade(q[2], p[6], p[5], (f32)q[1], (f32)q[0]);
    return 1;
}
s32 SkillCmd_BgSetF9E(s32 a0, s32 *a1) {
    BtbBg_SetF9E(((s32 *)a1[11])[0]);
    return 1;
}
extern s32 D_0051CD00[];
s32 func_002531B0(s32 a0, s32 *a1) {
    s32 r = 0;

    if (*(s32 *)((u8 *)D_0051CD00[0] + 4) == 2) {
        if (D_0051CD20[0] == 0) {
            r = 1;
        }
    }
    if ((*(s16 *)((u8 *)gBattle + 0x7EA) & 1) != 0) {
        r = 0;
    }
    *a1 = r;
    return 1;
}
s32 func_00253210(s32 a0, s32 *a1) {
    *a1 = D_0051CD20[0];
    return 1;
}
s32 SkillCmd_BgClearFlag40(s32 a0, s32 a1) {
    BtbBg_ClearFlag40(a0, a1);
    return 1;
}
s32 SkillCmd_BgSetFlag40(s32 a0, s32 a1) {
    BtbBg_SetFlag40(a0, a1);
    return 1;
}
s32 SkillCmd_BgClearFlag1(s32 a0, s32 a1) {
    BtbBg_ClearFlag1(a0, a1);
    return 1;
}
s32 SkillCmd_BgSetFlag1(s32 a0, s32 a1) {
    BtbBg_SetFlag1(a0, a1);
    return 1;
}
extern void BtbBg_RunFunc(void);
extern void func_001F6140(void);
extern void amVram_Apply(s32);
extern void func_001F7FA0(void);
s32 func_002532B0(s32 a0, s32 *a1) {
    if (*(s32 *)((u8 *)D_0051CD00[0] + 4) > 1) {
        BtbBg_RunFunc();
        func_001F6140();
        func_00209450(0x2000000, 1);
        D_0051CD20[0] = D_0051CD20[0] ^ 1;
        amVram_Apply(1);
        func_001F7FA0();
    }
    return 1;
}
extern void func_0022C6B0(s32 *);
f32 func_00253320(s32 *a0, u8 *a1, f32 x, f32 y) {
    u32 fl = *(u32 *)(a1 + 0x30);
    f32 r;

    a0[2] = 1;
    if (fl & 0x20) {
        x = x * *(f32 *)(a1 + 0x28);
    }
    if (fl & 0x40) {
        y = y * *(f32 *)(a1 + 0x2C);
    }
    switch (fl & 3) {
    case 0:
        *(s32 *)((u8 *)a0 + 0x30) = 0;
        *(f32 *)((u8 *)a0 + 0x38) = x;
        r = x;
        if (fl & 0x10) {
            r = r + *(f32 *)(a1 + 0x20);
        }
        break;
    case 1:
        r = -x;
        *(f32 *)((u8 *)a0 + 0x30) = r;
        *(s32 *)((u8 *)a0 + 0x38) = 0;
        if (fl & 0x10) {
            r = r - *(f32 *)(a1 + 0x20);
        }
        break;
    case 2:
        x = x * 0.5f;
        *(f32 *)((u8 *)a0 + 0x30) = -x;
        r = x;
        *(f32 *)((u8 *)a0 + 0x38) = x;
        if (fl & 0x10) {
            r = r + *(f32 *)(a1 + 0x20);
        }
        break;
    }
    switch (fl & 0xC) {
    case 0:
        *(s32 *)((u8 *)a0 + 0x34) = 0;
        *(f32 *)((u8 *)a0 + 0x3C) = y;
        break;
    case 4:
        *(f32 *)((u8 *)a0 + 0x34) = -y;
        *(s32 *)((u8 *)a0 + 0x3C) = 0;
        break;
    case 8:
        y = y * 0.5f;
        *(f32 *)((u8 *)a0 + 0x34) = -y;
        *(f32 *)((u8 *)a0 + 0x3C) = y;
        break;
    }
    func_0022C6B0(a0);
    return r;
}
// GIVEN UP: the original keeps the argument in s0 and the field pointer in s1; here one more register is used
#if 0
void func_00253490(s32 *a0) {
    s32 *p;
    s32 *s = a0;

    if (*(s8 *)((u8 *)s + 0x14) == 0) {
        p = (s32 *)s[4];
        if (p != 0) {
            s[4] = p[16];
            s[3] = ((s32 *)s[4])[20];
            amFile_Load(s[3]);
            p[16] = 0;
            amCdFs_Close(p, 0);
            s[1] = func_001A50F0(s[3], 0);
            if (s[1] != 0) {
                amFile_Load(s[1]);
            }
            s[2] = func_001A50F0(s[3], 1);
            if (s[2] != 0 && *(s8 *)s[2] != 0x21) {
                *(s8 *)s[2] = 0x21;
                ((s32 *)s[2])[2] = s[2] + ((s32 *)s[2])[2];
            }
        }
        *(s8 *)((u8 *)s + 0x14) = 1;
    }
}
#endif
void func_00253490(u8 *a0) {
    u8 *s0;
    u8 *s1;
    u8 *a1;

    s0 = a0;
    if (*(s8 *)(s0 + 0x14) == 0) {
        s1 = *(u8 **)(s0 + 0x10);
        if (s1 != NULL) {
            *(u8 **)(s0 + 0x10) = *(u8 **)(s1 + 0x40);
            *(u8 **)(s0 + 0xC) = *(u8 **)(*(u8 **)(s0 + 0x10) + 0x50);
            amFile_Load((s32)*(u8 **)(s0 + 0xC));
            *(s32 *)(s1 + 0x40) = 0;
            amCdFs_Close(s1, 0);
            *(s32 *)(s0 + 0x4) = func_001A50F0(*(s32 *)(s0 + 0xC), 0);
            if (*(s32 *)(s0 + 0x4) != 0) {
                amFile_Load(*(s32 *)(s0 + 0x4));
            }
            *(s32 *)(s0 + 0x8) = func_001A50F0(*(s32 *)(s0 + 0xC), 1);
            a1 = *(u8 **)(s0 + 0x8);
            if (a1 != NULL) {
                if (*(s8 *)a1 != 0x21) {
                    *(s8 *)a1 = 0x21;
                    *(u8 **)(a1 + 0x8) = a1 + *(s32 *)(a1 + 0x8);
                }
            }
        }
        *(s8 *)(s0 + 0x14) = 1;
    }
}
// GIVEN UP: the absolute value is compiled to abs.s in C, the original branches on the sign (tried two forms)
f32 func_00253570(s32 a0) {
    f32 r = 0.0f;

    if (a0 >= 0 && a0 < 0x1B) {
        f32 *e = (f32 *)(D_00452740 + a0 * 16);

        r = __s_abs(e[2] - e[0]);
    }
    return r;
}
void func_002535B0(s32 a0, void *a1) {
    func_00125740(a1, D_00452900 + a0 * 16, 16);
}
s8 func_002535D0(s32 a0) {
    return ((u8 *)D_004E066A)[a0 * 40] & 3;
}
// GIVEN UP: differs: 6 of 36 instructions: the byte count m takes a3 (the original a0) and the second loop counter a0 (original a3); the first loop with its own counter matches. Tried: 0 < m, separate counters, s8 m, declaration orders (8 forms)
#if 0
s32 func_00253600(s32 *a0, s32 a1) {
    s32 *c;
    s32 *p;
    s32 i;
    s32 n;
    s32 r = 0;

    a0 = (s32 *)a0[2];
    c = (s32 *)a0[2];
    n = c[1];
    p = (s32 *)c[2];
    for (i = 0; i < n; i++) {
        if (p[0] == a1) {
            r++;
        }
        p += 4;
    }
    if (r == 0) {
        s32 *o = (s32 *)a0[0];
        s32 m = *(s8 *)((u8 *)o + 0xD);
        s16 *l = (s16 *)o[2];

        if (0 < m) {
            i = 0;
            do {
                if (a1 == l[0]) {
                    return 1;
                }
                l++;
                i++;
            } while (i < m);
        }
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253600);
// GIVEN UP: the original keeps the count field address (t2 + 0xD) in a register and reuses it; the register choice differs
#if 0
s32 func_00253690(s32 *a0, s32 a1, s32 *a2) {
    s32 *a3;
    s32 *t2;
    s16 *t0;
    s32 t1;
    s32 v1;

    if (a1 > 0) {
        a3 = (s32 *)a0[2];
        t2 = (s32 *)a3[0];
        v1 = *(s8 *)((u8 *)t2 + 0xD);
        if (0 < v1) {
            t0 = (s16 *)t2[2];
            t1 = 0;
            do {
                if (t0[0] == a1) {
                    a2[0] = a3[1];
                    a2[1] = a0[0];
                    *(s16 *)((u8 *)a2 + 8) = t1 << 1;
                    *(s16 *)((u8 *)a2 + 0xA) = 0;
                    return 1;
                }
                t1++;
                t0++;
            } while (t1 < v1);
        }
        v1 = *(s8 *)((u8 *)t2 + 0xC);
        if (0 < v1) {
            t0 = (s16 *)t2[1];
            t1 = 0;
            do {
                if (t0[0] == a1) {
                    a2[0] = a3[1];
                    a2[1] = a0[0];
                    *(s16 *)((u8 *)a2 + 8) = (*(s8 *)((u8 *)t2 + 0xD) + t1) << 1;
                    *(s16 *)((u8 *)a2 + 0xA) = 0;
                    return 1;
                }
                t1++;
                t0++;
            } while (t1 < v1);
        }
    }
    a3 = (s32 *)a0[3];
    t2 = (s32 *)a3[0];
    v1 = *(s8 *)((u8 *)t2 + 0xC);
    if (0 < v1) {
        t0 = (s16 *)t2[1];
        t1 = 0;
        do {
            if (t0[0] == a1) {
                a2[0] = a3[1];
                a2[1] = a0[1];
                *(s16 *)((u8 *)a2 + 8) = t1 + 2;
                *(s16 *)((u8 *)a2 + 0xA) = 1;
                return 1;
            }
            t1++;
            t0++;
        } while (t1 < v1);
    }
    a2[0] = a3[1];
    a2[1] = a0[1];
    *(s16 *)((u8 *)a2 + 8) = 0;
    *(s16 *)((u8 *)a2 + 0xA) = 1;
    return 0;
}
#endif
#if 0
/* differs: the four search blocks (two tables at +8 and +4 of the sub-objects, the other two on a0 + 0xC)
 * and their stores match in shape; the temporaries do not: the original keeps a0->8 in $a3, its first
 * sub-object in $t2, the table in $t0 and the counter in $t1 (86 of 90 instructions differ, 2 of them
 * the join nops). Tried: declaration orders of the five locals. */
s32 func_00253690(u8 *a0, s32 a1, u8 *a2) {
    s32 t1;
    u8 *a3;
    u8 *t2;
    u8 *t0;
    s32 v3;

    if (a1 > 0) {
        a3 = *(u8 **)(a0 + 0x8);
        t2 = *(u8 **)a3;
        v3 = *(s8 *)(t2 + 0xD);
        if (0 < v3) {
            t0 = *(u8 **)(t2 + 0x8);
            for (t1 = 0; t1 < v3; t1++, t0 += 2) {
                if (a1 == *(s16 *)t0) {
                    *(s32 *)a2 = *(s32 *)(a3 + 0x4);
                    *(s32 *)(a2 + 0x4) = *(s32 *)a0;
                    *(s16 *)(a2 + 0x8) = t1 << 1;
                    *(s16 *)(a2 + 0xA) = 0;
                    return 1;
                }
            }
        }
        v3 = *(s8 *)(t2 + 0xC);
        if (0 < v3) {
            t0 = *(u8 **)(t2 + 0x4);
            for (t1 = 0; t1 < v3; t1++, t0 += 2) {
                if (a1 == *(s16 *)t0) {
                    *(s32 *)a2 = *(s32 *)(a3 + 0x4);
                    *(s32 *)(a2 + 0x4) = *(s32 *)a0;
                    *(s16 *)(a2 + 0x8) = (*(s8 *)(t2 + 0xD) + t1) << 1;
                    *(s16 *)(a2 + 0xA) = 0;
                    return 1;
                }
            }
        }
    }
    a3 = *(u8 **)(a0 + 0xC);
    t2 = *(u8 **)a3;
    v3 = *(s8 *)(t2 + 0xC);
    if (0 < v3) {
        t0 = *(u8 **)(t2 + 0x4);
        for (t1 = 0; t1 < v3; t1++, t0 += 2) {
            if (a1 == *(s16 *)t0) {
                *(s32 *)a2 = *(s32 *)(a3 + 0x4);
                *(s32 *)(a2 + 0x4) = *(s32 *)(a0 + 0x4);
                *(s16 *)(a2 + 0x8) = t1 + 2;
                *(s16 *)(a2 + 0xA) = 1;
                return 1;
            }
        }
    }
    *(s32 *)a2 = *(s32 *)(a3 + 0x4);
    *(s32 *)(a2 + 0x4) = *(s32 *)(a0 + 0x4);
    *(s16 *)(a2 + 0x8) = 0;
    *(s16 *)(a2 + 0xA) = 1;
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253690);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002537E0);
void func_002538E0(s32 *a0, u8 *a1) {
    u8 buf[0x60] __attribute__((aligned(16)));
    u8 *s0;
    s32 t0 = *(s16 *)(a1 + 0x34);
    f32 dx;
    f32 dy;

    s8 idx = ((u8 *)D_004E066A)[t0 * 40] & 3;
    s0 = D_00452900 + (idx << 4);
    memset(buf, 0, 0x60);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(a1), "r"(buf + 0x20));
    func_00125740(buf + 0x40, s0, 16);
    *(f32 *)(buf + 0x40) = *(f32 *)(buf + 0x40) + 0.5f;
    *(f32 *)(buf + 0x44) = *(f32 *)(buf + 0x44) + 0.5f;
    *(f32 *)(buf + 0x48) = *(f32 *)(buf + 0x48) - 0.5f;
    *(f32 *)(buf + 0x4C) = *(f32 *)(buf + 0x4C) - 0.5f;
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x50), "r"(a1 + 0x10));
    *(f32 *)(buf + 0) = 0.0f;
    *(s32 *)(buf + 4) = ((*(u32 *)(a1 + 0x30) & 0x30000) >> 15) | 1;
    *(s32 *)(buf + 0x10) = ((s32 *)*(s32 *)((u8 *)a0 + 0xC))[1];
    *(s32 *)(buf + 0x14) = *(s32 *)((u8 *)a0 + 4);
    *(s16 *)(buf + 0x18) = 1;
    *(s16 *)(buf + 0x1A) = 0;
    {
        f32 d0 = *(f32 *)(s0 + 8) - *(f32 *)(s0 + 0);
        f32 d1 = *(f32 *)(s0 + 0xC) - *(f32 *)(s0 + 4);
        __asm__ volatile ("abs.s %0, %1" : "=f"(dx) : "f"(d0));
        __asm__ volatile ("abs.s %0, %1" : "=f"(dy) : "f"(d1));
    }
    func_00253320((s32 *)buf, a1, dx, dy);
}
// GIVEN UP: differs: size 0x140 vs 0x150 (4 instructions short): the range test order (the original tests the sign first and jumps to a shared b to the epilogue), and the zero float is hoisted to the entry; 4 forms
#if 0
void func_00253A50(s32 *a0, u8 *a1) {
    u8 buf[0x60] __attribute__((aligned(16)));
    u8 *s0;
    s8 idx = *(s8 *)(a1 + 0x38);
    f32 dx;
    f32 dy;

    if (0x1C > idx && 0 <= idx) {
        s0 = D_00452740 + (idx << 4);
        memset(buf, 0, 0x60);
        __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x20), "r"(a1));
        func_00125740(buf + 0x40, s0, 16);
        *(f32 *)(buf + 0x44) = *(f32 *)(buf + 0x44) + 0.5f;
        *(f32 *)(buf + 0x48) = *(f32 *)(buf + 0x48) - 0.5f;
        *(f32 *)(buf + 0x4C) = *(f32 *)(buf + 0x4C) - 0.5f;
        __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x50), "r"(a1 + 0x10));
        *(f32 *)(buf + 0) = 0.0f;
        *(s32 *)(buf + 4) = ((*(u32 *)(a1 + 0x30) & 0x30000) >> 15) | 1;
        *(s32 *)(buf + 0x10) = ((s32 *)*(s32 *)((u8 *)a0 + 0xC))[1];
        *(s32 *)(buf + 0x14) = *(s32 *)((u8 *)a0 + 4);
        *(s16 *)(buf + 0x18) = 0;
        *(s16 *)(buf + 0x1A) = 0;
        {
            f32 d0 = *(f32 *)(s0 + 8) - *(f32 *)(s0 + 0);
            f32 d1 = *(f32 *)(s0 + 0xC) - *(f32 *)(s0 + 4);
            __asm__ volatile ("abs.s %0, %1" : "=f"(dx) : "f"(d0));
            __asm__ volatile ("abs.s %0, %1" : "=f"(dy) : "f"(d1));
        }
        func_00253320((s32 *)buf, a1, dx, dy);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253A50);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253BA0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253E60);
// GIVEN UP: 12 of 80 differ: the register of the mask constant (lui a3 vs v0) and the order of the res[0] and o+0x30 loads; the struct copies, the memset and the float constants match (declaration orders tried, 4 forms)
#if 0
extern s32 func_00253690(u8 *, s32, u8 *);
f32 func_00253FC0(u8 *a0, u8 *o) {
    s32 res[4] __attribute__((aligned(16)));
    u8 buf[0x60] __attribute__((aligned(16)));
    u8 *t;
    s32 a3;
    s32 base;
    u8 *q;
    f32 fx;
    f32 fy;
    s32 r0;
    s32 r1;
    u32 mask;

    if (func_00253690(a0, *(s16 *)(o + 0x34), (u8 *)res) == 0) {
        return *(f32 *)o;
    }
    t = (u8 *)res[0];
    a3 = *(s16 *)((u8 *)res + 8);
    base = *(s32 *)(t + 0x14) + (s32)t;
    q = t + *(s32 *)(base + ((a3 - *(s32 *)(t + 0x18)) << 2));
    fx = (f32)*(s16 *)(q + 0x10);
    fy = (f32)*(s16 *)(q + 0x12);
    memset(buf, 0, 0x60);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x20), "r"(o));
    *(f32 *)(buf + 0x44) = 0.5f;
    *(f32 *)(buf + 0x48) = fx - 0.5f;
    *(f32 *)(buf + 0x4C) = fy - 0.5f;
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x50), "r"(o + 0x10));
    *(f32 *)buf = 0.0f;
    r0 = res[0];
    mask = (u32)*(s32 *)(o + 0x30) & 0x30000;
    *(s32 *)(buf + 0x10) = r0;
    r1 = res[1];
    *(s16 *)(buf + 0x18) = *(s16 *)((u8 *)res + 8);
    *(s32 *)(buf + 0x14) = r1;
    *(s32 *)(buf + 4) = (mask >> 15) | 1;
    *(s16 *)(buf + 0x1A) = 0;
    return func_00253320((s32 *)buf, o, fx, fy);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00253FC0);


static inline void SkillFile_Release(u8 *h) {
    if (*(s8 *)(h + 0x14) != 0) {
        if (*(s32 *)(h + 0x10) != 0) {
            amCdFs_ReleaseCache(*(void **)(h + 0x10));
        }
    } else {
        if (*(s32 *)(h + 0x10) != 0) {
            amCdFs_Close(*(void **)(h + 0x10), 0);
        }
    }
    amHeap_Free(h);
}

void func_00254100(u8 *a0) {
    SkillFile_Release(*(u8 **)(a0 + 0xC));
    SkillFile_Release(*(u8 **)(a0 + 0x8));
    amHeap_Free(a0);
}
void func_002541D0(s32 *a0) {
    s32 i;
    s32 *o;
    s32 *e;
    s32 *b;
    s32 n;

    func_00253490((u8 *)a0[3]);
    func_00253490((u8 *)a0[2]);
    o = (s32 *)((s32 *)a0[2])[2];
    if (o != 0) {
        n = o[1];
        i = 0;
        if (0 < n) {
            b = (s32 *)o[2];
            e = b;
            do {
                if (e[0] == -1) {
                    a0[4] = (s32)((u8 *)b + (i << 4));
                    break;
                }
                i++;
                e += 4;
            } while (i < n);
        }
    }
}
extern char D_0046AE28[];
extern s32 D_00452680[];
extern s32 D_00452684[];

void *SkillFile_Load(s32 a0) {
    s32 *s1;
    s32 *s3;
    s32 *s0;

    s1 = (s32 *)amHeap_Alloc(0x14, 0, D_0046AE28, 0xCC);
    memset(s1, 0, 0x14);
    s3 = (s32 *)amHeap_Alloc(0x18, 0, D_0046AE28, 0x3F8);
    memset(s3, 0, 0x18);
    s0 = (s32 *)D_00452680[0];
    if (s0[0] != -1) {
        s3[4] = amCdFs_ReadFileId(s0[0] | 0x10000, 0, 1);
    }
    s3[0] = (s32)s0;
    s1[3] = (s32)s3;
    s0 = (s32 *)amHeap_Alloc(0x18, 0, D_0046AE28, 0x3F8);
    memset(s0, 0, 0x18);
    s3 = (s32 *)D_00452684[a0];
    if (s3[0] != -1) {
        s0[4] = amCdFs_ReadFileId(s3[0] | 0x10000, 0, 1);
    }
    s0[0] = (s32)s3;
    s1[2] = (s32)s0;
    s1[1] = 0x10840000;
    s1[0] = (a0 << 8) + 0x10840100;
    return s1;
}
// GIVEN UP: the loop counter and the pointer take the other saved registers (tried the declaration orders)
#if 0
void func_002543B0(u8 *a0) {
    s32 i;
    s32 s2;
    s32 x;
    s32 v;
    u8 *s0;
    u8 *s3;

    i = 0;
    s0 = a0;
    s3 = *(u8 **)a0 + 0x30;
    for (i = 0; i < 2; i++, s0 += 2) {
        s2 = func_0021C460(*(s16 *)(s0 + 0x20));
        if (s2 == -1) {
            s2 = 2;
        }
        if (func_0021C360(*(s16 *)(a0 + 0x20)) & 1) {
            x = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA2;
        } else {
            x = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA1;
        }
        v = (s32)func_00259CC0(*(s32 **)(s3 + 4), x);
        if (v != 0) {
            func_0022C7D0(v, (f32)s2, 0);
        }
    }
}
#endif
#if 0
/* differs: 12 of 58 (declaration orders searched): the argument and the loop pointer share a saved register
 * in our build (the original keeps the argument in $s4 for its second 0x20 read, and the loop in $s0). */
void func_002543B0(u8 *a0) {
    u8 *s4;
    u8 *s3;
    u8 *s0;
    s32 s1;
    s32 s2;
    s32 v;
    s32 a1;
    s32 *r;

    s4 = a0;
    s1 = 0;
    s0 = s4;
    s3 = *(u8 **)s4 + 0x30;
    do {
        s2 = func_0021C460(*(s16 *)(s0 + 0x20));
        if (s2 == -1) {
            s2 = 2;
        }
        v = func_0021C360(*(s16 *)(s4 + 0x20));
        if ((v & 1) != 0) {
            a1 = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA2;
        } else {
            a1 = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA1;
        }
        r = func_00259CC0(*(s32 **)(s3 + 0x4), a1);
        if (r != NULL) {
            func_0022C7D0((s32)r, (f32)s2, 0);
        }
        s1++;
        s0 += 2;
    } while (s1 < 2);
}
#endif
// differs: 1 of 58 (round 5): the loop pointer is copied from a0 (`move s0,a0`), the original copies it from the
// saved s4 (`move s0,s4`); `s0 = s4 + 0` and the statement order tried. Declaration order s4,s3,s2,s1,s0 matches the rest.
#if 0
void func_002543B0(u8 *a0) {
    u8 *s4;
    u8 *s3;
    s32 s2;
    s32 s1;
    u8 *s0;
    s32 v;
    s32 a1;
    s32 *r;

    s4 = a0;
    s1 = 0;
    s3 = *(u8 **)s4 + 0x30;
    s0 = s4 + 0;
    do {
        s2 = func_0021C460(*(s16 *)(s0 + 0x20));
        if (s2 == -1) {
            s2 = 2;
        }
        if ((func_0021C360(*(s16 *)(s4 + 0x20)) & 1) != 0) {
            a1 = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA2;
        } else {
            a1 = (func_0021C360(*(s16 *)(s0 + 0x20)) & 1) * 2 + 0xA1;
        }
        r = func_00259CC0(*(s32 **)(s3 + 0x4), a1);
        if (r != NULL) {
            func_0022C7D0((s32)r, (f32)s2, 0);
        }
        s1++;
        s0 += 2;
    } while (s1 < 2);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002543B0);
void func_002544A0(f32 *a0, s32 a1) {
    s32 v;
    f32 f3;
    f32 f2;
    f32 f1;

    v = func_0021C460(a1);
    if (a0 != 0) {
        switch (v) {
        case -1:
            a0[17] = 160.0f;
            a0[19] = 184.0f;
            a0[16] = 48.0f;
            a0[18] = 96.0f;
            break;
        case 0:
            a0[17] = 136.0f;
            a0[19] = 160.0f;
            a0[16] = 0.0f;
            a0[18] = 40.0f;
            break;
        case 1:
            a0[17] = 160.0f;
            a0[19] = 184.0f;
            a0[16] = 0.0f;
            a0[18] = 48.0f;
            break;
        }
        f2 = a0[16];
        f1 = a0[18];
        f3 = f1 - f2;
        f3 = (f3 < 0.0f) ? (-f1 - f2) : f3;
        if (0.0f == a0[12]) {
            a0[14] = f3;
        } else if (0.0f == a0[14]) {
            a0[12] = -f3;
        } else {
            f3 = f3 * 0.5f;
            a0[12] = -f3;
            a0[14] = f3;
        }
    }
}
void func_002545E0(s32 *a0) {
    u8 *s1 = gBtlSys;
    u8 *s0 = (u8 *)a0 + 0x30;

    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s1 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C560(*(s32 *)(s0 + 4));
    }
}
void func_00254650(s32 *a0) {
    u8 *s1 = gBtlSys;
    s32 *s0 = a0 + 12;
    s32 i;
    s32 j;
    s32 *s2;
    s32 *p;

    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s1 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        amDraw_SetPacketMode(1);
        func_0022C560(s0[1]);
        amDraw_KickPending();
        if (s0[6] != 0) {
            func_0022C560(s0[6]);
        }
        if (s0[7] != 0) {
            func_0022C560(s0[7]);
        }
        amDraw_KickPending();
        for (i = 0, s2 = s0; i < 2; i++, s2 += 2) {
            for (j = 0, p = s2; j < 2; j++, p += 1) {
                if (p[8] != 0) {
                    func_0022C560(p[8]);
                }
            }
        }
        amDraw_KickPending();
        if (s0[12] != 0) {
            func_0022C560(s0[12]);
        }
        if (s0[13] != 0) {
            func_0022C560(s0[13]);
        }
        amDraw_SetPacketMode(0);
    }
}
// GIVEN UP: 16 bytes short (0x1C0 against 0x1D0): the tail after the battle-state read is laid out differently (5 forms tried)
#if 0
extern void func_0022C430(s32, f32);
extern s32 D_0058D4F4[];

void func_002547A0(u8 *a0) {
    u8 *s2;
    s32 *s1;
    u8 *s0;
    s32 j;
    s32 i;
    s32 *s4;
    s32 *s3;
    s32 v;
    s32 a1;
    s32 t;
    s32 a0v;
    u8 *q;

    s0 = *(u8 **)(a0 + 0x30);
    s1 = (s32 *)(a0 + 0x30);
    s2 = gBtlSys;
    if (Input_IsHeld((s32)0x80000000) != 0) {
        t = *(s32 *)(s2 + 0xE60);
        D_00470704 = t;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(t, 0x4000000);
        D_00470238 = 0;
        amDraw_SetPacketMode(1);
        func_0022C560(s1[1]);
        amDraw_KickPending();
        for (j = 0, s4 = s1; j < 2; j++, s4 += 2) {
            for (i = 0, s3 = s4; i < 2; i++, s3 += 1) {
                if (s3[8] != 0) {
                    func_0022C560(s3[8]);
                }
            }
        }
        amDraw_SetPacketMode(0);
        v = D_0058D4F4[0];
        if (v == 0) {
            a1 = -2;
        } else {
            q = (u8 *)v + 0x30;
            if (*(s32 *)(v + 0x34) == 1) {
                a1 = -1;
            } else {
                a1 = 1;
                if (*(u16 *)(q + 0x1E) != 0) {
                    if (*(u16 *)(q + 0x1C) == *(u16 *)(q + 0x1E)) {
                        a1 = 0;
                    } else if (*(u16 *)(q + 0x1C) == 0) {
                        a1 = 0;
                    }
                }
            }
        }
        if (a1 == 1) {
            t = func_0021C360(*(s16 *)(s0 + 0x20));
            a0v = ((t & 1) != 0) ? 0xB2 : 0xB1;
        } else {
            t = func_0021C360(*(s16 *)(s0 + 0x22));
            a0v = ((t & 1) != 0) ? 0xB4 : 0xB3;
        }
        func_0022C430(((s32 *)*(u8 **)(*(u8 **)(s2 + 0xE68) + 0x1C))[a0v], *(f32 *)(s0 + 8));
        func_0022C560(s1[12]);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002547A0);
void func_00254970(s32 *a0) {
    u8 *s0;
    s32 *s3;
    s32 k;
    s32 j;
    s32 *t;

    s3 = a0 + 12;
    s0 = gBtlSys;
    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s0 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        amDraw_SetPacketMode(1);
        func_0022C560(s3[1]);
        amDraw_KickPending();
        func_0022C560(s3[6]);
        func_0022C560(s3[7]);
        amDraw_KickPending();
        if (s3[2] != 0) {
            func_0022C560(s3[2]);
        }
        if (s3[5] != 0) {
            func_0022C560(s3[5]);
        }
        if (s3[4] != 0) {
            func_0022C560(s3[4]);
        }
        if (s3[3] != 0) {
            func_0022C560(s3[3]);
        }
        amDraw_KickPending();
        for (k = 0; k < 2; k++, s3 += 2) {
            for (j = 0, t = s3; j < 2; j++, t += 1) {
                if (t[8] != 0) {
                    func_0022C560(t[8]);
                }
            }
        }
        amDraw_SetPacketMode(0);
    }
}
void func_00254AC0(s32 *a0) {
    u8 *s1 = gBtlSys;
    u8 *s0 = (u8 *)a0 + 0x30;

    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s1 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C560(*(s32 *)(s0 + 4));
        if (*(s32 *)(s0 + 0x30) != 0) {
            func_0022C560(*(s32 *)(s0 + 0x30));
        }
        if (*(s32 *)(s0 + 0x34) != 0) {
            func_0022C560(*(s32 *)(s0 + 0x34));
        }
    }
}
// GIVEN UP: the field pointer is computed before the register save in the original (scheduling; 4 forms tried)
#if 0
extern s32 D_0058D4F4[];
extern void func_0022D0E0(s32, s32);
void func_00254B50(s32 *a0) {
    s32 *s2;
    s32 *s1;
    s32 *s4;
    s32 *s3;
    s32 *v;
    s32 i;
    s32 j;

    s2 = a0 + 12;
    v = (s32 *)s2[0];
    if (v != 0) {
        s1 = v + 12;
        j = 0;
        if (s1[1] != 0) {
            func_0022D0E0(s1[1], 1);
        }
        s1[1] = 0;
        if (s1[2] != 0) {
            func_0022D0E0(s1[2], 1);
        }
        s1[2] = 0;
        if (s1[5] != 0) {
            func_0022D0E0(s1[5], 1);
        }
        s1[5] = 0;
        if (s1[4] != 0) {
            func_0022D0E0(s1[4], 1);
        }
        s1[4] = 0;
        if (s1[3] != 0) {
            func_0022D0E0(s1[3], 1);
        }
        s1[3] = 0;
        for (j = 0, s4 = s1; j < 2; j++, s1 += 1, s4 += 2) {
            if (s1[12] != 0) {
                func_0022D0E0(s1[12], 1);
            }
            s1[12] = 0;
            if (s1[6] != 0) {
                func_0022D0E0(s1[6], 1);
            }
            s1[6] = 0;
            for (i = 0, s3 = s4; i < 2; i++, s3 += 1) {
                if (s3[8] != 0) {
                    func_0022D0E0(s3[8], 1);
                }
                s3[8] = 0;
            }
        }
        amTask_Kill(s2[0]);
        s2[0] = 0;
    }
    D_0058D4F4[0] = 0;
}
#endif
// GIVEN UP: differs: size 0x16C vs 0x180 (4 instructions short): the global store after the if is laid out at the end (the original jumps to it from the false test), the release macro matches; 6 forms
#if 0
extern void func_0022D0E0(s32, s32);
extern s32 D_0058D4F4[];
#define SK_REL(p, off) do { if (*(s32 *)((p) + (off))) { func_0022D0E0(*(s32 *)((p) + (off)), 1); } *(s32 *)((p) + (off)) = 0; } while (0)
void func_00254B50(s32 *a0) {
    s32 *s2 = a0 + 12;
    u8 *s4;
    u8 *s1;
    u8 *b;
    s32 j;
    s32 k;
    s32 q;
    q = *(s32 *)((u8 *)a0 + 0x30);
    if (q != 0) {
        s4 = (u8 *)q + 0x30;
        SK_REL(s4, 0x4);
        SK_REL(s4, 0x8);
        SK_REL(s4, 0x14);
        SK_REL(s4, 0x10);
        SK_REL(s4, 0xC);
        s1 = s4;
        for (j = 0; j < 2; j++) {
            b = s4 + 8 * j;
            SK_REL(s1 + 4 * j, 0x30);
            SK_REL(s1 + 4 * j, 0x18);
            for (k = 0; k < 2; k++) {
                SK_REL(b + 4 * k, 0x20);
            }
        }
        amTask_Kill(*s2);
        *s2 = 0;
    }
    D_0058D4F4[0] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00254B50);
void func_00254CD0(u8 *a0) {
    u8 *t;
    u8 *sys;
    u8 *s2;
    s32 *s1;
    s32 v;
    s32 x;

    v = *(s32 *)(a0 + 0x30);
    t = a0;
    sys = gBtlSys;
    s2 = a0 + 0x30;
    s1 = (s32 *)(v + 0x30);
    if (gBattle != 0) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        *(f32 *)(s2 + 8) = *(f32 *)(s2 + 8) + D_00470710;
        x = *(s32 *)(sys + 0xE60);
        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C7D0(s1[1], *(f32 *)(s2 + 8), 1);
        func_002543B0(s2);
        func_0022ACF0(s1[1]);
        if (*(f32 *)(s2 + 8) > 10.0f) {
            amTask_Kill((s32)t);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00254DB0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00255610);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002559B0);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_002559B0();
extern void func_00254970();

#if 0
/* differs: prologue, loop and the first call block match; the `== 4` block keeps its constant 1 in $v0
 * (the original: $v1) and the function-pointer temporaries in the other register, and each `if (x) f(x, 1)`
 * block gets two extra nops before its join (the original has one). The last three blocks are unchecked. */
void func_00255E10(u8 *a0) {
    u8 *s5 = a0;
    u8 *s4 = gBtlSys;
    u8 *s3 = s5 + 0x30;
    u8 *s2 = (u8 *)(*(s32 *)(s5 + 0x30) + 0x30);
    s32 i;
    u8 *s0;
    s32 v;
    s32 r;
    s32 p;
    s32 tbl;
    s32 e60;
    s32 fp1;
    s32 fp2;

    if (gBattle != NULL) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        *(f32 *)(s3 + 0x8) = *(f32 *)(s3 + 0x8) + D_00470710;
        e60 = *(s32 *)(s4 + 0xE60);
        D_00470704 = e60;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(e60, 0x4000000);
        D_00470238 = 0;
        func_0022C7D0(*(s32 *)(s2 + 0x4), *(f32 *)(s3 + 0x8), 1);
        func_002543B0(s3);
        func_0022ACF0(*(s32 *)(s2 + 0x4));
        for (i = 0, s0 = s2; i < 2; i++, s0 += 4) {
            if (*(s32 *)(s0 + 0x30) != 0) {
                func_0022C060(*(s32 *)(s0 + 0x30), 1.0f);
            }
        }
        if (*(s32 *)(s3 + 0x4) == 4) {
            *(s32 *)(s3 + 0x4) = 1;
            fp1 = (s32)func_002559B0;
            *(s32 *)(s3 + 0x8) = 0;
            *(s32 *)(s5 + 0x1C) = (fp1 == 0) ? 0 : fp1;
            p = *(s32 *)s3;
            fp2 = (s32)func_00254970;
            *(s32 *)(p + 0x1C) = (fp2 == 0) ? 0 : fp2;
            if (*(s32 *)(s2 + 0x4)) {
                func_0022D0E0(*(s32 *)(s2 + 0x4), 1);
            }
            *(s32 *)(s2 + 0x4) = 0;
            if (*(s32 *)(s2 + 0x30)) {
                func_0022D0E0(*(s32 *)(s2 + 0x30), 1);
            }
            *(s32 *)(s2 + 0x30) = 0;
            if (*(s32 *)(s2 + 0x34)) {
                func_0022D0E0(*(s32 *)(s2 + 0x34), 1);
            }
            *(s32 *)(s2 + 0x34) = 0;
            D_00470704 = *(s32 *)(s4 + 0xE60);
            D_0047070C = 0x4000000;
            amModel_SetCurrent(D_00470704, D_0047070C);
            D_00470708 = 0;
            D_00470238 = 0;
            r = func_0021C360(*(s16 *)(s3 + 0x20));
            tbl = *(s32 *)(*(s32 *)(s4 + 0xE68) + 0x14);
            *(s32 *)(s2 + 0x4) = func_0022D860(*(s32 *)((u8 *)tbl + ((r & 1) << 2) + 0x98), 0.0f);
            func_0022C7D0(*(s32 *)(s2 + 0x4), 0.0f, 1);
            func_002543B0(s3);
            func_0022ACF0(*(s32 *)(s2 + 0x4));
            if (*(s32 *)(s2 + 0x18) != 0) {
                func_0022D0E0(*(s32 *)(s2 + 0x18), 1);
            }
            *(s32 *)(s2 + 0x18) = 0;
            r = func_0021C360(*(s16 *)(s3 + 0x20));
            tbl = *(s32 *)(*(s32 *)(s4 + 0xE68) + 0x14);
            *(s32 *)(s2 + 0x18) = func_0022D860(*(s32 *)((u8 *)tbl + (((r & 1) + 0x28) << 2)), 0.0f);
            if (*(s32 *)(s2 + 0x1C) != 0) {
                func_0022D0E0(*(s32 *)(s2 + 0x1C), 1);
            }
            *(s32 *)(s2 + 0x1C) = 0;
            r = func_0021C360(*(s16 *)(s3 + 0x22));
            tbl = *(s32 *)(*(s32 *)(s4 + 0xE68) + 0x14);
            *(s32 *)(s2 + 0x1C) = func_0022D860(*(s32 *)((u8 *)tbl + (((r & 1) + 0x2A) << 2)), 0.0f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00255E10);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002560A0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00256360);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002569E0);
extern s32 amGs_SetReg32(s32, s32);
extern void func_002569E0(s32 *);
void func_00256BF0(s32 *a0) {
    s32 *s1 = a0 + 12;
    s32 *s0 = (s32 *)a0[12];
    u8 *g = (u8 *)gBtlSys;
    s32 v;
    s32 i;
    s32 *s2;
    s32 j;

    if (Input_IsHeld(0x80000000) == 0 || *(s8 *)((u8 *)gBattle + 0x8975) != 0) {
        return;
    }
    {
        s32 x = *(s32 *)(g + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
    }
    func_0022C560(s1[1]);
    if (s0[1] == 2) {
        for (i = 0, s2 = s1; i < 2; i++, s2 += 1) {
            if (s2[3] != 0) {
                func_0022C560(s2[3]);
            }
            v = amGs_SetReg32(2, 0x335AB);
            if (s2[7] != 0) {
                func_0022C560(s2[7]);
            }
            amGs_SetReg32(2, v);
        }
        func_0022C560(s1[2]);
        func_002569E0(s0);
        if (s1[9] != 0) {
            func_0022C560(s1[9]);
        }
    }
    for (j = 0; j < 2; j++, s1 += 1) {
        if (s1[11] != 0) {
            func_0022C560(s1[11]);
        }
    }
}
extern s32 amGs_SetReg32(s32, s32);
extern void func_002569E0(s32 *);
void func_00256D50(s32 *a0) {
    s32 *s4 = a0 + 12;
    s32 *s3 = (s32 *)a0[12];
    u8 *g = (u8 *)gBtlSys;
    s32 i;
    s32 *s1;
    u8 *q;
    s32 s5;

    if (Input_IsHeld(0x80000000) == 0 || *(s8 *)((u8 *)gBattle + 0x8975) != 0) {
        return;
    }
    {
        {
            s32 x = *(s32 *)(g + 0xE60);

            D_00470704 = x;
            D_0047070C = 0x4000000;
            D_00470708 = 0;
            amModel_SetCurrent(x, 0x4000000);
            D_00470238 = 0;
            func_0022C560(s4[1]);
            func_0022C560(s4[2]);
            for (i = 0, s1 = s4, q = (u8 *)s3; i < 2; i++, s1 += 1, q += 2) {
                func_0022C560(s1[3]);
                if (s1[5] != 0) {
                    func_0022C560(s1[5]);
                }
                s5 = amGs_SetReg32(2, 0x335AB);
                if (*(s16 *)(q + 0x30) != 0) {
                    func_0022C560(s1[7]);
                }
                amGs_SetReg32(2, s5);
            }
            func_002569E0(s3);
            for (i = 0; i < 2; i++, s4 += 1) {
                if (s4[11] != 0) {
                    func_0022C560(s4[11]);
                }
            }
        }
    }
}
// GIVEN UP: the original has a shared "b" to the exit for both failed tests (5 instructions short here)
#if 0
void func_00256EB0(u8 *a0) {
    u8 *sys = gBtlSys;
    s32 *s = (s32 *)(a0 + 0x30);
    s32 i;
    s32 x;

    if (Input_IsHeld(0x80000000) != 0 && *(s8 *)((u8 *)gBattle + 0x9975) == 0) {
    x = *(s32 *)(sys + 0xE60);
    D_00470704 = x;
    D_0047070C = 0x4000000;
    D_00470708 = 0;
    amModel_SetCurrent(x, 0x4000000);
    D_00470238 = 0;
    func_0022C560(s[1]);
    for (i = 0; i < 2; i++) {
        if (s[3] != 0) {
            func_0022C560(s[3]);
        }
        if (s[9] != 0) {
            func_0022C560(s[9]);
        }
        s++;
    }
    } else {
    }
}
#endif
void func_00256EB0(u8 *a0) {
    s32 *p;
    s32 i;
    u8 *s0 = gBtlSys;
    s32 v;

    p = (s32 *)(a0 + 0x30);
    if (Input_IsHeld((s32)0x80000000) == 0 || *(s8 *)((u8 *)gBattle + 0x8975) != 0) {
        return;
    }
    v = *(s32 *)(s0 + 0xE60);
    D_00470704 = v;
    D_0047070C = 0x4000000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x4000000);
    D_00470238 = 0;
    func_0022C560(p[1]);
    for (i = 0; i < 2; i++, p++) {
        if (p[3] != 0) {
            func_0022C560(p[3]);
        }
        if (p[9] != 0) {
            func_0022C560(p[9]);
        }
    }
}
extern s32 D_0058D4F0[];
extern void func_0022D0E0(s32, s32);
void func_00256F80(s32 *a0) {
    s32 *s3;
    s32 *s2;
    s32 i;
    s32 *s0;

    s3 = a0 + 12;
    s2 = (s32 *)s3[0] + 12;
    if (((s32 *)s3[0])[13] != 0) {
        func_0022D0E0(((s32 *)s3[0])[13], 1);
    }
    s2[1] = 0;
    for (i = 0, s0 = s2; i < 2; i++, s0 += 1) {
        if (s0[3] != 0) {
            func_0022D0E0(s0[3], 1);
        }
        s0[3] = 0;
        if (s0[5] != 0) {
            func_0022D0E0(s0[5], 1);
        }
        s0[5] = 0;
        if (s0[7] != 0) {
            func_0022D0E0(s0[7], 1);
        }
        s0[7] = 0;
        if (s0[9] != 0) {
            func_0022D0E0(s0[9], 1);
        }
        s0[9] = 0;
        if (s0[11] != 0) {
            func_0022D0E0(s0[11], 1);
        }
        s0[11] = 0;
    }
    if (s2[2] != 0) {
        func_0022D0E0(s2[2], 1);
    }
    s2[2] = 0;
    amTask_Kill(s3[0]);
    s3[0] = 0;
    D_0058D4F0[0] = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002570A0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002573F0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00257860);
void func_00257BC0(s32 *a0) {
    u8 *s1 = gBtlSys;
    u8 *s0 = (u8 *)a0 + 0x30;

    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s1 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C560(*(s32 *)(s0 + 4));
    }
}


void func_00257C30(u8 *a0) {
    u8 *sys = gBtlSys;
    s32 *s = (s32 *)(a0 + 0x30);
    s32 x;

    if (Input_IsHeld(0x80000000)) {
        x = *(s32 *)(sys + 0xE60);
        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        amDraw_SetPacketMode(1);
        func_0022C560(s[1]);
        amDraw_KickPending();
        func_0022C560(s[2]);
        func_0022C560(s[5]);
        func_0022C560(s[4]);
        func_0022C560(s[3]);
        amDraw_SetPacketMode(0);
        func_0022C560(s[12]);
    }
}
void func_00257CE0(u8 *a0) {
    u8 *sys = gBtlSys;
    s32 *s = (s32 *)(a0 + 0x30);
    s32 x;

    if (Input_IsHeld(0x80000000)) {
        x = *(s32 *)(sys + 0xE60);
        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        amDraw_SetPacketMode(1);
        func_0022C560(s[1]);
        amDraw_KickPending();
        func_0022C560(s[6]);
        func_0022C560(s[7]);
        amDraw_KickPending();
        func_0022C560(s[2]);
        func_0022C560(s[5]);
        func_0022C560(s[4]);
        func_0022C560(s[3]);
        amDraw_SetPacketMode(0);
    }
}
void func_00257DA0(s32 *a0) {
    u8 *s1 = gBtlSys;
    u8 *s0 = (u8 *)a0 + 0x30;

    if (Input_IsHeld(0x80000000) != 0) {
        s32 x = *(s32 *)(s1 + 0xE60);

        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C560(*(s32 *)(s0 + 4));
        if (*(s32 *)(s0 + 0x30) != 0) {
            func_0022C560(*(s32 *)(s0 + 0x30));
        }
        if (*(s32 *)(s0 + 0x34) != 0) {
            func_0022C560(*(s32 *)(s0 + 0x34));
        }
    }
}
// GIVEN UP: differs: size 0x16C vs 0x180 (4 instructions short), the same release shape as func_00254B50 (identical asm but for the global D_0058D4EC): the global store after the if is laid out at the end; 6 forms
#if 0
extern void func_0022D0E0(s32, s32);
extern s32 D_0058D4EC[];
#define SK_REL(p, off) do { if (*(s32 *)((p) + (off))) { func_0022D0E0(*(s32 *)((p) + (off)), 1); } *(s32 *)((p) + (off)) = 0; } while (0)
void func_00257E30(s32 *a0) {
    s32 *s2 = a0 + 12;
    u8 *s4;
    u8 *s1;
    u8 *b;
    s32 j;
    s32 k;
    s32 q;
    q = *(s32 *)((u8 *)a0 + 0x30);
    if (q != 0) {
        s4 = (u8 *)q + 0x30;
        SK_REL(s4, 0x4);
        SK_REL(s4, 0x8);
        SK_REL(s4, 0x14);
        SK_REL(s4, 0x10);
        SK_REL(s4, 0xC);
        s1 = s4;
        for (j = 0; j < 2; j++) {
            b = s4 + 8 * j;
            SK_REL(s1 + 4 * j, 0x30);
            SK_REL(s1 + 4 * j, 0x18);
            for (k = 0; k < 2; k++) {
                SK_REL(b + 4 * k, 0x20);
            }
        }
        amTask_Kill(*s2);
        *s2 = 0;
    }
    D_0058D4EC[0] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00257E30);
void func_00257FB0(u8 *a0) {
    u8 *t;
    u8 *sys;
    u8 *s2;
    s32 *s1;
    s32 v;
    s32 x;

    v = *(s32 *)(a0 + 0x30);
    t = a0;
    sys = gBtlSys;
    s2 = a0 + 0x30;
    s1 = (s32 *)(v + 0x30);
    if (gBattle != 0) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        *(f32 *)(s2 + 8) = *(f32 *)(s2 + 8) + D_00470710;
        x = *(s32 *)(sys + 0xE60);
        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_0022C7D0(s1[1], *(f32 *)(s2 + 8), 1);
        func_002543B0(s2);
        func_0022ACF0(s1[1]);
        if (*(f32 *)(s2 + 8) > 30.0f) {
            amTask_Kill((s32)t);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00258090);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00258310);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002587F0);
void func_00258AC0(s32 *a0) {
    s32 *s1 = a0 + 12;
    s32 *s0 = (s32 *)a0[12];
    s32 i;
    s32 *s2;

    func_0021C460(s0[13]);
    if (Input_IsHeld(0x80000000) == 0 ||
        ((gBattle != 0) ? *(s8 *)((u8 *)gBattle + 0x8975) : 0) == 1) {
        return;
    }
    if (s1[1] != 0) {
        func_0022C560(s1[1]);
    }
    if (s0[1] == 0 || s0[1] == 3) {
        return;
    }
    for (i = 0, s2 = s1; i < 5; i++, s2 += 1) {
        if (s2[4] != 0) {
            func_0022C560(s2[4]);
        }
    }
    if (s1[9] != 0) {
        func_0022C560(s1[9]);
    }
    if (s1[2] != 0) {
        func_0022C560(s1[2]);
    }
    if (s1[10] != 0) {
        func_0022C560(s1[10]);
    }
    if (s0[1] == 1 && s1[3] != 0) {
        func_0022C560(s1[3]);
    }
}
extern s32 D_0058D4E8[];
extern void func_0022D0E0(s32, s32);
void func_00258C20(s32 *a0) {
    s32 *s3 = a0 + 12;
    s32 *s2 = (s32 *)a0[12] + 12;
    s32 i;
    s32 *s0;

    if (s2 != 0) {
        if (s2[1] != 0) {
            func_0022D0E0(s2[1], 1);
        }
        s2[1] = 0;
        if (s2[2] != 0) {
            func_0022D0E0(s2[2], 1);
        }
        s2[2] = 0;
        if (s2[3] != 0) {
            func_0022D0E0(s2[3], 1);
        }
        s2[3] = 0;
        if (s2[9] != 0) {
            func_0022D0E0(s2[9], 1);
        }
        s2[9] = 0;
        for (i = 0, s0 = s2; i < 5; i++, s0 += 1) {
            if (s0[4] != 0) {
                func_0022D0E0(s0[4], 1);
            }
            s0[4] = 0;
        }
        if (s2[10] != 0) {
            func_0022D0E0(s2[10], 1);
        }
        s2[10] = 0;
    }
    if (s3[0] != 0) {
        amTask_Kill(s3[0]);
    }
    s3[0] = 0;
    D_0058D4E8[0] = 0;
}
void func_00258D40(s32 *a0, s32 a1) {
    s32 *s2;
    s32 i;
    s32 *s0;
    s32 *r;
    f32 f1;
    f32 f0;

    i = 0;
    s0 = a0;
    s2 = (s32 *)(a0[0] + 0x30);
    for (i = 0; i < 5; i++, s0++) {
        r = func_00259CC0((s32 *)s2[1], a1 + i);
        f1 = 128.5f;
        f0 = 159.5f;
        switch (s0[5] & 0xF) {
        case 1:
            f1 = 0.5f;
            f0 = 31.5f;
            break;
        case 2:
            f1 = 32.5f;
            f0 = 63.5f;
            break;
        case 8:
            f1 = 64.5f;
            f0 = 95.5f;
            break;
        case 4:
            f1 = 96.5f;
            f0 = 127.5f;
            break;
        }
        if (r != 0 && r[11] != 0) {
            *(f32 *)(((s32 *)r[11])[12] + 0x40) = f1;
            *(f32 *)(((s32 *)r[11])[12] + 0x48) = f0;
        }
    }
}
void func_00258E80(u8 *a0) {
    u8 *sys;
    s32 *s3;
    u8 *s0;
    u8 *s2;
    s32 v;
    s32 x;

    s2 = a0;
    v = *(s32 *)(a0 + 0x30);
    s0 = a0 + 0x30;
    sys = gBtlSys;
    s3 = (s32 *)(v + 0x30);
    x = func_0021C460(*(s32 *)(a0 + 0x64));
    if (gBattle != 0) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        *(f32 *)(s0 + 8) = *(f32 *)(s0 + 8) + D_00470710;
        x = *(s32 *)(sys + 0xE60);
        D_00470704 = x;
        D_0047070C = 0x4000000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4000000);
        D_00470238 = 0;
        func_00228430(0);
        func_0022C060(s3[1], 1.0f);
        func_00228410();
        func_00258D40((s32 *)s0, 0xF6);
        if (*(f32 *)(s0 + 8) >= 30.0f) {
            amTask_Kill((s32)s2);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00258F80);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002591E0);
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_002596A0);
void LeverDraw_TaskMain(s32 *a0) {
    u8 *s1 = gBtlSys;
    u8 *s0 = (u8 *)((s32 *)a0)[12];

    if (Input_IsHeld(0x80000000) == 0 || Input_IsHeld(1) == 0 || *(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        return;
    }
    {
        s32 x = *(s32 *)(s1 + 0xE84);

        D_00470704 = x;
        D_0047070C = 0x4010000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4010000);
        D_00470238 = 0;
        func_0022C550(*(s32 *)(s0 + 0x18));
    }
}
// GIVEN UP: the global pointer, the entry pointer and the field pointer take other saved registers (3 declaration orders tried; code otherwise matches)
#if 0
extern void func_0022BFF0(f32, s32);
void func_002599C0(s32 *a0) {
    s32 *s0;
    s32 *s1;
    s32 *s2;
    u8 *g;
    s32 v;
    s32 mode;

    s0 = a0 + 12;
    g = gBtlSys;
    if (gBattle != 0) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v != 0) {
        return;
    }
    {
        s32 x = *(s32 *)(g + 0xE84);

        D_00470704 = x;
        D_0047070C = 0x4010000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4010000);
        D_00470238 = 0;
    }
    mode = s0[1];
    if (mode == 2) {
        if (((f32 *)s0)[2] < 11.0f) {
            func_0022BFF0(1.0f, s0[6]);
        } else {
            s1 = &D_0058D4D0[s0[5]];
            if (*s1 != 0) {
                if (((s32 *)*s1)[18] != 0) {
                    func_0022D0B0(((s32 *)*s1)[18], 1);
                }
                s2 = (s32 *)(*s1 + 0x30);
                if (s2[0] != 0) {
                    amTask_Kill(s2[0]);
                }
                amTask_Kill(*s1);
                *s1 = 0;
            }
        }
        ((f32 *)s0)[2] = ((f32 *)s0)[2] + D_00470710;
    } else if (mode == 0) {
        if (((f32 *)s0)[2] < 11.0f) {
            func_0022BFF0(1.0f, s0[6]);
        }
        ((f32 *)s0)[2] = ((f32 *)s0)[2] + D_00470710;
    } else if (mode == 1) {
        func_0022BFF0(((f32 *)s0)[3], s0[6]);
    }
}
#endif
extern void func_0022BFF0(s32, f32);

void func_002599C0(u8 *a0) {
    u8 *s0;
    u8 *s2;
    u8 *s1;
    u8 *sys;
    s32 v;
    s32 e;

    s0 = a0 + 0x30;
    sys = gBtlSys;
    if (gBattle != NULL) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        e = *(s32 *)(sys + 0xE84);
        D_00470704 = e;
        D_0047070C = 0x4010000;
        D_00470708 = 0;
        amModel_SetCurrent(e, 0x4010000);
        D_00470238 = 0;
        switch (*(s32 *)(s0 + 0x4)) {
        case 1:
            func_0022BFF0(*(s32 *)(s0 + 0x18), *(f32 *)(s0 + 0xC));
            break;
        case 0:
            if (*(f32 *)(s0 + 0x8) < 11.0f) {
                func_0022BFF0(*(s32 *)(s0 + 0x18), 1.0f);
            }
            *(f32 *)(s0 + 0x8) = *(f32 *)(s0 + 0x8) + D_00470710;
            break;
        case 2:
            if (*(f32 *)(s0 + 0x8) < 11.0f) {
                func_0022BFF0(*(s32 *)(s0 + 0x18), 1.0f);
            } else {
                s1 = (u8 *)D_0058D4D0 + (*(s32 *)(s0 + 0x14) << 2);
                if (*(s32 *)s1 != 0) {
                    s2 = *(u8 **)s1 + 0x30;
                    if (*(s32 *)(*(u8 **)s1 + 0x48) != 0) {
                        func_0022D0B0(*(s32 *)(*(u8 **)s1 + 0x48), 1);
                    }
                    if (*(s32 *)s2 != 0) {
                        amTask_Kill(*(s32 *)s2);
                    }
                    amTask_Kill(*(s32 *)s1);
                    *(s32 *)s1 = 0;
                }
            }
            *(f32 *)(s0 + 0x8) = *(f32 *)(s0 + 0x8) + D_00470710;
            break;
        }
    }
}
extern void func_0022D0E0(s32, s32);
void CutIn_TaskKill(s32 *a0) {
    s32 *s;

    s = (s32 *)((u8 *)a0 + 0x30);
    if (a0[13] != 0) {
        func_0022D0E0(a0[13], 1);
    }
    s[1] = 0;
}
extern void func_00209950(s32, void *, s32);
void CutIn_TaskMain(s32 *a0) {
    u8 *s1;
    u8 *s0;
    s32 a;
    s32 v;

    s0 = (u8 *)a0 + 0x30;
    s1 = (u8 *)gBtlSys;
    if (Input_IsHeld(0x80000000) != 0) {
        a = 0;
        if (gBattle != 0) {
            a = *(s8 *)((u8 *)gBattle + 0x8975);
        }
        if (a != 1 && *(s32 *)(s0 + 4) != 0) {
            func_0022C560(*(s32 *)(s0 + 4));
        }
    }
    if (gBattle != 0) {
        v = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v == 0) {
        *(f32 *)s0 = *(f32 *)s0 + D_00470710;
        {
            s32 x = *(s32 *)(s1 + 0xE60);

            D_00470704 = x;
            D_0047070C = 0x4000000;
            D_00470708 = 0;
            amModel_SetCurrent(x, 0x4000000);
            D_00470238 = 0;
        }
        func_0022C060(*(s32 *)(s0 + 4), 1.0f);
        if (*(f32 *)s0 >= 80.0f) {
            amTask_Kill((s32)a0);
        }
    }
}
s32 *func_00259CC0(s32 *a0, s32 a1) {
    s32 *r = 0;
    s32 *x = 0;

    if (a0[3] == 1) {
        x = (s32 *)a0[0];
    } else if (a0[3] == 2) {
        x = (s32 *)((s32 *)a0[0])[4];
    }
    if (x != 0 && x[5] == a1) {
        return a0;
    }
    if (a0[11] != 0) {
        r = func_00259CC0((s32 *)a0[11], a1);
        if (r != 0) {
            return r;
        }
    }
    if (a0[10] != 0) {
        r = func_00259CC0((s32 *)a0[10], a1);
    }
    return r;
}
#if 0
typedef struct SkillKey {
    s64 a;
    f32 b;
} SkillKey;

#endif
// GIVEN UP: the struct copy and the table reads are ordered differently in the original (59 instructions differ)
#if 0
s32 func_00259D90(s32 a0, s32 a1) {
    SkillKey k;
    u8 *sys;
    s32 *x;
    u8 *s0;
    s32 v;

    k = *(SkillKey *)D_004529B8;
    sys = gBtlSys;
    x = (s32 *)D_0058D4D0[a0];
    if (x == 0) {
        return 0;
    }
    s0 = (u8 *)x + 0x30;
    if (x[13] == a1) {
        return 1;
    }
    func_0022D0B0(*(s32 *)(s0 + 0x18), 1);
    v = *(s32 *)(sys + 0xE84);
    D_00470704 = v;
    D_0047070C = 0x4010000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x4010000);
    D_00470238 = 0;
    v = ((s32 *)&k)[a1];
    *(s32 *)(s0 + 0x18) = func_0022D570(*(s32 *)(((s32 *)(*(s32 *)(sys + 0xE88)))[5] + (((a0 & 1) + v) << 2)), 0x1000, 0x2000008, 0x3A30);
    ((s32 *)s0)[1] = a1;
    ((s32 *)s0)[2] = 0;
    return 1;
}
#endif
typedef struct BtlTmp12 {
    u64 a;
    f32 b;
} BtlTmp12;

#if 0
/* differs: 0x10C bytes against 0x120. The original addresses the 12-byte local through $a1 (sd a0, 0(a1)) and
 * copies the second argument into $s2 before the table load; ours addresses it through $sp and moves the
 * copy late. Tried: argument copies into locals (this version). */
s32 func_00259D90(s32 a0, s32 a1) {
    BtlTmp12 tmp;
    u8 *sys;
    u8 *s0;
    s32 e;
    s32 v;
    s32 s2;
    s32 s3;

    s3 = a0;
    s2 = a1;
    tmp.a = *(u64 *)D_004529B8;
    tmp.b = *(f32 *)(D_004529B8 + 8);
    sys = gBtlSys;
    e = D_0058D4D0[s3];
    if (e == 0) {
        return 0;
    }
    s0 = (u8 *)e + 0x30;
    if (*(s32 *)((u8 *)e + 0x34) == s2) {
        return 1;
    }
    func_0022D0B0(*(s32 *)(s0 + 0x18), 1);
    D_00470704 = *(s32 *)(sys + 0xE84);
    D_0047070C = 0x4010000;
    D_00470708 = 0;
    amModel_SetCurrent(D_00470704, 0x4010000);
    D_00470238 = 0;
    v = *(s32 *)(*(s32 *)(sys + 0xE88) + 0x14);
    v = *(s32 *)((u8 *)v + (((s3 & 1) + ((s32 *)&tmp)[s2]) << 2));
    *(s32 *)(s0 + 0x18) = func_0022D570(v, 0x1000, 0x2000008, 0x3A30);
    *(s32 *)(s0 + 0x4) = s2;
    *(s32 *)(s0 + 0x8) = 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00259D90);
extern s32 amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern u8 D_0046AE80[];
extern u8 D_0046AE90[];
#if 0
/* differs: 0x124 bytes against 0x130 whatever the order of the five locals (searched): a structural
 * 12-byte gap, probably one instruction of the table or the memset block. The argument copy and gBtlSys
 * swap $s1/$s2 as well. */
s32 func_00259EB0(s32 a0, f32 f12) {
    s32 k;
    u8 *s1;
    s32 *s0;
    s32 v;
    s32 w;

    k = a0;
    s0 = &D_0058D4D0[k];
    if (*s0 != 0) {
        return 0;
    }
    s1 = gBtlSys;
    v = amTask_Create((void (*)(void *))func_002599C0, 0, 0x5410, 0x1000, 0x2000000, (char *)D_0046AE80);
    *s0 = v;
    s0 = (s32 *)(v + 0x30);
    memset(s0, 0, 0x1C);
    s0[5] = k;
    {
        s32 x = *(s32 *)(s1 + 0xE84);

        D_00470704 = x;
        D_0047070C = 0x4010000;
        D_00470708 = 0;
        amModel_SetCurrent(x, 0x4010000);
        D_00470238 = 0;
    }
    s0[6] = func_0022D570(*(s32 *)((u8 *)((s32 *)(*(s32 *)(s1 + 0xE88)))[5] + ((k & 1) << 2)), 0x1000, 0x2000008, 0x3A30);
    w = amTask_Create((void (*)(void *))LeverDraw_TaskMain, 0, 0x3A30, 0x1000, 0x2000008, (char *)D_0046AE90);
    ((f32 *)s0)[3] = f12;
    s0[0] = w;
    ((s32 *)w)[12] = (s32)s0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/skill_cmd", func_00259EB0);
extern u8 D_0058D4E0[];
extern s32 D_0047074C;
extern s32 D_00470748;
extern void func_0022CFC0(s32, s32, s32, s32);

void func_00259FE0(void) {
    s32 i;
    s32 *q;
    s32 *slot;
    s32 *t = (s32 *)D_0058D4E0;

    for (i = 0; i < 6; i++) {
        if (t[i] != 0) {
            amTask_Kill(t[i]);
            t[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        q = (s32 *)D_0058D4D0[i];
        if (q != 0) {
            slot = &q[12];
            if (*slot != 0) {
                amTask_Kill(*slot);
                *slot = 0;
            }
            amTask_Kill(D_0058D4D0[i]);
            D_0058D4D0[i] = 0;
        }
    }
    func_0022CFC0(0x1000, 0x2000008, 0, 1);
    if (D_0047074C != 0) {
        func_0022D0E0(D_0047074C, 1);
        D_0047074C = 0;
    }
    if (D_00470748 != 0) {
        amTask_Kill(D_00470748);
        D_0047074C = 0;
    }
}
extern u8 D_0058D4E0[];
extern s32 D_00470748;
void func_0025A0E0(void) {
    memset(D_0058D4E0, 0, 0x18);
    memset(D_0058D4D0, 0, 0x10);
    memset(&D_00470748, 0, 8);
}
