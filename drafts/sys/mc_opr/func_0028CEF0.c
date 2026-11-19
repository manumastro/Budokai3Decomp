/* Draft (not built): func_0028CEF0 at 0x0028CEF0, size 0x2E8, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 147 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028CEF0.s */

// src/sys/mc_opr.c func_0028CEF0 diff diff=147/186
extern s32 D_00470894;
extern s32 D_00470048;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32, u16, f32);
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_0047085C;
extern s32 D_00470864;
extern s32 D_00470868;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028D4D0(void);
extern void func_0028A730(void);
extern void func_0028DDA0(void);
extern void func_0028B720(void);
void func_0028CEF0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = *D_00492FCE | D_00493086;
    if (!(temp_a0 & 0x1000)) {
        if (temp_a0 & 0x4000) {
            if (D_00470854 == 0) {
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                    func_00288870(4);
                    var_v1 = (int *)(&func_0028DDF0);
                    if (&func_0028DDF0 == NULL) {
                        var_v1 = NULL;
                    }
                    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
                    D_00470858 = 3;
                    D_00470894 = (s32) &func_0028C580;
                    D_00470854 = 1;
                } else {
                    D_00470864 = 1;
                    D_00470868 = 0;
                    func_00288870(0x20);
                    var_v1_2 = (int *)(&func_0028D4D0);
                    if (&func_0028D4D0 == NULL) {
                        var_v1_2 = NULL;
                    }
                    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
                }
                return;
            }
            goto block_21;
        }
        temp_a2 = D_00492FD2 | D_00493032;
        temp_a0_2 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
        if ((temp_a0_2 != 0x40) && (temp_a0_2 != 0x10)) {

        } else {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            D_00470854 ^= 1;
        }
        return;
    }
block_21:
    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(0, 0, 5, 0);
    }
    switch (D_00470048) {                           /* irregular */
    case 0:
        func_00288870(2, D_00470048);
        var_v1_3 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1_3 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
        D_00470894 = (s32) &func_0028A730;
        D_00470854 = 1;
        return;
    case 2:
        D_00470858 = 2;
        func_00288870(-1, D_00470048);
        var_v1_4 = (int *)(&func_0028DDB0);
        if (&func_0028DDB0 == NULL) {
            var_v1_4 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
        D_00470894 = (s32) func_0028DDA0;
        return;
    case 5:
    case 4:
        func_00288870(D_0047085C, D_00470048);
        var_v1_5 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1_5 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
        D_00470854 = 0;
        D_00470864 = 0;
        D_00470894 = (s32) &func_0028B720;
        D_00470868 = 0;
        return;
    }
}
