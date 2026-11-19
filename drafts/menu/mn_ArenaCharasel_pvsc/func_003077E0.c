/* Draft (not built): func_003077E0 at 0x003077E0, size 0x304, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34C, original 0x304
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_003077E0.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_003077E0 size diff=82/211
extern void A2d_FlushList(void);
s32 func_0022C060(void *, s32);
s32 func_0022C7D0(void *, s32, f32);
s32 func_003075B0(void *);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_003077E0(u8 *arg0) {
    u8 *sp5C;
    f32 var_f12;
    f32 var_f12_2;
    s32 temp_s1_4;
    s32 temp_s1_6;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s3;
    s32 var_v0;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_5;
    u8 *temp_s1_7;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *var_s2;

    var_v0 = 4;
    var_v1 = &sp5C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp5C = *(u8 **)((u8 *)arg0 + 0x58);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_s1 = sp5C;
    if (temp_s1 != NULL) {
        func_0022C060(temp_s1, 0x3F800000);
        func_0022CD00(temp_s1);
    }
    var_s3 = 0;
    var_s2 = arg0;
    do {
        temp_s1_2 = *(u8 **)((u8 *)var_s2 + 0x70);
        if (temp_s1_2 != NULL) {
            temp_v0 = *(u8 *)((u8 *)(arg0 + var_s3) + 0x16);
            if ((s32) temp_v0 >= 0) {
                var_f12 = (f32) temp_v0;
            } else {
                var_f12 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
            }
            func_0022C7D0(temp_s1_2, 1, var_f12);
            func_0022C060(temp_s1_2, 0);
            func_0022CD00(temp_s1_2);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 7);
    temp_s1_3 = *(u8 **)((u8 *)arg0 + 0x5C);
    if (temp_s1_3 != NULL) {
        temp_v0_2 = *(u8 *)((u8 *)arg0 + 0x1D);
        if ((s32) temp_v0_2 >= 0) {
            var_f12_2 = (f32) temp_v0_2;
        } else {
            var_f12_2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_0022C7D0(temp_s1_3, 1, var_f12_2);
        func_0022C060(temp_s1_3, 0);
        func_0022CD00(temp_s1_3);
    }
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x60);
    if (temp_s2 != NULL) {
        temp_v1 = *(u32 *)((u8 *)arg0 + 0x28);
        var_a0 = 0x2710;
        temp_s3 = *(u32 *)((u8 *)arg0 + 0x28) / 10000;
        if (temp_v1 < 0x2710U) {
            var_a0 = 0;
        }
        temp_s1_4 = (temp_v1 % 10000U) + var_a0;
        func_0022C7D0(temp_s2, 1, (f32) temp_s1_4);
        func_0022C060(temp_s2, 0);
        func_0022CD00(temp_s2);
        if (temp_s1_4 >= 0x2710) {
            temp_s1_5 = *(u8 **)((u8 *)arg0 + 0x64);
            func_0022C7D0(temp_s1_5, 1, (f32) temp_s3);
            func_0022C060(temp_s1_5, 0);
            func_0022CD00(temp_s1_5);
        }
    }
    temp_s2_2 = *(u8 **)((u8 *)arg0 + 0x68);
    if (temp_s2_2 != NULL) {
        temp_v1_2 = *(u32 *)((u8 *)arg0 + 0x2C);
        var_a0_2 = 0x2710;
        temp_s3_2 = *(u32 *)((u8 *)arg0 + 0x2C) / 10000;
        if (temp_v1_2 < 0x2710U) {
            var_a0_2 = 0;
        }
        temp_s1_6 = (temp_v1_2 % 10000U) + var_a0_2;
        func_0022C7D0(temp_s2_2, 1, (f32) temp_s1_6);
        func_0022C060(temp_s2_2, 0);
        func_0022CD00(temp_s2_2);
        if (temp_s1_6 >= 0x2710) {
            temp_s1_7 = *(u8 **)((u8 *)arg0 + 0x6C);
            func_0022C7D0(temp_s1_7, 1, (f32) temp_s3_2);
            func_0022C060(temp_s1_7, 0);
            func_0022CD00(temp_s1_7);
        }
    }
    A2d_FlushList();
    func_003075B0(arg0);
}
