/* Draft (not built): func_00224680 at 0x00224680, size 0x324, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'int' mwccps2.exe Compiler: 458: D_0058BB38 = 1; @ 421: D_0058BB38 = 1;
 * Original: asm/nonmatchings/unk/unk_21D260/func_00224680.s */

// src/unk/unk_21D260.c func_00224680 cerr diff=-1/0
extern u8 *func_0021C3E0(s32);
extern u8 D_00492FC0[];
s32 SoundRpc_SetVolume(s32, s32, s16, f32);
s32 func_0021C360(s16);
s32 memset(s8 *, s32, s32);
extern f32 D_004E0614;
extern s32 D_0058BB3C;
extern void SoundRpc_Send3();
void func_00224680(u8 *arg0) {
    s16 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBtlSys);
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        var_v1 = *(s32 *)((u8 *)temp_s0 + 0xE30) & ~2;
        goto block_30;
    }
    memset((s8 *)(D_0058BB30), 0, 8);
    var_a2 = *(s16 *)((u8 *)temp_s0 + 0xE40);
    if (var_a2 != -1) {
        if (*(&D_00492FC0 + (var_a2 * 0xB8)) == 3) {
            if ((*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) && (*(s32 *)((u8 *)arg0 + 0x28) != 2)) {
                *(s32 *)((u8 *)arg0 + 0x28) = 2;
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                SoundRpc_SetVolume(0, 0, var_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x16, 0);
                }
            }
        } else {
            if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
                *(s32 *)((u8 *)arg0 + 0x28) = 0;
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                SoundRpc_SetVolume(0, 0, var_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x15, 0);
                }
            }
            D_0058BB3C = func_0021C360(*(s16 *)((u8 *)temp_s0 + 0xE42));
            D_0058BB38 = 1;
            var_v1 = *(s32 *)((u8 *)temp_s0 + 0xE30) | 2;
            goto block_30;
        }
    } else {
        var_s2 = 0;
        var_s1 = 0;
        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
            do {
                var_a2 = *(s16 *)((u8 *)(func_0021C3E0(var_s1)) + 0x1A);
                if ((var_a2 != -1) && (*(&D_00492FC0 + (var_a2 * 0xB8)) != 3)) {
                    if (var_s2 == 0) {
                        D_0058BB3C = var_s1;
                    }
                    var_s2 = 1;
                }
                var_s1 += 1;
            } while (var_s1 < *(s32 *)((u8 *)gBattle + 0x88D8));
        }
        if (var_s2 == 0) {
            if ((*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) && (*(s32 *)((u8 *)arg0 + 0x28) != 2)) {
                *(s32 *)((u8 *)arg0 + 0x28) = 2;
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                SoundRpc_SetVolume(0, 0, var_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x16, 0);
                }
            }
        } else {
            if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
                *(s32 *)((u8 *)arg0 + 0x28) = 0;
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                SoundRpc_SetVolume(0, 0, var_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x15, 0);
                }
            }
            D_0058BB38 = 1;
            var_v1 = *(s32 *)((u8 *)temp_s0 + 0xE30) | 2;
block_30:
            *(s32 *)((u8 *)temp_s0 + 0xE30) = var_v1;
        }
    }
}
