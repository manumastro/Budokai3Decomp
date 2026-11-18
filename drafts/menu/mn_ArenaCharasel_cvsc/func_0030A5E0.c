/* Draft (not built): func_0030A5E0 at 0x0030A5E0, size 0x364, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 130 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x35C, original 0x364
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A5E0.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030A5E0 size diff=130/215
s64 ArenaList_GetF0(void *);
s64 ArenaList_GetF2(void *);
s32 ArenaList_SetF0(s32, s32);
s32 Scene_FadeTo(s32, s32);
s32 func_0027D330(s32, s64);
s64 func_0027DAA0(void *);
s64 func_0027DAB0(void *);
s32 func_0027DAC0(void *, s32, void *);
s16 func_0027DAD0(void *);
s16 func_0027DAE0(void *);
extern s32 D_00470838;
extern u16 D_00493086;
extern s64 D_004B4B48;
extern s32 D_0058F680;
extern s16 D_005C4126;
extern s16 D_005C412A;
extern void func_0030D300(void *);
extern void func_0027DB20(void *);
extern char D_00492FCE[];
extern void Scene_Request();
extern void func_0030A540(void);
extern void func_0030A3C0(void);
extern void func_0030A120(void);
void func_0030A5E0(u8 *arg0) {
    u8 *sp5C;
    s32 *var_a1;
    s32 *var_v1_2;
    s32 *var_a2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s3;
    s32 var_v0;
    u8 temp_a0_2;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_v0 = 4;
    var_v1 = &sp5C;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s1 = arg0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp5C = *(u8 **)((u8 *)var_s0 + 0x1C);
    temp_a0 = *(u8 **)((u8 *)var_s0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    var_s2 = sp5C;
    if (var_s2 != NULL) {
        func_0022C060(var_s2, 0x3F800000);
        func_0022CD00(var_s2);
    }
    var_a3 = 0;
    var_a2 = &D_00470838;
    var_a1 = &D_0058F680;
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            D_004B4B48 |= *(s64 *)((u8 *)var_a1 + 0x90);
        }
        var_a3 += 1;
        var_a1 = var_a1 + 0x7FFF + 0x5681;
        var_a2 += 4;
    } while (var_a3 < 2);
    var_s3 = 0;
    var_s2 = var_s0;
    do {
        func_0027D330(*(s32 *)((u8 *)var_s2 + 8), D_004B4B48);
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 2);
    if (*(u8 *)((u8 *)var_s0 + 0x19) != 0) {
        if (((s64) (ArenaList_GetF0(*(u8 **)((u8 *)var_s0 + 0x10)) << 0x30) >> 0x30) < 4) {
            return;
        }
        goto block_15;
    }
    if (((s64) (func_0027DAB0(*(u8 **)((u8 *)var_s0 + 8)) << 0x38) >> 0x38) >= 4) {
        D_005C4126 = func_0027DAE0(*(u8 **)((u8 *)var_s0 + 8));
        D_005C412A = func_0027DAD0(*(u8 **)((u8 *)var_s0 + 8));
block_15:
        temp_v1 = *D_00492FCE | D_00493086;
        if (temp_v1 & 0x1000) {
            if ((*(u8 *)((u8 *)var_s0 + 0x19) != 0) || (((s64) (func_0027DAB0(*(u8 **)((u8 *)var_s0 + 8)) << 0x38) >> 0x38) != 5)) {
                var_s3 = 0;
                var_s2 = var_s0;
                do {
                    if (*(u8 *)((u8 *)(var_s0 + var_s3) + 0x19) != 0) {
                        func_0030D300(*(u8 **)((u8 *)var_s2 + 0x10));
                    } else {
                        func_0027DB20(*(u8 **)((u8 *)var_s2 + 8));
                    }
                    var_s3 += 1;
                    var_s2 += 4;
                } while (var_s3 < 2);
                Scene_Request(0x17, 2);
                Scene_FadeTo(0xA, 0);
                var_v1_2 = (s32 *)(&func_0030A540);
                if (&func_0030A540 == NULL) {
                    var_v1_2 = NULL;
                }
                goto block_46;
            }
        } else {
            if (temp_v1 & 0x300) {
                if (*(u8 *)((u8 *)var_s0 + 0x19) != 0) {
                    func_0030D300(*(u8 **)((u8 *)var_s0 + 0x10));
                } else {
                    func_0027DB20(*(u8 **)((u8 *)var_s0 + 8));
                }
                var_v1_2 = (s32 *)(&func_0030A3C0);
                if (&func_0030A3C0 == NULL) {
                    var_v1_2 = NULL;
                }
                goto block_46;
            }
            if (*(u8 *)((u8 *)var_s0 + 0x19) != 0) {
                if (((s64) (ArenaList_GetF2(*(u8 **)((u8 *)var_s0 + 0x10)) << 0x30) >> 0x30) != 1) {
                    return;
                }
                goto block_40;
            }
            if (((s64) (func_0027DAA0(*(u8 **)((u8 *)var_s0 + 8)) << 0x38) >> 0x38) == 1) {
block_40:
                if (*(u8 *)((u8 *)var_s0 + 0x1A) == 0) {
                    temp_a2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xC)) + 0x30);
                    temp_a0_2 = *(u8 *)((u8 *)temp_a2 + 6);
                    if (temp_a0_2 & 8) {
                        *(u8 *)((u8 *)temp_a2 + 6) = (u8) (temp_a0_2 & 0xF7);
                        func_0027DAC0(*(u8 **)((u8 *)var_s0 + 0xC), 4, temp_a2);
                    }
                } else {
                    ArenaList_SetF0(*(s32 *)((u8 *)var_s0 + 0x14), 4);
                }
                var_v1_2 = (s32 *)(&func_0030A120);
                if (&func_0030A120 == NULL) {
                    var_v1_2 = NULL;
                }
block_46:
                *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1_2;
            }
        }
    }
}
