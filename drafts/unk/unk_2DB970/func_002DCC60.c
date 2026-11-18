/* Draft (not built): func_002DCC60 at 0x002DCC60, size 0x518, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tVolume(int, int, unsigned short, unsigned short, float)' @ 178: SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DCC60.s */

// src/unk/unk_2DB970.c func_002DCC60 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, u16, u16, f32);
s32 func_001A38B0(s32, s32, s32);
s32 func_0022C7D0(s32, s32, void (*)(), void *, s32);
s32 func_002D2E50(s32);
s32 func_002D3290(s32, void *, s32, s32);
s32 memcpy(void *, s32 *, s32);
extern s32 D_00456B20;
extern s32 D_00456B30;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 func_002D99A0;
extern s32 func_002D9CD0;
extern s32 func_002DF740;
extern void *amTask_Create();
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern char D_004B4B40[];
extern char D_00492FCE[];
extern void func_002D71D0(void);
extern void func_002D9510(void);
extern void func_002D98C0(void);
extern void func_002DB970(void);
extern void func_002DBF20(void);
extern void func_002DDF00(void);
void func_002DCC60(void) {
    s32 spA0;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s7;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s2 = (u8 *)(gOptionWork);
    temp_s3 = *(s32 *)((u8 *)temp_s2 + 0x380);
    spA0 = *D_00492FCE | D_00493086;
    temp_s7 = D_00492FD2 | D_00493032;
    temp_a1 = temp_s3 * 4;
    temp_s5 = temp_s3 * 0xA;
    temp_v0 = (u8 *)(D_004B4B40 + temp_s5);
    temp_fp = D_0049308A | D_004930EA;
    temp_s1 = temp_v0 + 0x2BA86;
    if (temp_s3 == 0) {
        if (temp_s7 == 0x40) {
            SoundRpc_SetVolume(0, 0, D_00492FD2, *D_00492FCE, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(void (**)())((u8 *)temp_s2 + 0x344) = func_002DB970;
            *(s32 *)((u8 *)temp_s2 + 0x37C) = 1;
            return;
        }
        temp_v0_2 = temp_a1 + temp_s2;
        if (*D_00492FCE == 8) {
            if ((*(s32 *)((u8 *)temp_v0_2 + 0x334) != 0) || !(*(f32 *)((u8 *)temp_s2 + 0x32C) < 60.0f)) {
                *(s32 *)((u8 *)temp_v0_2 + 0x334) = 0;
                temp_s4 = (u8 *)(gOptionWork);
                *(u8 **)((u8 *)temp_s4 + 0x328) = amTask_Create(&func_002DBF20, 0, 0x2100, 0x4000);
                *(s32 *)((u8 *)temp_s4 + 0x330) = temp_s3;
                *(s32 *)((u8 *)temp_s4 + 0x32C) = 0;
            }
            *(s8 *)((u8 *)temp_v0 + 0x2BA86) = 0;
            *(s8 *)((u8 *)temp_s1 + 1) = 0;
            func_001A38B0(temp_s3, 1, 0);
            temp_s0 = (u8 *)(D_004B4B40 + temp_s5);
            memcpy(temp_s0 + 0x2BA86 + 2, &D_00456B20 + (*(s8 *)((u8 *)temp_s0 + 0x2BA86) * 8), 8);
            memcpy(temp_s0 + 0x2BAA4, &D_00456B30, 8);
        }
        goto block_21;
    }
    if (temp_s3 == 1) {
        if (temp_fp == 0x40) {
            SoundRpc_SetVolume(0, 0, D_00492FD2, *D_00492FCE, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(void (**)())((u8 *)temp_s2 + 0x344) = func_002DB970;
            *(s32 *)((u8 *)temp_s2 + 0x37C) = 1;
            return;
        }
        temp_v0_3 = temp_a1 + temp_s2;
        if (D_00493086 == 8) {
            if ((*(s32 *)((u8 *)temp_v0_3 + 0x334) != 0) || !(*(f32 *)((u8 *)temp_s2 + 0x32C) < 60.0f)) {
                *(s32 *)((u8 *)temp_v0_3 + 0x334) = 0;
                temp_s4_2 = (u8 *)(gOptionWork);
                *(u8 **)((u8 *)temp_s4_2 + 0x328) = amTask_Create(&func_002DBF20, 0, 0x2100, 0x4000);
                *(s32 *)((u8 *)temp_s4_2 + 0x330) = temp_s3;
                *(s32 *)((u8 *)temp_s4_2 + 0x32C) = 0;
            }
            *(s8 *)((u8 *)temp_v0 + 0x2BA86) = 0;
            *(s8 *)((u8 *)temp_s1 + 1) = 0;
            func_001A38B0(temp_s3, 1, 0);
            temp_s0_2 = (u8 *)(D_004B4B40 + temp_s5);
            memcpy(temp_s0_2 + 0x2BA86 + 2, &D_00456B20 + (*(s8 *)((u8 *)temp_s0_2 + 0x2BA86) * 8), 8);
            memcpy(temp_s0_2 + 0x2BAA4, &D_00456B30, 8);
        }
        goto block_21;
    }
block_21:
    func_002D3290(temp_s7 | temp_fp, temp_s2 + 0x380, 2, 1);
    func_002D2E50(*(s32 *)((u8 *)temp_s2 + 0x380) + 0x1E);
    if (spA0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        temp_s0_3 = (u8 *)(gOptionWork);
        spC8 = 0;
        spC0 = 0x43CF8000;
        spC4 = 0x43BE0000;
        spCC = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0_3 + 0x33C), &spC0);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0_3 + 0x33C), -1);
        temp_s0_4 = (u8 *)(gOptionWork);
        spB8 = 0;
        spB0 = 0x43DE8000;
        spB4 = 0x43C30000;
        spBC = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0_4 + 0x340), &spB0);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0_4 + 0x340), -1);
        amAdx_Stop(1);
        *(s32 *)((u8 *)temp_s2 + 0x388) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x3A0) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x360) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x368) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
        *(void (**)())((u8 *)gOptionWork + 0x344) = func_002DDF00;
        *(void (**)())((u8 *)temp_s2 + 0x344) = func_002DCC50;
        *(void (**)())((u8 *)temp_s2 + 0x348) = func_002D71D0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 0x10), 1, func_002DDF00, gOptionWork, 0x42700000);
        *(s32 *)((u8 *)temp_s2 + 0x3A4) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x390) = 0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 0x34), 1, NULL, 0, 0);
        *(s32 **)((u8 *)temp_s2 + 0x34C) = &func_002D9CD0;
        *(s32 *)((u8 *)temp_s2 + 0x38C) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x388) = 0;
        *(s32 **)((u8 *)temp_s2 + 0x350) = &func_002D99A0;
        *(void (**)())((u8 *)temp_s2 + 0x354) = func_002D98C0;
        *(void (**)())((u8 *)temp_s2 + 0x35C) = func_002D9510;
        var_v1 = &func_002DF740;
        if (&func_002DF740 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x320)) + 0x1C) = var_v1;
    }
    *(s8 *)((u8 *)temp_v0 + 0x2BAA2) = (s8) *(s8 *)((u8 *)temp_v0 + 0x2BA86);
    *(s8 *)((u8 *)(temp_v0 + 0x2BAA2) + 1) = (s8) *(s8 *)((u8 *)temp_s1 + 1);
}
