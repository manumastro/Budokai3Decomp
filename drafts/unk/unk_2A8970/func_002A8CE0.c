/* Draft (not built): func_002A8CE0 at 0x002A8CE0, size 0x15C, segment unk/unk_2A8970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); dentifier 'sp' @ 114: *(s32 *)((u8 *)arg1 + 0x11D4) = (s32) (arg0 + (*(s32 *)((u8 *)((arg0 * 4) + sp) + 0x30) << 0x10));
 * Original: asm/nonmatchings/unk/unk_2A8970/func_002A8CE0.s */

// src/unk/unk_2A8970.c func_002A8CE0 cerr diff=-1/0
s32 func_001F0510(s8, s128 *);
s32 func_00298CC0(s32, s32, s32, s128 *, s32);
extern s128 D_004546D0;
extern s128 D_004546E0;
extern void func_00298DA0(void);
void func_002A8CE0(s8 arg0, u8 *arg1) {
    s128 sp30;
    s128 spD0;
    s128 *var_a0;
    s128 *var_a1;
    s16 *var_v1_2;
    s16 temp_v0;
    s32 var_a0_2;
    s32 var_v1;

    memset(arg1, 0, 0x80);
    var_a1 = &sp30;
    var_a0 = &D_004546E0;
    var_v1 = 9;
    do {
        var_v1 -= 1;
        *var_a1 = *var_a0;
        var_a0 += 0x10;
        var_a1 += 0x10;
    } while (var_v1 > 0);
    *var_a1 = (s64) *var_a0;
    *(s32 *)((u8 *)arg1 + 0x11D4) = (s32) (arg0 + (*(s32 *)((u8 *)((arg0 * 4) + sp) + 0x30) << 0x10));
    *(s32 *)((u8 *)arg1 + 0x11DC) = 0;
    func_001F0510(arg0, var_a1);
    if (((s32) *(s32 *)((u8 *)arg1 + 0x11D4) >> 0x10) != 0x66) {
        *(s8 *)((u8 *)arg1 + 0x11E0) = 0;
    } else {
        *(s8 *)((u8 *)arg1 + 0x11E0) = 1;
    }
    *(s8 *)((u8 *)arg1 + 0x11E1) = arg0;
    *(s8 *)((u8 *)arg1 + 0x11E2) = 0;
    *(s8 *)((u8 *)arg1 + 0x11E3) = 0;
    *(s8 *)((u8 *)arg1 + 0x11E4) = 0;
    *(s8 *)((u8 *)arg1 + 0x11E5) = 0;
    *(s8 *)((u8 *)arg1 + 0x11E6) = 0;
    var_a0_2 = 0;
    var_v1_2 = (s16 *)(D_004E6560 + (arg0 * 0x1210) + 0x1270);
    do {
        temp_v0 = *var_v1_2;
        if (temp_v0 > 0) {
            *var_v1_2 = temp_v0 & 0xFFF;
        }
        var_a0_2 += 1;
        var_v1_2 += 2;
    } while (var_a0_2 < 7);
    spD0 = D_004546D0;
    func_00298DA0();
    func_00298CC0(*(s32 *)((u8 *)arg1 + 0x11D4), 0, 0, &spD0, 0x44BB8000);
}
