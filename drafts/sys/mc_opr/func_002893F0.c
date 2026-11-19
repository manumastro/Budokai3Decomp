/* Draft (not built): func_002893F0 at 0x002893F0, size 0x500, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 248 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x598, original 0x500
 * Original: asm/nonmatchings/sys/mc_opr/func_002893F0.s */

// src/sys/mc_opr.c func_002893F0 size diff=248/358
extern void amHeap_Free(void *);
extern s32 D_00470838;
extern void *D_004708A0;
s32 func_001EF510(void *, s32);
s32 memcmp(s8 *, void *, s32);
extern s32 D_00470558;
extern s32 D_0047084C;
extern s32 D_0058F680;
extern s32 gMcState;
extern char D_004B4B40[];
extern char D_004B4BC0[];
extern void func_001EFDB0(char *, char *);
extern void *D_0047054C;
extern void func_00289DF0(void);
void func_002893F0(u8 *arg0) {
    s32 *var_v1;
    s128 *var_a3_10;
    s128 *var_t0_10;
    s16 temp_a1_5;
    s16 temp_a1_7;
    s32 *temp_a0;
    s32 *temp_a0_3;
    s32 temp_a1_6;
    s32 temp_a1_9;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_a3_7;
    s32 var_a3_8;
    s32 var_a3_9;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_a1_3;
    s8 temp_a1_4;
    s8 temp_a1_8;
    s8 temp_v1;
    u8 *temp_a0_2;
    u8 *var_a2_2;
    u8 *var_a3_11;
    u8 *var_t0;
    u8 *var_t0_2;
    u8 *var_t0_3;
    u8 *var_t0_4;
    u8 *var_t0_5;
    u8 *var_t0_6;
    u8 *var_t0_7;
    u8 *var_t0_8;
    u8 *var_t0_9;
    u8 *var_t1;
    u8 *var_t1_2;
    u8 *var_t1_3;
    u8 *var_t1_4;
    u8 *var_t1_5;
    u8 *var_t1_6;
    u8 *var_t1_7;
    u8 *var_t1_8;
    u8 *var_t1_9;

    if (gMcState == 3) {
        goto block_35;
    }
    if (gMcState == 2) {
        goto block_3;
    }
    goto block_37;
block_3:
    temp_a0 = &(&D_00470838)[D_0047084C];
    if (!(*temp_a0 & 0x8000)) {
        goto block_5;
    }
    amHeap_Free(D_0047054C);
    D_0047054C = NULL;
    goto block_38;
block_5:
    if (D_00470558 == 0xD680) {
        goto block_7;
    }
    *temp_a0 = 5;
    goto block_38;
block_7:
    D_004708A0 = D_0047054C;
    D_0047054C = NULL;
    if (func_001EF510(D_004708A0, 0xD680) == 0) {
        goto block_10;
    }
    amHeap_Free(D_004708A0);
    D_004708A0 = NULL;
    (&D_00470838)[D_0047084C] = 5;
    goto block_38;
block_10:
    if (memcmp((s8 *)(D_004B4BC0), (void *)(((u8 *)D_004708A0) + 0x30), 0x24) != 0) {
        goto block_12;
    }
    func_001EFDB0((char *)((s8 *) D_004708A0), (char *)(D_004B4B40));
block_12:
    var_a3 = 4;
    var_t1 = D_004708A0;
    temp_a0_2 = (unsigned char *)(&D_0058F680 + (D_0047084C * 0xD680));
    var_t0 = temp_a0_2;
loop_13:
    var_a3 -= 1;
    temp_a1 = *(s8 *)((u8 *)var_t1 + 1);
    *(s8 *)((u8 *)var_t0 + 0) = (s8) *(s8 *)((u8 *)var_t1 + 0);
    var_t1 += 2;
    *(s8 *)((u8 *)var_t0 + 1) = temp_a1;
    var_t0 += 2;
    if (var_a3 > 0) {
        goto loop_13;
    }
    var_t1_2 = ((u8 *)D_004708A0) + 0x10;
    var_t0_2 = temp_a0_2 + 0x10;
    var_a3_2 = 8;
    *(s32 *)((u8 *)temp_a0_2 + 8) = (s32) *(s32 *)((u8 *)D_004708A0 + 8);
    *(s32 *)((u8 *)temp_a0_2 + 0xC) = (s32) *(s32 *)((u8 *)D_004708A0 + 0xC);
loop_15:
    var_a3_2 -= 1;
    temp_a1_2 = *(s8 *)((u8 *)var_t1_2 + 1);
    *(s8 *)((u8 *)var_t0_2 + 0) = (s8) *(s8 *)((u8 *)var_t1_2 + 0);
    var_t1_2 += 2;
    *(s8 *)((u8 *)var_t0_2 + 1) = temp_a1_2;
    var_t0_2 += 2;
    if (var_a3_2 > 0) {
        goto loop_15;
    }
    var_t1_3 = ((u8 *)D_004708A0) + 0x20;
    var_t0_3 = temp_a0_2 + 0x20;
    var_a3_3 = 8;
loop_17:
    var_a3_3 -= 1;
    temp_a1_3 = *(s8 *)((u8 *)var_t1_3 + 1);
    *(s8 *)((u8 *)var_t0_3 + 0) = (s8) *(s8 *)((u8 *)var_t1_3 + 0);
    var_t1_3 += 2;
    *(s8 *)((u8 *)var_t0_3 + 1) = temp_a1_3;
    var_t0_3 += 2;
    if (var_a3_3 > 0) {
        goto loop_17;
    }
    var_t1_4 = ((u8 *)D_004708A0) + 0x68;
    var_t0_4 = temp_a0_2 + 0x68;
    var_a3_4 = 0xA;
    *(s128 *)((u8 *)temp_a0_2 + 0x30) = (s128) *(s128 *)((u8 *)D_004708A0 + 0x30);
    *(s128 *)((u8 *)temp_a0_2 + 0x40) = (s128) *(s128 *)((u8 *)D_004708A0 + 0x40);
    *(s32 *)((u8 *)temp_a0_2 + 0x50) = (s32) *(s32 *)((u8 *)D_004708A0 + 0x50);
    *(f32 *)((u8 *)temp_a0_2 + 0x54) = (f32) *(f32 *)((u8 *)D_004708A0 + 0x54);
    *(f32 *)((u8 *)temp_a0_2 + 0x58) = (f32) *(f32 *)((u8 *)D_004708A0 + 0x58);
    *(f32 *)((u8 *)temp_a0_2 + 0x5C) = (f32) *(f32 *)((u8 *)D_004708A0 + 0x5C);
    *(s16 *)((u8 *)temp_a0_2 + 0x60) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x60);
    *(s16 *)((u8 *)temp_a0_2 + 0x62) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x62);
    *(s16 *)((u8 *)temp_a0_2 + 0x64) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x64);
    *(s16 *)((u8 *)temp_a0_2 + 0x66) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x66);
