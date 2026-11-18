/* Draft (not built): func_00225020 at 0x00225020, size 0x354, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); e Compiler: 516: 0 = A2d_AllocObj(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C), 0); @ 509: D_0058BB38 = 1;
 * Original: asm/nonmatchings/unk/unk_21D260/func_00225020.s */

// src/unk/unk_21D260.c func_00225020 cerr diff=-1/0
void *A2d_AllocObj(s32, s32);
void *BtlSys_GetSlot(s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0021C3D0(s16);
s32 func_00228AC0(s32, s32 *, s32, s32);
s32 memset(void **, s32, s32);
extern s32 D_0044F720;
extern s32 D_0046FE00;
extern s32 D_0046FE08;
extern s32 D_0046FE10;
extern f32 D_004E0614;
extern s32 D_0058BAF0;
extern s32 D_0058BB10;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern void func_00223DA0(void);
extern void func_002214B0(void);
void func_00225020(s16 arg0, s16 arg1, s16 arg2) {
    s32 *var_a0_2;
    s32 *var_s3;
    s32 *var_v0;
    s16 var_a0;
    s32 temp_a0_3;
    s32 temp_a1;
    u8 **var_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s2;

    temp_s1 = (u8 *)(gBtlSys);
    if (*(s32 *)((u8 *)temp_s1 + 0xE30) & 1) {
        var_a0 = -1;
    } else {
        var_a0 = *(s16 *)((u8 *)temp_s1 + 0xE44);
    }
    if (var_a0 != -1) {
        *(s32 *)((u8 *)temp_s1 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s1 + 0xE30) | 1);
        memset((void **)(&D_0058BAE0), 0, 0x70);
        D_0058BB38 = 1;
        temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xED8);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04040000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04040000);
        D_00470238 = 0;
        D_0058BAE0 = A2d_AllocObj(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C), 0);
        func_00228AC0(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C), &D_0058BAF0, -1, 0);
        func_00228AC0(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x38), &D_0058BB10, -1, 0);
        temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 0xEF0);
        if (temp_a0_2 != NULL) {
            amTask_Kill((s32)((void *)(temp_a0_2)));
        }
        if ((arg0 == -1) && (arg2 == 0)) {
            var_a0_2 = (s32 *)(&func_00223DA0);
            var_s3 = (s32 *)(&func_002214B0);
        } else {
            temp_a1 = arg2 * 4;
            temp_a0_3 = *(s16 *)((u8 *)temp_s1 + 0xDF0) * 4;
            var_a0_2 = *(*(&D_0046FE00 + temp_a1) + temp_a0_3);
            var_s3 = *(*(&D_0046FE08 + temp_a1) + temp_a0_3);
        }
        var_s2 = NULL;
        if (var_a0_2 != NULL) {
            var_s2 = amTask_Create(var_a0_2, 0, 0x5420, 0x1000);
            *(u8 **)((u8 *)temp_s1 + 0xEF0) = var_s2;
        } else {
            temp_s0 = (u8 *)(gBtlSys);
            *(s32 *)((u8 *)temp_s0 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xE30) & ~1);
            func_0022D4B0((s32)(D_0058BAE0), 1);
            D_0058BAE0 = NULL;
            temp_v0 = *(u8 **)((u8 *)temp_s0 + 0xEF0);
            if (temp_v0 != NULL) {
                temp_a0_4 = *(u8 **)((u8 *)temp_v0 + 0x30);
                if (temp_a0_4 != NULL) {
                    amTask_Kill((s32)((void *)(temp_a0_4)));
                }
                amTask_Kill((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0xEF0))));
                *(u8 **)((u8 *)temp_v0 + 0x30) = NULL;
                *(u8 **)((u8 *)temp_s0 + 0xEF0) = NULL;
            }
        }
        var_s0 = NULL;
        if (var_s2 != NULL) {
            var_s0 = (u8 **)(var_s2 + 0x30);
            memset((void **)(var_s0), 0, 0x38);
            if (arg0 != -1) {
                *(s32 *)((u8 *)var_s0 + 0x18) = (s32) *(s32 *)((u8 *)(BtlSys_GetSlot(func_0021C3D0(arg0))) + 0x18);
            }
        }
        if ((var_s0 != NULL) && (var_s3 != NULL)) {
            temp_v0_2 = amTask_Create(var_s3, 0, 0x3A90, 0x1000);
            *var_s0 = temp_v0_2;
            *(u8 ***)((u8 *)temp_v0_2 + 0x30) = var_s0;
        }
        *(s16 *)((u8 *)temp_s1 + 0xE44) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xE42) = arg0;
        *(s16 *)((u8 *)temp_s1 + 0xE40) = arg1;
        *(s16 *)((u8 *)temp_s1 + 0xE46) = arg2;
        if ((*(s16 *)((u8 *)temp_s1 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s1 + 0xE46) == 0)) {
            var_v0 = &D_0044F720;
        } else {
            var_v0 = (s32 *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s1 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s1 + 0xDF0) * 0x10));
        }
        func_0021D260(var_v0 + 8, var_v0 + 0xC);
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
    }
}
