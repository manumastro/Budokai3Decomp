/* Draft (not built): func_002B9D30 at 0x002B9D30, size 0x564, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 177: s32 *)((u8 *)gStrStatus + 0x44), (f32) *(s32 *)((u8 *)gStrStatus + 0x298), 0.0f);
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002B9D30.s */

// src/unk/unk_2B98D0.c func_002B9D30 cerr diff=-1/0
extern s8 D_004B4B41[];
s32 StrBg_SetFlags(s32, s32, s8 *);
extern s32 D_00455760;
extern s128 D_00455F20;
extern void StrBg_FlushDraw(void);
extern void func_0028EAE0(void);
extern void func_0028EB20(void);
extern void func_002BB2A0(void);
extern void func_002BB150(void);
extern void func_002BB490(void);
void func_002B9D30(void) {
    s128 sp50;
    s8 spF0;
    f32 temp_f20;
    s128 *var_a0;
    s128 *var_a1;
    s32 temp_v0;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u32 temp_s0;
    u32 var_s0;

    var_a1 = &D_00455F20;
    var_a0 = &sp50;
    var_v1 = 0xB;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 0x10;
        var_a0 += 0x10;
    } while (var_v1 > 0);
    if (*(s32 *)((u8 *)gStrStatus + 0x280) == 0) {
        spF0 = -1;
    }
    func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x44), (f32) *(s32 *)((u8 *)gStrStatus + 0x298), 0.0f);
    temp_s0 = *(u32 *)((u8 *)gStrStatus + 0x2D4);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x4C), (f32) ((*(u32 *)((u8 *)gStrStatus + 0x2D4) / 10000) + (temp_s0 >> 0x1F)), 0.0f);
    var_a1_2 = 0;
    if ((s32) temp_s0 >= 0x2710) {
        var_a1_2 = 0x2710;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x48), M2C_BITWISE(f32, var_a1_2), (f32) (((s32) temp_s0 % 10000) + var_a1_2), 0);
    temp_v0 = *(*(&D_00455760 + (*(s32 *)((u8 *)gStrStatus + 0x288) * 4)) + (*(s32 *)((u8 *)gStrStatus + 0x298) * 4));
    if (temp_v0 != 0) {
        var_s0 = temp_v0 - temp_s0;
    } else {
        var_s0 = 0;
    }
    if ((D_004B4B41 == 6) && (*(s32 *)((u8 *)gStrStatus + 0x280) == 0)) {
        var_s0 = 0;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x54), M2C_BITWISE(f32, gStrStatus), (f32) ((var_s0 / 10000) + (var_s0 >> 0x1F)), 0);
    var_a1_3 = 0;
    if ((s32) var_s0 >= 0x2710) {
        var_a1_3 = 0x2710;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x50), M2C_BITWISE(f32, var_a1_3), (f32) (((s32) var_s0 % 10000) + var_a1_3), 0);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x58), (f32) *(s32 *)((u8 *)gStrStatus + 0x29C), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x5C), (f32) *(s32 *)((u8 *)gStrStatus + 0x29C), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x60), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A0), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x64), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A0), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x68), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A4), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x6C), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A4), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x70), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A8), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x74), (f32) *(s32 *)((u8 *)gStrStatus + 0x2A8), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x78), (f32) *(s32 *)((u8 *)gStrStatus + 0x2AC), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x7C), (f32) *(s32 *)((u8 *)gStrStatus + 0x2AC), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x80), (f32) *(s32 *)((u8 *)gStrStatus + 0x2B0), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x84), (f32) *(s32 *)((u8 *)gStrStatus + 0x2B0), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x88), (f32) *(s32 *)((u8 *)gStrStatus + 0x2B4), 0.0f);
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x8C), (f32) *(s32 *)((u8 *)gStrStatus + 0x2B4), 0.0f);
    var_s0_2 = 1;
    var_s2 = 0x10;
    var_s1 = 8;
    temp_f20 = *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x14C)) + 0x1C)) + 0x104)) + 4)) + 0x1C)) + 4);
    *(s32 *)((u8 *)gStrStatus + 0x390) = 0;
    *(s32 *)((u8 *)gStrStatus + 0x394) = 0;
    *(s32 *)((u8 *)gStrStatus + 0x398) = 0;
    *(s32 *)((u8 *)gStrStatus + 0x39C) = 0x3F800000;
    do {
        *(s32 *)((u8 *)(&gStrStatus[var_s2]) + 0x390) = 0;
        *(f32 *)((u8 *)(&gStrStatus[var_s2]) + 0x394) = (f32) (*(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x14C)) + 0x1C) + var_s1) + 0x104)) + 4)) + 0x1C)) + 4) - temp_f20);
        *(s32 *)((u8 *)(&gStrStatus[var_s2]) + 0x398) = 0;
        *(s32 *)((u8 *)(&gStrStatus[var_s2]) + 0x39C) = 0x3F800000;
        StrBg_SetFlags(*(s32 *)((u8 *)(&gStrStatus[var_s1]) + 0x58), 1, &gStrStatus[var_s2] + 0x390);
        StrBg_SetFlags(*(s32 *)((u8 *)(&gStrStatus[var_s1]) + 0x5C), 1, &gStrStatus[var_s2] + 0x390);
        var_s0_2 += 1;
        var_s2 += 0x10;
        var_s1 += 8;
    } while (var_s0_2 < 7);
    *(u8 **)((u8 *)gStrStatus + 0x3C) = amTask_Create(func_0028EB20, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 1, 2);
    *(u8 **)((u8 *)gStrStatus + 0x98) = amTask_Create(func_0028EAE0, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x18, 2);
    *(u8 **)((u8 *)gStrStatus + 0x144) = amTask_Create(StrBg_FlushDraw, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x43, 2);
    *(u8 **)((u8 *)gStrStatus + 0xA0) = amTask_Create(func_002BB2A0, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x1A, 2);
    *(u8 **)((u8 *)gStrStatus + 0xA4) = amTask_Create(func_002BB150, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x1B, 2);
    *(u8 **)((u8 *)gStrStatus + 0xB4) = amTask_Create(func_002BB490, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x1F, 2);
}
