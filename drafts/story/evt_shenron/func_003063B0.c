/* Draft (not built): func_003063B0 at 0x003063B0, size 0x148, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_shenron/func_003063B0.s */

void func_003063B0(void) {
    f32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s0_2;
    temp_s0 = D_0047097C;
    *(f32 *)((u8 *)temp_s0 + 8) = (f32)(*(f32 *)((u8 *)temp_s0 + 8) + func_002B06A0());
    sp3C = 0x3F800000;
    sp20 = 1.0f;
    sp24 = 0x3F800000;
    sp28 = 0x3F800000;
    sp2C = 0x3F800000;
    sp30 = 320.0f;
    sp34 = 0x43C80000;
    sp38 = 0;
    temp_f2 = *(f32 *)((u8 *)D_0047097C + 8);
    if (90.0f < temp_f2 && temp_f2 < 220.0f) {
        func_00305130(&sp30, &sp20, *(s32 *)((u8 *)D_0047097C + 0x15C), 3, M2C_ERROR());
    }
    temp_s0_2 = D_0047097C;
    if (!(*(u16 *)(D_00492FCE + *D_004B4B63 * 0xB8) & 8)) {
        if (!(*(f32 *)((u8 *)temp_s0_2 + 8) < 960.0f)) {
            goto block_6;
        }
    } else {
        block_6:
        amAdx_Stop(1);

        SoundRpc_SendWord(0);
        Scr_KillTasks(*(s32 *)((u8 *)temp_s0_2 + 4));
        func_002641D0(0xA, 0);
        Scene_Request(0xC, 0);
        Scene_MarkDone();
        amTask_Kill(*(u8 **)((u8 *)temp_s0_2 + 0));
        *(u8 **)((u8 *)temp_s0_2 + 0) = NULL;
    }
}

/* Similar function already in C: func_00306500 (src/story/evt_shenron.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
void func_00306500(s32 *a0) {
    s32 *s0 = (s32 *)D_0047097C;
    s32 *s1 = a0;
    f32 t = func_002B06A0();
    f32 v = *(f32 *)&s0[0x8 / 4] + t;
    *(f32 *)&s0[0x8 / 4] = v;
    if (!(v < 90.0f)) {
        amAdx_PlayAfs(1, 0x21050, 0);
        {
            void *f = func_003063B0;
            s1[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
    s0 = (s32 *)D_0047097C;
    if ((*(u16 *)((char *)D_00492FCE + (s32)D_004B4B63[0] * 184) & 0x8) != 0 || !(*(f32 *)&s0[0x8 / 4] < 960.0f)) {
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        Scr_KillTasks(s0[0x4 / 4]);
        func_002641D0(0xA, 0);
        Scene_Request(0xC, 0);
        Scene_MarkDone();
        amTask_Kill((void *)s0[0]);
        s0[0] = 0;
    }
}
#endif
