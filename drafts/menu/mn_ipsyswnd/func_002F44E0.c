/* Draft (not built): func_002F44E0 at 0x002F44E0, size 0x298, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 122: u8 *)temp_s0_2 + 0xC)) + 0x1C) + ((*(s16 *)((u8 *)temp_s1 + 0x10) + 0x40) * 4)), 0);
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F44E0.s */

// src/menu/mn_ipsyswnd.c func_002F44E0 cerr diff=-1/0
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002F44E0(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0_6;
    s16 temp_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_8;
    u16 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_7;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002F4330(temp_s1);
    temp_a0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
    if (temp_a0 & 0x4000) {
        temp_s0 = gInputName;
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0x10);
        D_00470704 = (s32)(temp_a0_2);
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x5000);
        D_00470238 = 0;
        temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 0);
        if (temp_a0_3 != 0) {
            func_0022D0E0((void *)(temp_a0_3), 1);
        }
        *(s32 *)((u8 *)temp_s1 + 0) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x1C)) + 0xF0), 0);
        temp_v1 = *(s16 *)((u8 *)temp_s1 + 0xC);
        if ((temp_v1 != 6) && (temp_v1 != 4) && (temp_v1 != 0)) {

        } else {
            temp_a0_4 = *(s32 *)((u8 *)temp_s1 + 4);
            if (temp_a0_4 != 0) {
                func_0022D0E0((void *)(temp_a0_4), 1);
            }
            *(s32 *)((u8 *)temp_s1 + 4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x14)) + 0x14), 0);
            temp_a0_5 = *(s32 *)((u8 *)temp_s1 + 8);
            if (temp_a0_5 != 0) {
                func_0022D0E0((void *)(temp_a0_5), 1);
                *(s32 *)((u8 *)temp_s1 + 8) = 0;
            }
        }
        *(s16 *)((u8 *)temp_s1 + 0xE) = 3;
        *(s32 *)((u8 *)temp_s1 + 0x14) = 0x41F00000;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        var_v1 = (s32 *)(&func_002F4460);
        if (&func_002F4460 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_a0 & 0x50) {
        if (*(s16 *)((u8 *)temp_s1 + 0x10) != 0) {
            *(s16 *)((u8 *)temp_s1 + 0x10) = 0;
        } else {
            *(s16 *)((u8 *)temp_s1 + 0x10) = 1;
        }
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        temp_a0_6 = *(s16 *)((u8 *)temp_s1 + 0xC);
        temp_s0_2 = gInputName;
        if ((temp_a0_6 != 6) && (temp_a0_6 != 4) && (temp_a0_6 != 0)) {
            return;
        }
        temp_a0_7 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
        D_00470704 = (s32)(temp_a0_7);
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_7), 0x5000);
        D_00470238 = 0;
        temp_a0_8 = *(s32 *)((u8 *)temp_s1 + 8);
        if (temp_a0_8 != 0) {
            func_0022D0E0((void *)(temp_a0_8), 1);
        }
        *(s32 *)((u8 *)temp_s1 + 8) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xC)) + 0x1C) + ((*(s16 *)((u8 *)temp_s1 + 0x10) + 0x40) * 4)), 0);
    }
}
