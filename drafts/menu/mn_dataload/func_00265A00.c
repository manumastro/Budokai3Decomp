/* Draft (not built): func_00265A00 at 0x00265A00, size 0x134, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x134
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265A00.s */

// src/menu/mn_dataload.c func_00265A00 size diff=21/79
extern void func_00265BF0();
s32 Save_GetState();
s32 func_002E1A40(void (*)());
extern void Save_SetBusy(void);
extern void Save_Exit();
void func_00265A00(u8 *arg0) {
    s32 temp_v0;
    u8 temp_v1;
    void (*var_v0)();
    void (*var_v0_2)();
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x34);
    func_00265800(temp_s1);
    temp_v0 = Save_GetState();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 4:                                         /* switch 1 */
        func_002E1A40(func_002659E0);
        Save_Exit();
        Save_SetBusy();
        var_v1 = func_002659F0;
        if (func_002659F0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    case 5:                                         /* switch 1 */
        Save_Exit();
        var_v0 = func_00265BF0;
        if (func_00265BF0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
        Save_SetBusy();
        return;
    case 3:                                         /* switch 1 */
        Save_Exit();
        temp_v1 = *(u8 *)((u8 *)temp_s1 + 0x30);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_v0_2 = func_00265BF0;
            if (func_00265BF0 == NULL) {
                var_v0_2 = NULL;
            }
block_20:
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0_2;
            break;
        case 1:                                     /* switch 2 */
            var_v0_2 = func_00265BF0;
            if (func_00265BF0 == NULL) {
                var_v0_2 = NULL;
            }
            goto block_20;
        }
        Save_SetBusy();
        return;
    }
}
