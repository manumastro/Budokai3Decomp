/* Draft (not built): amSofdec_Draw at 0x00142E80, size 0x43C, segment sys/unk_142AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 212 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3D8, original 0x43C
 * Original: asm/nonmatchings/sys/unk_142AA0/amSofdec_Draw.s */

// src/sys/unk_142AA0.c amSofdec_Draw size diff=212/246
s32 amDma_Request(s32, s32, s32, s32);
extern void *gPacketPtr;
extern void amDraw3d_Sync(void);
s32 amSofdec_Draw(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u64 var_v0_2;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *var_a2;

    var_s2 = 2;
    temp_s1 = (unsigned char *)(&gSofdecMovie + (arg0 * 0x108));
    if (*(s32 *)((u8 *)temp_s1 + 0) != 0) {
        goto block_2;
    }
    return -1;
block_2:
    if (*(s32 *)((u8 *)temp_s1 + 8) != 0) {
        goto block_4;
    }
    mwPlyGetCurFrm((MwPly *)(*(s32 *)((u8 *)temp_s1 + 0)), (SfdFrm *)(temp_s1 + 0x38));
block_4:
    *(s64 *)((u8 *)gPacketPtr + 0) = 0;
    *(s32 *)((u8 *)gPacketPtr + 8) = 0x11000000;
    *(s32 *)((u8 *)gPacketPtr + 0xC) = 0x13000000;
    temp_a1 = gPacketPtr;
    var_a2 = ((u8 *)gPacketPtr) + 0x10;
    temp_s0 = var_a2;
    if (*(s32 *)((u8 *)temp_s1 + 0x38) != 0) {
        goto block_10;
    }
    if (*(s8 *)((u8 *)temp_s1 + 0x14) != 0) {
        goto block_7;
    }
    return 0;
block_7:
    var_v0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (var_v0 != 0) {
        goto block_12;
    }
    goto block_21;
block_10:
    var_v0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (var_v0 != 0) {
        goto block_12;
    }
    var_v0 = *(s32 *)((u8 *)temp_s1 + 0x38);
block_12:
    *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) *(s32 *)((u8 *)temp_s1 + 0x40);
    *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) *(s32 *)((u8 *)temp_s1 + 0x44);
    *(s32 *)((u8 *)gPacketPtr + 0x10) = 0x10000003;
    *(s64 *)((u8 *)var_a2 + 0x10) = (s64) (2 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_a2 + 0x18) = 0xE;
    *(s16 *)((u8 *)var_a2 + 0x20) = 0;
    *(s16 *)((u8 *)var_a2 + 0x22) = (s16) ((s32) (*(s32 *)((u8 *)temp_s1 + 0x20) + 0x3F) >> 6);
    *(s16 *)((u8 *)var_a2 + 0x24) = (s16) *(s32 *)((u8 *)temp_s1 + 0xC);
    *(s16 *)((u8 *)var_a2 + 0x26) = (s16) ((s32) (*(s32 *)((u8 *)temp_s1 + 0x20) + 0x3F) >> 6);
    *(s64 *)((u8 *)var_a2 + 0x28) = 0x50;
    *(s32 *)((u8 *)var_a2 + 0x30) = 0x10;
    *(s32 *)((u8 *)var_a2 + 0x34) = 0x10;
    *(s64 *)((u8 *)var_a2 + 0x38) = 0x52;
    var_a2 += 0x40;
    var_v0_2 = (u64) ((s64) var_v0 << 0x24) >> 0x24;
    var_a0 = 0;
    goto loop_19;
block_14:
    var_v1 = 0;
    goto loop_17;
