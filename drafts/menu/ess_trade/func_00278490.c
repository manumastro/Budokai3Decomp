/* Draft (not built): func_00278490 at 0x00278490, size 0x4E4, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'float *' to 'float' @ 291: amAdx_SetVolume(1, (f32)(D_004E0618));
 * Original: asm/nonmatchings/menu/ess_trade/func_00278490.s */

// src/menu/ess_trade.c func_00278490 cerr diff=-1/0
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
s32 func_0026D530(s32, s32);
s32 func_00276DC0(s32, s32, void *, void *);
extern s32 D_00453280;
extern s32 D_0058F680;
extern void Save_Request();
extern void func_001EF730(char *);
extern void func_002782D0(void);
void func_00278490(u8 *arg0) {
    s32 *var_a3;
    s32 *var_s0;
    s128 *var_a1_10;
    s128 *var_a2_10;
    s16 temp_v1_5;
    s16 temp_v1_7;
    s32 temp_s0_2;
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
    s8 temp_v0_2;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_8;
    void (*var_v0)();
    void (*var_v1)();
    u8 *temp_s0;
    u8 *temp_v0;
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

    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        var_s2 = 0;
        var_s1 = 0;
        var_s0 = &D_0058F680;
        do {
            var_a1 = 4;
            var_a3 = var_s0;
            temp_v0 = (u8 *)(gEssTrade + var_s1 + 0x280);
            var_a2 = temp_v0;
loop_3:
            var_a1 -= 1;
            temp_v1 = *(s8 *)((u8 *)var_a3 + 1);
            *(s8 *)((u8 *)var_a2 + 0) = (s8) *(s8 *)((u8 *)var_a3 + 0);
            var_a3 += 2;
            *(s8 *)((u8 *)var_a2 + 1) = temp_v1;
            var_a2 += 2;
            if (var_a1 > 0) {
                goto loop_3;
            }
            var_a3_2 = (u8 *)(var_s0 + 0x10);
            var_a2_2 = temp_v0 + 0x10;
            var_a1_2 = 8;
            *(s32 *)((u8 *)temp_v0 + 8) = (s32) *(s32 *)((u8 *)var_s0 + 8);
            *(s32 *)((u8 *)temp_v0 + 0xC) = (s32) *(s32 *)((u8 *)var_s0 + 0xC);
loop_5:
            var_a1_2 -= 1;
            temp_v1_2 = *(s8 *)((u8 *)var_a3_2 + 1);
            *(s8 *)((u8 *)var_a2_2 + 0) = (s8) *(s8 *)((u8 *)var_a3_2 + 0);
            var_a3_2 += 2;
            *(s8 *)((u8 *)var_a2_2 + 1) = temp_v1_2;
            var_a2_2 += 2;
            if (var_a1_2 > 0) {
                goto loop_5;
            }
            var_a3_3 = (u8 *)(var_s0 + 0x20);
            var_a2_3 = temp_v0 + 0x20;
            var_a1_3 = 8;
loop_7:
            var_a1_3 -= 1;
            temp_v1_3 = *(s8 *)((u8 *)var_a3_3 + 1);
            *(s8 *)((u8 *)var_a2_3 + 0) = (s8) *(s8 *)((u8 *)var_a3_3 + 0);
            var_a3_3 += 2;
            *(s8 *)((u8 *)var_a2_3 + 1) = temp_v1_3;
            var_a2_3 += 2;
            if (var_a1_3 > 0) {
                goto loop_7;
            }
            var_a3_4 = (u8 *)(var_s0 + 0x68);
            var_a2_4 = temp_v0 + 0x68;
            var_a1_4 = 0xA;
            *(s128 *)((u8 *)temp_v0 + 0x30) = (s128) *(s128 *)((u8 *)var_s0 + 0x30);
            *(s128 *)((u8 *)temp_v0 + 0x40) = (s128) *(s128 *)((u8 *)var_s0 + 0x40);
            *(s32 *)((u8 *)temp_v0 + 0x50) = (s32) *(s32 *)((u8 *)var_s0 + 0x50);
            *(f32 *)((u8 *)temp_v0 + 0x54) = (f32) *(f32 *)((u8 *)var_s0 + 0x54);
            *(f32 *)((u8 *)temp_v0 + 0x58) = (f32) *(f32 *)((u8 *)var_s0 + 0x58);
            *(f32 *)((u8 *)temp_v0 + 0x5C) = (f32) *(f32 *)((u8 *)var_s0 + 0x5C);
            *(s16 *)((u8 *)temp_v0 + 0x60) = (s16) *(s16 *)((u8 *)var_s0 + 0x60);
            *(s16 *)((u8 *)temp_v0 + 0x62) = (s16) *(s16 *)((u8 *)var_s0 + 0x62);
            *(s16 *)((u8 *)temp_v0 + 0x64) = (s16) *(s16 *)((u8 *)var_s0 + 0x64);
            *(s16 *)((u8 *)temp_v0 + 0x66) = (s16) *(s16 *)((u8 *)var_s0 + 0x66);
loop_9:
            var_a1_4 -= 1;
            temp_v1_4 = *(s8 *)((u8 *)var_a3_4 + 1);
            *(s8 *)((u8 *)var_a2_4 + 0) = (s8) *(s8 *)((u8 *)var_a3_4 + 0);
            var_a3_4 += 2;
            *(s8 *)((u8 *)var_a2_4 + 1) = temp_v1_4;
            var_a2_4 += 2;
            if (var_a1_4 > 0) {
                goto loop_9;
            }
            var_a3_5 = (u8 *)(var_s0 + 0xA6);
            var_a2_5 = temp_v0 + 0xA6;
            var_a1_5 = 0x18C;
            *(s16 *)((u8 *)temp_v0 + 0x7C) = (s16) *(s16 *)((u8 *)var_s0 + 0x7C);
            *(s16 *)((u8 *)temp_v0 + 0x7E) = (s16) *(s16 *)((u8 *)var_s0 + 0x7E);
            *(s16 *)((u8 *)temp_v0 + 0x80) = (s16) *(s16 *)((u8 *)var_s0 + 0x80);
            *(s16 *)((u8 *)temp_v0 + 0x82) = (s16) *(s16 *)((u8 *)var_s0 + 0x82);
            *(s8 *)((u8 *)temp_v0 + 0x84) = (s8) *(s8 *)((u8 *)var_s0 + 0x84);
            *(s8 *)((u8 *)temp_v0 + 0x85) = (s8) *(s8 *)((u8 *)var_s0 + 0x85);
            *(u8 *)((u8 *)temp_v0 + 0x86) = (u8) *(u8 *)((u8 *)var_s0 + 0x86);
            *(u8 *)((u8 *)temp_v0 + 0x87) = (u8) *(u8 *)((u8 *)var_s0 + 0x87);
            *(u8 *)((u8 *)temp_v0 + 0x88) = (u8) *(u8 *)((u8 *)var_s0 + 0x88);
            *(s8 *)((u8 *)temp_v0 + 0x89) = (s8) *(s8 *)((u8 *)var_s0 + 0x89);
            *(s8 *)((u8 *)temp_v0 + 0x8A) = (s8) *(s8 *)((u8 *)var_s0 + 0x8A);
            *(s8 *)((u8 *)temp_v0 + 0x8B) = (s8) *(s8 *)((u8 *)var_s0 + 0x8B);
            *(s8 *)((u8 *)temp_v0 + 0x8C) = (s8) *(s8 *)((u8 *)var_s0 + 0x8C);
            *(u8 *)((u8 *)temp_v0 + 0x8D) = (u8) *(u8 *)((u8 *)var_s0 + 0x8D);
            *(u8 *)((u8 *)temp_v0 + 0x8E) = (u8) *(u8 *)((u8 *)var_s0 + 0x8E);
            *(u8 *)((u8 *)temp_v0 + 0x8F) = (u8) *(u8 *)((u8 *)var_s0 + 0x8F);
            *(s64 *)((u8 *)temp_v0 + 0x90) = (s64) *(s64 *)((u8 *)var_s0 + 0x90);
            *(s32 *)((u8 *)temp_v0 + 0x98) = (s32) *(s32 *)((u8 *)var_s0 + 0x98);
            *(s32 *)((u8 *)temp_v0 + 0x9C) = (s32) *(s32 *)((u8 *)var_s0 + 0x9C);
            *(s8 *)((u8 *)temp_v0 + 0xA0) = (s8) *(s8 *)((u8 *)var_s0 + 0xA0);
            *(u8 *)((u8 *)temp_v0 + 0xA1) = (u8) *(u8 *)((u8 *)var_s0 + 0xA1);
            *(u8 *)((u8 *)temp_v0 + 0xA2) = (u8) *(u8 *)((u8 *)var_s0 + 0xA2);
            *(u8 *)((u8 *)temp_v0 + 0xA3) = (u8) *(u8 *)((u8 *)var_s0 + 0xA3);
            *(u16 *)((u8 *)temp_v0 + 0xA4) = (u16) *(u16 *)((u8 *)var_s0 + 0xA4);
loop_11:
            var_a1_5 -= 1;
            temp_v1_5 = *(s16 *)((u8 *)var_a3_5 + 2);
            *(s16 *)((u8 *)var_a2_5 + 0) = (s16) *(s16 *)((u8 *)var_a3_5 + 0);
            var_a3_5 += 4;
            *(s16 *)((u8 *)var_a2_5 + 2) = temp_v1_5;
            var_a2_5 += 4;
            if (var_a1_5 > 0) {
                goto loop_11;
            }
            var_a3_6 = (u8 *)(var_s0 + 0x6D8);
            var_a2_6 = temp_v0 + 0x6D8;
            var_a1_6 = 0x39;
loop_13:
            var_a1_6 -= 1;
            temp_v1_6 = *(s32 *)((u8 *)var_a3_6 + 4);
            *(s32 *)((u8 *)var_a2_6 + 0) = (s32) *(s32 *)((u8 *)var_a3_6 + 0);
            var_a3_6 += 8;
            *(s32 *)((u8 *)var_a2_6 + 4) = temp_v1_6;
            var_a2_6 += 8;
            if (var_a1_6 > 0) {
                goto loop_13;
            }
            var_a3_7 = (u8 *)(var_s0 + 0x8A0);
            var_a2_7 = temp_v0 + 0x8A0;
            var_a1_7 = 0x10B;
loop_15:
            var_a1_7 -= 1;
            temp_v1_7 = *(s16 *)((u8 *)var_a3_7 + 2);
            *(s16 *)((u8 *)var_a2_7 + 0) = (s16) *(s16 *)((u8 *)var_a3_7 + 0);
            var_a3_7 += 4;
            *(s16 *)((u8 *)var_a2_7 + 2) = temp_v1_7;
            var_a2_7 += 4;
            if (var_a1_7 > 0) {
                goto loop_15;
            }
            var_a3_8 = (u8 *)(var_s0 + 0xCCC);
            var_a2_8 = temp_v0 + 0xCCC;
            var_a1_8 = 6;
loop_17:
            var_a1_8 -= 1;
            temp_v1_8 = *(s8 *)((u8 *)var_a3_8 + 1);
            *(s8 *)((u8 *)var_a2_8 + 0) = (s8) *(s8 *)((u8 *)var_a3_8 + 0);
            var_a3_8 += 2;
            *(s8 *)((u8 *)var_a2_8 + 1) = temp_v1_8;
            var_a2_8 += 2;
            if (var_a1_8 > 0) {
                goto loop_17;
            }
            var_a3_9 = (u8 *)(var_s0 + 0xCD8);
            var_a2_9 = temp_v0 + 0xCD8;
            var_a1_9 = 0x10;
loop_19:
            var_a1_9 -= 1;
            temp_v1_9 = *(s32 *)((u8 *)var_a3_9 + 4);
            *(s32 *)((u8 *)var_a2_9 + 0) = (s32) *(s32 *)((u8 *)var_a3_9 + 0);
            var_a3_9 += 8;
            *(s32 *)((u8 *)var_a2_9 + 4) = temp_v1_9;
            var_a2_9 += 8;
            if (var_a1_9 > 0) {
                goto loop_19;
            }
            var_a2_10 = var_s0 + 0xD60;
            var_a1_10 = temp_v0 + 0xD60;
            var_a0 = 0xC6B;
loop_21:
            var_a0 -= 1;
            *var_a1_10 = *var_a2_10;
            var_a2_10 += 0x10;
            var_a1_10 += 0x10;
            if (var_a0 > 0) {
                goto loop_21;
            }
            var_a0_2 = 0x130;
            var_a2_11 = (u8 *)(var_s0 + 0xD41D);
            var_a1_11 = temp_v0 + 0xD41D;
            *(s64 *)((u8 *)temp_v0 + 0xD410) = (s64) *(s64 *)((u8 *)var_s0 + 0xD410);
            *(s32 *)((u8 *)temp_v0 + 0xD418) = (s32) *(s32 *)((u8 *)var_s0 + 0xD418);
            *(s8 *)((u8 *)temp_v0 + 0xD41C) = (s8) *(s8 *)((u8 *)var_s0 + 0xD41C);
loop_23:
            var_a0_2 -= 1;
            temp_v0_2 = *(s8 *)((u8 *)var_a2_11 + 1);
            *(s8 *)((u8 *)var_a1_11 + 0) = (s8) *(s8 *)((u8 *)var_a2_11 + 0);
            var_a2_11 += 2;
            *(s8 *)((u8 *)var_a1_11 + 1) = temp_v0_2;
            var_a1_11 += 2;
            if (var_a0_2 > 0) {
                goto loop_23;
            }
            func_00276DC0(var_s2, 0, var_a2_11, var_a3_9);
            func_001EF730((char *)(gEssTrade + var_s1 + 0x280));
            var_s0 = var_s0 + 0x7FFF + 0x5681;
            var_s2 += 1;
            var_s1 = var_s1 + 0x7FFF + 0x5681;
        } while (var_s2 < 2);
        Save_Request(5, 0, gEssTrade + 0x280);
        var_v0 = func_002782D0;
        if (func_002782D0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
        amAdx_Pause(1, 1);
        return;
    }
    *(s32 *)((u8 *)gEssTrade + 0x54) = 0;
    temp_s0 = (u8 *)(gEssTrade + 0xC8);
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) ((EssMain_GetFlag() & 0xFF) + 4);
    func_0026D530(2, 4);
    temp_s0_2 = *(&D_00453280 + ((EssMain_GetFlag() & 0xFF) * 4));
    amAdx_SetVolume(1, (f32)(D_004E0618));
    amAdx_Pause(1, 0);
    amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
    var_v1 = func_002794D0;
    if (func_002794D0 == NULL) {
        var_v1 = NULL;
    }
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
}
