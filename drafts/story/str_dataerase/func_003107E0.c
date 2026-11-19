/* Draft (not built): func_003107E0 at 0x003107E0, size 0x114, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_dataerase/func_003107E0.s */

// src/story/str_dataerase.c func_003107E0 diff diff=35/69
s32 func_00264140(s32, s32);
s32 func_0026DAF0(s8 *, s16);
s32 func_00283D00(s32, s16, s32, s32);
extern s32 D_004E066D;
extern s32 D_005C4596;
extern void Save_Load();
extern void func_00310640(void);
void func_003107E0(s64 arg0) {
    Task *temp_v0;
    s16 temp_s0;
    s64 temp_v1;
    s8 *temp_v1_2;
    u8 temp_s1;
    u8 temp_v0_2;

    Scene_SetReady();
    temp_v0 = amTask_Create(func_00310640, NULL, 0x2000, 8, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
    *(s16 *)((u8 *)temp_v0 + 0x30) = (s16) arg0;
    temp_v1 = (s64) (arg0 << 0x30) >> 0x30;
    *(s16 *)((u8 *)temp_v0 + 0x32) = 0;
    if (temp_v1 >= 0) {
        temp_s0 = D_0046FC50[temp_v1];
        temp_s1 = *(&D_004E066D + (temp_s0 * 0x28));
        func_00283D00(0x3000, temp_s0, 1, 0x11403000);
        func_0026DAF0((s8 *)(D_004B4B40), (s16)(temp_s0));
        temp_v1_2 = &D_004DFB19[temp_s0];
        temp_v0_2 = (u8) *temp_v1_2;
        if ((s32) temp_v0_2 < (s32) temp_s1) {
            *temp_v1_2 = temp_v0_2 + 1;
        }
        *(&D_005C4596 + temp_s0) = (u8) *temp_v1_2;
    }
    Save_Load(0x3000, 0);
    func_00264140(-1, 0);
}
