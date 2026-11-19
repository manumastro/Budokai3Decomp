/* Draft (not built): func_001CA780 at 0x001CA780, size 0x118, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/character/func_001CA780.s */

s32 func_00133420(s32);
s32 func_00133620(s32, s32, void *, void *);
s32 func_00133720(s32 *, s32 *, s32 *);
s32 func_00139A80(s32 *, s32 *, u16);
s32 func_0013B110(s32);
s32 func_001C9610(void *, s32);
s32 func_001D4570(s32);
s32 func_0029D260(s32, s16);
extern void func_0013B0B0(void *);
extern void func_00237840(void *);
void func_001CA780(u8 *arg0, s32 arg1) {
    u8 sp[0x400];
    s32 sp40;
    s32 sp50;
    f32 sp54;
    s32 sp60;
    s32 spA0;
    s32 spD0;
    s32 var_s0;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *var_s1;
    var_s1 = arg0;
    var_s0 = arg1;
    if (var_s1 != NULL && *(u8 **)((u8 *)var_s1 + 0) != NULL) {
        temp_a0 = *(u8 **)((u8 *)var_s1 + 0x1C);
        if (temp_a0 != NULL) {
            func_00237840(temp_a0);
            var_s2 = *(s32 *)((u8 *)*(u8 **)((u8 *)var_s1 + 0) + 0x4C);
            sp50 = 0x40000000;
            sp54 = 2.0f * 2.0f;
            func_0013B0B0(NULL);
            func_0029D260(var_s2, *(s16 *)((u8 *)*(u8 **)((u8 *)var_s1 + 0) + 0));
            M2C_ERROR();
            func_0013B110(1);
            func_00139A80(&sp60, &sp40, *(u16 *)((u8 *)*(u8 **)((u8 *)var_s1 + 0x1C) + 8));
            func_00133420(1);
            func_00133720(&sp60, &spA0, &spD0);
            var_s2 = 0;
            loop_5:
            if (var_s2 < 4) {
                temp_v0 = var_s2 * 0x10 + sp;
                var_s2 += 1;
                func_00133620(var_s2, 1, temp_v0 + 0x60, temp_v0 + 0xA0);
                goto loop_5;
            }
        }
        func_001C9610(*(u8 **)((u8 *)var_s1 + 0), var_s0);
        func_001D4570(*(s32 *)((u8 *)*(u8 **)((u8 *)var_s1 + 0) + 0x58));
    }
}
