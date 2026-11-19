/* Draft (not built): func_002B5620 at 0x002B5620, size 0x27C, segment unk/unk_2B5460 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x288, original 0x27C
 * Original: asm/nonmatchings/unk/unk_2B5460/func_002B5620.s */

// src/unk/unk_2B5460.c func_002B5620 size diff=68/162
s32 amDraw_SetScissor(s128 *, s32);
s32 func_00136E80(s32, s32, s16, s32);
extern s128 D_00455300;
extern s128 D_00455310;
extern s128 D_00455320;
extern s128 D_00455330;
extern s128 D_00455340;
extern s16 D_0046EB80;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void amModel_SetCurrent();
void func_002B5620(u8 *arg0) {
    f32 sp90;
    f32 sp94;
    s128 spA0;
    f32 spB0;
    f32 spB4;
    f32 spC0;
    f32 spC4;
    s128 spD0;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s6;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f20;
    s16 *var_s3;
    s16 temp_a2;
    s64 var_s4;
    u8 *temp_a1;
    u8 *temp_t1;
    u8 *var_s0;
    u8 *var_s5;

    var_s0 = arg0;
    var_s5 = (unsigned char *)(gHelp);
    var_f20 = 0.0f;
    spD0 = D_00455300;
    amDraw_SetScissor(&spD0, 0);
    spC0 = (s128) D_00455310;
    spB0 = (s128) D_00455320;
    spA0 = D_00455330;
    sp90 = (s128) D_00455340;
    amModel_SetCurrent(*(u8 **)((u8 *)var_s5 + 0x18), 0xFF00, &spA0, D_00455320);
    var_s3 = &D_0046EB80;
    var_s4 = 0;
    var_s3 = &D_0046EB80;
    var_s2 = &spC4;
    var_s1 = &spB4;
    var_s6 = &sp94;
    do {
        if (*(s64 *)((u8 *)var_s5 + 0x20) & (1 << var_s4)) {
            temp_a1 = *(u8 **)((u8 *)var_s5 + 0x18);
            temp_a2 = *var_s3;
            temp_f3 = (58.0f + var_f20) - *(f32 *)((u8 *)var_s0 + 0);
            temp_t1 = temp_a1 + *(*(s32 *)((u8 *)temp_a1 + 0x14) + temp_a1 + ((temp_a2 - *(s32 *)((u8 *)temp_a1 + 0x18)) * 4));
            *var_s2 = temp_f3;
            temp_f2 = (f32) *(s16 *)((u8 *)temp_t1 + 0x12);
            var_f20 += 5.0f + temp_f2;
            *var_s1 = temp_f3 + temp_f2;
            if (!(temp_f3 < (48.0f - temp_f2)) && (temp_f3 <= 355.0f)) {
                spB0 = spC0 + (f32) *(s16 *)((u8 *)temp_t1 + 0x10);
                sp90 = (f32) *(s16 *)((u8 *)temp_t1 + 0x10);
                *var_s6 = (f32) *(s16 *)((u8 *)temp_t1 + 0x12);
                func_00136E80(0x40001E24, 0, temp_a2, 0x44);
                func_00137560(&spC0, &spA0);
                func_00137560(&spB0, &sp90);
                amDraw_FlushPacket();
            }
        }
        var_s4 += 1;
        var_s3 += 2;
    } while (var_s4 < 0x3C);
    amDraw_SetScissor(NULL, 0);
    temp_f20 = var_f20 + 5.0f;
    if (temp_f20 < 307.0f) {
        var_f0 = 0.0f;
    } else {
        var_f0 = temp_f20 - 307.0f;
    }
    *(f32 *)((u8 *)var_s0 + 4) = var_f0;
}
