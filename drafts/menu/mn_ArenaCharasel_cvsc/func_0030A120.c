/* Draft (not built): func_0030A120 at 0x0030A120, size 0x2A0, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A4, original 0x2A0
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A120.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030A120 size diff=84/169
s64 ArenaList_GetF0(void *);
s64 ArenaList_GetF2(void *);
s32 ArenaList_SetF0(s32, s32);
s64 func_0027DAA0(void *);
s64 func_0027DAB0(void *);
s32 func_0027DAC0(s32, s32);
s16 func_0027DAD0(void *);
s16 func_0027DAE0(void *);
s32 func_0030D290(void *);
extern u16 D_00493086;
extern s16 D_005C4128;
extern s16 D_005C412C;
extern void func_0030D300(void *);
extern void func_0027DB20(void *);
extern void ArenaStageSel_Load(void);
extern char D_00492FCE[];
extern void func_0030A5E0(void);
extern void func_00309FA0(void);
extern void func_00309E40(void);
void func_0030A120(u8 *arg0) {
    u8 *sp4C;
    s32 *var_v0_2;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    u8 **var_v1;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;

    var_v0 = 4;
    var_v1 = &sp4C;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp4C = *(u8 **)((u8 *)temp_s0 + 0x1C);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_s2 = sp4C;
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 1.0f);
        func_0022CD00(temp_s2);
    }
    if (*(u8 *)((u8 *)temp_s0 + 0x1A) != 0) {
        if (((s64) (ArenaList_GetF0(*(u8 **)((u8 *)temp_s0 + 0x14)) << 0x30) >> 0x30) < 4) {
            return;
        }
        goto block_9;
    }
    if (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xC)) << 0x38) >> 0x38) >= 4) {
        D_005C4128 = func_0027DAE0(*(u8 **)((u8 *)temp_s0 + 0xC));
        D_005C412C = func_0027DAD0(*(u8 **)((u8 *)temp_s0 + 0xC));
block_9:
        temp_v1 = *D_00492FCE | D_00493086;
        if (temp_v1 & 0x1000) {
            if (*(u8 *)((u8 *)temp_s0 + 0x1A) != 0) {
                func_0030D290(*(u8 **)((u8 *)temp_s0 + 0x14));
                goto block_15;
            }
            if (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xC)) << 0x38) >> 0x38) != 5) {
                temp_a0_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x30);
                *(u8 *)((u8 *)temp_a0_2 + 6) = (u8) (*(u8 *)((u8 *)temp_a0_2 + 6) | 8);
block_15:
                if (1 != 0) {
                    if (*(u8 *)((u8 *)temp_s0 + 0x19) != 0) {
                        ArenaList_SetF0(*(s32 *)((u8 *)temp_s0 + 0x10), 4);
                    } else {
                        func_0027DAC0(*(s32 *)((u8 *)temp_s0 + 8), 4);
                    }
                    var_v1_2 = (int *)(&func_0030A5E0);
                    if (&func_0030A5E0 == NULL) {
                        var_v1_2 = NULL;
                    }
                    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
                }
            }
        } else {
            if (temp_v1 & 0x300) {
                if (*(u8 *)((u8 *)temp_s0 + 0x1A) != 0) {
                    func_0030D300(*(u8 **)((u8 *)temp_s0 + 0x14));
                } else {
                    func_0027DB20(*(u8 **)((u8 *)temp_s0 + 0xC));
                }
                var_v0_2 = (int *)(&func_00309FA0);
                if (&func_00309FA0 == NULL) {
                    var_v0_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
            }
            if (*(u8 *)((u8 *)temp_s0 + 0x1A) != 0) {
                if (((s64) (ArenaList_GetF2(*(u8 **)((u8 *)temp_s0 + 0x14)) << 0x30) >> 0x30) != 1) {
                    return;
                }
                goto block_35;
            }
            if (((s64) (func_0027DAA0(*(u8 **)((u8 *)temp_s0 + 0xC)) << 0x38) >> 0x38) == 1) {
block_35:
                ArenaStageSel_Load();
                var_v1_3 = (int *)(&func_00309E40);
                if (&func_00309E40 == NULL) {
                    var_v1_3 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            }
        }
    }
}
