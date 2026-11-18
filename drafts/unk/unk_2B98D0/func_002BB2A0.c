/* Draft (not built): func_002BB2A0 at 0x002BB2A0, size 0x1F0, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ndefined identifier 'sp' mwccps2.exe Compiler: 286: temp_v0 = (var_s0 * 0x10) + sp; @ 285: temp_v1 = (temp_hi * 8) + sp;
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BB2A0.s */

// src/unk/unk_2B98D0.c func_002BB2A0 cerr diff=-1/0
s32 func_001363D0(s32, s32, s128 *, s32);
s32 func_00136870(s32, s32, s128 *, s32);
s32 func_00137B60(s32 *);
extern s128 D_00455E60;
extern s128 D_00455E70;
extern s32 D_00455E80;
extern void amDraw_FlushPacket(void);
void func_002BB2A0(void) {
    s32 sp30;
    s128 sp70;
    s128 sp80;
    s32 sp90;
    s32 *temp_s1;
    f32 var_f3;
    s32 temp_hi;
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_v0;
    u8 *temp_v1;

    sp80 = D_00455E60;
    sp70 = D_00455E70;
    *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00455E80) + 0);
    *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455E80) + 0x10);
    *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00455E80) + 0x20);
    *(s64 *)((u8 *)(&sp30) + 0x30) = (s64) *(s64 *)((u8 *)(&D_00455E80) + 0x30);
    temp_s1 = *(s32 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x14C)) + 0x1C)) + 0x18)) + 4)) + 0x1C);
    func_00136870(2, 0x900, &sp80, -1);
    func_00137B60(temp_s1);
    var_s0 = 0;
loop_7:
    if (var_s0 < 7) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        temp_hi = var_s0 % 7;
        var_f3 = (f32) *(s32 *)((u8 *)((temp_hi * 4) + gStrStatus) + 0x29C);
        if (!(var_f3 <= 20.0f)) {
            var_f3 = 20.0f;
        }
        if (var_f3 < 0.0f) {
            var_f3 = 0.0f;
        }
        temp_v1 = (temp_hi * 8) + sp;
        temp_v0 = (var_s0 * 0x10) + sp;
        *(f32 *)((u8 *)temp_v0 + 0x90) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x90) + ((var_f3 * *(f32 *)((u8 *)temp_v1 + 0x30)) / 20.0f));
        *(f32 *)((u8 *)temp_v0 + 0x94) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x94) + ((var_f3 * *(f32 *)((u8 *)temp_v1 + 0x34)) / 20.0f));
        func_00137B60((s32 *)(temp_v0 + 0x90));
        var_s0 += 1;
        goto loop_7;
    }
    func_00137B60(&sp90);
    amDraw_FlushPacket();
    func_001363D0(1, 0x100, &sp70, 0x44);
    var_s0_2 = 0;
loop_10:
    if (var_s0_2 < 7) {
        func_00137B60((var_s0_2 * 0x10) + sp + 0x90);
        var_s0_2 += 1;
        goto loop_10;
    }
    func_00137B60(&sp90);
    amDraw_FlushPacket();
}
