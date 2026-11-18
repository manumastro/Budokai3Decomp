/* Draft (not built): func_002F0160 at 0x002F0160, size 0x240, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  explicit conversion from 'float *' to 'float' mwccps2.exe Compiler: @ 400: SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002F0160.s */

// src/menu/mn_ArenaList.c func_002F0160 cerr diff=-1/0
extern void *D_00470968;
extern s16 D_005C4122;
extern s16 D_005C412E;
extern s16 D_005C4130;
extern s16 D_005C4132;
extern s16 D_005C4134;
extern void amFile_Load(void *);
extern void func_0022E0B0(void *);
void func_002F0160(u8 *arg0) {
    s32 *var_v1;
    s16 var_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *var_a1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = D_00470968;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 4) == 3) {
        *(u8 **)((u8 *)temp_s1 + 0x23C) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
        *(s32 *)((u8 *)temp_s0 + 0) = 0;
        *(u8 **)((u8 *)temp_s1 + 0x240) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        *(s32 *)((u8 *)temp_s1 + 0x244) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54) = 0;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 8), 0);
        *(u8 **)((u8 *)temp_s0 + 8) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s1 + 0x23C));
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 0x240));
        SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        if (D_005C4122 != 0) {
            *(s16 *)((u8 *)temp_s1 + 8) = (s16) (((s64) ((s64) D_005C4122 << 0x30) >> 0x30) - 1);
        } else {
            *(s16 *)((u8 *)temp_s1 + 8) = 0;
        }
        D_005C4122 = *(s16 *)((u8 *)temp_s1 + 8) + 1;
        *(s16 *)((u8 *)temp_s1 + 0x10) = (s16) D_005C4132;
        *(s16 *)((u8 *)temp_s1 + 0x12) = (s16) D_005C412E;
        *(s16 *)((u8 *)temp_s1 + 0x14) = (s16) D_005C4134;
        *(s16 *)((u8 *)temp_s1 + 0x16) = (s16) D_005C4130;
        func_002EE4D0(temp_s1);
        var_a0 = 0;
        *(s16 *)((u8 *)temp_s1 + 0xC) = 0x17C;
        var_a1 = (u8 *)(*(s32 *)((u8 *)temp_s1 + 0x244) + 0xC8);
loop_8:
        if (*(s16 *)((u8 *)temp_s1 + 0xA) < (s32) *(u8 *)((u8 *)var_a1 + 2)) {
            *(s16 *)((u8 *)temp_s1 + 0xC) = var_a0;
        } else {
            var_a0 += 1;
            var_a1 += 0x20;
            if (var_a0 < 0x17C) {
                goto loop_8;
            }
        }
        if (*(s16 *)((u8 *)temp_s1 + 8) == 0) {
            func_002EEB80(temp_s1, var_a1);
            func_002EDE90(temp_s1);
            *(s16 *)((u8 *)temp_s1 + 0x18) = 4;
        } else {
            func_002EE7A0(temp_s1, 0);
            func_002EE9F0(temp_s1);
            func_002EDC50(temp_s1);
            *(s16 *)((u8 *)temp_s1 + 0x18) = 4;
        }
        *(s16 *)((u8 *)temp_s1 + 0) = 2;
        *(s16 *)((u8 *)temp_s1 + 4) = 1;
        *(s32 *)((u8 *)temp_s1 + 0x1C) = 0x41F00000;
        var_v1 = (s32 *)(&func_002F00E0);
        if (&func_002F00E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
