/* Draft (not built): func_002C1F90 at 0x002C1F90, size 0x4E0, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); iler: @ 1566: D_00493086) & 0x1000) && (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xA0)) << 0x38) >> 0x38) == 4)) {
 * Original: asm/nonmatchings/story/str_status/func_002C1F90.s */

// src/story/str_status.c func_002C1F90 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, s16, u8, f32);
s32 func_0027D330(void *, s64, s32 *, s32);
s64 func_0027DAA0(void *);
s16 func_0027DAE0(void *);
s32 func_0027DDC0(void *);
extern s64 D_00470128;
extern s32 D_00470838;
extern u16 D_00493086;
extern s64 D_004B4B48;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern s32 D_005C4CB0;
extern void func_0027DB20(void *);
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_002C1E10(void);
extern void func_002C1BC0(void);
void func_002C1F90(u8 *arg0) {
    s32 *sp60;
    u8 *sp64;
    u8 *sp68;
    u8 *sp6C;
    s32 *sp70;
    u8 *sp74;
    u8 *sp78;
    u8 *sp7C;
    s64 sp80;
    s64 sp88;
    s32 *var_a1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_5;
    s16 temp_a2;
    s32 **var_s3;
    s32 **var_s3_2;
    s32 **var_v1;
    s32 **var_v1_4;
    s32 *var_a2;
    s32 temp_a0_4;
    s32 temp_a0_7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    s32 var_v0_2;
    s64 *var_s2;
    s64 *var_s2_2;
    u16 temp_s3;
    u8 temp_a3;
    u8 temp_s2_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x2000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 8);
    if (temp_s2 != NULL) {
        func_0022C060((s32)(temp_s2), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s2)));
    }
    func_002C0860((s32 *)(temp_s0));
    A2d_FlushList();
    func_00133B50(0, 0);
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
    func_0027D330(*(u8 **)((u8 *)temp_s0 + 0xA0), D_004B4B48, var_a2, var_a3);
    if (((*D_00492FCE | D_00493086) & 0x1000) && (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xA0)) << 0x38) >> 0x38) == 4)) {
        func_0027DB20(*(u8 **)((u8 *)temp_s0 + 0xA0));
        if (*(u8 *)((u8 *)temp_s0 + 0xB2) == 0) {
            var_v1 = &sp70;
            *(s8 *)((u8 *)temp_s0 + 0xAF) = 0xF;
            var_v0 = 0x10;
            if (var_v1 != NULL) {
                do {
                    *var_v1 = 0;
                    var_v0 -= 1;
                    var_v1 += 1;
                } while (var_v0 != 0);
            }
            sp74 = temp_s0 + 0x10;
            sp70 = (s32 *)(temp_s0 + 0xC);
            sp7C = temp_s0 + 0x14;
            sp78 = temp_s0 + 0x2C;
            sp88 = D_00470128;
            temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 4);
            D_00470704 = (s32)(temp_a0_3);
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_3), 0x2000);
            D_00470238 = 0;
            var_s4 = 0;
            var_s3 = &sp70;
            var_s2 = &sp88;
            do {
                temp_a0_4 = **var_s3;
                if (temp_a0_4 != 0) {
                    func_0022D0E0(temp_a0_4, 1);
                }
                temp_v0 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + (*var_s2 * 4)), 0);
                var_s4 += 1;
                var_s2 += 2;
                **var_s3 = temp_v0;
                var_s3 += 4;
            } while (var_s4 < 4);
            var_v1_2 = (s32 *)(&func_002C1CF0);
            if (&func_002C1CF0 == NULL) {
                var_v1_2 = NULL;
            }
        } else {
            *(s8 *)((u8 *)temp_s0 + 0xAF) = 0xD;
            var_v1_2 = (s32 *)(&func_002C1E10);
            if (&func_002C1E10 == NULL) {
                var_v1_2 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if (((s64) (func_0027DAA0(*(u8 **)((u8 *)temp_s0 + 0xA0)) << 0x38) >> 0x38) == 1) {
        *(s16 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0xB2) * 2) + temp_s0) + 0xB4) = func_0027DAE0(*(u8 **)((u8 *)temp_s0 + 0xA0));
        temp_a3 = *(u8 *)((u8 *)temp_s0 + 0xB2);
        temp_a2 = *(s16 *)((u8 *)((temp_a3 * 2) + temp_s0) + 0xB4);
        *(&D_005C4CB0 + (temp_a3 * 0xB80)) = (s8) temp_a2;
        SoundRpc_SetVolume(1, 0, temp_a2, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 1, 0);
        }
        temp_s2_2 = *(u8 *)((u8 *)temp_s0 + 0xB2);
        temp_a0_5 = *(u8 **)((u8 *)temp_s0 + 4);
        temp_s3 = *(u16 *)((u8 *)((temp_s2_2 * 2) + temp_s0) + 0xB4);
        D_00470704 = (s32)(temp_a0_5);
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_5), 0x2000);
        D_00470238 = 0;
        *(s32 *)((u8 *)(((temp_s2_2 & 0xFF) * 0xC) + temp_s0) + 0x44) = func_0022D670(*(s32 *)((u8 *)(((temp_s3 & 0xFFFF) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x158), 0x41C80000);
        func_0027DDC0(*(u8 **)((u8 *)temp_s0 + 0xA0));
        *(u8 *)((u8 *)temp_s0 + 0xB2) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xB2) + 1);
        if ((s32) *(u8 *)((u8 *)temp_s0 + 0xB2) < (s32) *(u8 *)((u8 *)temp_s0 + 0xAC)) {
            var_v1_3 = (s32 *)(&func_002C1BC0);
            *(s8 *)((u8 *)temp_s0 + 0xAF) = 0xC;
            if (&func_002C1BC0 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            return;
        }
        *(s8 *)((u8 *)temp_s0 + 0xAF) = 0xE;
        var_v1_4 = &sp60;
        var_v0_2 = 0x10;
        if (var_v1_4 != NULL) {
            do {
                *var_v1_4 = 0;
                var_v0_2 -= 1;
                var_v1_4 += 1;
            } while (var_v0_2 != 0);
        }
        sp64 = temp_s0 + 0x10;
        sp60 = (s32 *)(temp_s0 + 0xC);
        sp6C = temp_s0 + 0x14;
        sp68 = temp_s0 + 0x2C;
        sp80 = D_00470128;
        temp_a0_6 = *(u8 **)((u8 *)temp_s0 + 4);
        D_00470704 = (s32)(temp_a0_6);
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_6), 0x2000);
        D_00470238 = 0;
        var_s4_2 = 0;
        var_s3_2 = &sp60;
        var_s2_2 = &sp80;
        do {
            temp_a0_7 = **var_s3_2;
            if (temp_a0_7 != 0) {
                func_0022D0E0(temp_a0_7, 1);
            }
            temp_v0_2 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + (*var_s2_2 * 4)), 0);
            var_s4_2 += 1;
            var_s2_2 += 2;
            **var_s3_2 = temp_v0_2;
            var_s3_2 += 4;
        } while (var_s4_2 < 4);
        var_v1_5 = (s32 *)(&StrStatus_TaskRequestScene);
        if (&StrStatus_TaskRequestScene == NULL) {
            var_v1_5 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
    }
}
