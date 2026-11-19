/* Draft (not built): func_002832E0 at 0x002832E0, size 0x430, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'float' to 'unsigned char *' mwccps2.exe Compiler: @ 173: ((u8 *)(D_004E0614))
 * Original: asm/nonmatchings/menu/skl_sheet/func_002832E0.s */

// src/menu/skl_sheet.c func_002832E0 cerr diff=-1/0
extern u8 *D_00470820;
s32 Help_Open(s64, s32, s32, void *);
s32 SoundRpc_SetVolume(s32, s32, void *, f32);
s32 func_0022BC30(s32, void *, s32, void *, f32);
extern u16 D_00493086;
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002832E0(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_s0;
    u8 *temp_a3;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_a1 = *(s32 *)((u8 *)D_00470820 + 0x48);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        *(s32 *)((u8 *)D_00470820 + 0x48) = 3;
        return;
    case 6:                                         /* switch 1 */
        *(s32 *)((u8 *)D_00470820 + 0x48) = 7;
        return;
    case 8:                                         /* switch 1 */
        SklSheet_Free();
        return;
    default:                                        /* switch 1 */
        if (!(*(s16 *)((u8 *)D_00470820 + 0x62) & 1)) {
            SoundRpc_SetVolume(0, 0, D_00470820 + 0x48, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x15, 0);
            }
            *(s16 *)((u8 *)D_00470820 + 0x62) = (s16) (*(s16 *)((u8 *)D_00470820 + 0x62) | 1);
        }
        func_00282E10();
        *(s32 *)((u8 *)D_00470820 + 0x6C) = (s32) (*(s32 *)((u8 *)D_00470820 + 0x6C) + 1);
        *(s32 *)((u8 *)D_00470820 + 0x9C) = (s32) (*(s32 *)((u8 *)D_00470820 + 0x9C) + 1);
        *(s32 *)((u8 *)D_00470820 + 0xCC) = (s32) (*(s32 *)((u8 *)D_00470820 + 0xCC) + 1);
        temp_a2 = *(s32 *)((u8 *)D_00470820 + 0x48);
        temp_s2 = D_00470820 + 0x64;
        temp_a3 = *(u8 **)((u8 *)D_00470820 + 0x30);
        temp_s1 = D_00470820 + 0x94;
        switch (temp_a2) {                          /* switch 2; irregular */
        case 7:                                     /* switch 2 */
            *(s32 *)((u8 *)D_00470820 + 0x64) = (s32) ((*(s32 *)((u8 *)D_00470820 + 0x58) == 0) ? 4 : 3);
            if (func_0022BC30(*(s32 *)(*(s32 *)((u8 *)temp_a3 + 0x1C) + (*(s32 *)((u8 *)D_00470820 + 0x64) * 4)), D_00470820, temp_a2, temp_a3, (f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta) == 0xFF) {
                *(s32 *)((u8 *)D_00470820 + 0x48) = 8;
            }
            return;
        case 3:                                     /* switch 2 */
            *(s32 *)((u8 *)D_00470820 + 0x64) = 2;
            if (func_0022BC30(*(s32 *)(*(s32 *)((u8 *)temp_a3 + 0x1C) + (*(s32 *)((u8 *)D_00470820 + 0x64) * 4)), (u8 *)3, temp_a2, temp_a3, (f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta) == 0xFF) {
                *(s32 *)((u8 *)D_00470820 + 0x48) = 5;
                *(s32 *)((u8 *)D_00470820 + 0x64) = 6;
                *(s32 *)((u8 *)temp_s2 + 8) = 0x3E8;
            }
            return;
        case 4:                                     /* switch 2 */
            if (func_0022BC30(*(s32 *)(*(s32 *)((u8 *)temp_a3 + 0x1C) + (*(s32 *)((u8 *)D_00470820 + 0x64) * 4)), (u8 *)3, temp_a2, temp_a3, (f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta) == 0xFF) {
                if (*(s32 *)((u8 *)D_00470820 + 0x5C) != 0) {
                    *(s32 *)((u8 *)D_00470820 + 0x48) = 5;
                    *(s32 *)((u8 *)D_00470820 + 0x58) = (s32) (*(s32 *)((u8 *)D_00470820 + 0x58) ^ 1);
                    *(s32 *)((u8 *)D_00470820 + 0x5C) = 0;
                } else {
                    *(s32 *)((u8 *)D_00470820 + 0x5C) = 1;
                    *(s32 *)((u8 *)D_00470820 + 0x64) = 6;
                    *(s32 *)((u8 *)temp_s2 + 8) = 0;
                    if (*(s32 *)((u8 *)D_00470820 + 0x58) != 0) {
                        *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
                        *(s32 *)((u8 *)temp_s1 + 0) = 0xE;
                        *(s32 *)((u8 *)temp_s1 + 8) = 0;
                    } else {
                        *(s32 *)((u8 *)temp_s1 + 0xC) = 1;
                    }
                }
            }
            return;
        default:                                    /* switch 2 */
            var_s0 = *D_00492FCE | D_00493086;
            if (var_s0 & 1) {
                Help_Open(0x108000 << 0x20, 3, temp_a2, temp_a3);
                var_s0 = 0;
            }
            if (!(var_s0 & 0x1000)) {
                if (var_s0 & 0x4000) {
                    goto block_36;
                }
            } else {
block_36:
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(u8 *, D_004E0614));
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 5, 0);
                }
                *(s32 *)((u8 *)D_00470820 + 0x48) = 7;
                *(s32 *)((u8 *)temp_s2 + 8) = 0;
                *(s32 *)((u8 *)temp_s1 + 8) = 0;
                *(s32 *)((u8 *)D_00470820 + 0x64) = 3;
                *(s32 *)((u8 *)temp_s1 + 0) = 0xC;
                *(s32 *)((u8 *)D_00470820 + 0xCC) = 0;
            }
            if ((var_s0 & 0x80) || (var_s0 & 0x20) || (var_s0 & 0x8000)) {
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(u8 *, D_004E0614));
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x12, 0);
                }
                *(s32 *)((u8 *)D_00470820 + 0x48) = 4;
                *(s32 *)((u8 *)D_00470820 + 0x6C) = 0;
                *(s32 *)((u8 *)D_00470820 + 0x9C) = 0;
                *(s32 *)((u8 *)D_00470820 + 0x64) = 5;
                if (*(s32 *)((u8 *)D_00470820 + 0x58) == 0) {
                    *(s32 *)((u8 *)temp_s1 + 0) = 0xD;
                    *(s32 *)((u8 *)temp_s1 + 8) = 0;
                }
            }
            return;
        }
        break;
    }
}
