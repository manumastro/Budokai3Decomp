/* Draft (not built): func_0027EA60 at 0x0027EA60, size 0x1AC, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 70 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x170, original 0x1AC
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027EA60.s */

// src/menu/mn_charasel.c func_0027EA60 size diff=70/92
extern void A2d_FlushList(void);
extern s32 gVsCharasel;
s32 func_00133B50(s32, s32);
s32 func_0022BF80(s32);
s32 func_0022C060(void *, s32);
void *func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern void func_0022C6B0(void *);
void func_0027EA60(u8 *arg0) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    u8 *sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 *var_s0;
    s32 *var_v1;
    s32 temp_s3;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_v0;

    var_v0 = 0x2C;
    var_v1 = &sp60;
    temp_s3 = gVsCharasel;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(s32 *)((u8 *)arg0 + 0xC);
    sp64 = *(s32 *)((u8 *)arg0 + 0x10);
    sp68 = *(s32 *)((u8 *)arg0 + 0x14);
    sp6C = *(s32 *)((u8 *)arg0 + 0x18);
    sp70 = *(s32 *)((u8 *)arg0 + 0x1C);
    sp74 = *(s32 *)((u8 *)arg0 + 0x20);
    sp78 = *(u8 **)((u8 *)arg0 + 0x24);
    sp7C = *(s32 *)((u8 *)arg0 + 0x28);
    sp80 = *(s32 *)((u8 *)arg0 + 0x2C);
    sp84 = *(s32 *)((u8 *)arg0 + 0x30);
    sp88 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp60;
    do {
        var_s2 = *var_s0;
        if (((s32)(var_s2) == (s32)(*(u8 **)((u8 *)arg0 + 0x24))) && !(*(u8 *)((u8 *)arg0 + 0x3C) & 1) && (func_0022BF80(var_s2) == 0xFF)) {
            func_0022D0E0(var_s2, 1);
            temp_v0 = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 8), 0);
            *(u8 **)((u8 *)arg0 + 0x24) = temp_v0;
            var_s2 = (s32) temp_v0;
            *(u8 *)((u8 *)arg0 + 0x3C) = (u8) (*(u8 *)((u8 *)arg0 + 0x3C) | 1);
        }
        if (var_s2 != 0) {
            func_0022C060((u8 *) var_s2, 0x3F800000);
            if (var_s1 == 0) {
                func_0022C6B0(*(u8 **)((u8 *)var_s2 + 0x30));
            } else {
                func_0022CD00((u8 *) var_s2);
            }
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xB);
    A2d_FlushList();
    func_00133B50(0, 0);
}
