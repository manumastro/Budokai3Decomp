/* Draft (not built): func_00146680 at 0x00146680, size 0x5A0, segment sys/unk_1461D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 232 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x530, original 0x5A0
 * Original: asm/nonmatchings/sys/unk_1461D0/func_00146680.s */

// src/sys/unk_1461D0.c func_00146680 size diff=232/332
s32 amPkt_AllocTop(s32);
extern s32 gModelBlock;
void func_00146680(s8 *arg0, u8 *arg1) {
    s16 var_a1;
    s16 var_a2;
    s16 var_t3;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t4;
    s32 var_a3_2;
    s32 var_s3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s64 var_a3;
    s8 *var_s2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_v1;

    var_s2 = arg0;
    var_s1 = arg1;
    var_s0 = *(u8 **)((u8 *)arg1 + 0);
    var_s3 = ((s32) *(s32 *)((u8 *)var_s0 + 4) >> 2) & 3;
    var_v1 = *(u8 **)((u8 *)arg1 + 8);
    if (var_v1 == NULL) {
        var_v1 = (unsigned char *)(amPkt_AllocTop((((*(s32 *)((u8 *)var_s0 + 0x1C) == 0) ? 0 : 0xA0) + 0x230) - ((3 - var_s3) * 0x70)) - ((3 - var_s3) * 0x70));
        *(u8 **)((u8 *)var_s1 + 8) = var_v1;
    }
    *(s32 *)((u8 *)var_s1 + 0x28) = 0;
    if (*var_s2 != 2) {
        *(s32 *)((u8 *)var_s1 + 0x14) = (s32) ((u64) (((s32)((var_v1 + ((3 - var_s3) * 0x70)))) << 0x24) >> 0x24);
        *(s32 *)((u8 *)var_s1 + 0x18) = (s32) ((u64) (((s32)((var_v1 + 0x1F0))) << 0x24) >> 0x24);
    } else {
        *(s32 *)((u8 *)var_s1 + 0x14) = 0;
        *(s32 *)((u8 *)var_s1 + 0x18) = 0;
    }
    *(s64 *)((u8 *)var_v1 + 0x1C0) = 0x10000002;
    *(s64 *)((u8 *)var_v1 + 0x1C8) = (s64) (0x50000002 << 0x20);
    *(s64 *)((u8 *)var_v1 + 0x1D0) = (s64) (1 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_v1 + 0x1D8) = 0xE;
    *(s64 *)((u8 *)var_v1 + 0x1E0) = 0;
    *(s64 *)((u8 *)var_v1 + 0x1E8) = 0x3F;
    *(s64 *)((u8 *)var_v1 + 0x1F0) = 0x60000003;
    *(s64 *)((u8 *)var_v1 + 0x1F8) = (s64) (0x50000003 << 0x20);
    *(s64 *)((u8 *)var_v1 + 0x200) = (s64) (1 | (0x20000000 << 0x20));
    *(s64 *)((u8 *)var_v1 + 0x208) = 0xEE;
    temp_t0 = *(s32 *)((u8 *)var_s0 + 4) < 0;
    *(s32 *)((u8 *)var_v1 + 0x210) = (s32) ((*(s16 *)((u8 *)var_s0 + 0x2E) << 0x13) | 0x200 | (*(s32 *)((u8 *)var_s0 + 4) & 0x1FD));
    *(s32 *)((u8 *)var_v1 + 0x214) = (s32) *(s16 *)((u8 *)var_s0 + 0x2C);
    *(s64 *)((u8 *)var_v1 + 0x218) = (s64) ((s64) ((temp_t0 + 0x14) << 0x20) >> 0x20);
    var_a2 = *(s16 *)((u8 *)var_s0 + 0x10);
    var_a1 = *(s16 *)((u8 *)var_s0 + 0x12);
    var_t3 = *(s16 *)((u8 *)var_s1 + 0xC);
    *(s64 *)((u8 *)var_v1 + 0x228) = (s64) ((s64) ((temp_t0 + 6) << 0x20) >> 0x20);
    temp_a3 = ((s64) *(s32 *)((u8 *)var_s0 + 0x20) << 0x33) | (((s64) *(s16 *)((u8 *)var_s1 + 0x20) << 0x25) | (((((s64) ((s64) ((s32) *(s32 *)((u8 *)var_s0 + 4) >> 9) << 0x20) >> 0x20) & 3) << 0x23) | (((s64) *(s16 *)((u8 *)var_s0 + 0xE) << 0x1E) | ((s64) (((*(s16 *)((u8 *)var_s0 + 0xC) << 0x1A) | (var_t3 | (*(s32 *)((u8 *)var_s0 + 8) << 0x14))) << 0x20) >> 0x20) | (4 << 0x20)))) | (0x20000000 << 0x20);
    if ((*(s32 *)((u8 *)var_s0 + 8) & 7) < 3) {
        var_a3 = temp_a3 | (((s32) (var_a2 + 0x3F) >> 6) << 0xE);
    } else {
        var_a3 = temp_a3 | (((s32) (var_a2 + 0x7F) >> 7) << 0xF);
    }
    *(s64 *)((u8 *)var_v1 + 0x220) = var_a3;
    var_a0 = var_v1 + 0x150;
    var_t0 = var_s3 + 1;
    var_a3_2 = gModelBlock + *(s32 *)((u8 *)var_s0 + 0x14);
    var_t2 = *(s32 *)((u8 *)var_s0 + 0x18);
    var_t1 = var_t2;
    if (*(s32 *)((u8 *)var_s0 + 8) == 1) {
        var_t1 = ((var_t2 * 4) / 3) + ((u32) (var_t2 * 4) >> 0x1F);
    }
loop_14:
    temp_t4 = var_t0;
    var_t0 = temp_t4 - 1;
    if (temp_t4 != 0) {
        *(s64 *)((u8 *)var_a0 + 0) = 0x10000005;
        *(s64 *)((u8 *)var_a0 + 8) = (s64) (0x50000005 << 0x20);
        *(s64 *)((u8 *)var_a0 + 0x10) = (s64) (1 | (0x40000000 << 0x20));
        *(s64 *)((u8 *)var_a0 + 0x18) = 0xEEEE;
        *(s16 *)((u8 *)var_a0 + 0x22) = (s16) (((s32) (var_a2 + 0x3F) >> 6) | (*(s32 *)((u8 *)var_s0 + 8) << 8));
        *(s16 *)((u8 *)var_a0 + 0x24) = var_t3;
        if ((*(s32 *)((u8 *)var_s0 + 8) & 7) < 3) {
            *(s16 *)((u8 *)var_a0 + 0x26) = (s16) (((s32) (var_a2 + 0x3F) >> 6) | (*(s32 *)((u8 *)var_s0 + 8) << 8));
        } else {
            *(s16 *)((u8 *)var_a0 + 0x26) = (s16) ((((s32) (var_a2 + 0x7F) >> 7) * 2) | (*(s32 *)((u8 *)var_s0 + 8) << 8));
        }
        *(s64 *)((u8 *)var_a0 + 0x28) = 0x50;
        *(s64 *)((u8 *)var_a0 + 0x30) = 0;
        *(s64 *)((u8 *)var_a0 + 0x38) = 0x51;
        *(s32 *)((u8 *)var_a0 + 0x40) = (s32) var_a2;
        *(s32 *)((u8 *)var_a0 + 0x44) = (s32) var_a1;
        *(s64 *)((u8 *)var_a0 + 0x48) = 0x52;
        *(s64 *)((u8 *)var_a0 + 0x50) = 0;
        *(s64 *)((u8 *)var_a0 + 0x58) = 0x53;
        *(s32 *)((u8 *)var_a0 + 0x60) = (s32) ((((s32) (var_t2 + 0xF) >> 4) + 2) | 0x30000000);
        *(s32 *)((u8 *)var_a0 + 0x64) = var_a3_2;
        *(s64 *)((u8 *)var_a0 + 0x68) = 0;
        var_a3_2 += var_t2 + 0x20;
        var_t3 += (s32) (var_t1 + 0xFF) >> 8;
        var_t2 = var_t2 >> 2;
        var_t1 = var_t1 >> 2;
        var_a2 = (s16) (var_a2 >> 1);
        var_a1 = (s16) (var_a1 >> 1);
        var_a0 -= 0x70;
        goto loop_14;
    }
    if (*(s32 *)((u8 *)var_s0 + 0x1C) != 0) {
        temp_v1 = var_v1 + 0x230;
        if (*var_s2 != 2) {
            *(s32 *)((u8 *)var_s1 + 0x28) = (s32) ((u64) ((s64) temp_v1 << 0x24) >> 0x24);
        }
        *(s64 *)((u8 *)var_v1 + 0x230) = 0x10000005;
        *(s64 *)((u8 *)temp_v1 + 8) = (s64) (0x50000005 << 0x20);
        *(s64 *)((u8 *)temp_v1 + 0x10) = (s64) (1 | (0x40000000 << 0x20));
        *(s64 *)((u8 *)temp_v1 + 0x18) = 0xEEEE;
        *(s32 *)((u8 *)temp_v1 + 0x20) = (s32) ((*(s32 *)((u8 *)var_s0 + 0x20) << 0x18) | 0x10000);
        *(s16 *)((u8 *)temp_v1 + 0x24) = (s16) *(s16 *)((u8 *)var_s1 + 0x20);
        *(s8 *)((u8 *)temp_v1 + 0x26) = 1;
        *(s8 *)((u8 *)temp_v1 + 0x27) = (s8) *(s32 *)((u8 *)var_s0 + 0x20);
        *(s64 *)((u8 *)temp_v1 + 0x28) = 0x50;
        *(s64 *)((u8 *)temp_v1 + 0x30) = 0;
        *(s64 *)((u8 *)temp_v1 + 0x38) = 0x51;
        temp_a1 = *(s32 *)((u8 *)var_s0 + 8) & 7;
        switch (temp_a1) {                          /* irregular */
        case 3:
            *(s32 *)((u8 *)temp_v1 + 0x40) = 0x10;
            *(s32 *)((u8 *)temp_v1 + 0x44) = 0x10;
            break;
        case 4:
            *(s32 *)((u8 *)temp_v1 + 0x40) = 8;
            *(s32 *)((u8 *)temp_v1 + 0x44) = 2;
            break;
        }
        *(s64 *)((u8 *)temp_v1 + 0x48) = 0x52;
        *(s64 *)((u8 *)temp_v1 + 0x50) = 0;
        *(s64 *)((u8 *)temp_v1 + 0x58) = 0x53;
        *(s32 *)((u8 *)temp_v1 + 0x60) = (s32) ((((s32) (*(s32 *)((u8 *)var_s0 + 0x28) + 0xF) >> 4) + 2) | 0x30000000);
        *(s32 *)((u8 *)temp_v1 + 0x64) = (s32) (*(s32 *)((u8 *)var_s1 + 0x24) + ((*(s32 *)((u8 *)var_s0 + 0x28) + 0x20) * *(s8 *)((u8 *)var_s1 + 0x23)));
        *(s64 *)((u8 *)temp_v1 + 0x68) = 0;
        *(s64 *)((u8 *)temp_v1 + 0x70) = 0x60000002;
        *(s64 *)((u8 *)temp_v1 + 0x78) = (s64) (0x50000002 << 0x20);
        *(s64 *)((u8 *)temp_v1 + 0x80) = (s64) (1 | (0x10000000 << 0x20));
        *(s64 *)((u8 *)temp_v1 + 0x88) = 0xE;
        *(s64 *)((u8 *)temp_v1 + 0x90) = 0;
        *(s64 *)((u8 *)temp_v1 + 0x98) = 0x3F;
    }
}
