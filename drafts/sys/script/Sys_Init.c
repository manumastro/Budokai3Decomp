/* Draft (not built): Sys_Init at 0x0014DC10, size 0x89C, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 228 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x784, original 0x89C
 * Original: asm/nonmatchings/sys/script/Sys_Init.s */

// src/sys/script.c Sys_Init size diff=228/481
s32 amAdx_Init(s32, s32, s32 *);
s32 amCdFs_Init(s32, s32, s32, s32 *);
s32 amDma_Init(s32, s32);
s32 amDraw_SetScissor(s32, s32);
s32 amHeap_Init(s32 *);
s32 amPkt_Init(s32, s32);
s32 amTask_Init(s32, s32);
s32 amTask_SetPause(s32 *, s32);
s32 amVram_Apply(s32);
s32 func_00101190(s32 *);
s32 func_00112510();
s32 func_00113460(s32 *, s32, s32);
s32 func_00113940();
s32 func_00113990(s32 *);
s32 func_00118F20(s32);
s32 func_00119420(s32);
s32 func_00119AF8(s32);
void *func_00124B70(s32 *);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133420(s32);
s32 func_00133980(s32, s32, s32, s32);
s32 func_00133CE0(s32);
s32 func_00148360(s32);
s32 func_00157718(s32);
s32 func_001A4540(s32);
s32 func_001F0860(s32, s32);
s32 printf(s32 *);
s32 sceFsReset();
s32 sceSifInitRpc(s32);
extern s32 D_00400B00;
extern s32 D_00400B30;
extern s32 D_00400B40;
extern s32 D_0045F710;
extern s32 D_0045F810;
extern s32 D_0045F830;
extern s32 D_0045F850;
extern s32 D_0045F870;
extern s32 D_0045F880;
extern s32 D_0045F8A0;
extern s32 D_0045F8C0;
extern s32 D_0045F8E0;
extern s32 D_0045F900;
extern s32 D_0045F920;
extern s32 D_0045F940;
extern s32 D_0045F950;
extern s32 D_0045F970;
extern s32 D_0045F990;
extern s32 D_0045F9B0;
extern s32 D_0045F9D0;
extern s32 D_0045F9F0;
extern s32 D_0045FA10;
extern s32 D_0045FA30;
extern s32 D_0045FA50;
extern s32 D_0045FA70;
extern s32 D_0045FA90;
extern s32 D_0045FAB0;
extern s32 D_0045FAD0;
extern s32 D_0045FAF0;
extern s32 D_0045FB10;
extern s32 D_0045FB30;
extern s32 D_0045FB50;
extern s32 D_0045FB70;
extern s32 D_0045FB90;
extern s32 D_0045FBB0;
extern s32 D_0045FBD0;
extern s32 D_0045FBD8;
extern s32 D_0045FBE0;
extern s32 D_0045FBE8;
extern s32 D_0045FBF0;
extern s32 D_0045FBF8;
extern s8 D_004680E0;
extern s32 *D_0047CAA8;
extern s32 *D_0047CAAC;
extern s32 *D_0047CAB8;
extern s32 *D_0047CABC;
extern s32 D_1FFFC00;
extern s32 func_00147560;
extern s32 func_001A4830;
extern s32 func_001A4850;
extern s32 func_001A4920;
extern s32 func_001A4AF0;
extern s32 func_001A5700;
extern s32 func_0020A0F0;
extern s32 func_00219E00;
extern void amMtxStack_Init(void);
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_001A5160(void *);
extern void func_001A4860(void);
extern void func_001A48C0(void);
extern void amFile_AddLoader(void *, void *);
extern void Btl_AddFileLoaders(void);
extern void func_0022E0B0(void *);
extern void *D_0047CAA0[];
extern void func_001A4CF0();
extern void amDraw3d_SetDefaultRegs(void);
extern void amMc_Init(void);
extern char D_003F0800[];
extern void amSofdec_Init(void);
extern void func_0012EB20(void);
extern void amNode_InitPool(void);
extern void amSound_Init(void);
extern void func_00147590(void);
extern void func_00147600(void);
extern void func_00148150(void);
extern void func_001A3340(void);
extern void func_002D04B0(void *);
extern void func_0021A120(void);
extern void func_0013AFA0(void *);
extern void func_002A8990(void);
extern s32 D_0047CAB0;
extern s32 D_0047CAB4;
void Sys_Init(s32 arg0, s32 arg1) {
    s32 sp40;
    s32 spA0;
    s32 spC0;
    s32 spF0;
    s32 *var_s2;
    u8 *temp_v0;

    func_00147590();
    sceSifInitRpc(0);
    printf(&D_0045F810);
    func_00118F20(0);
    printf(&D_0045F830);
loop_1:
    if (func_00113990(&D_0045F850) == 0) {
        goto loop_1;
    }
loop_2:
    if (func_00113940() == 0) {
        goto loop_2;
    }
    sceSifInitRpc(0);
    func_00112510();
    func_00147600();
    printf(&D_0045F810);
    func_00118F20(0);
    printf(&D_0045F870);
    func_00119AF8(2);
    sceFsReset();
    func_00119420(0);
    if (func_00113460(&D_0045F880, 0, 0) >= 0) {
        goto block_5;
    }
loop_4:
    printf(&D_0045F8A0);
    if (func_00113460(&D_0045F880, 0, 0) < 0) {
        goto loop_4;
    }
block_5:
    *(s128 *)((u8 *)(&spC0) + 0) = (s128) *(s128 *)((u8 *)(&D_00400B00) + 0);
    *(s128 *)((u8 *)(&spC0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00400B00) + 0x10);
    *(s64 *)((u8 *)(&spC0) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00400B00) + 0x20);
    *(f32 *)((u8 *)(&spC0) + 0x28) = (f32) *(f32 *)((u8 *)(&D_00400B00) + 0x28);
    func_00148150();
    func_00148360(0x3F800000);
    if (func_00113460(&D_0045F8C0, 0, 0) >= 0) {
        goto block_8;
    }
