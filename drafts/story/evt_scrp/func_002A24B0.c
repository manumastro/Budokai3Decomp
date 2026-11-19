/* Draft (not built): func_002A24B0 at 0x002A24B0, size 0x1B4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call 'func_002A24B0(unsigned char *, int)' does not match 'func_002A24B0(unsigned char *)' @ 638: func_002A24B0(a0, a1);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A24B0.s */

// src/story/evt_scrp.c func_002A24B0 cerr diff=-1/0
s32 func_002A24B0(u8 *arg0) {
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s4 = (unsigned char *)(D_005AB8A0);
    temp_s3 = (unsigned char *)(D_005AB8A4);
    temp_s2 = (unsigned char *)(D_005AB8A8);
    temp_s1 = (unsigned char *)(D_005AB8AC);
    temp_s0 = (unsigned char *)(D_005AB8B0);
    if (*(s16 *)((u8 *)temp_s4 + 4) != 3) {
        return 3;
    }
    if (*(s16 *)((u8 *)temp_s3 + 4) != 3) {
        return 3;
    }
    if (*(s16 *)((u8 *)temp_s2 + 4) != 3) {
        return 3;
    }
    if (*(s16 *)((u8 *)temp_s1 + 4) != 3) {
        return 3;
    }
    if (*(s16 *)((u8 *)temp_s0 + 4) != 3) {
        return 3;
    }
    func_002AA3D0(0, 0, 0);
    temp_a2 = *(u8 **)((u8 *)temp_s3 + 0x40);
    func_002AA340((s32)(**(s32 **)((u8 *)arg0 + 0)), 0, (s32)(temp_a2));
    temp_a2_2 = *(u8 **)((u8 *)temp_s2 + 0x40);
    ScrCamSlot_Load((s32)(**(s32 **)((u8 *)arg0 + 0)), 0, (s32)(temp_a2_2));
    func_002AA0D0(0, 0, 0);
    temp_a2_3 = *(u8 **)((u8 *)temp_s0 + 0x40);
    func_002AA050((s32)(**(s32 **)((u8 *)arg0 + 0)), 0, (s32)(temp_a2_3));
    *(s32 *)((u8 *)temp_s4 + 0x40) = 0;
    *(u8 **)((u8 *)temp_s3 + 0x40) = NULL;
    *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
    *(u8 **)((u8 *)temp_s1 + 0x40) = NULL;
    *(u8 **)((u8 *)temp_s0 + 0x40) = NULL;
    amCdFs_Close((s32)(temp_s4), 0);
    amCdFs_Close((s32)(temp_s3), 0);
    amCdFs_Close((s32)(temp_s2), 0);
    amCdFs_Close((s32)(temp_s1), 0);
    amCdFs_Close((s32)(temp_s0), 0);
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
}
