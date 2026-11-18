/* Draft (not built): func_002CB650 at 0x002CB650, size 0x6EC, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 350 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x67C, original 0x6EC
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CB650.s */

// src/unk/unk_2CAED0.c func_002CB650 size diff=350/415
extern void func_001C75D0(void *, int);
void func_002CB650(void) {
    s32 sp50;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *var_s2;

    temp_s3 = gBattle;
    var_s0 = 0;
    temp_s1 = (u8 *)(gTutWork);
    *(s8 *)((u8 *)temp_s3 + 0x8AAD) = 0;
    var_s2 = temp_s3 + 0x830;
    if (*(s32 *)((u8 *)temp_s3 + 0x88D8) > 0) {
        do {
            func_001C75D0(var_s2, 0);
            var_s0 += 1;
            var_s2 += 0x2020;
        } while (var_s0 < *(s32 *)((u8 *)temp_s3 + 0x88D8));
    }
    *(s8 *)((u8 *)temp_s1 + 0x30) = -1;
    temp_v1 = *(s32 *)((u8 *)temp_s1 + 0xC);
    switch (temp_v1) {                              /* irregular */
    case 33:
    case 21:
    case 19:
    case 17:
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x13A4) = -2;
        break;
    case 30:
        if (gBattle != NULL) {
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x100);
        }
        break;
    case 31:
        if (gBattle != NULL) {
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x200);
        }
        break;
    case 32:
        *(s8 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x1354)) + 0x2004) = 0;
        *(s8 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x1354)) + 0x1FF8) = 0;
        break;
    }
    if (*(s32 *)((u8 *)temp_s1 + 0xC) < 6) {
        if (gBattle != NULL) {
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 1);
        }
        if (gBattle != NULL) {
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
            *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 2);
        }
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x11) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x1000);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x13) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x2004);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x15) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 8);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x17) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x40);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x1D) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x80);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x1E) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x200);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x1F) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x100);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x20) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x800);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) < 0x21) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x400);
    }
    temp_v1_2 = *(s32 *)((u8 *)temp_s1 + 0xC);
    if (((temp_v1_2 == 0x15) || (temp_v1_2 == 0x16)) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x20);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0xC) == 0x21) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0x3008);
    }
    sp50 = 1;
    A2d_CallHandler(0x27, &sp50);
    *(s8 *)((u8 *)temp_s1 + 0x3D) = 0;
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0xC);
    if (temp_a0 >= 6) {
        if ((temp_a0 != 0x21) && (temp_a0 != 0x15) && (temp_a0 != 0x13) && (temp_a0 != 0x11) && (temp_a0 != 0x1E) && (temp_a0 != 0x1D) && (temp_a0 != 0x1B) && (temp_a0 != 0x1A) && (temp_a0 != 0x19) && (temp_a0 != 0x18) && (temp_a0 != 0x10) && (temp_a0 != 0xE) && (temp_a0 != 0xD)) {
            *(s8 *)((u8 *)temp_s1 + 0x3D) = 1;
        } else {
            *(s8 *)((u8 *)temp_s1 + 0x3D) = 0;
        }
    }
    if (*(s8 *)((u8 *)temp_s1 + 0x3D) != 0) {
        func_002E9BA0(1);
    }
}
