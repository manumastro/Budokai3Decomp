/* Draft (not built): func_002AFE00 at 0x002AFE00, size 0x198, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1AC, original 0x198
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002AFE00.s */

// src/unk/unk_2AF860.c func_002AFE00 size diff=42/107
extern s32 amFile_Load(u8 *);
extern s32 D_005BC440;
extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
s32 func_002AFE00(u8 *arg0, s32 *arg1) {
    s32 *temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s4_2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x1C);
    temp_s0 = *(s32 **)((u8 *)arg0 + 0);
    if (*(s16 *)((u8 *)temp_s2 + 4) != 3) {
        return 3;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    temp_s4 = (unsigned char *)(((*arg1 + 1) * 0x30) + (&D_005BC440 + (*temp_s0 * 0x90)));
    temp_a0 = *(u8 **)((u8 *)temp_s4 + 0);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0));
    }
    temp_a0_2 = *(u8 **)((u8 *)temp_s4 + 8);
    if (temp_a0_2 != NULL) {
        amNode_Free(temp_a0_2);
    }
    temp_s0_2 = *(u8 **)((u8 *)temp_s2 + 0x40);
    temp_s4_2 = (unsigned char *)(((*arg1 + 1) * 0x30) + (&D_005BC440 + (*temp_s0 * 0x90)));
    temp_a0_3 = *(u8 **)((u8 *)temp_s4_2 + 0);
    temp_s1 = *(u8 **)((u8 *)temp_s0_2 + 0x50);
    if (temp_a0_3 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0_3));
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s4_2 + 8);
    if (temp_a0_4 != NULL) {
        amNode_Free(temp_a0_4);
    }
    *(u8 **)((u8 *)temp_s4_2 + 0) = temp_s0_2;
    *(u8 **)((u8 *)temp_s4_2 + 4) = temp_s1;
    amFile_Load(*(u8 **)((u8 *)temp_s4_2 + 4));
    *(u8 **)((u8 *)temp_s4_2 + 8) = amNode_Alloc();
    *(s32 *)((u8 *)temp_s4_2 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s4_2 + 0x10) = 0;
    *(f32 *)((u8 *)temp_s4_2 + 0x14) = (f32) D_004708F8;
    *(s32 *)((u8 *)temp_s4_2 + 0x18) = 0;
    *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
    amCdFs_Close(temp_s2, 0);
    temp_a0_5 = *(u8 **)((u8 *)arg0 + 0x18);
    if (temp_a0_5 != NULL) {
        amCdFs_Close(temp_a0_5, 0);
    }
    *(u8 **)((u8 *)arg0 + 0x18) = NULL;
    *(u8 **)((u8 *)arg0 + 0x1C) = NULL;
    return 1;
}
