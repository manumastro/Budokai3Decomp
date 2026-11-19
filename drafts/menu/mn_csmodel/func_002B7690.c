/* Draft (not built): func_002B7690 at 0x002B7690, size 0x170, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x150, original 0x170
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7690.s */

// src/menu/mn_csmodel.c func_002B7690 size diff=55/84
s32 func_0022BF80(void *);
s32 func_0022C060(void *, s32);
extern void func_0022CD00(void *);
void func_002B7690(void *arg0) {
    u8 *sp60;
    s32 sp64;
    s32 sp68;
    u8 *sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 var_s1;
    s32 var_v0;
    u8 **var_s0;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;

    var_v0 = 0x20;
    var_v1 = &sp60;
    var_s3 = gPracMode;
    var_s4 = arg0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(u8 **)((u8 *)var_s4 + 0);
    sp64 = *(s32 *)((u8 *)var_s4 + 4);
    sp68 = *(s32 *)((u8 *)var_s4 + 8);
    sp6C = *(u8 **)((u8 *)var_s4 + 0xC);
    sp70 = *(s32 *)((u8 *)var_s4 + 0x40);
    sp74 = *(s32 *)((u8 *)var_s4 + 0x44);
    sp78 = *(s32 *)((u8 *)var_s4 + 0x48);
    sp7C = *(s32 *)((u8 *)var_s4 + 0x50);
    temp_a0 = *(u8 **)((u8 *)var_s3 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp60;
    do {
        var_s2 = *var_s0;
        if ((var_s2 == *(u8 **)((u8 *)var_s4 + 0xC)) && (func_0022BF80(var_s2) == 0xFF) && !(*(u8 *)((u8 *)var_s4 + 0x60) & 1)) {
            func_0022D0E0(var_s2, 1);
            *(u8 *)((u8 *)var_s4 + 0x60) = (u8) (*(u8 *)((u8 *)var_s4 + 0x60) | 1);
            temp_v0 = func_0022D860((void *)(**(s32 **)((u8 *)(*(u8 **)((u8 *)var_s3 + 8)) + 0x14)), 0);
            *(u8 **)((u8 *)var_s4 + 0xC) = temp_v0;
            var_s2 = temp_v0;
        }
        if (var_s2 != NULL) {
            func_0022C060(var_s2, 0x3F800000);
            func_0022CD00(var_s2);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 8);
    func_002B7340(var_s4);
}
