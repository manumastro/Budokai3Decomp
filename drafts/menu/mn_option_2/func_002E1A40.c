/* Draft (not built): func_002E1A40 at 0x002E1A40, size 0x164, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'struct OptionConfig' to 'signed char *' mwccps2.exe Compiler: @ 164: var_s2 = (s8 *)(D_004E05DC[0]);
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E1A40.s */

// src/menu/mn_option_2.c func_002E1A40 cerr diff=-1/0
extern void amDisp_SetOffset(s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_001446E0(s32);
s32 func_00148310(f32);
s32 func_001A38B0(s32, s32, s8);
s32 memcpy(s8 *, s8 *, s32);
extern s32 D_00456B20;
extern void Fade_SetRequest();
extern void func_0015FE80(void);
extern char D_004B4B40[];
void func_002E1A40(s32 arg0) {
    s32 var_s0_2;
    s32 var_s1;
    s8 *var_s0;
    s8 *var_s2;
    s8 temp_v1;

    var_s2 = (s8 *)(D_004E05DC[0]);
    var_s1 = 0;
    var_s0 = (s8 *)(D_004B4B40[0]);
    do {
        temp_v1 = *(s8 *)((u8 *)var_s2 + 6);
        if (temp_v1 != 2) {
            memcpy(var_s0 + 0x2BA88, &D_00456B20 + (temp_v1 * 8), 8);
        } else {
            memcpy(var_s0 + 0x2BA88, var_s2 + 8, 8);
        }
        func_001A38B0(var_s1, 1, *(s8 *)((u8 *)var_s2 + 7));
        var_s1 += 1;
        var_s2 += 0xA;
        var_s0 += 0xA;
    } while (var_s1 < 2);
    func_00148310((f32) D_004E0608);
    amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20));
    amAdx_SetVolume(0, *(f32 *)((u8 *)D_004E05DC + 0x34));
    var_s0_2 = 1;
    do {
        amAdx_SetVolume(var_s0_2, *(f32 *)((u8 *)D_004E05DC + 0x3C));
        var_s0_2 += 1;
    } while (var_s0_2 < 4);
    if (*(s32 *)((u8 *)D_004E05DC + 0x30) == 0) {
        func_0015FE80();
        func_001446E0(0);
    } else {
        func_0015FE80();
        func_001446E0(1);
    }
    Fade_SetRequest(-1, arg0, 0);
}
