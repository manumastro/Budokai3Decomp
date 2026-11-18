/* Draft (not built): func_0023B080 at 0x0023B080, size 0x340, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 148 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023B080.s */

// src/unk/unk_23A890.c func_0023B080 diff diff=148/208
void *BtlSys_GetSlot(s32, s32);
s32 func_0013B110(s32);
s32 func_0021BEA0(s32, s32);
s32 func_00228430(s32);
s32 func_0022B900(s32, s32 *, s32);
extern void func_00228410(void);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void func_00209D20(void *);
extern void func_00208D60();
extern void func_00209C50(void);
extern void func_0013AFA0(void *);
void func_0023B080(s32 arg0) {
    s32 sp60;
    s32 sp64;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a1;
    s32 temp_v0;
    u8 *temp_a0_10;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *var_a0;

    temp_v0 = func_0021C3D0(0);
    temp_s4 = gBtlSys;
    temp_s1 = &D_0058BF70 + (arg0 * 0x64) + 0x210;
    temp_s3 = BtlSys_GetSlot(temp_v0, arg0 * 5);
    temp_a1 = *(s32 *)((u8 *)temp_s3 + 0);
    temp_a0 = temp_a1 & 0x1C000;
    temp_s2 = func_0021C660(temp_v0);
    if (temp_a0 != 0x10000) {
        if ((temp_a0 != 0x8000) && (temp_a0 != 0x4000)) {
            return;
        }
        func_0023B7D0(arg0, temp_a1);
        temp_a0_2 = *(u8 **)((u8 *)temp_s4 + 0xE84);
        D_00470704 = (s32)(temp_a0_2);
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        func_0022B900(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C)) + 8), &sp60, 0);
        func_00228410();
        sp64 |= 0x18;
        func_0022C6B0((s32)((void *)(&sp60)));
        func_0023C690(arg0, *(s32 *)((u8 *)temp_s2 + 0x10), *(s32 *)((u8 *)temp_s2 + 0x14));
        func_0022C6B0((s32)((void *)(*(u8 **)((u8 *)temp_s1 + 0x4C))));
        temp_a0_3 = *(u8 **)((u8 *)temp_s1 + 4);
        if ((temp_a0_3 != NULL) && (*(s32 *)((u8 *)temp_s3 + 0) & 0x8000)) {
            func_0022C6B0((s32)((void *)(temp_a0_3)));
        }
        if ((func_0021C280(0x100000) != 0) && (Input_IsHeld(0x80000000) != 0)) {
            temp_a0_4 = *(s32 *)((u8 *)temp_s1 + 0xC);
            if (temp_a0_4 != 0) {
                func_0021BEA0(temp_a0_4, 0x1A);
                func_0022C560(*(s32 *)((u8 *)temp_s1 + 0xC));
            }
        }
    } else {
        if (*(f32 *)((u8 *)temp_s3 + 0x24) < 40.0f) {
            func_0023B7D0(arg0, temp_a1);
            temp_a0_5 = *(u8 **)((u8 *)temp_s4 + 0xE84);
            D_00470704 = (s32)(temp_a0_5);
            D_0047070C = 0x04010000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_5), 0x04010000);
            D_00470238 = 0;
            func_00228430(0);
            func_0022B900(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x1C)) + 8), &sp60, 0);
            func_00228410();
            sp64 |= 0x18;
            func_0022C6B0((s32)((void *)(&sp60)));
            func_0023C690(arg0, *(s32 *)((u8 *)temp_s2 + 0x10), *(s32 *)((u8 *)temp_s2 + 0x14));
            func_0022C6B0((s32)((void *)(*(u8 **)((u8 *)temp_s1 + 0x4C))));
        }
        func_0021BEA0(*(s32 *)((u8 *)temp_s1 + 0x60), 0x18);
        func_0022C560(*(s32 *)((u8 *)temp_s1 + 0x60));
        if ((func_0021C280(0x100000) != 0) && (Input_IsHeld(0x80000000) != 0)) {
            temp_a0_6 = *(s32 *)((u8 *)temp_s1 + 0xC);
            if (temp_a0_6 != 0) {
                func_0021BEA0(temp_a0_6, 0x1A);
                func_0022C560(*(s32 *)((u8 *)temp_s1 + 0xC));
            }
        }
        func_0013B0B0(NULL);
        func_0013AFA0(NULL);
        func_00132DF0(NULL);
        temp_a0_7 = *(s32 *)((u8 *)temp_s4 + 0xE80);
        if (temp_a0_7 != 0) {
            func_00208D60(temp_a0_7);
        }
        temp_a0_8 = *(u8 **)((u8 *)temp_s4 + 0xE78);
        if (temp_a0_8 != NULL) {
            amModel_SetCurrent((s32)(temp_a0_8), 0x04002000);
        }
        func_00209D20(NULL);
        temp_a0_9 = *(u8 **)((u8 *)temp_s1 + 0x54);
        if (temp_a0_9 != NULL) {
            func_00208D70((s32)((void *)(temp_a0_9)));
        }
        temp_a0_10 = *(u8 **)((u8 *)temp_s1 + 0x58);
        if (temp_a0_10 != NULL) {
            func_00208D70((s32)((void *)(temp_a0_10)));
        }
        var_a0 = NULL;
        if (gBattle != NULL) {
            var_a0 = gBattle + 0x60;
        }
        func_00132DF0(var_a0);
        func_00209C50();
        func_0013B110(1);
    }
}
