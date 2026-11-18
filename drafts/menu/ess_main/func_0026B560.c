/* Draft (not built): func_0026B560 at 0x0026B560, size 0x20C, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 34: 2BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0xF0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0xF
 * Original: asm/nonmatchings/menu/ess_main/func_0026B560.s */

// src/menu/ess_main.c func_0026B560 cerr diff=-1/0
void func_0026B560(u8 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    void (*var_v1)();
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x30;
    func_00269B90();
    func_00269CC0();
    temp_s1 = *(u8 **)((u8 *)gEssMain + 0x24);
    temp_s0 = -1 & func_0022BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0xF0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0xF8) * gFrameDelta);
    if ((temp_s0 & func_0022BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0x210) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x218) * gFrameDelta)) == 0xFF) {
        temp_a1 = *(s32 *)((u8 *)gEssMain + 0x54);
        switch (temp_a1) {                          /* irregular */
        case 0:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 9;
            *(s32 *)((u8 *)gEssMain + 0x190) = 9;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_2 = (s32)(D_00452EE4);
            amAdx_SetVolume(1, temp_a1, gEssMain, D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
            break;
        case 1:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 0xA;
            *(s32 *)((u8 *)gEssMain + 0x190) = 0xA;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_3 = (s32)(D_00452EE8);
            amAdx_SetVolume(1, temp_a1, gEssMain, D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_3 | 0x20000, 0);
            break;
        case 2:
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 0xB;
            *(s32 *)((u8 *)gEssMain + 0x190) = 0xB;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_4 = (s32)(D_00452EEC);
            amAdx_SetVolume(1, temp_a1, gEssMain, D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_4 | 0x20000, 0);
            break;
        }
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        var_v1 = func_0026A680;
        *(s32 *)((u8 *)temp_s2 + 8) = (s32) *(s32 *)((u8 *)gEssMain + 0x54);
        *(s32 *)((u8 *)temp_s2 + 0xC) = 3;
        if (func_0026A680 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