loop_7:
    printf(&D_0045F8E0);
    if (func_00113460(&D_0045F8C0, 0, 0) < 0) {
        goto loop_7;
    }
block_8:
    if (func_00113460(&D_0045F900, 0, 0) >= 0) {
        goto block_10;
    }
loop_9:
    printf(&D_0045F920);
    if (func_00113460(&D_0045F900, 0, 0) < 0) {
        goto loop_9;
    }
block_10:
    *(s64 *)((u8 *)(&spF0) + 0) = (s64) *(s64 *)((u8 *)(&D_00400B30) + 0);
    *(f32 *)((u8 *)(&spF0) + 8) = (f32) *(f32 *)((u8 *)(&D_00400B30) + 8);
    amCdFs_Init(arg0, arg1, 4, &D_0045F940);
    *(s128 *)((u8 *)(&spA0) + 0) = (s128) *(s128 *)((u8 *)(&D_00400B40) + 0);
    *(f32 *)((u8 *)(&spA0) + 0x10) = (f32) *(f32 *)((u8 *)(&D_00400B40) + 0x10);
    amAdx_Init(5, 5, &spA0);
    if (func_00113460(&D_0045F950, 0, 0) >= 0) {
        goto block_12;
    }
loop_11:
    printf(&D_0045F970);
    if (func_00113460(&D_0045F950, 0, 0) < 0) {
        goto loop_11;
    }
block_12:
    if (func_00113460(&D_0045F990, 0, 0) >= 0) {
        goto block_14;
    }
loop_13:
    printf(&D_0045F9B0);
    if (func_00113460(&D_0045F990, 0, 0) < 0) {
        goto loop_13;
    }
block_14:
    if (func_00113460(&D_0045F9D0, 0, 0) >= 0) {
        goto block_16;
    }
loop_15:
    printf(&D_0045F9F0);
    if (func_00113460(&D_0045F9D0, 0, 0) < 0) {
        goto loop_15;
    }
