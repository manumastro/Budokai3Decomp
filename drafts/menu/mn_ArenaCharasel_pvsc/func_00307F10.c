/* Draft (not built): func_00307F10 at 0x00307F10, size 0x160, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307F10.s */

s64 ArenaList_GetCursor(s32);
void *ArenaList_GetEntries(s32);
s32 func_002F04D0(s32);
extern s32 D_0046B560;
extern s8 D_004B4B5D;
extern s8 D_004B4B5F;
extern void ArenaStageSel_Load(void);
extern void func_00307E40(void);
extern void func_00307D50(void);
void func_00307F10(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s64 temp_a0;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    var_s2 = arg0;
    var_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(var_s1);
    temp_v0 = ArenaList_GetEntries(*(s32 *)((u8 *)var_s1 + 0x10));
    var_s0 = temp_v0;
    *(s8 *)((u8 *)var_s1 + 0x16) = (s8)*(s8 *)((u8 *)temp_v0 + 0xF);
    *(s8 *)((u8 *)var_s1 + 0x17) = (s8)*(s8 *)((u8 *)temp_v0 + 0x10);
    *(s8 *)((u8 *)var_s1 + 0x18) = (s8)*(s8 *)((u8 *)temp_v0 + 0x11);
    *(s8 *)((u8 *)var_s1 + 0x19) = (s8)*(s8 *)((u8 *)temp_v0 + 0x12);
    *(s8 *)((u8 *)var_s1 + 0x1A) = (s8)*(s8 *)((u8 *)temp_v0 + 0x13);
    *(s8 *)((u8 *)var_s1 + 0x1B) = (s8)*(s8 *)((u8 *)temp_v0 + 0x14);
    *(s8 *)((u8 *)var_s1 + 0x1C) = (s8)*(s8 *)((u8 *)temp_v0 + 0x15);
    *(s8 *)((u8 *)var_s1 + 0x1D) = (s8)*(s8 *)((u8 *)temp_v0 + 0xE);
    *(s32 *)((u8 *)var_s1 + 0x28) = (s32)*(s32 *)((u8 *)temp_v0 + 0);
    *(s32 *)((u8 *)var_s1 + 0x2C) = (s32)*(s32 *)((u8 *)temp_v0 + 4);
    if ((s64)(ArenaList_GetFirst(*(s32 *)((u8 *)var_s1 + 0x10)) << 0x30) >> 0x30 >= 4) {
        temp_a0 = (s64)(ArenaList_GetCursor(*(s32 *)((u8 *)var_s1 + 0x10)) << 0x30) >> 0x30;
        switch (temp_a0) {
            case -1:
                return;

            case 0:
                func_002F04D0(*(s32 *)((u8 *)var_s1 + 0x10));
                var_v1 = (int *)&func_00307E40;
                if (&func_00307E40 == NULL) {
                var_v1 = NULL;
            }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v1;
                return;

            case 1:
                D_004B4B5D = (s8)*(s16 *)(&D_0046B560 + *(s16 *)((u8 *)var_s0 + 0xC) * 2);
                D_004B4B5F = 0;
                ArenaStageSel_Load();
                var_v1_2 = (int *)&func_00307D50;
                if (&func_00307D50 == NULL) {
                var_v1_2 = NULL;
            }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v1_2;
                break;
        }
    }
}
