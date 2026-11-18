/* Draft (not built): func_00272510 at 0x00272510, size 0x13C, segment menu/ess_list (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); .exe Compiler: 127: amCdFs_Close(*(D_004707FC + var_s0), 0); @ 126: *(s32 *)((u8 *)(*(D_004707FC + var_s0)) + 0x40) = 0;
 * Original: asm/nonmatchings/menu/ess_list/func_00272510.s */

// src/menu/ess_list.c func_00272510 cerr diff=-1/0
extern void amCdFs_Close(void *, s32);
s32 func_0026D610(s32);
extern void amFile_Load(void *);
extern void func_00271580(void);
void func_00272510(u8 *arg0) {
    s32 *var_v1;
    s32 var_s0;
    s32 var_s1;
    void (*var_v1_2)();
    u8 *temp_v1;

    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)D_004707FC + 8)) + 4) == 3) {
        var_s1 = 0;
        var_s0 = 0;
        do {
            temp_v1 = (u8 *)(D_004707FC + var_s0);
            *(s32 *)((u8 *)temp_v1 + 0xC) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0)) + 0x40);
            *(s32 *)((u8 *)(*(D_004707FC + var_s0)) + 0x40) = 0;
            amCdFs_Close(*(D_004707FC + var_s0), 0);
            *(D_004707FC + var_s0) = 0;
            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(D_004707FC + var_s0) + 0xC)) + 0x50));
            func_0026D610(*(s32 *)((u8 *)(D_004707FC + var_s0) + 0xC));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 3);
        var_v1 = (s32 *)(&func_00272440);
        *(s32 *)((u8 *)D_004707FC + 0x20) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0xC)) + 0x50);
        *(s32 *)((u8 *)D_004707FC + 0x24) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x10)) + 0x50);
        *(s32 *)((u8 *)D_004707FC + 0x28) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x14)) + 0x50);
        *(s32 *)((u8 *)arg0 + 0x30) = 0x3C;
        if (&func_00272440 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        var_v1_2 = func_00271580;
        if (func_00271580 == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x1C)) + 0x1C) = var_v1_2;
    }
}
