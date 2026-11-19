/* Draft (not built): func_0028C580 at 0x0028C580, size 0x1A8, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C580.s */

// src/sys/mc_opr.c func_0028C580 diff diff=78/106
extern s32 D_00470894;
extern s32 D_00470048;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00470854;
extern s32 D_0047085C;
extern s32 D_00470864;
extern s32 D_00470868;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDF0(void);
extern void func_0028A730(void);
extern void func_0028DDA0(void);
extern void func_0028B720(void);
void func_0028C580(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;

    if (!((*D_00492FCE | D_00493086) & 0x4000)) {
        goto block_24;
    }
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_3;
    }
    SoundRpc_Send3(0, 0, 3, 0);
block_3:
    if (D_00470048 == 8) {
        goto block_17;
    }
    if (D_00470048 == 0xA) {
        goto block_17;
    }
    if (D_00470048 == 9) {
        goto block_17;
    }
    if (D_00470048 == 5) {
        goto block_17;
    }
    if (D_00470048 == 4) {
        goto block_17;
    }
    if (D_00470048 == 2) {
        goto block_14;
    }
    if (D_00470048 == 0) {
        goto block_11;
    }
    goto block_21;
block_11:
    func_00288870(2);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_13;
    }
    var_v1 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (s32) &func_0028A730;
    D_00470854 = 1;
    return;
block_14:
    func_00288870(-1);
    var_v1_2 = (int *)(&func_0028DDB0);
    if (&func_0028DDB0 != NULL) {
        goto block_16;
    }
    var_v1_2 = NULL;
block_16:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470894 = (s32) func_0028DDA0;
    return;
block_17:
    func_00288870(D_0047085C);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_19;
    }
    var_v1_3 = NULL;
block_19:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470854 = 0;
    D_00470864 = 0;
    D_00470894 = (s32) &func_0028B720;
    D_00470868 = 0;
    return;
block_21:
    func_00288870(-1);
    var_v1_4 = (int *)(&func_0028DDB0);
    if (&func_0028DDB0 != NULL) {
        goto block_23;
    }
    var_v1_4 = NULL;
block_23:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    D_00470894 = (s32) func_0028DDA0;
block_24:
    return;
}
