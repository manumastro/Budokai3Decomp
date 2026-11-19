/* Draft (not built): func_0028CCE0 at 0x0028CCE0, size 0x130, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028CCE0.s */

extern s32 D_00470894;
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern s32 D_00470850;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470864;
extern s32 D_00470868;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028D4D0(void);
void func_0028CCE0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_v1;
    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if (temp_v1 == 0 || (*D_00492FCE | D_00493086) & 0x4000) {
        if ((*(u16 *)D_00492FCE | D_00493086) & 0x4000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
        }
        if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
            func_00288870(4);
            var_v1 = (int *)&func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            D_00470858 = 3;
            D_00470854 = 1;
            D_00470894 = (int)&func_0028C580;
            return;
        }
        D_00470864 = 0;
        func_00288870(0x20);
        D_00470868 = 0;
        var_v1_2 = (int *)&func_0028D4D0;
        if (&func_0028D4D0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
