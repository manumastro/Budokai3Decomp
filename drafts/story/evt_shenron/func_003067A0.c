/* Draft (not built): func_003067A0 at 0x003067A0, size 0x138, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_shenron/func_003067A0.s */

// src/story/evt_shenron.c func_003067A0 diff diff=63/78
s32 SklSheet_SetIndex(s32);
void func_003067A0(u8 *arg0) {
    f32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 *var_v1;
    f32 temp_f1;
    s32 temp_s1;
    u16 temp_s0;

    temp_s0 = *(D_00492FCE + (*D_004B4B63 * 0xB8));
    temp_s1 = D_0047097C;
    *(f32 *)((u8 *)temp_s1 + 8) = (f32) (*(f32 *)((u8 *)temp_s1 + 8) + func_002B06A0());
    sp54 = 0x43C80000;
    sp50 = 320.0f;
    sp58 = 0;
    sp5C = 0x3F800000;
    sp40 = 1.0f;
    sp44 = 0x3F800000;
    sp48 = 0x3F800000;
    sp4C = 0x3F800000;
    temp_f1 = *(f32 *)((u8 *)D_0047097C + 8);
    if ((temp_f1 > 0.0f) && (temp_f1 < 200.0f)) {
        func_00305130(&sp50, &sp40, *(s32 *)((u8 *)D_0047097C + 0x15C), 2, M2C_ERROR(/* Read from unset register $a4 */));
    }
    if ((temp_s0 & 8) || !(*(f32 *)((u8 *)temp_s1 + 8) < 200.0f)) {
        SklSheet_SetIndex(0);
        amAdx_Stop(1);
        SoundRpc_SendWord(0);
        var_v1 = (int *)(&func_003066F0);
        if (&func_003066F0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
