/* Draft (not built): func_002DF5D0 at 0x002DF5D0, size 0x10C, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DF5D0.s */

extern void amTask_Kill(void *);
extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
s32 Save_GetState();
s32 amDisp_SetOffset(s16, s16);
s32 func_001EF510(void *, s32);
s32 memcpy(void *, void *, s32);
extern s8 D_004B4B63;
extern s32 D_0058F680;
extern s32 func_002DD2B0;
extern void Save_ClearBusy(void);
void func_002DF5D0(void) {
    u8 *temp_v0_2;
    s32 temp_v0;
    u8 *temp_a0;
    u8 *temp_s0;
    temp_s0 = gOptionWork;
    temp_v0 = Save_GetState();
    switch (temp_v0) {
        case 4:
            temp_v0_2 = amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
            memcpy(temp_v0_2, &D_0058F680 + D_004B4B63 * 0xD680, 0xD680);
            func_001EF510(temp_v0_2, 0xD680);
            amHeap_Free(temp_v0_2);

        case 3:

        case 5:
            Save_ClearBusy();
            temp_a0 = *((u8 **) (((u8 *) temp_s0) + 0x324));
            if (temp_a0 != NULL) {
            amTask_Kill(temp_a0);
            *((u8 **) (((u8 *) temp_s0) + 0x324)) = NULL;
        }
            func_002DF100();
            func_002DE910();
            amDisp_SetOffset(*((s16 *) (((u8 *) D_004E05DC) + 0x1E)), *((s16 *) (((u8 *) D_004E05DC) + 0x20)));
            *((s32 **) (((u8 *) temp_s0) + 0x344)) = &func_002DD2B0;
            return;
    }
}
