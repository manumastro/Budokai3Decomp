/* Draft (not built): func_0028B9B0 at 0x0028B9B0, size 0x3F4, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 143 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3D4, original 0x3F4
 * Original: asm/nonmatchings/sys/mc_opr/func_0028B9B0.s */

// src/sys/mc_opr.c func_0028B9B0 size diff=143/245
extern s32 D_00470894;
extern void amHeap_Free(void *);
extern s32 D_00470048;
extern void *D_004708A0;
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 amMc_Save(s32, s32, s32 *, void *);
s32 func_001EF510(void *, s32);
s32 memcmp(void *, s32, s32);
extern s32 D_0046B8F0;
extern s32 D_0046B9F8;
extern s32 D_00470558;
extern s32 D_00470840;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470868;
extern void *D_00470870;
extern s32 D_00470874;
extern s32 gMcState;
extern char D_004B4B40[];
extern void func_001EF730(char *);
extern void BtbEntry_DecodeColors(char *, void *);
extern void func_001EFDB0(char *, char *);
extern void *D_0047054C;
extern void func_0028DDF0(void);
extern void func_0028D1E0(void);
extern void func_0028C580(void);
extern void func_0028BEB0(void);
extern void func_0028DDA0(void);
void func_0028B9B0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *var_v1_7;
    s32 var_s0;

    if (gMcState == 3) {
        goto block_53;
    }
    if (gMcState == 2) {
        goto block_4;
    }
    goto block_6;
block_4:
    if (D_00470558 != 0xD680) {
        goto block_53;
    }
    goto block_7;
block_6:
    return;
block_7:
    D_004708A0 = D_0047054C;
    D_0047054C = NULL;
    if (func_001EF510(D_004708A0, 0xD680) == 0) {
        goto block_10;
    }
    amHeap_Free(D_004708A0);
    D_004708A0 = NULL;
    goto block_53;
block_10:
    if (D_00470874 == 0) {
        goto block_14;
    }
    var_s0 = 0;
    if (memcmp(((u8 *)D_004708A0) + 0x30, D_00470874, 0x24) == 0) {
        goto block_14;
    }
    goto block_15;
block_14:
    var_s0 = 1;
block_15:
    amHeap_Free(D_004708A0);
    D_004708A0 = NULL;
    if (D_00470048 == 0xA) {
        goto block_37;
    }
    if (D_00470048 == 9) {
        goto block_37;
    }
    if (D_00470048 == 8) {
        goto block_37;
    }
    if (D_00470048 == 4) {
        goto block_31;
    }
    if (D_00470048 == 5) {
        goto block_31;
    }
    if (D_00470048 == 2) {
        goto block_23;
    }
    goto block_41;
block_23:
    if (D_00470868 != 0) {
        goto block_42;
    }
    if (var_s0 == 0) {
        goto block_27;
    }
    func_00288870(0x15);
    goto block_28;
block_27:
    func_00288870(0x17);
block_28:
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_30;
    }
    var_v1 = NULL;
block_30:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (int)(&func_0028D1E0);
    D_00470854 = 1;
    goto block_41;
block_31:
    if (D_00470868 != 0) {
        goto block_42;
    }
    if (var_s0 != 0) {
        goto block_42;
    }
    func_00288870(0x17);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_35;
    }
    var_v1_2 = NULL;
block_35:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470894 = (int)(&func_0028D1E0);
    D_00470854 = 1;
    goto block_41;
block_37:
    if (var_s0 != 0) {
        goto block_42;
    }
    func_00288870(0x2B);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_40;
    }
    var_v1_3 = NULL;
block_40:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (int)(&func_0028C580);
    D_00470854 = 1;
block_41:
    return;
block_42:
    if (D_00470048 == 4) {
        goto block_45;
    }
    if (D_00470048 != 2) {
        goto block_46;
    }
block_45:
    D_004708A0 = amHeap_Alloc(0xD680, 0, &D_0046B9F8, 0x815);
    func_001EFDB0((char *)((s8 *) D_004708A0), (char *)(D_004B4B40));
    BtbEntry_DecodeColors((char *)((s8 *) D_004708A0), (void *)(&D_00470840));
    func_001EF730((char *)((s8 *) D_004708A0));
    D_00470870 = D_004708A0;
block_46:
    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) == 0) {
        goto block_50;
    }
    func_00288870(0x1C);
    var_v1_4 = (int *)(&func_0028C580);
    if (&func_0028C580 != NULL) {
        goto block_49;
    }
    var_v1_4 = NULL;
block_49:
    goto block_52;
block_50:
    func_00288870(0x1A);
    var_v1_4 = (int *)(&func_0028BEB0);
    if (&func_0028BEB0 != NULL) {
        goto block_52;
    }
    var_v1_4 = NULL;
block_52:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    return;
block_53:
    if (D_00470048 == 0xA) {
        goto block_65;
    }
    if (D_00470048 == 9) {
        goto block_65;
    }
    if (D_00470048 == 8) {
        goto block_65;
    }
    if (D_00470048 == 5) {
        goto block_60;
    }
    if (D_00470048 == 4) {
        goto block_60;
    }
    if (D_00470048 == 2) {
        goto block_60;
    }
    goto block_68;
block_60:
    if (D_00470868 != 0) {
        goto block_42;
    }
    func_00288870(0x17);
    var_v1_5 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_63;
    }
    var_v1_5 = NULL;
block_63:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
    D_00470894 = (int)(&func_0028D1E0);
    D_00470854 = 1;
    return;
block_65:
    func_00288870(0x2B);
    var_v1_6 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_67;
    }
    var_v1_6 = NULL;
block_67:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
    D_00470894 = (int)(&func_0028C580);
    D_00470854 = 1;
    return;
block_68:
    func_00288870(0x18);
    var_v1_7 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_70;
    }
    var_v1_7 = NULL;
block_70:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_7;
    D_00470894 = (int)(&func_0028DDA0);
    D_00470854 = 1;
    return;
}
