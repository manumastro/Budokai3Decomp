/* Draft (not built): func_0027AAE0 at 0x0027AAE0, size 0x1B0, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0 + 8) * 2) + sp) + 0x98); @ 344: *)((u8 *)temp_s3 + 8)) + 0x1C) + (*(var_s0 + (*(u8 *)((u8 *)arg0 + 7) * 2)) * 4)), 0);
 * Original: asm/nonmatchings/menu/ess_trade/func_0027AAE0.s */

// src/menu/ess_trade.c func_0027AAE0 cerr diff=-1/0
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
extern s32 D_004532B0;
extern s128 D_004532D0;
extern f32 D_00470028;
extern s16 D_0047002C;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470810;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_0027AAE0(u8 *arg0) {
    s128 sp60;
    s32 *sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp98;
    s128 *var_s0;
    s16 var_v0_2;
    s32 **var_s1;
    s32 **var_v1;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_s3;

    var_v1 = &sp70;
    temp_s3 = D_00470810;
    *(s128 *)((u8 *)(&sp80) + 0) = (s128) *(s128 *)((u8 *)(&D_004532B0) + 0);
    var_v0 = 0x10;
    *(s16 *)((u8 *)(&sp80) + 0x10) = (s16) *(s16 *)((u8 *)(&D_004532B0) + 0x10);
    *(f32 *)((u8 *)(&sp98) + 0) = (f32) D_00470028;
    *(s16 *)((u8 *)(&sp98) + 4) = (s16) D_0047002C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp70 = (s32 *)(arg0 + 0x38);
    sp74 = (s32)(arg0 + 0x3C);
    sp78 = (s32)(arg0 + 0x40);
    sp7C = (s32)(arg0 + 0x48);
    sp60 = D_004532D0;
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x3000, *(s128 *)((u8 *)(&D_004532B0) + 0), &sp80);
    D_00470238 = 0;
    var_s2 = 0;
    var_s1 = &sp70;
    var_s0 = &sp60;
    do {
        temp_a0_2 = **var_s1;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        temp_v0 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C) + (*(var_s0 + (*(u8 *)((u8 *)arg0 + 7) * 2)) * 4)), 0);
        var_s2 += 1;
        var_s0 += 4;
        **var_s1 = temp_v0;
        var_s1 += 4;
    } while (var_s2 < 4);
    if (*(u8 *)((u8 *)arg0 + 7) != 0) {
        var_v0_2 = *(s16 *)((u8 *)((*(u8 *)((u8 *)arg0 + 8) * 2) + sp) + 0x98);
    } else {
        var_v0_2 = *(s16 *)((u8 *)((*(u8 *)((u8 *)arg0 + 8) * 2) + sp) + 0x80);
    }
    *(s32 *)((u8 *)arg0 + 0x44) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C) + (((s64) ((s64) var_v0_2 << 0x30) >> 0x30) * 4)), 0);
}
