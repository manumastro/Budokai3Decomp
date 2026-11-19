/* Draft (not built): func_0027E2D0 at 0x0027E2D0, size 0x504, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 192 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x46C, original 0x504
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027E2D0.s */

// src/menu/mn_charasel.c func_0027E2D0 size diff=192/283
extern void memset(void *, s32, s32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_002E8F90(void *, s8, s8, s8);
s32 func_002F91C0(s32, s64, s8, s64);
s32 memcpy(void *, void *, s32);
extern s16 D_0046B5B0;
extern s32 D_0046B6D0;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern s32 D_0058F664;
extern s32 D_0058F668;
extern s32 D_0058F66E;
extern s32 D_0058F670;
extern s8 gEssEditSlot;
extern void *amTask_Create();
extern void Help_Load();
extern void CsSubArena_Load(void);
extern void CsSubStat_Load(void);
extern void DataErase_Acquire(void);
extern char D_005C4140[];
extern void func_0027D1D0(void);
u8 *func_0027E2D0(u8 arg0, s8 arg1, s8 arg2, s64 arg3) {
    u8 spAE;
    u8 spAF;
    s16 *var_a2;
    s16 temp_v0_2;
    s32 temp_a3_2;
    s32 temp_s0;
    s32 var_s1;
    s64 temp_a0;
    s64 temp_a1;
    s64 temp_a3;
    s64 var_a1;
    s64 var_a3;
    s64 var_v0_2;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a0_4;
    s8 temp_a2;
    s8 temp_v0_3;
    s8 var_a2_2;
    s8 var_v0_3;
    u8 temp_v0_4;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *var_v0;

    spAF = M2C_ERROR(/* Read from unset register $t2 */);
    spAE = M2C_ERROR(/* Read from unset register $t3 */);
    var_s1 = 0;
    temp_s5 = amTask_Create(&func_0027D1D0, 0, 0x2800, 8);
    temp_v0 = amHeap_Alloc(0x80, 0, &D_0046B6D0, 0x156);
    *(u8 **)((u8 *)temp_s5 + 0x30) = temp_v0;
    memset(temp_v0, 0, 0x80);
    temp_a0 = (s64) (arg3 << 0x38) >> 0x38;
    *(u8 *)((u8 *)temp_v0 + 7) = (u8) ((arg1 & 0xFF & 1) != 0);
    if (temp_a0 == -1) {
        var_v0 = (unsigned char *)(D_005C4140 + (*(u8 *)((u8 *)temp_v0 + 7) * 0xB80) + 0x10);
    } else {
        var_v0 = (unsigned char *)(D_005C4140 + (temp_a0 * 0xB80) + 0x10);
    }
    *(u8 **)((u8 *)temp_v0 + 0x78) = var_v0;
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 == 6) {
        func_002E8F90(*(u8 **)((u8 *)temp_v0 + 0x78), D_004B4B41, D_004B4B59, gEssEditSlot);
    } else {
        func_002E8F90(*(u8 **)((u8 *)temp_v0 + 0x78), D_004B4B41, D_004B4B59, (s8) *(u8 *)((u8 *)temp_v0 + 7));
    }
    var_a3 = 0;
    var_a2 = &D_0046B5B0;
    do {
        if (*(s64 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x78)) + 0x38) & (1 << var_a3)) {
            temp_v0_2 = *var_a2;
            if (temp_v0_2 != -1) {
                var_s1 |= 1 << (s64) temp_v0_2;
            }
        }
        var_a3 += 1;
        var_a2 += 2;
    } while (var_a3 < 0x2C);
    *(s64 *)((u8 *)temp_v0 + 0x20) = (s64) ((0xFFFF << 0x10) | 0xFFFF | (0xFFFFFF << 0x20));
    if (temp_s0 == 1) {
        *(s64 *)((u8 *)temp_v0 + 0x20) = (s64) (*(s64 *)((u8 *)temp_v0 + 0x20) & (0x23C9D | (4 << 0x20)));
    }
    if ((temp_s0 != 4) && (temp_s0 != 3) && (temp_s0 != 2)) {

    } else {
        var_s1 |= 0x40 << 0x20;
    }
    var_a2_2 = 0;
    var_a1 = 0;
    *(s64 *)((u8 *)temp_v0 + 0x10) = (s64) (var_s1 & *(s64 *)((u8 *)temp_v0 + 0x20));
    *(s64 *)((u8 *)temp_v0 + 0x18) = (s64) (var_s1 & *(s64 *)((u8 *)temp_v0 + 0x20));
    do {
        if (*(s64 *)((u8 *)temp_v0 + 0x10) & (1 << var_a1)) {
            var_a2_2 += 1;
        }
        var_a1 += 1;
    } while (var_a1 < 0x27);
    *(s8 *)((u8 *)temp_v0 + 9) = var_a2_2;
    func_002F91C0(*(s32 *)((u8 *)temp_v0 + 0x28), *(s64 *)((u8 *)temp_v0 + 0x10), var_a2_2, var_a3);
    temp_a1 = M2C_ERROR(/* Read from unset register $t0 */) & 0xFF;
    *(s8 *)((u8 *)temp_v0 + 0) = 1;
    *(s8 *)((u8 *)temp_v0 + 2) = -1;
    *(s8 *)((u8 *)temp_v0 + 1) = 0;
    *(s8 *)((u8 *)temp_v0 + 3) = (s8) (temp_a1 == 0x26);
    var_v0_2 = 0;
    if (*(s64 *)((u8 *)temp_v0 + 0x10) & (1 << temp_a1)) {
        var_v0_2 = temp_a1;
    }
    *(s8 *)((u8 *)temp_v0 + 4) = (s8) var_v0_2;
    if (temp_a1 == 0x26) {
        var_v0_3 = 0;
    } else {
        var_v0_3 = M2C_ERROR(/* Read from unset register $t1 */) & 0xFF;
    }
    *(s8 *)((u8 *)temp_v0 + 5) = var_v0_3;
    *(u8 *)((u8 *)temp_v0 + 0xC) = spAF;
    *(u8 *)((u8 *)temp_v0 + 0xD) = spAE;
    *(s8 *)((u8 *)temp_v0 + 6) = arg1;
    *(u8 *)((u8 *)temp_v0 + 0xA) = arg0;
    *(s8 *)((u8 *)temp_v0 + 8) = arg2;
    *(s32 *)((u8 *)temp_v0 + 0x2C) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x5C) = 0x3F800000;
    *(s32 *)((u8 *)temp_v0 + 0x60) = 0x3F800000;
    *(s32 *)((u8 *)temp_v0 + 0x64) = 0;
    temp_a3 = (s64) ((s64) *(u8 *)((u8 *)temp_v0 + 7) << 0x30) >> 0x30;
    temp_a3_2 = temp_a3 * 2;
    *(&D_0058F664 + temp_a3_2) = (s16) *(s8 *)((u8 *)temp_v0 + 4);
    temp_a2 = *(s8 *)((u8 *)temp_v0 + 5);
    *(&D_0058F668 + temp_a3) = temp_a2;
    *(&D_0058F66E + temp_a3) = *(u8 *)((u8 *)temp_v0 + 0xC);
    *(&D_0058F670 + temp_a3) = *(u8 *)((u8 *)temp_v0 + 0xD);
    temp_v0_3 = func_0027D3B0(*(u8 *)((u8 *)temp_v0 + 7), 0, temp_a2, temp_a3_2);
    *(s8 *)((u8 *)temp_v0 + 5) = temp_v0_3;
    *(s8 *)((u8 *)(*(s8 *)((u8 *)temp_v0 + 4) + *(u8 **)((u8 *)temp_v0 + 0x78)) + 0x420) = temp_v0_3;
    temp_v0_4 = *(u8 *)((u8 *)temp_v0 + 0xA);
    switch (temp_v0_4) {
    case 2:
    case 3:
    case 4:
        CsSubStat_Load();
        break;
    case 5:
        temp_a0_2 = *(s8 *)((u8 *)temp_v0 + 4);
        if (temp_a0_2 != 0x26) {
            memcpy(temp_v0 + 0x6C, *(u8 **)((u8 *)temp_v0 + 0x78) + (temp_a0_2 * 0xC) + 0x258, 0xC);
        }
        CsSubArena_Load();
        break;
    case 1:
        temp_a0_3 = *(s8 *)((u8 *)temp_v0 + 4);
        if (temp_a0_3 != 0x26) {
            memcpy(temp_v0 + 0x6C, *(u8 **)((u8 *)temp_v0 + 0x78) + (temp_a0_3 * 0xC) + 0x258, 0xC);
        }
        break;
    case 7:
        temp_a0_4 = *(s8 *)((u8 *)temp_v0 + 4);
        if (temp_a0_4 != 0x26) {
            memcpy(temp_v0 + 0x6C, *(u8 **)((u8 *)temp_v0 + 0x78) + (temp_a0_4 * 0xC) + 0x258, 0xC);
        }
        DataErase_Acquire();
        break;
    }
    Help_Load();
    return temp_s5;
}
