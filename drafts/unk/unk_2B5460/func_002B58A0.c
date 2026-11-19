/* Draft (not built): func_002B58A0 at 0x002B58A0, size 0x1A0, segment unk/unk_2B5460 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x1A0
 * Original: asm/nonmatchings/unk/unk_2B5460/func_002B58A0.s */

// src/unk/unk_2B5460.c func_002B58A0 size diff=57/101
s32 func_00133B50(s32, s32, s128, s128 *);
s32 func_00136E80(s32, s8 *, s32, s32);
s32 func_0022C060(s32, s32);
s32 func_0022C560(s32);
s32 func_0022D670(s32, s32);
extern s128 D_004552E0;
extern s128 D_004552F0;
extern s32 D_00470238;
extern f32 D_0047042C;
extern f32 D_00470430;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void amDraw_FlushPacket(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_00137C10(void *, void *);
void func_002B58A0(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    s128 sp50;
    s8 sp60;
    f32 sp6C;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *var_s2;

    var_v0 = 0x10;
    var_v1 = &sp60;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_s1 = (unsigned char *)(gHelp);
    var_s2 = arg0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp6C = *(f32 *)((u8 *)var_s2 + 8);
    sp50 = D_004552E0;
    sp40 = (s128) D_004552F0;
    sp40 = D_0047042C;
    sp44 = D_00470430;
    func_00133B50(0, 0, D_004552E0, &sp50);
    func_00136E80(0x900, &sp60, -1, 0x44);
    func_00137C10(&sp50, &sp40);
    amDraw_FlushPacket();
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0x18);
    D_00470704 = temp_a0;
    D_0047070C = 0xFF00;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0xFF00);
    D_00470238 = 0;
    if (temp_s0 != 0) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022C560(temp_s0);
    }
    if (!(*(f32 *)((u8 *)var_s2 + 4) <= 0.0f)) {
        if (*(s32 *)((u8 *)var_s2 + 0x10) == 0) {
            *(s32 *)((u8 *)var_s2 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0x1C)) + 0xC), 0);
            *(s32 *)((u8 *)var_s2 + 0x14) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0x1C)) + 0x14), 0);
            return;
        }
        var_s0 = 0;
        do {
            temp_s1_2 = *(s32 *)((u8 *)var_s2 + 0x10);
            func_0022C060(temp_s1_2, 0x3F800000);
            func_0022C560(temp_s1_2);
            var_s0 += 1;
            var_s2 += 4;
        } while (var_s0 < 2);
    }
}
