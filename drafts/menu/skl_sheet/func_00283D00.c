/* Draft (not built): func_00283D00 at 0x00283D00, size 0x1C8, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); fined identifier 'sp' @ 152: (((3 - (((s32) *(u8 *)((u8 *)(&D_004E0660 + temp_a0) + 0xA) >> 4) & 3)) * 4) + sp) + 0x50);
 * Original: asm/nonmatchings/menu/skl_sheet/func_00283D00.s */

// src/menu/skl_sheet.c func_00283D00 cerr diff=-1/0
s32 amCdFs_ReadFileId(s32, s32, s32, void *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(void *, s32, s32);
extern s128 D_00453480;
extern s32 D_0046B7A0;
extern s32 D_004E0660;
extern void *amTask_Create();
extern void Help_Load();
extern void func_00283A00(void);
void func_00283D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s128 sp50;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;

    if (D_00470820 != NULL) {
        amHeap_Free(D_00470820);
    }
    D_00470820 = amHeap_Alloc(0xF4, 0, &D_0046B7A0, 0xC2);
    memset(D_00470820, 0, 0xF4);
    *(s32 *)((u8 *)D_00470820 + 0x4C) = arg0;
    *(s32 *)((u8 *)D_00470820 + 0x50) = arg1;
    *(s32 *)((u8 *)D_00470820 + 0x54) = arg3;
    sp50 = D_00453480;
    temp_a1 = *(s32 *)((u8 *)D_00470820 + 0x50);
    temp_a0 = temp_a1 * 0x28;
    temp_s0 = *(s32 *)((u8 *)(((3 - (((s32) *(u8 *)((u8 *)(&D_004E0660 + temp_a0) + 0xA) >> 4) & 3)) * 4) + sp) + 0x50);
    Help_Load(temp_a0, temp_a1, D_00470820);
    *(s32 *)((u8 *)D_00470820 + 0) = amCdFs_ReadFileId(0x10847, 0, 0, 0);
    *(s32 *)((u8 *)D_00470820 + 4) = amCdFs_ReadFileId(0x10848, 0, 0, D_00470820);
    *(s32 *)((u8 *)D_00470820 + 8) = amCdFs_ReadFileId(temp_s0 | 0x10000, 0, 0, D_00470820);
    *(s32 *)((u8 *)D_00470820 + 0xC) = amCdFs_ReadFileId((arg1 + 0x854) | 0x10000, 0, 0, D_00470820);
    if (arg2 != 0) {
        *(s32 *)((u8 *)D_00470820 + 0x10) = amCdFs_ReadFileId(0x10846, 0, 0, 0);
    }
    *(u8 **)((u8 *)D_00470820 + 0x28) = amTask_Create(&func_00283A00, 0, arg0, 0x200);
    *(s32 *)((u8 *)D_00470820 + 0x64) = 2;
    *(s32 *)((u8 *)D_00470820 + 0x94) = 0xA;
}
