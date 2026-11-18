/* Draft (not built): func_002DAE10 at 0x002DAE10, size 0x2CC, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 113 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x2CC
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DAE10.s */

// src/unk/unk_2D9510.c func_002DAE10 size diff=113/145
s32 Help_Open(s32, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022C7D0(s32, s32, s32);
s32 func_002DDD40();
extern s32 D_00470168;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern char D_004E05DC[];
extern void func_002D4BC0(void);
extern void func_002D5D70(void);
extern void func_002D9DE0(void);
void func_002DAE10(void) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 var_s0;
    s32 var_s1;
    s8 *var_s2;
    u8 *temp_a0;
    u8 *var_s3;

    var_s2 = (s8 *)(D_004E05DC[0]);
    var_s2 = (s8 *)(D_004E05DC[0]);
    var_s3 = (u8 *)(gOptionWork);
    var_s1 = *D_00492FCE | D_00493086;
    if (var_s1 & 1) {
        Help_Open(0x40000 | (0x400000 << 0x20), 3, D_00492FD2, *D_00492FCE);
        return;
    }
    if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x50) {
        *(s16 *)((u8 *)D_004E05DC + 0x1C) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x1C) + 1);
        *(s16 *)((u8 *)D_004E05DC + 0x1C) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x1C) & 1);
        var_s0 = 0;
        if (D_00470168 == 1) {
loop_8:
            if (var_s0 < 2) {
                func_0022C7D0(*(s32 *)((u8 *)((var_s0 * 4) + var_s3) + 0x28C), 1, 0);
                func_0022C7D0(*(s32 *)((u8 *)((var_s0 * 4) + var_s3) + 0x294), 1, 0);
                var_s0 += 1;
                goto loop_8;
            }
            func_0022C7D0(*(s32 *)((u8 *)var_s3 + 0x2D0), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)var_s3 + 0x2D4), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)var_s3 + 0x2C8), 1, 0);
            func_0022C7D0(*(s32 *)((u8 *)var_s3 + 0x2CC), 1, 0);
        }
    }
    if (*(s16 *)((u8 *)D_004E05DC + 0x1C) == 0) {
        sp50 = 0;
        sp5C = 0x3F800000;
        sp54 = 0;
        sp58 = 0;
    } else {
        sp54 = 0x42200000;
        sp50 = 0;
        sp58 = 0;
        sp5C = 0x3F800000;
    }
    if (var_s1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        func_0022C7D0(*(s32 *)((u8 *)var_s3 + 0x2C8), 1, 0);
        *(s32 *)((u8 *)var_s3 + 0x388) = 0;
        *(s32 **)((u8 *)var_s3 + 0x34C) = &func_002D9DE0;
        func_002DDD40();
        *(s32 *)((u8 *)var_s3 + 0x39C) = 0;
        *(s32 *)((u8 *)var_s3 + 0x398) = 0;
        *(void (**)())((u8 *)var_s3 + 0x370) = func_002D5D70;
        *(void (**)())((u8 *)var_s3 + 0x374) = func_002D4BC0;
    }
    var_s0 = *(s32 *)((u8 *)var_s3 + 0x2CC);
    var_s1 = (s32) gOptionWork;
    func_00228430(0);
    func_00228430(0);
    if (&sp50 != NULL) {
        func_00227A30((u8 *)(&sp50));
    }
    temp_a0 = *(u8 **)((u8 *)var_s1 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060(var_s0, 0x3F800000);
    func_00228410();
    func_0022CD00((s32)((void *)((u8 *) var_s0)));
    func_00228410();
}
