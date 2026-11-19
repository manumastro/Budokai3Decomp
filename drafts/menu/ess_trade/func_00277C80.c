/* Draft (not built): func_00277C80 at 0x00277C80, size 0x648, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 283 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x638, original 0x648
 * Original: asm/nonmatchings/menu/ess_trade/func_00277C80.s */

// src/menu/ess_trade.c func_00277C80 size diff=283/398
extern f32 gFrameDelta;
s32 Save_GetState();
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_00276DC0(s32, s32, void *, void *);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
s32 func_002D2370(s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void SoundRpc_Send3();
extern void func_001EF730(char *);
extern void func_00277A90(void);
extern void func_00278B00(void);
void func_00277C80(u8 *arg0) {
    s32 sp50;
    s32 *var_a3;
    s32 *var_s0;
    s32 *var_v0;
    s32 *var_v0_2;
    s128 *var_a1_10;
    s128 *var_a2_10;
    s16 temp_v1_5;
    s16 temp_v1_7;
    s32 temp_v0;
    s32 temp_v1_6;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_s1;
    s32 var_s2;
    s8 temp_v0_3;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_8;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_v0_2;
    u8 *var_a1_11;
    u8 *var_a2;
    u8 *var_a2_11;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_a2_4;
    u8 *var_a2_5;
    u8 *var_a2_6;
    u8 *var_a2_7;
    u8 *var_a2_8;
    u8 *var_a2_9;
    u8 *var_a3_2;
    u8 *var_a3_3;
    u8 *var_a3_4;
    u8 *var_a3_5;
    u8 *var_a3_6;
    u8 *var_a3_7;
    u8 *var_a3_8;
    u8 *var_a3_9;

    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x160) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x160) + 1);
    temp_a0 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401400;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s1 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x14) + (*(s32 *)((u8 *)gEssTrade + 0x158) * 4)), 1, (f32) *(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    temp_v0 = Save_GetState();
    if (temp_v0 == 6) {
        goto block_15;
    }
    if (temp_v0 == 3) {
        goto block_11;
    }
    if (temp_v0 == 5) {
        goto block_11;
    }
    if (temp_v0 == 4) {
        goto block_5;
    }
    goto block_40;
block_5:
    temp_s2 = (unsigned char *)(gEssTrade + 0x58);
    temp_s1_2 = (unsigned char *)(gEssTrade + 0x78);
    memcpy((s32 *)(&sp50), (s32 *)(temp_s2 + 8), 0x10);
    memcpy((s32 *)(temp_s2 + 8), (s32 *)(temp_s1_2 + 8), 0x10);
    memcpy((s32 *)(temp_s1_2 + 8), (s32 *)(&sp50), 0x10);
    *(s32 *)((u8 *)gEssTrade + 0xC8) = 8;
    *(s32 *)((u8 *)gEssTrade + 0xD0) = 0;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_7;
    }
    SoundRpc_Send3(0, 0, 0x13, 0);
block_7:
    var_v0 = (int *)(&func_00277A90);
    if (&func_00277A90 != NULL) {
        goto block_9;
    }
    var_v0 = NULL;
block_9:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    goto block_41;
block_11:
    func_002D2370(1);
    var_v0_2 = (int *)(&func_00278B00);
    if (&func_00278B00 != NULL) {
        goto block_13;
    }
    var_v0_2 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    goto block_41;
block_15:
    var_s2 = 0;
    var_s1 = 0;
    var_s0 = &D_0058F680;
loop_16:
    var_a1 = 4;
    var_a3 = var_s0;
    temp_v0_2 = (unsigned char *)(gEssTrade + var_s1 + 0x280);
    var_a2 = temp_v0_2;
loop_17:
    var_a1 -= 1;
    temp_v1 = *(s8 *)((u8 *)var_a3 + 1);
    *(s8 *)((u8 *)var_a2 + 0) = (s8) *(s8 *)((u8 *)var_a3 + 0);
    var_a3 += 2;
    *(s8 *)((u8 *)var_a2 + 1) = temp_v1;
    var_a2 += 2;
    if (var_a1 > 0) {
        goto loop_17;
    }
    var_a3_2 = (unsigned char *)(var_s0 + 0x10);
    var_a2_2 = temp_v0_2 + 0x10;
    var_a1_2 = 8;
    *(s32 *)((u8 *)temp_v0_2 + 8) = (s32) *(s32 *)((u8 *)var_s0 + 8);
    *(s32 *)((u8 *)temp_v0_2 + 0xC) = (s32) *(s32 *)((u8 *)var_s0 + 0xC);