loop_19:
    var_a3_4 -= 1;
    temp_a1_4 = *(s8 *)((u8 *)var_t1_4 + 1);
    *(s8 *)((u8 *)var_t0_4 + 0) = (s8) *(s8 *)((u8 *)var_t1_4 + 0);
    var_t1_4 += 2;
    *(s8 *)((u8 *)var_t0_4 + 1) = temp_a1_4;
    var_t0_4 += 2;
    if (var_a3_4 > 0) {
        goto loop_19;
    }
    var_t1_5 = ((u8 *)D_004708A0) + 0xA6;
    var_t0_5 = temp_a0_2 + 0xA6;
    var_a3_5 = 0x18C;
    *(s16 *)((u8 *)temp_a0_2 + 0x7C) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x7C);
    *(s16 *)((u8 *)temp_a0_2 + 0x7E) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x7E);
    *(s16 *)((u8 *)temp_a0_2 + 0x80) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x80);
    *(s16 *)((u8 *)temp_a0_2 + 0x82) = (s16) *(s16 *)((u8 *)D_004708A0 + 0x82);
    *(s8 *)((u8 *)temp_a0_2 + 0x84) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x84);
    *(s8 *)((u8 *)temp_a0_2 + 0x85) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x85);
    *(u8 *)((u8 *)temp_a0_2 + 0x86) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x86);
    *(u8 *)((u8 *)temp_a0_2 + 0x87) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x87);
    *(u8 *)((u8 *)temp_a0_2 + 0x88) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x88);
    *(s8 *)((u8 *)temp_a0_2 + 0x89) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x89);
    *(s8 *)((u8 *)temp_a0_2 + 0x8A) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x8A);
    *(s8 *)((u8 *)temp_a0_2 + 0x8B) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x8B);
    *(s8 *)((u8 *)temp_a0_2 + 0x8C) = (s8) *(s8 *)((u8 *)D_004708A0 + 0x8C);
    *(u8 *)((u8 *)temp_a0_2 + 0x8D) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x8D);
    *(u8 *)((u8 *)temp_a0_2 + 0x8E) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x8E);
    *(u8 *)((u8 *)temp_a0_2 + 0x8F) = (u8) *(u8 *)((u8 *)D_004708A0 + 0x8F);
    *(s64 *)((u8 *)temp_a0_2 + 0x90) = (s64) *(s64 *)((u8 *)D_004708A0 + 0x90);
    *(s32 *)((u8 *)temp_a0_2 + 0x98) = (s32) *(s32 *)((u8 *)D_004708A0 + 0x98);
    *(s32 *)((u8 *)temp_a0_2 + 0x9C) = (s32) *(s32 *)((u8 *)D_004708A0 + 0x9C);
    *(s8 *)((u8 *)temp_a0_2 + 0xA0) = (s8) *(s8 *)((u8 *)D_004708A0 + 0xA0);
    *(u8 *)((u8 *)temp_a0_2 + 0xA1) = (u8) *(u8 *)((u8 *)D_004708A0 + 0xA1);
    *(u8 *)((u8 *)temp_a0_2 + 0xA2) = (u8) *(u8 *)((u8 *)D_004708A0 + 0xA2);
    *(u8 *)((u8 *)temp_a0_2 + 0xA3) = (u8) *(u8 *)((u8 *)D_004708A0 + 0xA3);
    *(u16 *)((u8 *)temp_a0_2 + 0xA4) = (u16) *(u16 *)((u8 *)D_004708A0 + 0xA4);
