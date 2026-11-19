/* Draft (not built): func_002DFBC0 at 0x002DFBC0, size 0x230, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DFBC0.s */

extern void func_002DAB30(void);
extern void func_002DAE10(void);
extern void func_002DB0E0(void);
extern void func_002DB3B0(void);
void func_002DFBC0(void) {
    s32 (*temp_v0)();
    s32 (*temp_v0_10)();
    s32 (*temp_v0_11)();
    s32 (*temp_v0_2)();
    s32 (*temp_v0_3)();
    s32 (*temp_v0_4)();
    s32 (*temp_v0_5)();
    s32 (*temp_v0_6)();
    s32 (*temp_v0_7)();
    s32 (*temp_v0_8)();
    s32 (*temp_v0_9)();
    s32 (*temp_v1)();
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f2;
    u8 *temp_s0;
    A2d_SetMode((s32)D_004E05F8);
    temp_s0 = gOptionWork;
    temp_v0 = *(s32 (**)())((u8 *)temp_s0 + 0x344);
    if (temp_v0 == NULL) {
        goto block_2;
    }
    temp_v0();
    block_2:
    temp_v1 = *(s32 (**)())((u8 *)temp_s0 + 0x344);

    if ((s32)temp_v1 == (s32)func_002DB3B0) {
        goto block_7;
    }
    if ((s32)temp_v1 == (s32)func_002DB0E0) {
        goto block_7;
    }
    if ((s32)temp_v1 == (s32)func_002DAB30) {
        goto block_7;
    }
    if ((s32)temp_v1 != (s32)func_002DAE10) {
        goto block_8;
    }
    block_7:
    A2d_FlushList();

    return;
    block_8:
    temp_v0_2 = *(s32 (**)())((u8 *)temp_s0 + 0x348);

    if (temp_v0_2 == NULL) {
        goto block_10;
    }
    temp_v0_2();
    block_10:
    temp_v0_3 = *(s32 (**)())((u8 *)temp_s0 + 0x34C);

    if (temp_v0_3 == NULL) {
        goto block_12;
    }
    temp_v0_3();
    block_12:
    temp_v0_4 = *(s32 (**)())((u8 *)temp_s0 + 0x350);

    if (temp_v0_4 == NULL) {
        goto block_14;
    }
    temp_v0_4();
    block_14:
    temp_v0_5 = *(s32 (**)())((u8 *)temp_s0 + 0x354);

    if (temp_v0_5 == NULL) {
        goto block_16;
    }
    temp_v0_5();
    block_16:
    temp_v0_6 = *(s32 (**)())((u8 *)temp_s0 + 0x358);

    if (temp_v0_6 == NULL) {
        goto block_18;
    }
    temp_v0_6();
    block_18:
    temp_v0_7 = *(s32 (**)())((u8 *)temp_s0 + 0x35C);

    if (temp_v0_7 == NULL) {
        goto block_20;
    }
    temp_v0_7();
    block_20:
    if (D_004703F4 == 3) {
        goto block_23;
    }

    var_f2 = 1.0f;
    goto block_24;
    block_23:
    var_f2 = 1.2f;

    block_24:
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x3A4) + var_f2;

    *(f32 *)((u8 *)temp_s0 + 0x3A4) = temp_f1;
    if (temp_f1 <= 35.0f) {
        goto block_26;
    }
    *(f32 *)((u8 *)temp_s0 + 0x3CC) = 1.0f;
    *(f32 *)((u8 *)temp_s0 + 0x3BC) = 1.0f;
    goto block_30;
    block_26:
    if (temp_f1 <= 25.0f) {
        goto block_29;
    }

    temp_f0 = (temp_f1 - 25.0f) / 10.0f;
    *(f32 *)((u8 *)temp_s0 + 0x3CC) = temp_f0;
    *(f32 *)((u8 *)temp_s0 + 0x3BC) = temp_f0;
    goto block_30;
    block_29:
    *(f32 *)((u8 *)temp_s0 + 0x3CC) = 0.0f;

    *(f32 *)((u8 *)temp_s0 + 0x3BC) = 0.0f;
    block_30:
    temp_v0_8 = *(s32 (**)())((u8 *)temp_s0 + 0x360);

    if (temp_v0_8 == NULL) {
        goto block_32;
    }
    temp_v0_8();
    block_32:
    temp_v0_9 = *(s32 (**)())((u8 *)temp_s0 + 0x364);

    if (temp_v0_9 == NULL) {
        goto block_34;
    }
    temp_v0_9();
    block_34:
    temp_v0_10 = *(s32 (**)())((u8 *)temp_s0 + 0x368);

    if (temp_v0_10 == NULL) {
        goto block_36;
    }
    temp_v0_10();
    block_36:
    temp_v0_11 = *(s32 (**)())((u8 *)temp_s0 + 0x36C);

    if (temp_v0_11 == NULL) {
        goto block_38;
    }
    temp_v0_11();
    block_38:
    A2d_FlushList();

    return;
}
