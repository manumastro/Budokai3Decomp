/* Draft (not built): func_0023AEE0 at 0x0023AEE0, size 0x1A0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0x1C) + (var_v0_2 * 4)), 0); @ 273: _v0 = func_0022D860(*(*(s32 *)((u8 *)temp_s3 + 0x14) + ((var_v0 + var_s0) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023AEE0.s */

// src/unk/unk_23A890.c func_0023AEE0 cerr diff=-1/0
s32 A2d_AllocObj(s32, s32);
s32 BtlSys_GetSlot(void *);
s32 func_00228430(s32);
s32 func_00229800(s32, s32 *, s32, s32);
s32 func_0022D860(s32, s32);
extern void func_00228410(void);
void func_0023AEE0(s32 arg0) {
    s32 sp60;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_s0 = *(u8 **)((u8 *)gBtlSys + 0xE64);
    temp_s3 = *(u8 **)((u8 *)gBtlSys + 0xE6C);
    temp_s2 = &D_0058BF70 + (arg0 * 0x70) + 0x3A0;
    temp_s1 = BtlSys_GetSlot(gBtlSys);
    D_00470704 = (s32)(temp_s0);
    D_00470708 = 0;
    D_0047070C = 0x04001000;
    amModel_SetCurrent((s32)(temp_s0), 0x04001000);
    D_00470238 = 0;
    func_00228430(0);
    var_s0 = 0;
loop_6:
    if (var_s0 < 8) {
        var_v0 = 8;
        if (arg0 & 1) {

        } else {
            var_v0 = 0;
        }
        temp_v0 = func_0022D860(*(*(s32 *)((u8 *)temp_s3 + 0x14) + ((var_v0 + var_s0) * 4)), 0);
        temp_v1 = (var_s0 * 4) + temp_s2;
        var_s0 += 1;
        *(s32 *)((u8 *)temp_v1 + 0x30) = temp_v0;
        goto loop_6;
    }
    var_s0_2 = 0;
loop_14:
    if (var_s0_2 < 6) {
        var_v0_2 = 0x12;
        if (arg0 & 1) {

        } else {
            var_v0_2 = 0x10;
        }
        temp_v1_2 = (var_s0_2 * 4) + temp_s2;
        var_s0_2 += 1;
        *(s32 *)((u8 *)temp_v1_2 + 0x50) = A2d_AllocObj(*(*(s32 *)((u8 *)temp_s3 + 0x1C) + (var_v0_2 * 4)), 0);
        goto loop_14;
    }
    func_00229800(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)temp_s3 + 0x1C)) + 0xBC), &sp60, -1, 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    func_00228410();
    func_0023AB60(arg0, temp_s2, temp_s1, 1);
}