loop_21:
    var_a3_5 -= 1;
    temp_a1_5 = *(s16 *)((u8 *)var_t1_5 + 2);
    *(s16 *)((u8 *)var_t0_5 + 0) = (s16) *(s16 *)((u8 *)var_t1_5 + 0);
    var_t1_5 += 4;
    *(s16 *)((u8 *)var_t0_5 + 2) = temp_a1_5;
    var_t0_5 += 4;
    if (var_a3_5 > 0) {
        goto loop_21;
    }
    var_t1_6 = ((u8 *)D_004708A0) + 0x6D8;
    var_t0_6 = temp_a0_2 + 0x6D8;
    var_a3_6 = 0x39;
loop_23:
    var_a3_6 -= 1;
    temp_a1_6 = *(s32 *)((u8 *)var_t1_6 + 4);
    *(s32 *)((u8 *)var_t0_6 + 0) = (s32) *(s32 *)((u8 *)var_t1_6 + 0);
    var_t1_6 += 8;
    *(s32 *)((u8 *)var_t0_6 + 4) = temp_a1_6;
    var_t0_6 += 8;
    if (var_a3_6 > 0) {
        goto loop_23;
    }
    var_t1_7 = ((u8 *)D_004708A0) + 0x8A0;
    var_t0_7 = temp_a0_2 + 0x8A0;
    var_a3_7 = 0x10B;
