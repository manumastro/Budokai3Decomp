/* Draft (not built): func_002C6700 at 0x002C6700, size 0x22C, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 77 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x22C
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C6700.s */

// src/unk/unk_2C41C0.c func_002C6700 size diff=77/145
extern struct EffFile *func_0020B020(s32, s32, s32);
s32 func_00133780(s32, s32);
s32 func_001351F0(s32, s32, s32, s128 *);
s32 func_00136130(void *, f32 *, s128 *);
s32 func_0020AD30(s32, s16, s16);
extern s128 D_00456490;
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
void func_002C6700(u8 *arg0) {
    f32 sp70;
    f32 sp74;
    s32 sp78;
    s32 sp7C;
    s128 sp80;
    f32 sp8C;
    s128 sp90;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    s32 temp_s4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;
    u8 *var_s0;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0);
    temp_v1 = (u8 *)(gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80));
    temp_s0 = *(u8 **)((u8 *)temp_v1 + 0xF78);
    temp_s2 = temp_v1 + 0xF00;
    if ((*(u8 **)((u8 *)temp_s0 + 0x38) != temp_s2) && !(*(f32 *)((u8 *)arg0 + 0x20) <= 0.0f)) {
        sp90 = D_00456490;
        var_f20 = 1.0f;
        sp80 = *(s128 *)((u8 *)temp_s1 + 0x10);
        if (gBattle != NULL) {
            var_f0 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f0 = 1.0f;
        } else {
            var_f0 = 1.2f;
        }
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x28);
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x20);
        if (temp_f1 < (temp_f2 * var_f0)) {
            if (gBattle != NULL) {
                var_f0_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f0_2 = 1.0f;
            } else {
                var_f0_2 = 1.2f;
            }
            temp_f20 = temp_f1 / (temp_f2 * var_f0_2);
            var_f20 = temp_f20 * temp_f20;
        }
        *(f32 *)((u8 *)arg0 + 0x2C) = var_f20;
        sp8C = *(f32 *)((u8 *)temp_s1 + 0x50) * var_f20;
        temp_s4 = (s32)(func_0020B020(0, *(s16 *)((u8 *)temp_s1 + 0x88), *(s16 *)((u8 *)temp_s1 + 0x8A)));
        amModel_SetCurrent(temp_s4, func_0020AD30(0, *(s16 *)((u8 *)temp_s1 + 0x88), *(s16 *)((u8 *)temp_s1 + 0x8A)));
        func_00133780(0, 1);
        temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x44) * var_f20;
        sp78 = 0;
        sp7C = 0;
        sp74 = temp_f0;
        sp70 = temp_f0;
        func_001351F0(1, 0xC23, 0, &sp90);
        func_00136130(temp_s0, &sp70, &sp80);
        var_s0 = *(u8 **)((u8 *)temp_s0 + 0x38);
        if (var_s0 != temp_s2) {
            do {
                func_002C63C0(var_s0, arg0, &sp80, &sp70);
                var_s0 = *(u8 **)((u8 *)var_s0 + 0x38);
            } while (var_s0 != temp_s2);
        }
        amDraw_FlushPacket();
        func_00133780(0, 0);
    }
}
