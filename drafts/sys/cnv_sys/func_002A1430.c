/* Draft (not built): func_002A1430 at 0x002A1430, size 0xD8, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A1430.s */

void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(void *, s32, s32);
extern s32 D_0046EA58;
void func_002A1430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_s0;
    memset(D_004708CC, 0, 0x60);
    D_004708CC = amHeap_Alloc(0x60, 0, &D_0046EA58, 0x99);
    *(s32 *)((u8 *)temp_s0 + 0) = arg0;
    temp_s0 = D_004708CC;
    *(s32 *)((u8 *)temp_s0 + 8) = arg2;
    *(s32 *)((u8 *)temp_s0 + 4) = arg1;
    *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
    *(s32 *)((u8 *)temp_s0 + 0xC) = arg3;
    if (*(s32 *)((u8 *)temp_s0 + 0) <= 0) {
        *(s32 *)((u8 *)temp_s0 + 0) = 1;
    }
    func_002A02B0();
    func_002A0060();
    func_0029FE20();
    *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x38) = 0x3F800000;
    *(s32 *)((u8 *)temp_s0 + 0x1C) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x20) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x40) = -1;
}
