/* Draft (not built): func_002DDF00 at 0x002DDF00, size 0x34C, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of keyword mwccps2.exe Compiler: 172: if (temp_s1 & 0x1000) { @ 171: default:
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DDF00.s */

// src/unk/unk_2DB970.c func_002DDF00 cerr diff=-1/0
s32 Help_Open(s32, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, u16, u16, f32);
s32 func_0022C7D0(s32, s32, s32);
s32 func_002D2E50(s8);
s32 func_002D33B0(s32, void *, s32, s32);
s32 func_002DE460();
extern f32 D_00470170;
extern s16 D_00470174;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s32 func_002D95F0;
extern s32 func_002D9A50;
extern s32 func_002D9DE0;
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern char D_00492FCE[];
extern void func_002D8C00(void);
extern void func_002D8D00(void);
extern void func_002DDCA0(void);
void func_002DDF00(void) {
    u8 sp[0x400];
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp68;
    s32 temp_s1;
    s32 temp_s2;
    u32 temp_s3;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = (unsigned char *)(gOptionWork);
    temp_s3 = *(u32 *)((u8 *)temp_s0 + 0x378);
    temp_s1 = *D_00492FCE | D_00493086;
    temp_s2 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    if (temp_s1 & 1) {
        Help_Open(0x40000 | (0x01000040 << 0x20), 3, D_00492FD2, *D_00492FCE);
        return;
    }
    if (temp_s1 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_00492FD2, *D_00492FCE, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        switch (temp_s3) {
        case 2:
            *(s32 *)((u8 *)temp_s0 + 0x35C) = 0;
            func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x68), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x4C), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x50), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x38), 1, 0);
            *(s32 **)((u8 *)temp_s0 + 0x350) = &func_002D9A50;
            *(s32 **)((u8 *)temp_s0 + 0x354) = &func_002D95F0;
            if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
                *(s32 *)((u8 *)temp_s0 + 0x380) = 0;
            } else {
                *(s32 *)((u8 *)temp_s0 + 0x380) = 1;
            }
            *(s32 **)((u8 *)temp_s0 + 0x34C) = &func_002D9DE0;
            /* fallthrough */
        case 3:
            if (temp_s3 == 3) {
                func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x38), 1, 0);
                *(s32 *)((u8 *)temp_s0 + 0x39C) = 0x42700000;
            }
            /* fallthrough */
        case 0:
        case 1:
        case 4:
            *(s32 *)((u8 *)temp_s0 + 0x388) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x390) = 0;
            *(void (**)())((u8 *)temp_s0 + 0x344) = func_002DDCA0;
            *(void (**)())((u8 *)temp_s0 + 0x364) = func_002D8D00;
            temp_s0_2 = (unsigned char *)(gOptionWork);
            sp58 = 0;
            sp50 = 0x43CF8000;
            sp54 = 0x43BE0000;
            sp5C = 0x3F800000;
            Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0_2 + 0x33C), &sp50);
            Obj_SetF3C(*(s32 *)((u8 *)temp_s0_2 + 0x33C), -1);
            amAdx_Stop(1);
            return;
        case 5:
            func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x38), 1, 0);
            func_002DE460();
            amAdx_Stop(1);
            return;
        }
    } else {
    default:
        if (temp_s1 & 0x1000) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            func_002DE460();
            return;
        }
        func_002D33B0(temp_s2, temp_s0 + 0x378, 0, 6);
        if (temp_s3 != *(s32 *)((u8 *)temp_s0 + 0x378)) {
            func_002D8C00();
            amAdx_Stop(1);
        }
        *(f32 *)((u8 *)(&sp68) + 0) = (f32) D_00470170;
        *(s16 *)((u8 *)(&sp68) + 4) = (s16) D_00470174;
        func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0x378) + sp) + 0x68));
    }
}
