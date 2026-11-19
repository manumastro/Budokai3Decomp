/* Draft (not built): func_002E08F0 at 0x002E08F0, size 0x278, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x200, original 0x278
 * Original: asm/nonmatchings/menu/mn_option/func_002E08F0.s */

// src/menu/mn_option.c func_002E08F0 size diff=99/128
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_002D2530(s32, s32, s32, f32 *);
s32 func_002D27E0(s32, s8, s32 *, s32 *);
extern f32 D_0047042C;
extern f32 D_00470430;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002E08F0(u8 *arg0) {
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
    s32 temp_s1;
    u8 *temp_s0;

    sp84 = 0x42200000;
    temp_s0 = gOptionState;
    sp70 = 540.0f;
    sp80 = 0.0f;
    sp74 = 0x43800000;
    sp88 = 0x3F800000;
    sp8C = 0x3F800000;
    sp78 = 0x3F800000;
    sp7C = 0x3F800000;
    temp_s1 = *D_00492FCE | D_00493086;
    func_002D2AD0(*(f32 *)((u8 *)temp_s0 + 0xC), &sp80, &sp70);
    sp68 = 0x42A00000;
    sp6C = 0x3F800000;
    sp60 = D_0047042C / 2.0f;
    sp64 = (D_00470430 / 2.0f) - 40.0f;
    func_002D2530(*(s32 *)((u8 *)gOptionState + 4), 3, 0x80000, &sp60);
    sp54 = 0x43800000;
    sp50 = 0;
    sp40 = 0x42A00000;
    sp58 = 0x3F800000;
    sp44 = 0x42300000;
    sp5C = 0x3F800000;
    sp48 = 0x3F800000;
    sp4C = 0x3F800000;
    func_002D27E0(*(s32 *)((u8 *)gOptionState + 4), *(s8 *)((u8 *)gOptionState + 0x14), &sp50, &sp40);
    if (temp_s1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s8 *)((u8 *)temp_s0 + 0x14) = 1;
        var_v1 = (int *)(&func_002E0800);
        if (&func_002E0800 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s1 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        if (*(s8 *)((u8 *)temp_s0 + 0x14) == 0) {
            func_002E0050(2);
        }
        var_v1_2 = (int *)(&func_002E0800);
        if (&func_002E0800 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if (temp_s1 & 0x50) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s8 *)((u8 *)temp_s0 + 0x14) = (s8) (*(s8 *)((u8 *)temp_s0 + 0x14) + 1);
        *(s8 *)((u8 *)temp_s0 + 0x14) = (s8) (*(s8 *)((u8 *)temp_s0 + 0x14) & 1);
    }
}
