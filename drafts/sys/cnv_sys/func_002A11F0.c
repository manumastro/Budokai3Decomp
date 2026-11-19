/* Draft (not built): func_002A11F0 at 0x002A11F0, size 0xE8, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A11F0.s */

extern void func_0029EA20(void);
extern void func_0029EC40(void);
void func_002A11F0(void) {
    s32 var_s0;
    u8 *temp_s2;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    temp_s2 = D_004708CC;
    if (temp_s2 != NULL) {
        if (*(s32 *)((u8 *)temp_s2 + 0x44) != 0) {
            var_s1 = 0;
            if (*(s32 *)((u8 *)temp_s2 + 0) > 0) {
                var_s0 = 0;
                do {
                    temp_a0 = (unsigned char *)*(s32 *)(*(u8 **)((u8 *)temp_s2 + 0x44) + var_s0);
                    if (temp_a0 != NULL) {
                        amHeap_Free(temp_a0);
                        *(s32 *)(*(u8 **)((u8 *)temp_s2 + 0x44) + var_s0) = 0;
                    }
                    var_s1 += 1;
                    var_s0 += 4;
                }
                while (var_s1 < *(s32 *)((u8 *)temp_s2 + 0));
            }
            amHeap_Free(*(u8 **)((u8 *)temp_s2 + 0x44));
            *(u8 **)((u8 *)temp_s2 + 0x44) = NULL;
            temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x50);
            if (temp_a0_2 != NULL) {
                amHeap_Free(temp_a0_2);
                *(u8 **)((u8 *)temp_s2 + 0x50) = NULL;
            }
        }
        func_0029EC40();
        func_0029EA20();
        if (D_004708CC != NULL) {
            amHeap_Free(D_004708CC);
            D_004708CC = NULL;
        }
    }
}
