/* Draft (not built): func_002D0B60 at 0x002D0B60, size 0x124, segment unk/unk_2D04B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x104, original 0x124
 * Original: asm/nonmatchings/unk/unk_2D04B0/func_002D0B60.s */

// src/unk/unk_2D04B0.c func_002D0B60 size diff=39/65
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002D0B60(u8 *arg0) {
    u8 *sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 var_s2;
    s32 var_v0;
    u8 **var_s1;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s3;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    var_v1 = &sp50;
    D_00470238 = 0;
    var_v0 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp50 = *(u8 **)((u8 *)temp_s0 + 8);
    sp54 = *(s32 *)((u8 *)temp_s0 + 0xC);
    sp58 = *(s32 *)((u8 *)temp_s0 + 0x10);
    sp5C = *(s32 *)((u8 *)temp_s0 + 0x14);
    sp60 = *(s32 *)((u8 *)temp_s0 + 0x24);
    sp64 = *(s32 *)((u8 *)temp_s0 + 0x2C);
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x1000);
    D_00470238 = 0;
    var_s2 = 0;
    var_s1 = &sp50;
    do {
        temp_s3 = *var_s1;
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 6);
    if ((s32) *(u8 *)((u8 *)temp_s0 + 0x37) >= 3) {
        func_002D0530(temp_s0);
    }
    A2d_FlushList();
}
