/* Draft (not built): func_0021CD80 at 0x0021CD80, size 0x3EC, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 942: D_004706A0 = NULL; @ 913: if (D_00470698 != NULL) {
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021CD80.s */

// src/unk/unk_21B130.c func_0021CD80 cerr diff=-1/0
s32 amCdFs_Close(void *, s32);
void *func_001A50F0(void *, s32);
s32 func_00240390();
s32 memcpy(void *, void *, s32);
extern s32 D_0046A430;
extern s32 D_0046A480;
extern s32 D_004E0600;
extern s32 D_004E0604;
extern void func_0023A840(void);
extern void func_0025A0E0(void);
extern void amFile_Load(void *);
extern void func_002CD870(void);
extern void func_002E98E0(void);
void func_0021CD80(void) {
    s32 *var_s0_2;
    s32 *var_a0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s8 var_s3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s5;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s7 = 0;
    var_s6 = 0;
    var_s4 = 0;
    var_s3 = 0;
    temp_s5 = gBtlSys;
    D_00470690 = (f32) D_004E0600;
    D_00470694 = (f32) D_004E0604;
    do {
        var_s0 = gBtlSys + var_s7;
        var_s1 = gBtlSys + var_s6 + 0xCB0;
        if (var_s3 == -1) {
            var_s2 = NULL;
        } else {
            var_s2 = var_s0 + 0x110;
        }
        *(s8 *)((u8 *)(temp_s5 + var_s3) + 0xCA0) = var_s3;
        memset(var_s0, 0, 0x190);
        var_a0 = 0;
        *(s16 *)((u8 *)var_s0 + 0) = (s16) *(s16 *)((u8 *)var_s1 + 0x10);
        *(s32 *)((u8 *)var_s0 + 8) = (s32) *(s32 *)((u8 *)var_s1 + 0x24);
        *(s32 *)((u8 *)var_s0 + 4) = (s32) *(s32 *)((u8 *)var_s1 + 0x28);
        *(s32 *)((u8 *)var_s0 + 0x10) = (s32) *(s32 *)((u8 *)var_s1 + 0x2C);
        *(s32 *)((u8 *)var_s0 + 0xC) = (s32) *(s32 *)((u8 *)var_s1 + 0x30);
        *(s16 *)((u8 *)var_s0 + 2) = (s16) *(s16 *)((u8 *)var_s1 + 0x14);
        *(s16 *)((u8 *)var_s0 + 0x1C) = (s16) *(s16 *)((u8 *)var_s1 + 0x34);
loop_5:
        *(s16 *)((u8 *)var_s0 + 0x1E) = (s16) *(s16 *)((u8 *)var_s1 + 0x36);
        if (*(s16 *)((u8 *)var_s0 + 0x1E) == 0x19C) {
            var_s4 = 1;
        }
        var_a0 += 1;
        var_s1 += 2;
        var_s0 += 4;
        if (var_a0 < 7) {
            goto loop_5;
        }
        *(s16 *)((u8 *)var_s2 + 0x58) = 0x64;
        var_s3 += 1;
        *(s16 *)((u8 *)var_s2 + 0x5A) = 0x64;
        var_s6 += 0x50;
        *(s16 *)((u8 *)var_s2 + 0x4E) = -2;
        var_s7 += 0x190;
    } while (var_s3 < 4);
    var_a2 = 0;
    if (var_s4 == 1) {
        var_a3 = 0;
        do {
            if (var_a2 == -1) {
                var_a0_2 = NULL;
            } else {
                var_a0_2 = (s32 *)(gBtlSys + var_a3 + 0x110);
            }
            var_a2 += 1;
            var_a3 += 0x190;
            *var_a0_2 |= 0x800;
        } while (var_a2 < 4);
    }
    memcpy(temp_s5 + 0x650, temp_s5, 0x650);
    if (D_00470698 != NULL) {
        **(u8 ***)((u8 *)(&D_0046A470) + 8) = *(u8 **)((u8 *)D_00470698 + 0x54);
        *(u8 **)((u8 *)D_00470698 + 0x54) = NULL;
        amCdFs_Close((void *)(D_00470698), 0);
        D_00470698 = (s32)(NULL);
        amFile_Load(**(u8 ***)((u8 *)(&D_0046A470) + 8));
    }
    var_s1_2 = 0;
    var_s0_2 = &D_0046A480;
    do {
        **(u8 ***)((u8 *)var_s0_2 + 4) = func_001A50F0(*(u8 **)((u8 *)temp_s5 + 0xE58), *(s32 *)((u8 *)var_s0_2 + 0));
        amFile_Load(**(u8 ***)((u8 *)var_s0_2 + 4));
        var_s1_2 += 1;
        var_s0_2 += 8;
    } while (var_s1_2 < 0xD);
    if (D_004706A0 != NULL) {
        *(u8 **)((u8 *)temp_s5 + 0xE5C) = (u8 *) *(u8 **)((u8 *)D_004706A0 + 0x54);
        *(u8 **)((u8 *)D_004706A0 + 0x54) = NULL;
        amFile_Load(*(u8 **)((u8 *)temp_s5 + 0xE5C));
        *(u8 **)((u8 *)temp_s5 + 0xE6C) = func_001A50F0(*(u8 **)((u8 *)temp_s5 + 0xE5C), 0);
        *(u8 **)((u8 *)temp_s5 + 0xE64) = func_001A50F0(*(u8 **)((u8 *)temp_s5 + 0xE5C), 1);
        temp_a0 = *(u8 **)((u8 *)temp_s5 + 0xE6C);
        if (temp_a0 != NULL) {
            amFile_Load(temp_a0);
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s5 + 0xE64);
        if (temp_a0_2 != NULL) {
            amFile_Load(temp_a0_2);
        }
        D_004706A0 = NULL;
    }
    D_00470680 = 0x80000000;
    D_00470684 = *(&D_0046A430 + (*(s16 *)((u8 *)temp_s5 + 0xDF0) * 4));
    func_00228430(0);
    func_002284D0(0);
    *(f32 *)((u8 *)gBtlSys + 0x640) = (f32) *(f32 *)((u8 *)(temp_s5 + 0xDF0) + 4);
    temp_s0 = gBtlSys;
    if (*(f32 *)((u8 *)temp_s0 + 0xDF4) != -2.0f) {
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0xE60);
        D_00470704 = (s32)(temp_a0_3);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x04000000);
        D_00470238 = 0;
        if (*(f32 *)((u8 *)temp_s0 + 0xDF4) == -1.0f) {
            var_v0 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE68)) + 0x14) + ((*(s16 *)((u8 *)gBtlSys + 0xDF0) == 2) * 4)), 0x447A0000);
        } else {
            var_v0 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE68)) + 0x14) + ((*(s16 *)((u8 *)gBtlSys + 0xDF0) == 2) * 4)), 0);
        }
        D_0047068C = var_v0;
    }
    func_0023A840();
    func_00240390();
    func_0025A0E0();
    func_002CD870();
    func_002E98E0();
    func_00228410();
}
