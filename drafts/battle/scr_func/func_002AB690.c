/* Draft (not built): func_002AB690 at 0x002AB690, size 0x330, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); x *)' redeclared was declared as: 'int (struct ScriptThread *, struct ScriptCtx *)' @ 720: s32 func_002AB690(u8 *arg0) {
 * Original: asm/nonmatchings/battle/scr_func/func_002AB690.s */

// src/battle/scr_func.c func_002AB690 cerr diff=-1/0
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, s32, s32, s64);
s32 func_00137650(f32 *, s128 *, void *);
s32 func_00137920(f32 *, s128 *, f32 *, s128 *);
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
s32 func_002AB690(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s128 sp60;
    f32 sp6C;
    s32 temp_a0;
    u8 *temp_s0;

    temp_s0 = (*(s8 *)((u8 *)arg0 + 0x28) * 0xD0) + (&D_005BC9E0 + (**(s32 **)((u8 *)arg0 + 0) * 0x1A0));
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
    if (temp_a0 != 0) {
        amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s0 + 0xC));
    }
    func_00133780(2, (*(s32 *)((u8 *)temp_s0 + 0x14) & 0x40) != 0);
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x10) | 0x402);
    if ((*(s32 *)((u8 *)temp_s0 + 0) != 0) && (*(s32 *)((u8 *)temp_s0 + 8) != -1)) {
        sp60 = *(s128 *)((u8 *)temp_s0 + 0x90);
        func_00136E80(*(s32 *)((u8 *)temp_s0 + 0x10), 0, *(s32 *)((u8 *)temp_s0 + 8), *(s64 *)((u8 *)temp_s0 + 0xC0));
        func_00137650(temp_s0 + 0x60, &sp60, temp_s0 + 0x30);
        func_00137650(temp_s0 + 0x70, &sp60, temp_s0 + 0x40);
        if (*(s32 *)((u8 *)temp_s0 + 0x14) & 0x80) {
            sp6C *= 0.25f;
            sp50 = *(f32 *)((u8 *)temp_s0 + 0x60);
            sp54 = *(f32 *)((u8 *)temp_s0 + 0x64);
            sp58 = *(f32 *)((u8 *)temp_s0 + 0x68);
            sp5C = *(f32 *)((u8 *)temp_s0 + 0x6C);
            sp40 = *(f32 *)((u8 *)temp_s0 + 0x70);
            sp44 = *(f32 *)((u8 *)temp_s0 + 0x74);
            sp48 = *(f32 *)((u8 *)temp_s0 + 0x78);
            sp4C = *(f32 *)((u8 *)temp_s0 + 0x7C);
            sp54 -= 1.0f;
            sp44 -= 1.0f;
            func_00137650(&sp50, &sp60, temp_s0 + 0x30);
            func_00137650(&sp40, &sp60, temp_s0 + 0x40);
            sp54 += 2.0f;
            sp44 += 2.0f;
            func_00137650(&sp50, &sp60, temp_s0 + 0x30);
            func_00137650(&sp40, &sp60, temp_s0 + 0x40);
        }
    } else {
        sp60 = *(s128 *)((u8 *)temp_s0 + 0x90);
        func_00136E80(*(s32 *)((u8 *)temp_s0 + 0x10) & ~0x24, 0, -1, *(s64 *)((u8 *)temp_s0 + 0xC0));
        func_00137920(temp_s0 + 0x60, &sp60, temp_s0 + 0x70, &sp60);
        if (*(s32 *)((u8 *)temp_s0 + 0x14) & 0x80) {
            sp6C *= 0.25f;
            sp50 = *(f32 *)((u8 *)temp_s0 + 0x60);
            sp54 = *(f32 *)((u8 *)temp_s0 + 0x64);
            sp58 = *(f32 *)((u8 *)temp_s0 + 0x68);
            sp5C = *(f32 *)((u8 *)temp_s0 + 0x6C);
            sp40 = *(f32 *)((u8 *)temp_s0 + 0x70);
            sp44 = *(f32 *)((u8 *)temp_s0 + 0x74);
            sp48 = *(f32 *)((u8 *)temp_s0 + 0x78);
            sp4C = *(f32 *)((u8 *)temp_s0 + 0x7C);
            sp54 -= 1.0f;
            sp44 -= 1.0f;
            func_00137920(&sp50, &sp60, &sp40, &sp60);
            sp54 += 2.0f;
            sp44 += 2.0f;
            func_00137920(&sp50, &sp60, &sp40, &sp60);
        }
    }
    amDraw_FlushPacket();
    func_00133780(2, 0);
    return 1;
}
