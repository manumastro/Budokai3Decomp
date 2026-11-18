/* Draft (not built): func_002B7F00 at 0x002B7F00, size 0x168, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x168
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7F00.s */

// src/menu/mn_csmodel.c func_002B7F00 size diff=54/82
s32 Save_GetState();
s32 func_0022C060(void *, s32);
extern void func_0022CD00(void *);
extern void Save_Exit();
void func_002B7F00(u8 *arg0) {
    u8 *sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 var_s3;
    s32 var_v0;
    void (*var_v1_2)();
    u8 **var_s2;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s4;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    var_v1 = &sp60;
    D_00470238 = 0;
    var_v0 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(u8 **)((u8 *)temp_s0 + 0);
    sp64 = *(s32 *)((u8 *)temp_s0 + 4);
    sp68 = *(s32 *)((u8 *)temp_s0 + 8);
    sp6C = *(s32 *)((u8 *)temp_s0 + 0xC);
    sp70 = *(s32 *)((u8 *)temp_s0 + 0x40);
    sp74 = *(s32 *)((u8 *)temp_s0 + 0x44);
    temp_a0_2 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x1000);
    D_00470238 = 0;
    var_s3 = 0;
    var_s2 = &sp60;
    do {
        temp_s4 = *var_s2;
        if (temp_s4 != NULL) {
            func_0022C060(temp_s4, 0x3F800000);
            func_0022CD00(temp_s4);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 6);
    A2d_FlushList();
    if (Save_GetState() >= 3) {
        Save_Exit();
        *(s32 *)((u8 *)temp_s0 + 0x68) = 0x420C0000;
        *(s8 *)((u8 *)temp_s0 + 0x5D) = 3;
        var_v1_2 = func_002B89E0;
        *(s8 *)((u8 *)temp_s0 + 0x61) = 7;
        if (func_002B89E0 == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