loop_19:
    var_a1_2 -= 1;
    temp_v1_2 = *(s8 *)((u8 *)var_a3_2 + 1);
    *(s8 *)((u8 *)var_a2_2 + 0) = (s8) *(s8 *)((u8 *)var_a3_2 + 0);
    var_a3_2 += 2;
    *(s8 *)((u8 *)var_a2_2 + 1) = temp_v1_2;
    var_a2_2 += 2;
    if (var_a1_2 > 0) {
        goto loop_19;
    }
    var_a3_3 = (unsigned char *)(var_s0 + 0x20);
    var_a2_3 = temp_v0_2 + 0x20;
    var_a1_3 = 8;
loop_21:
    var_a1_3 -= 1;
    temp_v1_3 = *(s8 *)((u8 *)var_a3_3 + 1);
    *(s8 *)((u8 *)var_a2_3 + 0) = (s8) *(s8 *)((u8 *)var_a3_3 + 0);
    var_a3_3 += 2;
    *(s8 *)((u8 *)var_a2_3 + 1) = temp_v1_3;
    var_a2_3 += 2;
    if (var_a1_3 > 0) {
        goto loop_21;
    }
    var_a3_4 = (unsigned char *)(var_s0 + 0x68);
    var_a2_4 = temp_v0_2 + 0x68;
    var_a1_4 = 0xA;
    *(s128 *)((u8 *)temp_v0_2 + 0x30) = (s128) *(s128 *)((u8 *)var_s0 + 0x30);
    *(s128 *)((u8 *)temp_v0_2 + 0x40) = (s128) *(s128 *)((u8 *)var_s0 + 0x40);
    *(s32 *)((u8 *)temp_v0_2 + 0x50) = (s32) *(s32 *)((u8 *)var_s0 + 0x50);
    *(f32 *)((u8 *)temp_v0_2 + 0x54) = (f32) *(f32 *)((u8 *)var_s0 + 0x54);
    *(f32 *)((u8 *)temp_v0_2 + 0x58) = (f32) *(f32 *)((u8 *)var_s0 + 0x58);
    *(f32 *)((u8 *)temp_v0_2 + 0x5C) = (f32) *(f32 *)((u8 *)var_s0 + 0x5C);
    *(s16 *)((u8 *)temp_v0_2 + 0x60) = (s16) *(s16 *)((u8 *)var_s0 + 0x60);
    *(s16 *)((u8 *)temp_v0_2 + 0x62) = (s16) *(s16 *)((u8 *)var_s0 + 0x62);
    *(s16 *)((u8 *)temp_v0_2 + 0x64) = (s16) *(s16 *)((u8 *)var_s0 + 0x64);
    *(s16 *)((u8 *)temp_v0_2 + 0x66) = (s16) *(s16 *)((u8 *)var_s0 + 0x66);
