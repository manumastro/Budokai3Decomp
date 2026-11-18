/* Draft (not built): func_002A6E40 at 0x002A6E40, size 0x18C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 2256: amCdFs_Close(temp_a0, 0, temp_a2_2);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A6E40.s */

// src/story/evt_scrp.c func_002A6E40 cerr diff=-1/0
void func_002A6E40(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_a1;
    void (*var_v1_2)();
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s0 = (u8 *)(gEvtWork);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x18);
    if (*(s16 *)((u8 *)temp_a0 + 4) == 3) {
        *(u8 **)((u8 *)temp_s0 + 0x18) = (u8 *) *(u8 **)((u8 *)temp_a0 + 0x40);
        *(u8 **)((u8 *)temp_s0 + 0x1C) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x40)) + 0x50);
        temp_v1 = (*(s32 *)((u8 *)temp_s0 + 0x14) & 0x7FFF) * 8;
        *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 4);
        temp_a2 = *(u8 **)((u8 *)temp_s0 + 0x1C);
        *(u8 **)((u8 *)temp_s0 + 0x24) = (u8 *) (temp_a2 + *(s32 *)((u8 *)temp_a2 + 8));
        temp_a2_2 = *(u8 **)((u8 *)temp_s0 + 0x1C);
        *(u8 **)((u8 *)temp_s0 + 0x28) = (u8 *) (temp_a2_2 + *(s32 *)((u8 *)temp_a2_2 + 0xC));
        *(s32 **)((u8 *)temp_s0 + 0x2C) = (s32 *) (*(u8 **)((u8 *)temp_s0 + 0x24) + temp_v1);
        *(s32 *)((u8 *)temp_s0 + 0x30) = (s32) *(s32 *)((u8 *)(temp_v1 + *(u8 **)((u8 *)temp_s0 + 0x24)) + 4);
        *(u8 **)((u8 *)temp_s0 + 0x34) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0x28) + **(s32 **)((u8 *)temp_s0 + 0x2C));
        *(u8 **)((u8 *)temp_a0 + 0x40) = NULL;
        amCdFs_Close(temp_a0, 0, temp_a2_2);
        temp_v0 = *(u8 **)((u8 *)temp_s0 + 0x34);
        func_002A1430(*(s32 *)((u8 *)temp_v0 + 0), *(s32 *)((u8 *)temp_v0 + 4), *(s32 *)((u8 *)temp_v0 + 8), *(s32 *)((u8 *)temp_v0 + 0xC));
        func_002A1410((s32)(D_004E05F8));
        *(u8 **)((u8 *)temp_s0 + 0x34) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0x34) + 0x10);
        var_a1 = 0;
        if (*(s32 *)((u8 *)gEvtWork + 0x10) == 1) {
            var_a1 = 1;
        }
        if (var_a1 == 0) {
            *(u8 **)((u8 *)temp_s0 + 0x34) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0x34) + 8);
            temp_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x34)) + 0);
            if (temp_a0_2 != 0) {
                *(s32 *)((u8 *)temp_s0 + 0x38) = amCdFs_ReadFileId(temp_a0_2, 0, 1);
                var_v1 = (s32 *)(&func_002A6DB0);
                if (&func_002A6DB0 == NULL) {
                    var_v1 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) = var_v1;
            }
        } else {
            var_v1_2 = func_002A6210;
            *(u8 **)((u8 *)temp_s0 + 0x34) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0x34) - 4);
            *(s32 *)((u8 *)temp_s0 + 0xD4) = 0;
            if (func_002A6210 == NULL) {
                var_v1_2 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
        }
    }
}