block_16:
    if (func_00113460(&D_0045FA10, 0, 0) >= 0) {
        goto block_18;
    }
loop_17:
    printf(&D_0045FA30);
    if (func_00113460(&D_0045FA10, 0, 0) < 0) {
        goto loop_17;
    }
block_18:
    if (func_00113460(&D_0045FA50, 0, 0) >= 0) {
        goto block_20;
    }
loop_19:
    printf(&D_0045FA70);
    if (func_00113460(&D_0045FA50, 0, 0) < 0) {
        goto loop_19;
    }
block_20:
    if (func_00113460(&D_0045FA90, 0, 0) >= 0) {
        goto block_22;
    }
loop_21:
    printf(&D_0045FAB0);
    if (func_00113460(&D_0045FA90, 0, 0) < 0) {
        goto loop_21;
    }
block_22:
    amSound_Init();
    if (D_004680E0 == 0) {
        goto loop_28;
    }
    if (func_00113460(&D_0045FAD0, 0, 0) >= 0) {
        goto block_25;
    }
loop_24:
    printf(&D_0045FAF0);
    if (func_00113460(&D_0045FAD0, 0, 0) < 0) {
        goto loop_24;
    }
block_25:
    func_001A4540(0xF);
    goto loop_28;
block_27:
    printf(&D_0045FB10);
loop_28:
    if (func_00113460(&D_0045FB30, 0, 0) < 0) {
        goto block_27;
    }
    if (func_00113460(&D_0045FB50, 0, 0) >= 0) {
        goto block_31;
    }
loop_30:
    printf(&D_0045FB70);
    if (func_00113460(&D_0045FB50, 0, 0) < 0) {
        goto loop_30;
    }
block_31:
    amMc_Init();
    if (func_00113460(&D_0045FB90, 0, 0) >= 0) {
        goto block_33;
    }
loop_32:
    printf(&D_0045FBB0);
    if (func_00113460(&D_0045FB90, 0, 0) < 0) {
        goto loop_32;
    }
block_33:
    func_001A3340();
    amDma_Init(0x200, 1);
    amVram_Apply(2);
    amPkt_Init((s32)(func_00124940(0x40, 0x100000)), 0x100000);
    func_0012EB20();
    amMtxStack_Init();
    func_0013AFA0(NULL);
    amDraw3d_SetDefaultRegs();
    func_00133CE0(0);
    func_00131B90(&sp40);
    func_00131F00(&sp40, 0, 0);
    func_00132DF0(D_003F0800);
    amDraw_SetScissor(0, 0);
    func_00133420(1);
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    func_00157718(0);
    amSofdec_Init();
    amNode_InitPool();
    amTask_Init(0x100, 0x40);
    amTask_SetPause(&D_0045F710, 0xE);
    var_s2 = &D_1FFFC00;
loop_34:
    temp_v0 = func_00124B70(var_s2);
    if (temp_v0 != NULL) {
        goto block_36;
    }
    goto loop_34;
block_36:
    func_00124BC8(temp_v0);
    amHeap_Init(var_s2);
    *D_0047CAA0 = func_001A4CF0;
    D_0047CAB8 = &func_001A4AF0;
    D_0047CABC = &func_001A4920;
    D_0047CAB0 = (s32)(func_001A48C0);
    D_0047CAB4 = (s32)(func_001A4860);
    D_0047CAA8 = &func_001A4850;
    D_0047CAAC = &func_001A4830;
    func_0021A120();
    amFile_AddLoader(&D_0045FBD0, func_0022E0B0);
    amFile_AddLoader(&D_0045FBD8, func_001A5160);
    amFile_AddLoader(&D_0045FBE0, &func_001A5700);
    amFile_AddLoader(&D_0045FBE8, &func_0020A0F0);
    amFile_AddLoader(&D_0045FBF0, &func_00219E00);
    amFile_AddLoader(&D_0045FBF8, func_002D04B0);
    Btl_AddFileLoaders();
    func_002A8990();
    func_001F0860(arg0, arg1);
    func_00101190(&func_00147560);
    return;
}
