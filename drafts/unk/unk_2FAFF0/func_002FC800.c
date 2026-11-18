/* Draft (not built): func_002FC800 at 0x002FC800, size 0x1F0, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 329: if (D_005CA030 != 1) {
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FC800.s */

// src/unk/unk_2FAFF0.c func_002FC800 cerr diff=-1/0
s32 Zenie_Create(s32, s32, s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32, void *);
s32 func_0029E9B0(s16, s32, s32, s32);
extern s32 D_00455920;
extern s32 D_0046B560;
extern s8 D_005D0082;
extern void func_0029D6C0(void *);
extern void Scene_Request();
void func_002FC800(s32 arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 *var_v1;
    s16 var_s0;
    s16 var_s1;
    s32 temp_a0;
    s32 var_a2;
    s32 var_v0;
    s8 temp_v0;
    s8 var_a3;
    u8 *temp_a1;
    u8 *var_a1;

    *(s32 *)((u8 *)gTourMap + 8) = amCdFs_ReadFileId(0x1083A, 0, 0, 0);
    *(s32 *)((u8 *)gTourMap + 0xC) = amCdFs_ReadFileId(0x1083B, 0, 0, gTourMap);
    *(s32 *)((u8 *)gTourMap + 0x14) = amCdFs_ReadFileId(0x10838, 0, 0, gTourMap);
    *(s32 *)((u8 *)gTourMap + 0x10) = amCdFs_ReadFileId(0x10839, 0, 0, gTourMap);
    Zenie_Create(0x3000, 2, 0x11402000, 0);
    *(s32 *)((u8 *)gTourMap + 0x4C) = arg0;
    *(s32 *)((u8 *)gTourMap + 0x74) = 0;
    if (D_005CA030 != 1) {
        var_a1 = (u8 *)(gTourMap);
        if (*(s32 *)((u8 *)var_a1 + 0x4C) != 0) {
            var_s1 = -1;
            var_a3 = 0;
            var_s0 = -1;
            temp_a0 = 1 << D_005D0082;
            var_a2 = 0;
            if (temp_a0 > 0) {
                do {
                    if (*(s16 *)((u8 *)var_a1 + 0x2F6) >= 0) {
                        temp_v0 = *(s8 *)((u8 *)var_a1 + 0x2F3);
                        if (var_a3 < temp_v0) {
                            var_s1 = *(s16 *)((u8 *)var_a1 + 0x2F4);
                            var_a3 = temp_v0;
                            var_s0 = *(&D_0046B560 + (var_s1 * 2));
                        }
                    }
                    var_a2 += 1;
                    var_a1 += 0x14;
                } while (var_a2 < temp_a0);
            }
            var_v1 = &sp30;
            temp_a1 = (u8 *)(&D_00455920 + (var_s1 * 0x1C));
            var_v0 = 0x10;
            if (var_v1 != NULL) {
                do {
                    *var_v1 = 0;
                    var_v0 -= 1;
                    var_v1 += 1;
                } while (var_v0 != 0);
            }
            sp30 = *(f32 *)((u8 *)temp_a1 + 0x10);
            sp34 = *(f32 *)((u8 *)temp_a1 + 0x14);
            sp38 = *(f32 *)((u8 *)temp_a1 + 0x18);
            func_0029D6C0(&sp30);
            *(s32 *)((u8 *)gTourMap + 0x74) = func_0029E9B0(var_s0, 0, 0, 4);
        }
    }
    Scene_Request(5, 0);
}
