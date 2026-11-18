/* Draft (not built): func_0026EF00 at 0x0026EF00, size 0x170, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x160, original 0x170
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026EF00.s */

// src/menu/ess_main_2.c func_0026EF00 size diff=43/88
extern void *gEssEdit;
extern void amCdFs_Close(void *, s32);
s32 DataErase_IsReady();
s32 func_0026D610(s32);
s32 func_0027D820(s32);
s32 func_0027E000(s16);
s32 func_0027E2D0(s32, s32, s32, s32);
s32 func_002B4C80(s32);
extern void amFile_Load(void *);
extern void func_0026ED60(void);
void func_0026EF00(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_v1;

    temp_a0 = *(s16 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 4)) + 4);
    if ((temp_a0 == 3) && (func_0027E000(temp_a0) != 0) && (func_002B4C80(0) == 1) && (DataErase_IsReady() == 1)) {
        func_0027D820(0);
        var_s1 = 0;
        var_s0 = 0;
        *(s32 *)((u8 *)gEssEdit + 0x14) = func_0027E2D0(6, 6, 1, -1);
        do {
            temp_v1 = ((u8 *)gEssEdit) + var_s0;
            *(s32 *)((u8 *)temp_v1 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0)) + 0x40);
            *(s32 *)((u8 *)(*(((u8 *)gEssEdit) + var_s0)) + 0x40) = 0;
            amCdFs_Close((void *)(*(((u8 *)gEssEdit) + var_s0)), 0);
            *(((u8 *)gEssEdit) + var_s0) = 0;
            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(((u8 *)gEssEdit) + var_s0) + 8)) + 0x50));
            func_0026D610(*(s32 *)((u8 *)(((u8 *)gEssEdit) + var_s0) + 8));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        var_v1 = (s32 *)(&func_0026ED60);
        *(s32 *)((u8 *)gEssEdit + 0x18) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 8)) + 0x50);
        *(s32 *)((u8 *)gEssEdit + 0x1C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0xC)) + 0x50);
        if (&func_0026ED60 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