block_16:
    *(s32 *)((u8 *)var_a2 + 0) = 0x10000004;
    *(s64 *)((u8 *)var_a2 + 0x10) = (s64) (2 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_a2 + 0x18) = 0xE;
    *(s16 *)((u8 *)var_a2 + 0x24) = (s16) (var_a0 * 0x10);
    *(s16 *)((u8 *)var_a2 + 0x26) = (s16) (var_v1 * 0x10);
    *(s64 *)((u8 *)var_a2 + 0x28) = 0x51;
    *(s32 *)((u8 *)var_a2 + 0x30) = 0;
    *(s64 *)((u8 *)var_a2 + 0x38) = 0x53;
    *(s64 *)((u8 *)var_a2 + 0x40) = (s64) (0x40 | (0x08000000 << 0x20));
    *(s32 *)((u8 *)var_a2 + 0x50) = 0x30000040;
    *(s32 *)((u8 *)var_a2 + 0x54) = (s32) var_v0_2;
    var_a2 += 0x60;
    var_v0_2 += 0x400;
    var_v1 += 1;
loop_17:
    if (var_v1 < *(s32 *)((u8 *)temp_s1 + 0x4C)) {
        goto block_16;
    }
    var_a0 += 1;
loop_19:
    if (var_a0 < *(s32 *)((u8 *)temp_s1 + 0x48)) {
        goto block_14;
    }
    *(s8 *)((u8 *)temp_s1 + 0x14) = 1;
    var_s2 = 1;
block_21:
    *(s32 *)((u8 *)var_a2 + 0) = 0x60000004;
    *(s64 *)((u8 *)var_a2 + 0x10) = (s64) (0x8003 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_a2 + 0x18) = 0xE;
    *(s64 *)((u8 *)var_a2 + 0x28) = 0x3F;
    *(s64 *)((u8 *)var_a2 + 0x30) = (s64) *(u32 *)((u8 *)temp_s1 + 0x10);
    *(s64 *)((u8 *)var_a2 + 0x38) = 0x14;
    var_a0_2 = (s32) (*(s32 *)((u8 *)temp_s1 + 0x20) - 1) >> 4;
    var_a3 = 4;
    goto loop_23;
block_22:
    var_a3 += 1;
    var_a0_2 = var_a0_2 >> 1;
loop_23:
    if (var_a0_2 != 0) {
        goto block_22;
    }
    *(f32 *)((u8 *)temp_s1 + 0x28) = (f32) (1 << var_a3);
    var_v1_2 = (s32) (*(s32 *)((u8 *)temp_s1 + 0x24) - 1) >> 4;
    var_a0_3 = 4;
    goto loop_27;
block_26:
    var_a0_3 += 1;
    var_v1_2 = var_v1_2 >> 1;
loop_27:
    if (var_v1_2 != 0) {
        goto block_26;
    }
    *(f32 *)((u8 *)temp_s1 + 0x2C) = (f32) (1 << var_a0_3);
    *(s32 *)((u8 *)var_a2 + 0x40) = (s32) (((var_a0_3 & 3) << 0x1E) | ((var_a3 << 0x1A) | (*(s32 *)((u8 *)temp_s1 + 0xC) | (((s32) (*(s32 *)((u8 *)temp_s1 + 0x20) + 0x3F) >> 6) << 0xE))));
    *(s32 *)((u8 *)var_a2 + 0x44) = (s32) ((var_a0_3 >> 2) | 4);
    *(s64 *)((u8 *)var_a2 + 0x48) = 6;
    gPacketPtr = var_a2 + 0x50;
    *(s64 *)((u8 *)temp_s1 + 0x30) = (s64) ((((s64) ((*(s32 *)((u8 *)temp_s1 + 0x20) - 1) << 0x20) >> 0x20) << 0xE) | (((s64) ((*(s32 *)((u8 *)temp_s1 + 0x24) - 1) << 0x20) >> 0x20) << 0x22) | 0xA);
    amDma_Request(0, 1, 1, 0);
    amDma_Request(0, 2, 1, 1);
    if (*(s32 *)((u8 *)temp_s1 + 0x38) == 0) {
        goto block_30;
    }
    amDraw3d_Sync();
    mwPlyRelCurFrm((MwPly *)(*(s32 *)((u8 *)temp_s1 + 0)));
block_30:
    return var_s2;
}
