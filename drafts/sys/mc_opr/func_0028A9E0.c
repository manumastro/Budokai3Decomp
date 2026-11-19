/* Draft (not built): func_0028A9E0 at 0x0028A9E0, size 0xBC, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028A9E0.s */

// src/sys/mc_opr.c func_0028A9E0 diff diff=34/47
extern s32 D_00470894;
extern void *D_0047088C;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00470850;
extern s32 D_00470858;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDA0(void);
void func_0028A9E0(void) {
    s32 *var_v1;
    s32 temp_v1;

    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if ((temp_v1 == 0) || ((*D_00492FCE | D_00493086) & 0x4000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        D_00470858 = 1;
        func_00288870(-1);
        var_v1 = (int *)(&func_0028DDB0);
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)D_0047088C + 0x1C) = var_v1;
        D_00470894 = (s32) func_0028DDA0;
    }
}
