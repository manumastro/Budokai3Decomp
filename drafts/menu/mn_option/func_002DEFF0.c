/* Draft (not built): func_002DEFF0 at 0x002DEFF0, size 0x10C, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DEFF0.s */

// src/menu/mn_option.c func_002DEFF0 diff diff=50/67
extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
s32 Save_GetState();
s32 Scene_FadeTo(s32, s32);
s32 func_001EF510(void *, s32);
s32 memcpy(void *, void *, s32);
extern s8 D_004B4B63;
extern s32 D_0058F680;
extern void Scene_Request();
extern void func_002D9DE0(void);
extern void func_002DEA00(void);
void func_002DEFF0(u8 *arg0) {
    s32 temp_v0;
    void (*var_v0)();
    u8 *temp_v0_2;

    func_002DFBC0();
    temp_v0 = Save_GetState();
    if ((temp_v0 != 3) && (temp_v0 != 5)) {
        if (temp_v0 != 4) {
            return;
        }
        temp_v0_2 = amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
        memcpy(temp_v0_2, &D_0058F680 + (D_004B4B63 * 0xD680), 0xD680);
        func_001EF510(temp_v0_2, 0xD680);
        amHeap_Free(temp_v0_2);
        goto block_7;
    }
block_7:
    var_v0 = func_002DEA00;
    if (func_002DEA00 == NULL) {
        var_v0 = NULL;
    }
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
    *(void (**)())((u8 *)gOptionWork + 0x34C) = func_002D9DE0;
    *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
    *(s32 *)((u8 *)gOptionWork + 0x38C) = 0;
    Scene_Request(5, 0);
    Scene_FadeTo(0xA, 0);
}