loop_23:
    var_a1_4 -= 1;
    temp_v1_4 = *(s8 *)((u8 *)var_a3_4 + 1);
    *(s8 *)((u8 *)var_a2_4 + 0) = (s8) *(s8 *)((u8 *)var_a3_4 + 0);
    var_a3_4 += 2;
    *(s8 *)((u8 *)var_a2_4 + 1) = temp_v1_4;
    var_a2_4 += 2;
    if (var_a1_4 > 0) {
        goto loop_23;
    }
    var_a3_5 = (unsigned char *)(var_s0 + 0xA6);
    var_a2_5 = temp_v0_2 + 0xA6;
    var_a1_5 = 0x18C;
    *(s16 *)((u8 *)temp_v0_2 + 0x7C) = (s16) *(s16 *)((u8 *)var_s0 + 0x7C);
    *(s16 *)((u8 *)temp_v0_2 + 0x7E) = (s16) *(s16 *)((u8 *)var_s0 + 0x7E);
    *(s16 *)((u8 *)temp_v0_2 + 0x80) = (s16) *(s16 *)((u8 *)var_s0 + 0x80);
    *(s16 *)((u8 *)temp_v0_2 + 0x82) = (s16) *(s16 *)((u8 *)var_s0 + 0x82);
    *(s8 *)((u8 *)temp_v0_2 + 0x84) = (s8) *(s8 *)((u8 *)var_s0 + 0x84);
    *(s8 *)((u8 *)temp_v0_2 + 0x85) = (s8) *(s8 *)((u8 *)var_s0 + 0x85);
    *(u8 *)((u8 *)temp_v0_2 + 0x86) = (u8) *(u8 *)((u8 *)var_s0 + 0x86);
    *(u8 *)((u8 *)temp_v0_2 + 0x87) = (u8) *(u8 *)((u8 *)var_s0 + 0x87);
    *(u8 *)((u8 *)temp_v0_2 + 0x88) = (u8) *(u8 *)((u8 *)var_s0 + 0x88);
    *(s8 *)((u8 *)temp_v0_2 + 0x89) = (s8) *(s8 *)((u8 *)var_s0 + 0x89);
    *(s8 *)((u8 *)temp_v0_2 + 0x8A) = (s8) *(s8 *)((u8 *)var_s0 + 0x8A);
    *(s8 *)((u8 *)temp_v0_2 + 0x8B) = (s8) *(s8 *)((u8 *)var_s0 + 0x8B);
    *(s8 *)((u8 *)temp_v0_2 + 0x8C) = (s8) *(s8 *)((u8 *)var_s0 + 0x8C);
    *(u8 *)((u8 *)temp_v0_2 + 0x8D) = (u8) *(u8 *)((u8 *)var_s0 + 0x8D);
    *(u8 *)((u8 *)temp_v0_2 + 0x8E) = (u8) *(u8 *)((u8 *)var_s0 + 0x8E);
    *(u8 *)((u8 *)temp_v0_2 + 0x8F) = (u8) *(u8 *)((u8 *)var_s0 + 0x8F);
    *(s64 *)((u8 *)temp_v0_2 + 0x90) = (s64) *(s64 *)((u8 *)var_s0 + 0x90);
    *(s32 *)((u8 *)temp_v0_2 + 0x98) = (s32) *(s32 *)((u8 *)var_s0 + 0x98);
    *(s32 *)((u8 *)temp_v0_2 + 0x9C) = (s32) *(s32 *)((u8 *)var_s0 + 0x9C);
    *(s8 *)((u8 *)temp_v0_2 + 0xA0) = (s8) *(s8 *)((u8 *)var_s0 + 0xA0);
    *(u8 *)((u8 *)temp_v0_2 + 0xA1) = (u8) *(u8 *)((u8 *)var_s0 + 0xA1);
    *(u8 *)((u8 *)temp_v0_2 + 0xA2) = (u8) *(u8 *)((u8 *)var_s0 + 0xA2);
    *(u8 *)((u8 *)temp_v0_2 + 0xA3) = (u8) *(u8 *)((u8 *)var_s0 + 0xA3);
    *(u16 *)((u8 *)temp_v0_2 + 0xA4) = (u16) *(u16 *)((u8 *)var_s0 + 0xA4);
loop_25:
    var_a1_5 -= 1;
    temp_v1_5 = *(s16 *)((u8 *)var_a3_5 + 2);
    *(s16 *)((u8 *)var_a2_5 + 0) = (s16) *(s16 *)((u8 *)var_a3_5 + 0);
    var_a3_5 += 4;
    *(s16 *)((u8 *)var_a2_5 + 2) = temp_v1_5;
    var_a2_5 += 4;
    if (var_a1_5 > 0) {
        goto loop_25;
    }
    var_a3_6 = (unsigned char *)(var_s0 + 0x6D8);
    var_a2_6 = temp_v0_2 + 0x6D8;
    var_a1_6 = 0x39;
loop_27:
    var_a1_6 -= 1;
    temp_v1_6 = *(s32 *)((u8 *)var_a3_6 + 4);
    *(s32 *)((u8 *)var_a2_6 + 0) = (s32) *(s32 *)((u8 *)var_a3_6 + 0);
    var_a3_6 += 8;
    *(s32 *)((u8 *)var_a2_6 + 4) = temp_v1_6;
    var_a2_6 += 8;
    if (var_a1_6 > 0) {
        goto loop_27;
    }
    var_a3_7 = (unsigned char *)(var_s0 + 0x8A0);
    var_a2_7 = temp_v0_2 + 0x8A0;
    var_a1_7 = 0x10B;
