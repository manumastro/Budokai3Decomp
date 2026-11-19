/* Draft (not built): func_003075B0 at 0x003075B0, size 0x224, segment unk/unk_3074C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A8, original 0x224
 * Original: asm/nonmatchings/unk/unk_3074C0/func_003075B0.s */

// src/unk/unk_3074C0.c func_003075B0 size diff=61/170
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
s32 func_001363D0(s32, s32, s128 *, s32);
s32 func_00136870(s32, s32, s128 *, s32);
s32 func_00137B60(f32 *);
extern s128 D_00458F20;
extern s128 D_00458F30;
extern s128 D_00458F40;
extern void amDraw_FlushPacket(void);
void func_003075B0(u8 *arg0) {
    s128 sp80;
    s128 sp90;
    f32 spA0;
    f32 sp110;
    f32 sp114;
    f32 *var_s1;
    f32 *var_s2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 var_f2;
    f32 var_f2_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 *temp_v0;

    var_s4 = 0xC000;
    sp110 = (s128) D_00458F20;
    sp110 = *(f32 *)((u8 *)arg0 + 0x34);
    sp114 = *(f32 *)((u8 *)arg0 + 0x38);
    sp90 = D_00458F30;
    sp80 = D_00458F40;
    func_00136870(2, 0x900, &sp90, -1);
    func_00137B60(&sp110);
    var_s2 = &spA0;
    var_s3 = 0;
    var_s1 = var_s2;
    do {
        temp_v0 = arg0 + var_s3;
        temp_v0_2 = *(u8 *)((u8 *)temp_v0 + 0x16);
        if ((s32) temp_v0_2 >= 0) {
            var_f2 = (f32) temp_v0_2;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        temp_f20 = (*(f32 *)((u8 *)arg0 + 0x3C) * var_f2) / 20.0f;
        *(f32 *)((u8 *)var_s1 + 0) = *(f32 *)((u8 *)arg0 + 0x34) + (temp_f20 * amMath_CosI(var_s4));
        temp_v0_3 = *(u8 *)((u8 *)temp_v0 + 0x16);
        if ((s32) temp_v0_3 >= 0) {
            var_f2_2 = (f32) temp_v0_3;
        } else {
            var_f2_2 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
        }
        temp_f20_2 = (*(f32 *)((u8 *)arg0 + 0x3C) * var_f2_2) / 20.0f;
        *(f32 *)((u8 *)var_s1 + 4) = (f32) (*(f32 *)((u8 *)arg0 + 0x38) + (temp_f20_2 * amMath_SinI(var_s4)));
        *(s32 *)((u8 *)var_s1 + 8) = 0x3F800000;
        *(s32 *)((u8 *)var_s1 + 0xC) = 0x3F800000;
        func_00137B60(var_s1);
        var_s3 += 1;
        var_s4 += 0x2492;
        var_s1 += 0x10;
    } while (var_s3 < 7);
    func_00137B60(&spA0);
    amDraw_FlushPacket();
    func_001363D0(1, 0x100, &sp80, 0x44);
    var_s0 = 0;
    do {
        func_00137B60(var_s2);
        var_s0 += 1;
        var_s2 += 0x10;
    } while (var_s0 < 7);
    func_00137B60(&spA0);
    amDraw_FlushPacket();
}

/* Similar function already in C: StrSelect_DrawRadar (src/story/str_select.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void StrSelect_DrawRadar(StrSelectWork *w) {
    Vec4 pos;
    Vec4 pts[7];
    Vec4 c1;
    Vec4 c2;
    f32 r;
    s32 a;
    s32 i;
    Vec4 *q;
    Vec4 *p;
    s32 j;

    a = 0xC000;
    pos = D_00457E80;
    pos.x = w->f44;
    pos.y = w->f48;
    c1 = D_00457E90;
    c2 = D_00457EA0;
    func_00136870(2, 0x900, &c1, -1, 0x44, 5);
    func_00137B60(&pos);
    q = pts;
    p = q;
    for (i = 0; i < 7; i++) {
        r = w->f4C * w->f58[i] / 20.0f;
        p->x = w->f44 + r * amMath_CosI(a);
        r = w->f4C * w->f58[i] / 20.0f;
        p->y = w->f48 + r * amMath_SinI(a);
        p->z = 1.0f;
        p->w = 1.0f;
        func_00137B60(p);
        a += 0x2492;
        p++;
    }
    func_00137B60(pts);
    amDraw_FlushPacket();
    func_001363D0(1, 0x100, &c2, 0x44);
    for (j = 0; j < 7; j++) {
        func_00137B60(q);
        q++;
    }
    func_00137B60(pts);
    amDraw_FlushPacket();
}
#endif
