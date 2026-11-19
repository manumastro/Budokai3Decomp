/* Draft (not built): func_002BD140 at 0x002BD140, size 0x260, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 'struct StrStatusWork' to 'unsigned char *' mwccps2.exe Compiler: @ 81: *(s32 *)((u8 *)(gStrStatus[var_s0]) + 0x40) = 0;
 * Original: asm/nonmatchings/story/str_status/func_002BD140.s */

// src/story/str_status.c func_002BD140 cerr diff=-1/0
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
s32 Flight_MapIndex(s32);
s32 func_00264140(s32, s32);
s32 func_0029E120(s32 *, s32, s32, s32, s32);
s32 func_0029E610(s32 *);
s32 func_002B9D30();
s32 func_002BA610(void *);
s32 func_002BB650(void *);
s32 func_002BCCD0(void *);
extern s32 D_0046FD80;
extern f32 D_004E0610;
void func_002BD140(Task *arg0) {
    s32 sp40;
    s32 sp50;
    s32 sp54;
    s32 (*var_v0)(u8 *);
    s32 (*var_v1)(u8 *);
    s32 var_s0;
    s32 var_s1;
    s8 *temp_v1;
    u8 *temp_v0;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v1 = (signed char *)(&gStrStatus[var_s0]);
        temp_v0 = *(u8 **)((u8 *)temp_v1 + 0);
        if (temp_v0 != NULL) {
            *(s32 *)((u8 *)temp_v1 + 0x1C) = (s32) *(s32 *)((u8 *)temp_v0 + 0x40);
            *(s32 *)((u8 *)(gStrStatus[var_s0]) + 0x40) = 0;
            amCdFs_Close((s32)(gStrStatus[var_s0]), 0);
            gStrStatus[var_s0] = 0;
            amFile_Load((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(&gStrStatus[var_s0]) + 0x1C)) + 0x50)));
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 7);
    *(s32 *)((u8 *)gStrStatus + 0x14C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x1C)) + 0x50);
    *(s32 *)((u8 *)gStrStatus + 0x158) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x20)) + 0x50);
    if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
        *(s32 *)((u8 *)gStrStatus + 0x150) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x24)) + 0x50);
        *(s32 *)((u8 *)gStrStatus + 0x15C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x28)) + 0x50);
        *(s32 *)((u8 *)gStrStatus + 0x154) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x2C)) + 0x50);
        *(s32 *)((u8 *)gStrStatus + 0x160) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x30)) + 0x50);
    }
    func_0029E610(*(s32 **)((u8 *)gStrStatus + 0x25C));
    func_002BFE60(**(s32 **)((u8 *)gStrStatus + 0x25C));
    sp50 = 2;
    sp54 = 0;
    StrStatus_Dispatch(&sp40);
    D_0046FD80 = 0x3E19999A;
    func_0029E120(*(s32 **)((u8 *)gStrStatus + 0x25C), Flight_MapIndex(*(s32 *)((u8 *)gStrStatus + 0x28C)), 1, 0x3F800000, 0);
    func_002B9D30();
    func_00264140(-1, 0);
    if (*(s32 *)((u8 *)gStrStatus + 0x284) != 0) {
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x210AA, 0);
    }
    *(s32 *)((u8 *)gStrStatus + 0x27C) = 2;
    if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
        *(s32 *)((u8 *)gStrStatus + 0x410) = 0;
        var_v1 = func_002BA610;
        *(s32 *)((u8 *)gStrStatus + 0x414) = 0x3C;
        if (func_002BA610 == NULL) {
            var_v1 = NULL;
        }
        goto block_20;
    }
    if (*(s32 *)((u8 *)gStrStatus + 0x2D8) == 0) {
        var_v0 = func_002BB650;
        if (func_002BB650 == NULL) {
            var_v0 = NULL;
        }
        *(s32 (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v0;
        func_002BB650(arg0);
        return;
    }
    var_v1 = func_002BCCD0;
    if (func_002BCCD0 == NULL) {
        var_v1 = NULL;
    }
block_20:
    *(s32 (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
}
