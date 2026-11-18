/* Draft (not built): func_002CD5F0 at 0x002CD5F0, size 0x220, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1FC, original 0x220
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CD5F0.s */

// src/unk/unk_2CD5F0.c func_002CD5F0 size diff=71/127
s32 *BtlSys_GetSlot(s32);
s32 func_0021C360(s32);
void *func_0021C660();
s32 func_0022D860(s32, s32);
s32 func_002CCB70(void *, void *, s32, s32);
extern s32 D_0046EFF0;
extern s32 D_0047035C;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 func_002CCFD0;
extern s32 func_002CD0C0;
extern s32 func_002CD480;
extern void *gBtlSys;
extern void *amTask_Create();
extern void *D_00470704;
s32 func_002CD5F0(s32 arg0, s32 arg1) {
    s32 *temp_s1;
    s32 temp_s0;
    u8 **temp_s3;
    u8 *temp_a0;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s3_2;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s4 = gBtlSys;
    temp_s2 = func_0021C660();
    temp_s1 = BtlSys_GetSlot(arg0);
    temp_s0 = func_0021C360(arg0);
    temp_s3 = &D_005C2050 + (arg0 * 4);
    if (*temp_s3 != NULL) {
        return 0;
    }
    *(s32 *)((u8 *)temp_s2 + 0xC8) = (s32) (arg1 - 0x64);
    *(s32 *)((u8 *)temp_s2 + 0xCC) = (s32) *(&D_0046EFF0 + (*(s32 *)((u8 *)temp_s2 + 0xC8) * 0x10));
    if (*(s32 *)((u8 *)temp_s2 + 0xCC) & 0x4000) {
        *temp_s1 &= ~0x800;
    }
    *temp_s3 = amTask_Create(&func_002CD480, &func_002CD0C0, 0x5410, 0x1000);
    temp_v0 = *temp_s3;
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_s1_2 = temp_v0 + 0x30;
    memset(temp_s1_2, 0, D_0047035C);
    *(s32 *)((u8 *)temp_s1_2 + 0xC) = arg0;
    *(s32 *)((u8 *)temp_s1_2 + 8) = 0;
    if (*(s32 *)((u8 *)temp_s2 + 0xCC) & 0x20040000) {
        *(s32 *)((u8 *)temp_s1_2 + 4) = 0x42F00000;
    }
    *(u8 **)((u8 *)temp_v0 + 0x30) = amTask_Create(&func_002CCFD0, NULL, 0x3A10, 0x1000);
    temp_v0_2 = *(u8 **)((u8 *)temp_v0 + 0x30);
    if (temp_v0_2 == NULL) {
        amTask_Kill((s32)((void *)(*temp_s3)));
        *temp_s3 = NULL;
        return 0;
    }
    temp_s3_2 = temp_v0_2 + 0x30;
    memset(temp_s3_2, 0, D_0047035C);
    *(u8 **)((u8 *)temp_v0_2 + 0x30) = temp_s1_2;
    func_002CCB70(temp_s3_2, temp_s2, temp_s0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE84);
    D_00470704 = temp_a0;
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04010000);
    D_00470238 = 0;
    *(s32 *)((u8 *)temp_s3_2 + 0x14) = func_0022D860(*(s32 *)((u8 *)(((temp_s0 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE88)) + 0x14)) + 0x64), 0);
    return 1;
}
