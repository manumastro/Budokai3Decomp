/* Draft (not built): func_0030BFC0 at 0x0030BFC0, size 0x11C, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x114, original 0x11C
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030BFC0.s */

// src/unk/unk_30B130.c func_0030BFC0 size diff=38/69
s32 func_00228240(s32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32 *);
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gArenaRegCharList;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_0030BFC0(Part30C *arg0) {
    s32 sp70;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    u8 *spC8;
    s32 spCC;
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s2;
    s32 var_s4;
    s32 var_v0;
    u8 **var_s3;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *var_s5;

    var_v1 = &spC8;
    var_v0 = 8;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    spC8 = *(u8 **)((u8 *)arg0 + 0x5C);
    spCC = *(s32 *)((u8 *)arg0 + 0x60);
    temp_a0 = *(u8 **)((u8 *)gArenaRegCharList + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x4000, gArenaRegCharList);
    D_00470238 = 0;
    var_s4 = 0;
    var_s3 = &spC8;
    var_s2 = &sp88;
    var_s1 = &sp84;
    var_s0 = &sp80;
    do {
        var_s5 = *var_s3;
        if (var_s5 != NULL) {
            func_002284D0(&sp70);
            func_00228430(0);
            *var_s2 = 0x3F800000;
            *var_s1 = 0x3F800000;
            *var_s0 = 0x3F800000;
            func_00228240(&sp70);
            func_0022C060(var_s5, 0x3F800000);
            func_0022CD00(var_s5);
            func_00228410();
        }
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
}