loop_25:
    var_a3_7 -= 1;
    temp_a1_7 = *(s16 *)((u8 *)var_t1_7 + 2);
    *(s16 *)((u8 *)var_t0_7 + 0) = (s16) *(s16 *)((u8 *)var_t1_7 + 0);
    var_t1_7 += 4;
    *(s16 *)((u8 *)var_t0_7 + 2) = temp_a1_7;
    var_t0_7 += 4;
    if (var_a3_7 > 0) {
        goto loop_25;
    }
    var_t1_8 = ((u8 *)D_004708A0) + 0xCCC;
    var_t0_8 = temp_a0_2 + 0xCCC;
    var_a3_8 = 6;
loop_27:
    var_a3_8 -= 1;
    temp_a1_8 = *(s8 *)((u8 *)var_t1_8 + 1);
    *(s8 *)((u8 *)var_t0_8 + 0) = (s8) *(s8 *)((u8 *)var_t1_8 + 0);
    var_t1_8 += 2;
    *(s8 *)((u8 *)var_t0_8 + 1) = temp_a1_8;
    var_t0_8 += 2;
    if (var_a3_8 > 0) {
        goto loop_27;
    }
    var_t1_9 = ((u8 *)D_004708A0) + 0xCD8;
    var_t0_9 = temp_a0_2 + 0xCD8;
    var_a3_9 = 0x10;
loop_29:
    var_a3_9 -= 1;
    temp_a1_9 = *(s32 *)((u8 *)var_t1_9 + 4);
    *(s32 *)((u8 *)var_t0_9 + 0) = (s32) *(s32 *)((u8 *)var_t1_9 + 0);
    var_t1_9 += 8;
    *(s32 *)((u8 *)var_t0_9 + 4) = temp_a1_9;
    var_t0_9 += 8;
    if (var_a3_9 > 0) {
        goto loop_29;
    }
    var_t0_10 = (__int128 *)(((u8 *)D_004708A0) + 0xD60);
    var_a3_10 = (__int128 *)(temp_a0_2 + 0xD60);
    var_a2 = 0xC6B;
loop_31:
    var_a2 -= 1;
    *var_a3_10 = *var_t0_10;
    var_t0_10 += 0x10;
    var_a3_10 += 0x10;
    if (var_a2 > 0) {
        goto loop_31;
    }
    var_a1 = 0x130;
    var_a3_11 = ((u8 *)D_004708A0) + 0xD41D;
    var_a2_2 = temp_a0_2 + 0xD41D;
    *(s64 *)((u8 *)temp_a0_2 + 0xD410) = (s64) *(s64 *)((u8 *)D_004708A0 + 0xD410);
    *(s32 *)((u8 *)temp_a0_2 + 0xD418) = (s32) *(s32 *)((u8 *)D_004708A0 + 0xD418);
    *(s8 *)((u8 *)temp_a0_2 + 0xD41C) = (s8) *(s8 *)((u8 *)D_004708A0 + 0xD41C);
loop_33:
    var_a1 -= 1;
    temp_v1 = *(s8 *)((u8 *)var_a3_11 + 1);
    *(s8 *)((u8 *)var_a2_2 + 0) = (s8) *(s8 *)((u8 *)var_a3_11 + 0);
    var_a3_11 += 2;
    *(s8 *)((u8 *)var_a2_2 + 1) = temp_v1;
    var_a2_2 += 2;
    if (var_a1 > 0) {
        goto loop_33;
    }
    D_004708A0 = NULL;
    (&D_00470838)[D_0047084C] = 4;
    goto block_38;
block_35:
    temp_a0_3 = &(&D_00470838)[D_0047084C];
    if (*temp_a0_3 & 0x8000) {
        goto block_38;
    }
    *temp_a0_3 = 5;
    goto block_38;
block_37:
    return;
block_38:
    var_v1 = (int *)(&func_00289DF0);
    D_0047084C ^= 1;
    if (&func_00289DF0 != NULL) {
        goto block_40;
    }
    var_v1 = NULL;
block_40:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    return;
}
