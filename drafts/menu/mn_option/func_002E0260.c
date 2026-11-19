/* Draft (not built): func_002E0260 at 0x002E0260, size 0x438, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 144 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3D4, original 0x438
 * Original: asm/nonmatchings/menu/mn_option/func_002E0260.s */

// src/menu/mn_option.c func_002E0260 size diff=144/245
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_00148360(s8, u16, f32);
s32 func_002D2530(s32, s32, s32, f32 *);
s32 func_002D27E0(s32, s8, s32 *, s32 *);
extern f32 D_0047042C;
extern f32 D_00470430;
extern u16 D_00492FCC;
extern u16 D_00492FD2;
extern u16 D_00493084;
extern u16 D_00493086;
extern u16 D_0049308A;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002E0260(u8 *arg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    f32 var_f1;
    s32 temp_s0;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_v1;
    u8 *temp_s1;

    temp_s1 = gOptionState;
    temp_s0 = *D_00492FCE | D_00493086;
    if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    *(f32 *)((u8 *)temp_s1 + 0x10) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x10) + var_f1);
    sp74 = 0x43000000;
    sp84 = 0x42200000;
    sp70 = 540.0f;
    sp80 = 0.0f;
    sp88 = 0x3F800000;
    sp8C = 0x3F800000;
    sp78 = 0x3F800000;
    sp7C = 0x3F800000;
    func_002D2AD0(*(f32 *)((u8 *)gOptionState + 0xC), &sp80, &sp70);
    sp68 = 0x42A00000;
    sp6C = 0x3F800000;
    sp60 = D_0047042C / 2.0f;
    sp64 = (D_00470430 / 2.0f) - 30.0f;
    func_002D2530(*(s32 *)((u8 *)gOptionState + 4), 4, 0x80000, &sp60);
    sp54 = 0x43800000;
    sp50 = 0;
    sp40 = 0x42A00000;
    sp58 = 0x3F800000;
    sp44 = 0x42300000;
    sp5C = 0x3F800000;
    sp48 = 0x3F800000;
    sp4C = 0x3F800000;
    func_002D27E0(*(s32 *)((u8 *)gOptionState + 4), *(s8 *)((u8 *)gOptionState + 0x14), &sp50, &sp40);
    if (!(*(f32 *)((u8 *)temp_s1 + 0x10) < 600.0f)) {
        *(f32 *)((u8 *)temp_s1 + 0x10) = 0.0f;
        *(s8 *)((u8 *)temp_s1 + 0x14) = 1;
        func_002E0050(0);
        func_00148360(0x3F800000, 0, 0);
        var_v1 = (int *)(&func_002E0170);
        if (&func_002E0170 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(f32 *)((u8 *)temp_s1 + 0x10) = 0.0f;
        *(s8 *)((u8 *)temp_s1 + 0x14) = 1;
        func_002E0050(0);
        func_00148360(0x3F800000, 0, 0);
        var_v1_2 = (int *)(&func_002E0170);
        if (&func_002E0170 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if (temp_s0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(f32 *)((u8 *)temp_s1 + 0x10) = 0.0f;
        if (*(s8 *)((u8 *)temp_s1 + 0x14) != 0) {
            func_002E0050(0);
            func_00148360(0x3F800000, 0, 0);
        }
        var_v1_3 = (int *)(&func_002E0170);
        if (&func_002E0170 == NULL) {
            var_v1_3 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
        return;
    }
    if (temp_s0 & 0x50) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s8 *)((u8 *)temp_s1 + 0x14) = (s8) (*(s8 *)((u8 *)temp_s1 + 0x14) + 1);
        *(s8 *)((u8 *)temp_s1 + 0x14) = (s8) (*(s8 *)((u8 *)temp_s1 + 0x14) & 1);
    }
    if ((D_00492FCC | D_00493084) & 0x400) {
        temp_a0 = (D_00492FD2 | D_0049308A) & 0xA00;
        switch (temp_a0) {                          /* irregular */
        case 0x800:
            temp_a0_2 = *(s8 *)((u8 *)temp_s1 + 0x15);
            if (temp_a0_2 != 0x64) {
                *(s8 *)((u8 *)temp_s1 + 0x15) = (s8) (temp_a0_2 + 5);
                if (*(s8 *)((u8 *)temp_s1 + 0x15) >= 0x65) {
                    *(s8 *)((u8 *)temp_s1 + 0x15) = 0x64;
                }
                func_00148360(temp_a0_2, D_00492FD2, 0.01f * (f32) *(s8 *)((u8 *)temp_s1 + 0x15));
block_40:
                *(f32 *)((u8 *)temp_s1 + 0x10) = 0.0f;
            }
            break;
        case 0x200:
            temp_v1 = *(s8 *)((u8 *)temp_s1 + 0x15);
            if (temp_v1 != 0) {
                *(s8 *)((u8 *)temp_s1 + 0x15) = (s8) (temp_v1 - 5);
                if (*(s8 *)((u8 *)temp_s1 + 0x15) < 0) {
                    *(s8 *)((u8 *)temp_s1 + 0x15) = 0;
                }
                func_00148360(temp_a0, D_00492FD2, 0.01f * (f32) *(s8 *)((u8 *)temp_s1 + 0x15));
                goto block_40;
            }
            break;
        }
    }
}
