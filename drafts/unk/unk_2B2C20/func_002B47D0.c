/* Draft (not built): func_002B47D0 at 0x002B47D0, size 0x178, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B47D0.s */

// src/unk/unk_2B2C20.c func_002B47D0 diff diff=68/94
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 sprintf(s32 *, s32 *, s32, s32);
extern s32 D_0046EB40;
extern f32 D_004E0614;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern void func_002B4680(void);
void func_002B47D0(u8 *arg0) {
    s32 sp40;
    s32 *var_v0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1;
    u8 **temp_s0;
    u8 *temp_a1;
    u8 *temp_s1;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_a1 = (unsigned char *)(gSklEdit + (temp_a3 * 0x1C8));
    temp_s1 = temp_a1 + 0x48;
    if (*(s32 *)((u8 *)temp_a1 + 0x54) == 3) {
        var_v0 = (int *)(&func_002B4680);
        if (&func_002B4680 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        temp_a2 = *(s32 *)((u8 *)arg0 + 0x30);
        temp_s0 = (unsigned char **)(gSklEdit + (temp_a2 * 8) + 0x1C);
        sprintf(&sp40, &D_0046EB40, temp_a2, temp_a3);
        *temp_s0 = amTask_Create(&func_002B2C20, 0, *(s32 *)((u8 *)gSklEdit + 0x38), 0x200);
        *(s32 *)((u8 *)(*temp_s0) + 0x30) = (s32) *(s32 *)((u8 *)arg0 + 0x30);
        temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x10);
        if (temp_v1 != 2) {
            if (temp_v1 != 1) {
                if (temp_v1 != 0) {

                } else {
                    *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x15;
                    *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
                }
            } else {
                *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x13;
                *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
            }
        } else {
            *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x15;
            *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
        }
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        *(s32 *)((u8 *)temp_s1 + 0x114) = 1;
    }
}
