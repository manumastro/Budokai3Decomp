/* Draft (not built): func_003070A0 at 0x003070A0, size 0xD0, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_shenron/func_003070A0.s */

extern s32 D_004E066D;
extern void amHeap_Free(void *);
extern void Help_Exit();
extern void func_00305910(void);
extern char D_00511479[];
extern char D_004E6560[];
void func_003070A0(void) {
    s32 temp_a1;
    s8 *temp_v1;
    u8 **temp_s0;
    u8 *temp_a0;
    temp_s0 = (unsigned char **)D_0047097C;
    temp_a1 = *(s32 *)((u8 *)&temp_s0[*(s32 *)((u8 *)temp_s0 + 0x20)] + 0x14);
    if ((s32)(u8)D_00511479[temp_a1] < (s32)*(u8 *)(&D_004E066D + temp_a1 * 0x28)) {
        temp_v1 = (signed char *)&D_004E6560[temp_a1];
        *(u8 *)((u8 *)temp_v1 + 0x2AF19) += 1;
    }
    func_00305910();
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0 != NULL) {
        amTask_Kill(temp_a0);
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
    }
    if ((s32)D_0047097C != 0) {
        amHeap_Free((void *)D_0047097C);
        D_0047097C = (int)NULL;
    }
    Help_Exit();
}
