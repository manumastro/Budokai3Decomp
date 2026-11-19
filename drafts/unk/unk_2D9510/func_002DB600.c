/* Draft (not built): func_002DB600 at 0x002DB600, size 0x36C, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 143 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x380, original 0x36C
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DB600.s */

// src/unk/unk_2D9510.c func_002DB600 size diff=143/224
s32 Help_Open(s32, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, u16, u16, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s64 *, s8 *, f32);
s32 func_0022C7D0(s32, s32, s32);
s32 func_002D2E50(s8, s16, s32 *);
s32 func_002D33B0(s32, void *, s32, s32);
extern s16 D_00470184;
extern u8 D_00470186;
extern u16 D_00492FCC;
extern u16 D_00492FD2;
extern u16 D_0049302C;
extern u16 D_00493032;
extern u16 D_00493084;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930E4;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern void SoundRpc_Send3();
extern void Obj_CopyVec4F50(void *, void *);
extern void amAdx_Pause();
extern void Obj_SetF3C();
extern void func_002DDF00();
extern char D_00492FCE[];
extern char D_00456C80[];
extern void func_002DDC30(void);
extern void func_002D9A50(void);
extern void func_002DA030(void);
extern void func_002D9DE0(void);
void func_002DB600(void) {
    s32 sp44;
    u8 sp[0x400];
    s64 sp30;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spDC;
    f32 temp_f1;
    f32 var_f2;
    s128 temp_v0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;
    s64 *var_a1;
    s8 *var_a2;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gOptionWork);
    temp_s0 = *D_00492FCE | D_00493086;
    if (temp_s0 & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3, D_00492FD2, *D_00492FCE);
        return;
    }
    temp_v1 = D_00492FCC | D_0049302C | (D_00493084 | D_004930E4);
    if ((temp_v1 & 0x100) && (temp_v1 & 0x200) && (temp_v1 & 0x400) && (var_v1 = 1, ((temp_v1 & 0x800) != 0))) {

    } else {
        var_v1 = 0;
    }
    if (var_v1 == 1) {
        *(s32 *)((u8 *)temp_s1 + 0x40C) = 1;
    } else {
        *(s32 *)((u8 *)temp_s1 + 0x40C) = 0;
    }
    if (temp_s0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_00492FCC, *D_00492FCE, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        temp_s0_2 = (unsigned char *)(gOptionWork);
        spC8 = 0;
        spC0 = 0x43CF8000;
        spC4 = 0x43BE0000;
        spCC = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0_2 + 0x33C), &spC0);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0_2 + 0x33C), -1);
        *(s32 *)((u8 *)temp_s1 + 0x388) = 0;
        *(void (**)())((u8 *)temp_s1 + 0x350) = func_002D9A50;
        *(void (**)())((u8 *)temp_s1 + 0x348) = func_002DA030;
        *(s32 *)((u8 *)temp_s1 + 0x36C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x35C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x364) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x360) = 0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 0x38), 1, 0);
        *(s32 *)((u8 *)temp_s1 + 0x35C) = 0;
        *(s32 **)((u8 *)temp_s1 + 0x354) = (int *)(&func_002D95F0);
        *(void (**)())((u8 *)temp_s1 + 0x34C) = func_002D9DE0;
        *(void (**)())((u8 *)temp_s1 + 0x344) = func_002DDC30;
        return;
    }
    func_002D33B0(D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA), temp_s1 + 0x37C, 0, 2);
    *(s16 *)((u8 *)(&spDC) + 0) = (s16) D_00470184;
    *(u8 *)((u8 *)(&spDC) + 2) = (u8) D_00470186;
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x39C) + var_f2;
    *(f32 *)((u8 *)temp_s1 + 0x39C) = temp_f1;
    if (!(temp_f1 <= 60.0f)) {
        func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s1 + 0x37C) + sp) + 0xDC), D_00470184, &spDC);
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614), 0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_a2 = (signed char *)(D_00456C80);
        var_a1 = &sp30;
        var_a0 = 4;
        do {
            var_a0 -= 1;
            temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
            var_a1 += 0x20;
        } while (var_a0 > 0);
        *var_a1 = *var_a2;
        amAdx_SetVolume(1, var_a1, var_a2, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, sp44 | 0x20000, 0);
        *(s32 *)((u8 *)gOptionWork + 0x360) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x368) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
        *(void (**)())((u8 *)gOptionWork + 0x344) = func_002DDF00;
    }
}
