/* Draft (not built): func_001C8210 at 0x001C8210, size 0xA4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001C8210.s */

// src/battle/btl_main.c func_001C8210 diff diff=1/41
void func_001C8210(u8 *arg0, s32 arg1) {
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v0 = (arg1 * 4) + arg0;
    temp_v1 = *(u8 **)((u8 *)temp_v0 + 0x1DB8);
    if (temp_v1 != NULL) {
        if ((s32)(*(s32 *)((u8 *)arg0 + 0xB7C)) == (s32)(temp_v1)) {
            func_001E7070(arg0 + 0x650, -1);
            func_001E8290(arg0 + 0x650);
        }
        if ((s32)(*(s32 *)((u8 *)arg0 + 0x11FC)) == (s32)(*(u8 **)((u8 *)temp_v0 + 0x1DB8))) {
            func_001E7070(arg0 + 0xCD0, -1);
            func_001E8290(arg0 + 0xCD0);
        }
        Character_Release(*(u8 **)((u8 *)temp_v0 + 0x1DB8));
        *(u8 **)((u8 *)temp_v0 + 0x1DB8) = NULL;
    }
    func_001C82C0((Fighter *)(arg0), (s32)(arg1));
}
