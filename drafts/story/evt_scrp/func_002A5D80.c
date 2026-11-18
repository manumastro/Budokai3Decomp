/* Draft (not built): func_002A5D80 at 0x002A5D80, size 0x1C8, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x1C8
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5D80.s */

// src/story/evt_scrp.c func_002A5D80 size diff=54/115
s32 Fade_Request(s32, s32, s32);
s32 Scr_Start(s32, s32);
s32 Zenie_GetState(s32);
s32 func_00144370(s32, s32, s32, s32);
s32 func_002988D0(s32 *, s8);
s32 func_00298910(s32);
s32 func_00298990(s32, s32, s32);
s32 func_00298E30(void *, s32);
extern s8 D_004708E0;
extern s32 D_005AB8D0;
extern s8 D_005ABA60;
extern void SoundRpc_SendWord2();
extern void *D_005AA550[];
void func_002A5D80(u8 *arg0) {
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_s2_2;
    s32 var_s3;
    s8 *var_s2;
    void (*var_v1)();
    u8 **var_s1_2;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gEvtWork);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0xC);
    if (!(temp_a0 & 1)) {
        goto block_22;
    }
    if (!(temp_a0 & 2)) {
        goto block_22;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x40) == 0) {
        goto block_7;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x68) == 0) {
        goto block_6;
    }
    if (Zenie_GetState(temp_a0) > 0) {
        goto block_7;
    }
block_6:
    return;
block_7:
    Fade_Request(-1, 0, 0);
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x130);
    if (temp_a0_2 == -1) {
        goto block_9;
    }
    func_00298910(temp_a0_2);
    func_00298E10(D_004700A0);
    D_004700A0 = -1;
block_9:
    var_a1 = *(s32 *)((u8 *)temp_s0 + 0x138);
    if (var_a1 < 4) {
        goto block_11;
    }
    var_a1 = 3;
block_11:
    func_00298990(*(s32 *)((u8 *)temp_s0 + 0x134), var_a1, *(s32 *)((u8 *)temp_s0 + 0x13C));
    if (*(s32 *)((u8 *)temp_s0 + 0x140) == -1) {
        goto block_13;
    }
    func_00298E30(temp_s0 + 0xE0, *(s32 *)((u8 *)temp_s0 + 0xF0));
    *(s32 *)((u8 *)temp_s0 + 0x140) = -1;
block_13:
    var_s3 = 0;
    if (D_004708E0 <= 0) {
        goto block_17;
    }
    var_s2 = &D_005ABA60;
    var_s1 = &D_005AB8D0;
loop_15:
    func_002988D0(var_s1, *var_s2);
    var_s3 += 1;
    var_s2 += 1;
    var_s1 += 0x10;
    if (var_s3 < D_004708E0) {
        goto loop_15;
    }
block_17:
    D_004708E0 = 0;
    var_s2_2 = 0;
    var_s1_2 = (u8 **)(D_005AA550);
loop_18:
    func_00144370(1, var_s2_2 + 0x11122233, 0, *(s32 *)((u8 *)var_s1_2 + 0xE10));
    var_s2_2 += 1;
    var_s1_2 += 4;
    if (var_s2_2 < 8) {
        goto loop_18;
    }
    SoundRpc_SendWord2(-1);
    Scr_Start(*(s32 *)((u8 *)temp_s0 + 0), 0);
    var_v1 = func_002A5D70;
    if (func_002A5D70 != NULL) {
        goto block_21;
    }
    var_v1 = NULL;
block_21:
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
block_22:
    return;
}