loop_29:
    var_a1_7 -= 1;
    temp_v1_7 = *(s16 *)((u8 *)var_a3_7 + 2);
    *(s16 *)((u8 *)var_a2_7 + 0) = (s16) *(s16 *)((u8 *)var_a3_7 + 0);
    var_a3_7 += 4;
    *(s16 *)((u8 *)var_a2_7 + 2) = temp_v1_7;
    var_a2_7 += 4;
    if (var_a1_7 > 0) {
        goto loop_29;
    }
    var_a3_8 = (unsigned char *)(var_s0 + 0xCCC);
    var_a2_8 = temp_v0_2 + 0xCCC;
    var_a1_8 = 6;
loop_31:
    var_a1_8 -= 1;
    temp_v1_8 = *(s8 *)((u8 *)var_a3_8 + 1);
    *(s8 *)((u8 *)var_a2_8 + 0) = (s8) *(s8 *)((u8 *)var_a3_8 + 0);
    var_a3_8 += 2;
    *(s8 *)((u8 *)var_a2_8 + 1) = temp_v1_8;
    var_a2_8 += 2;
    if (var_a1_8 > 0) {
        goto loop_31;
    }
    var_a3_9 = (unsigned char *)(var_s0 + 0xCD8);
    var_a2_9 = temp_v0_2 + 0xCD8;
    var_a1_9 = 0x10;
loop_33:
    var_a1_9 -= 1;
    temp_v1_9 = *(s32 *)((u8 *)var_a3_9 + 4);
    *(s32 *)((u8 *)var_a2_9 + 0) = (s32) *(s32 *)((u8 *)var_a3_9 + 0);
    var_a3_9 += 8;
    *(s32 *)((u8 *)var_a2_9 + 4) = temp_v1_9;
    var_a2_9 += 8;
    if (var_a1_9 > 0) {
        goto loop_33;
    }
    var_a2_10 = (__int128 *)(var_s0 + 0xD60);
    var_a1_10 = (__int128 *)(temp_v0_2 + 0xD60);
    var_a0 = 0xC6B;
loop_35:
    var_a0 -= 1;
    *var_a1_10 = *var_a2_10;
    var_a2_10 += 0x10;
    var_a1_10 += 0x10;
    if (var_a0 > 0) {
        goto loop_35;
    }
    var_a0_2 = 0x130;
    var_a2_11 = (unsigned char *)(var_s0 + 0xD41D);
    var_a1_11 = temp_v0_2 + 0xD41D;
    *(s64 *)((u8 *)temp_v0_2 + 0xD410) = (s64) *(s64 *)((u8 *)var_s0 + 0xD410);
    *(s32 *)((u8 *)temp_v0_2 + 0xD418) = (s32) *(s32 *)((u8 *)var_s0 + 0xD418);
    *(s8 *)((u8 *)temp_v0_2 + 0xD41C) = (s8) *(s8 *)((u8 *)var_s0 + 0xD41C);
loop_37:
    var_a0_2 -= 1;
    temp_v0_3 = *(s8 *)((u8 *)var_a2_11 + 1);
    *(s8 *)((u8 *)var_a1_11 + 0) = (s8) *(s8 *)((u8 *)var_a2_11 + 0);
    var_a2_11 += 2;
    *(s8 *)((u8 *)var_a1_11 + 1) = temp_v0_3;
    var_a1_11 += 2;
    if (var_a0_2 > 0) {
        goto loop_37;
    }
    func_00276DC0(var_s2, 1, var_a2_11, var_a3_9);
    func_001EF730((char *)(gEssTrade + var_s1 + 0x280));
    var_s0 = var_s0 + 0x7FFF + 0x5681;
    var_s2 += 1;
    var_s1 = var_s1 + 0x7FFF + 0x5681;
    if (var_s2 < 2) {
        goto loop_16;
    }
    return;
block_40:
    return;
block_41:
    *(s32 *)((u8 *)gEssTrade + 0x158) = 4;
    *(s32 *)((u8 *)gEssTrade + 0x160) = 0;
    func_0028DFC0(6, 0, 0, 0, 0x1F);
    return;
}
