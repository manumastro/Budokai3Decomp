/* Draft (not built): func_00285EF0 at 0x00285EF0, size 0x2B4, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 39: func_00285D90(&jtbl_0046B890); @ 200: *(s8 *)((u8 *)arg0 + 0x267) = (s8) (func_0012EAE0(0x20, &jtbl_0046B890) % 3U);
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00285EF0.s */

// src/unk/unk_284AA0.c func_00285EF0 cerr diff=-1/0
s32 amAdx_PlayAfs(s32, s32, s32, s64 *);
s32 amAdx_SetVolume(s32, f32);
extern s32 D_0046B881;
extern s64 D_00470040;
extern f32 D_004E0618;
extern f32 gFrameDelta;
extern void amAdx_Pause();
void func_00285EF0(u8 *arg0) {
    u8 sp[0x400];
    s64 sp38;
    f32 temp_f1;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_v1;
    s8 var_v1;
    u8 temp_a0;
    u8 temp_a0_4;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s0;
    u8 *temp_v1_2;

    temp_v1 = *(s8 *)((u8 *)arg0 + 0x266);
    switch (temp_v1) {
        return;
    case 1:
        temp_a0 = *(u8 *)((u8 *)arg0 + 0x262);
        if ((temp_a0 == 2) || (temp_a0 == 3)) {
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x280) - gFrameDelta;
            *(f32 *)((u8 *)arg0 + 0x280) = temp_f1;
            if (temp_f1 <= 0.0f) {
                *(s8 *)((u8 *)arg0 + 0x266) = 2;
                *(s8 *)((u8 *)arg0 + 0x267) = (s8) (func_0012EAE0(0x20, &jtbl_0046B890) % 3U);
                *(s8 *)((u8 *)arg0 + 0x268) = 0;
            }
        }
        return;
    case 2:
        temp_a0_2 = *(u8 **)((u8 *)arg0 + 4);
        D_00470704 = (int)(temp_a0_2);
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x7000);
        D_00470238 = 0;
        temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x40);
        if (temp_a0_3 != NULL) {
            func_0022D0E0(temp_a0_3, 1);
        }
        temp_a1 = *(s8 *)((u8 *)arg0 + 0x267);
        *(u8 **)((u8 *)arg0 + 0x40) = func_0022D860((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14) + (*(((u8 *)&D_0046B880) + (temp_a1 * 3)) * 4))), temp_a1);
        *(f32 *)((u8 *)arg0 + 0x280) = 0.0f;
        *(s8 *)((u8 *)arg0 + 0x266) = 3;
        temp_v1_2 = ((func_0012EAE0(0x20) & 1) * 4) + sp;
        sp38 = D_00470040;
        *(s32 *)((u8 *)arg0 + 0x288) = amAdx_PlayAfs(1, *(s32 *)((u8 *)temp_v1_2 + 0x38) | 0x20000, 0, &sp38);
        amAdx_SetVolume(*(s32 *)((u8 *)arg0 + 0x288), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)arg0 + 0x288), 0);
    default:
block_23:
        temp_a0_4 = *(u8 *)((u8 *)arg0 + 0x262);
        if ((s32) temp_a0_4 >= 4) {
            if (temp_a0_4 == 4) {
                var_v1 = 5;
            } else {
                var_v1 = 6;
            }
            *(s8 *)((u8 *)arg0 + 0x266) = var_v1;
        }
        return;
    case 3:
    case 4:
        func_00285D90(&jtbl_0046B890);
        goto block_23;
    case 5:
    case 6:
        temp_s0 = *(u8 **)((u8 *)arg0 + 0x40);
        temp_a0_5 = *(u8 **)((u8 *)arg0 + 4);
        D_00470704 = (int)(temp_a0_5);
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_5), 0x7000);
        D_00470238 = 0;
        if (temp_s0 != NULL) {
            if (func_0022BF80(temp_s0) == 0xFF) {
                if (*(s8 *)((u8 *)arg0 + 0x268) == 0) {
                    temp_a0_6 = *(u8 **)((u8 *)arg0 + 0x40);
                    if (temp_a0_6 != NULL) {
                        func_0022D0E0(temp_a0_6, 1);
                    }
                    temp_a1_2 = *(s8 *)((u8 *)arg0 + 0x267);
                    *(u8 **)((u8 *)arg0 + 0x40) = func_0022D860((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14) + (*(&D_0046B881 + (temp_a1_2 * 3)) * 4))), temp_a1_2);
                }
                if (*(s8 *)((u8 *)arg0 + 0x268) >= 2) {
                    *(s8 *)((u8 *)arg0 + 0x266) = 1;
                } else {
                    goto block_21;
                }
            } else {
block_21:
                func_0022C060(temp_s0, 0x3F800000);
                func_0022CD00(temp_s0);
            }
        }
        return;
    }
}
