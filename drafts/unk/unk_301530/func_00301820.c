/* Draft (not built): func_00301820 at 0x00301820, size 0x17C, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 32 *)((u8 *)(((u8 *)gTourMap) + var_s1_2) + 0x74), *(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)(
 * Original: asm/nonmatchings/unk/unk_301530/func_00301820.s */

// src/unk/unk_301530.c func_00301820 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0029DD30(s32, s32);
s32 func_0029E120(s32, s16, s32, void *, s32, s32);
s32 func_0029E610(s32);
s32 func_0029E7F0(s32);
extern s32 D_0046B560;
extern f32 D_004E0614;
extern s32 D_005CA030;
extern s32 func_00300F70;
extern void *gTourMap;
extern void SoundRpc_Send3();
extern void func_00301700(void);
void func_00301820(u8 *arg0) {
    s32 *var_s0_2;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;

    var_s1 = 0;
    var_s0 = 0;
loop_1:
    if (func_0029E7F0(*(s32 *)((u8 *)(((u8 *)gTourMap) + var_s0) + 0x74)) != 0) {
        var_s1 += 1;
        var_s0 += 4;
        if (var_s1 >= 2) {
            var_s2 = 0;
            var_s1_2 = 0;
            var_s0_2 = &D_005CA030;
            do {
                func_0029E610(*(s32 *)((u8 *)(((u8 *)gTourMap) + var_s1_2) + 0x74));
                func_0029E120(*(s32 *)((u8 *)(((u8 *)gTourMap) + var_s1_2) + 0x74), *(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s0_2 + 0x6050) * 0x14)) + 0x2F4) * 2)), 1, gTourMap, 0x3F800000, 0);
                func_0029DD30(*(s32 *)((u8 *)(((u8 *)gTourMap) + var_s1_2) + 0x74), 0x3F800000);
                var_s2 += 1;
                var_s1_2 += 4;
                var_s0_2 += 1;
            } while (var_s2 < 2);
            var_v0 = &func_00300F70;
            if (&func_00300F70 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x1C) = var_v0;
            var_v0_2 = (s32 *)(&func_00301700);
            if (&func_00301700 == NULL) {
                var_v0_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 5, 0);
            }
        } else {
            goto loop_1;
        }
    }
}
