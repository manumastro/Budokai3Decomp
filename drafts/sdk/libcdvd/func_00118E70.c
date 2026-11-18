/* Draft (not built): func_00118E70 at 0x00118E70, size 0xB0, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libcdvd/func_00118E70.s */

extern s32 *D_003EDDA8;
extern s32 *D_003EDDAC;
extern s32 D_003EDE00;
extern s32 D_003EDE80;
extern s32 D_003EEF50;
extern s32 D_003EEF80;
extern s32 D_003EF3C0;
extern s32 D_003EF900;

s32 func_00118E70(s32 arg0, s32 **arg1) {
    s32 *var_v0;

    if (arg0 == 0x8001) {
        goto block_17;
    }
    if (arg0 == 0x8003) {
        goto block_16;
    }
    if (arg0 == 0x8002) {
        goto block_15;
    }
    if (arg0 == 0x8004) {
        goto block_14;
    }
    if (arg0 == 0x8011) {
        goto block_13;
    }
    if (arg0 == 0x8013) {
        goto block_12;
    }
    if (arg0 == 0x8012) {
        goto block_11;
    }
    if (arg0 == 0x8014) {
        goto block_9;
    }
    var_v0 = NULL;
    goto block_18;
block_9:
    var_v0 = &D_003EF900;
    goto block_18;
block_11:
    var_v0 = &D_003EF3C0;
    goto block_18;
block_12:
    var_v0 = &D_003EEF80;
    goto block_18;
block_13:
    var_v0 = D_003EDDAC;
    goto block_18;
block_14:
    var_v0 = &D_003EEF50;
    goto block_18;
block_15:
    var_v0 = &D_003EDE80;
    goto block_18;
block_16:
    var_v0 = &D_003EDE00;
    goto block_18;
block_17:
    var_v0 = D_003EDDA8;
block_18:
    *arg1 = var_v0;
    return 1;
}
