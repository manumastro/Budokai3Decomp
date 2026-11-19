/* Draft (not built): func_0026CD50 at 0x0026CD50, size 0x228, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 112 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main/func_0026CD50.s */

// src/menu/ess_main.c func_0026CD50 diff diff=112/138
extern s32 D_00452EC8;
void func_0026CD50(u8 *arg0) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = arg0 + 0x30;
    func_0026B770();
    func_0026B880();
    if ((-1 & func_0022BC30(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssMain + 0x24)) + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0xF0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0xF8) * gFrameDelta)) == 0xFF) {
        temp_a2 = *(s32 *)((u8 *)gEssMain + 0x50);
        switch (temp_a2) {                          /* irregular */
        case 0:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 1;
            *(s32 *)((u8 *)gEssMain + 0x190) = 1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0 = *D_00452EC4;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0 | 0x20000, 0);
            break;
        case 1:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 2;
            *(s32 *)((u8 *)gEssMain + 0x190) = 2;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_2 = D_00452EC8;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
            break;
        case 2:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 3;
            *(s32 *)((u8 *)gEssMain + 0x190) = 3;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_3 = *D_00452ECC;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_3 | 0x20000, 0);
            break;
        case 3:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 4;
            *(s32 *)((u8 *)gEssMain + 0x190) = 4;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_4 = *D_00452ED0;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_4 | 0x20000, 0);
            break;
        }
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        var_v1 = func_0026BD50;
        *(s32 *)((u8 *)temp_s1 + 8) = (s32) *(s32 *)((u8 *)gEssMain + 0x50);
        *(s32 *)((u8 *)temp_s1 + 0xC) = 4;
        if (func_0026BD50 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
