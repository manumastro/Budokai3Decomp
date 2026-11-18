/* Draft (not built): func_0030E690 at 0x0030E690, size 0x1F8, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); gned char *' * 'int' mwccps2.exe Compiler: 481: sp60 = D_00459140; @ 466: if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8) {
 * Original: asm/nonmatchings/story/str_staffroll/func_0030E690.s */

// src/story/str_staffroll.c func_0030E690 cerr diff=-1/0
void func_0030E690(u8 *arg0) {
    s8 sp40;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    s128 sp60;
    s32 *var_v1_2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_v0;
    s64 var_s0;
    s8 *var_v1;
    u8 temp_a0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 *)((u8 *)temp_s1 + 0x1C);
    var_s0 = 0;
    switch (temp_a0) {                              /* irregular */
    case 6:
        temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x18) - (0.01f * gFrameDelta);
        *(f32 *)((u8 *)temp_s1 + 0x18) = temp_f1;
        if (temp_f1 <= 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0x18) = 0.0f;
            *(u8 *)((u8 *)temp_s1 + 0x1C) = 7U;
        }
        break;
    case 7:
        *(f32 *)((u8 *)temp_s1 + 0x18) = 0.0f;
        if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8) {
            *(u8 *)((u8 *)temp_s1 + 0x1C) = 8U;
        }
        break;
    case 8:
        temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x18) + (0.01f * gFrameDelta);
        *(f32 *)((u8 *)temp_s1 + 0x18) = temp_f1_2;
        if (!(temp_f1_2 < 1.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x18) = 1.0f;
            var_s0 = 1;
        }
        break;
    }
    func_0030D630((s32 *)(temp_s1));
    var_v1 = &sp40;
    sp60 = D_00459140;
    var_v0 = 0x10;
    sp50 = (s128) D_00459150;
    sp50 = D_0047042C;
    sp54 = D_00470430;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp4C = *(f32 *)((u8 *)temp_s1 + 0x18);
    func_00136E80(0x900, &sp40, -1, 0x44, 0);
    func_00137C10(&sp60, &sp50);
    amDraw_FlushPacket();
    if (((s64) (var_s0 << 0x30) >> 0x30) != 0) {
        *(u8 *)((u8 *)temp_s1 + 0x1C) = 9U;
        Ball_Start();
        var_v1_2 = (s32 *)(&func_0030E630);
        if (&func_0030E630 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
