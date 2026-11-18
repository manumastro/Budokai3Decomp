/* Draft (not built): sceGsSyncPath at 0x00100E78, size 0x314, segment sdk/libgraph_00100CF8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 156 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libgraph_00100CF8/sceGsSyncPath.s */

s32 scePrintf();
extern s32 D_0045CBF8;
extern s32 D_0045CC28;
extern s32 D_0045CC38;
extern s32 D_0045CC48;
extern s32 D_0045CC58;
extern s32 D_0045CC68;
extern s32 D_0045CC78;
extern s32 D_0045CC88;
extern s32 D_0045CC98;
extern s32 D_0045CCA8;
extern s32 D_0045CCC0;
extern s32 D_0045CCD8;
extern s32 D_0045CD08;
extern s32 D_0045CD38;
extern s32 D_0045CD60;

s32 sceGsSyncPath(s32 arg0, s32 arg2) {
    s32 *var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a2;
    u32 var_a1;
    u32 var_v0;
    u32 var_v0_2;
    u32 var_v0_3;
    u32 var_v0_4;
    u32 var_v0_5;

    var_a2 = arg2;
    var_a1 = 0;
    if (arg0 != 0) {
        goto block_28;
    }
    if (!(*(u32 *)0x10009000 & 0x100)) {
        goto block_5;
    }
    var_v0 = 0;
loop_3:
    var_a1 += 1;
    if (var_v0 > 0x01000000U) {
        goto block_22;
    }
    var_v0 = var_a1;
    if (*(u8 *)0x10009000 & 0x100) {
        goto loop_3;
    }
block_5:
    if (!(*(u32 *)0x1000A000 & 0x100)) {
        goto block_9;
    }
    var_v0_2 = var_a1;
loop_7:
    var_a1 += 1;
    if (var_v0_2 > 0x01000000U) {
        goto block_23;
    }
    var_v0_2 = var_a1;
    if (*(u8 *)0x1000A000 & 0x100) {
        goto loop_7;
    }
block_9:
    if (!(*(u32 *)0x10003C00 & 0x1F000003)) {
        goto block_13;
    }
    var_a2 = 0x01000000;
    var_v0_3 = var_a1;
loop_11:
    var_a1 += 1;
    if (var_v0_3 > 0x01000000U) {
        goto block_24;
    }
    var_v0_3 = var_a1;
    if (*(u8 *)0x10003C00 & 0x1F000003) {
        goto loop_11;
    }
block_13:
    var_a2 = M2C_ERROR(/* unknown instruction: cfc2.ni $a2, $vi29 */);
    if (!(var_a2 & 0x100)) {
        goto block_17;
    }
    var_v0_4 = var_a1;
loop_15:
    var_a1 += 1;
    if (var_v0_4 > 0x01000000U) {
        goto block_25;
    }
    var_a2 = M2C_ERROR(/* unknown instruction: cfc2.ni $a2, $vi29 */);
    var_v0_4 = var_a1;
    if (var_a2 & 0x100) {
        goto loop_15;
    }
block_17:
    if (!(*(u32 *)0x10003020 & 0xC00)) {
        goto block_21;
    }
    var_v0_5 = var_a1;
loop_19:
    var_a1 += 1;
    if (var_v0_5 > 0x01000000U) {
        goto block_26;
    }
    var_v0_5 = var_a1;
    if (*(u8 *)0x10003020 & 0xC00) {
        goto loop_19;
    }
block_21:
    return 0;
block_22:
    var_a0 = &D_0045CBF8;
    goto block_27;
block_23:
    var_a0 = &D_0045CCD8;
    goto block_27;
block_24:
    var_a0 = &D_0045CD08;
    goto block_27;
block_25:
    var_a0 = &D_0045CD38;
    goto block_27;
block_26:
    var_a0 = &D_0045CD60;
block_27:
    scePrintf(var_a0, var_a1, var_a2);
    scePrintf(&D_0045CC28, *(u8 *)0x10009000);
    scePrintf(&D_0045CC38, *(u32 *)0x10009030);
    scePrintf(&D_0045CC48, *(u32 *)0x10009010);
    scePrintf(&D_0045CC58, *(u32 *)0x10009020);
    scePrintf(&D_0045CC68, *(u8 *)0x1000A000);
    scePrintf(&D_0045CC78, *(u32 *)0x1000A030);
    scePrintf(&D_0045CC88, *(u32 *)0x1000A010);
    scePrintf(&D_0045CC98, *(u32 *)0x1000A020);
    scePrintf(&D_0045CCA8, *(u8 *)0x10003C00);
    scePrintf(&D_0045CCC0, *(u8 *)0x10003020);
    return -1;
block_28:
    temp_v0_2 = (*(u8 *)0x10009000 & 0x100) != 0;
    temp_v0_3 = (*(u8 *)0x1000A000 & 0x100) ? (temp_v0_2 | 2) : temp_v0_2;
    temp_v0_4 = (*(u8 *)0x10003C00 & 0x1F000003) ? (temp_v0_3 | 4) : temp_v0_3;
    temp_v0 = (M2C_ERROR(/* unknown instruction: cfc2.ni $a2, $vi29 */) & 0x100) ? (temp_v0_4 | 8) : temp_v0_4;
    return (*(u8 *)0x10003020 & 0xC00) ? (temp_v0 | 0x10) : temp_v0;
}
