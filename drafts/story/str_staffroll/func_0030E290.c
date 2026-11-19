/* Draft (not built): func_0030E290 at 0x0030E290, size 0x94, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_staffroll/func_0030E290.s */

void func_0030E290(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 sp50;
    s32 *var_v1;
    u8 *temp_s0;
    sp34 = 1;
    sp30 = 0;
    sp38 = 0x600000;
    temp_s0 = arg0 + 0x30;
    sp50 = 0;
    sp3C = 0x400;
    sp40 = 0x200;
    sp44 = 3;
    sp48 = -1;
    sp4C = D_0046FD5C;
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    *(u8 **)((u8 *)arg0 + 0x30) = (unsigned char *)amSofdec_Create(&sp30);
    var_v1 = (int *)&StaffRoll_TaskEnding;
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    if (&StaffRoll_TaskEnding == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
}

/* Similar function already in C: func_002E8270 (src/menu/mn_Logomark.c), similarity 0.88.
 * It is the template below (not built). */
#if 0
void func_002E8270(u8 *a0) {
    u8 *s1;
    u8 *s0;
    u8 blk[0x24];

    s1 = a0;
    *(s32 *)(blk + 4) = 1;
    s0 = s1 + 0x30;
    *(s32 *)(blk + 8) = 0xA00000;
    *(s32 *)(blk + 0xC) = 0x280;
    *(s32 *)(blk + 0x10) = 0x200;
    *(s32 *)blk = 0;
    *(s16 *)(blk + 0x20) = 0;
    *(s32 *)(blk + 0x14) = 3;
    *(s32 *)(blk + 0x18) = -1;
    *(s32 *)(blk + 0x1C) = D_0046FD5C;
    *(void **)(s0 + 0xC) = amSofdec_Create(blk);
    *(s32 *)(s0 + 4) = 0x43700000;
    *(s32 *)(s0 + 0x10) = 0;
    amSofdec_StartAfs(*(void **)(s0 + 0xC), 0xF4E, 1);
    *(void **)(s1 + 0x1C) = ((void *)func_002E8190 == 0) ? 0 : (void *)func_002E8190;
}
#endif
