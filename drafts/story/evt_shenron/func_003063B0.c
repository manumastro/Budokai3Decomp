/* Draft (not built): func_003063B0 at 0x003063B0, size 0x148, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); loat *, int, int, int)' mwccps2.exe Compiler: @ 142: func_00305130(&sp30, &sp20, *(s32 *)((u8 *)D_0047097C + 0x15C), 3);
 * Original: asm/nonmatchings/story/evt_shenron/func_003063B0.s */

// src/story/evt_shenron.c func_003063B0 cerr diff=-1/0
void func_003063B0(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 temp_f2;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = (u8 *)(D_0047097C);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) (*(f32 *)((u8 *)temp_s0 + 8) + func_002B06A0());
    sp3C = 0x3F800000;
    sp20 = 0x3F800000;
    sp24 = 0x3F800000;
    sp28 = 0x3F800000;
    sp2C = 0x3F800000;
    sp30 = 0x43A00000;
    sp34 = 0x43C80000;
    sp38 = 0;
    temp_f2 = *(f32 *)((u8 *)D_0047097C + 8);
    if ((temp_f2 > 90.0f) && (temp_f2 < 220.0f)) {
        func_00305130(&sp30, &sp20, *(s32 *)((u8 *)D_0047097C + 0x15C), 3);
    }
    temp_s0_2 = (u8 *)(D_0047097C);
    if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8)) {
        if (!(*(f32 *)((u8 *)temp_s0_2 + 8) < 960.0f)) {
            goto block_6;
        }
    } else {
block_6:
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        Scr_KillTasks(*(s32 *)((u8 *)temp_s0_2 + 4));
        func_002641D0(0, 0);
        Scene_Request(0xC, 0);
        Scene_MarkDone();
        amTask_Kill(*(u8 **)((u8 *)temp_s0_2 + 0));
        *(u8 **)((u8 *)temp_s0_2 + 0) = NULL;
    }
}
