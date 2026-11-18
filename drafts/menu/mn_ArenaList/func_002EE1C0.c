/* Draft (not built): func_002EE1C0 at 0x002EE1C0, size 0x1A0, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s2.exe Compiler: 117: if (temp_s5 == *(s32 *)((u8 *)arg0 + 0x6C)) { @ 116: if (temp_s5 != *(s32 *)((u8 *)arg0 + 0x64)) {
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EE1C0.s */

// src/menu/mn_ArenaList.c func_002EE1C0 cerr diff=-1/0
s32 func_00228240(s32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32 *);
s32 func_0022C060(void *, s32);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002EE1C0(u8 *arg0) {
    s32 sp80;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    u8 *spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    f32 var_f0;
    s32 var_s4;
    s32 var_v0;
    u8 **var_s3;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_s5;

    var_v0 = 0x18;
    var_v1 = &spD0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    spD0 = *(u8 **)((u8 *)arg0 + 0x5C);
    spD4 = *(s32 *)((u8 *)arg0 + 0x60);
    spD8 = *(s32 *)((u8 *)arg0 + 0x64);
    spDC = *(s32 *)((u8 *)arg0 + 0x68);
    spE0 = *(s32 *)((u8 *)arg0 + 0x6C);
    spE4 = *(s32 *)((u8 *)arg0 + 0x70);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x240);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x4000);
    D_00470238 = 0;
    var_s4 = 0;
    var_s3 = &spD0;
    do {
        temp_s5 = *var_s3;
        if (temp_s5 != NULL) {
            func_002284D0(&sp80);
            func_00228430(0);
            var_f0 = 1.0f;
            if (temp_s5 != *(s32 *)((u8 *)arg0 + 0x64)) {
                if (temp_s5 == *(s32 *)((u8 *)arg0 + 0x6C)) {
                    goto block_7;
                }
                if (((temp_s5 == *(s32 *)((u8 *)arg0 + 0x68)) || (temp_s5 == *(s32 *)((u8 *)arg0 + 0x70))) && (*(s16 *)((u8 *)arg0 + 8) == 0)) {
                    var_f0 = 0.5f;
                }
            } else {
block_7:
                if (*(s16 *)((u8 *)arg0 + 8) != 0) {
                    var_f0 = 0.5f;
                }
            }
            sp98 = var_f0;
            sp94 = var_f0;
            sp90 = var_f0;
            func_00228240(&sp80);
            func_0022C060(temp_s5, 0x3F800000);
            func_0022CD00(temp_s5);
            func_00228410();
        }
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 6);
}
