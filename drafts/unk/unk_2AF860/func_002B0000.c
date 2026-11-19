/* Draft (not built): func_002B0000 at 0x002B0000, size 0x128, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x128
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B0000.s */

// src/unk/unk_2AF860.c func_002B0000 size diff=38/80
s32 func_002B0000(u8 *arg0, s32 *arg1) {
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (*(s16 *)((u8 *)temp_s1 + 4) != 3) {
        return 3;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x40);
    temp_s3 = (*arg1 * 0xB0) + (((u8 *)&D_005BC180) + (**(s32 **)((u8 *)arg0 + 0) * 0x160));
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0);
    temp_s4 = *(u8 **)((u8 *)temp_s0 + 0x50);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0));
    }
    *(u8 **)((u8 *)temp_s3 + 0) = temp_s0;
    *(u8 **)((u8 *)temp_s3 + 4) = temp_s4;
    amFile_Load(*(u8 **)((u8 *)temp_s3 + 4));
    amCamera_Init(temp_s3 + 0x20);
    *(s32 *)((u8 *)temp_s3 + 8) = 0;
    *(s32 *)((u8 *)temp_s3 + 0xC) = 0;
    *(f32 *)((u8 *)temp_s3 + 0x10) = (f32) D_004708F8;
    *(s32 *)((u8 *)temp_s3 + 0x14) = 0;
    *(u8 **)((u8 *)temp_s1 + 0x40) = NULL;
    amCdFs_Close(temp_s1, 0);
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x18);
    if (temp_a0_2 != NULL) {
        amCdFs_Close(temp_a0_2, 0);
    }
    *(u8 **)((u8 *)arg0 + 0x18) = NULL;
    *(u8 **)((u8 *)arg0 + 0x1C) = NULL;
    amCdFs_SetHeap(0);
    return 1;
}

/* Similar function already in C: func_002B0390 (src/unk/unk_2AF860.c), similarity 0.80.
 * It is the template below (not built). */
#if 0
s32 func_002B0390(u8 *s, s32 *a1) {
    s32 a2;
    u8 *s1;
    u8 *s0;
    s32 s4;
    u8 *s3;
    a2 = *(s32 *)s;
    s1 = *(u8 **)(s + 0x1C);
    if (*(s16 *)(s1 + 4) != 3) {
        return 3;
    }
    *(s32 *)(s + 0x10) = 0;
    a2 = *(s32 *)a2;
    s0 = *(u8 **)(s1 + 0x40);
    s3 = D_005ABA80 + a2 * 33664 + *a1 * 8416;
    s4 = *(s32 *)(s0 + 0x50);
    if (*(s32 *)(s3 + 8) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(s3 + 8));
    }
    *(u8 **)(s3 + 8) = s0;
    *(s32 *)(s3 + 0x24) = s4;
    *(s32 *)(s1 + 0x40) = 0;
    amCdFs_Close(s1, 0);
    if (*(s32 *)(s + 0x18) != 0) {
        amCdFs_Close(*(void **)(s + 0x18), 0);
    }
    *(s32 *)(s + 0x18) = 0;
    *(s32 *)(s + 0x1C) = 0;
    return 1;
}
#endif
