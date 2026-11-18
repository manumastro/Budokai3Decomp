/* Draft (not built): func_001C8600 at 0x001C8600, size 0x174, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d char *' mwccps2.exe Compiler: @ 6045: 001A50F0((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x1ED8)))))), 0);
 * Original: asm/nonmatchings/battle/btl_main/func_001C8600.s */

// src/battle/btl_main.c func_001C8600 cerr diff=-1/0
void func_001C8600(u8 *arg0) {
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s0_2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x1EEC);
    temp_s3 = arg0 + 0x1ED8;
    temp_s0 = arg0 + 0x1EF0;
    if (temp_s2 != NULL) {
        *(u8 **)((u8 *)temp_s3 + 0x14) = (u8 *) *(u8 **)((u8 *)temp_s2 + 0x40);
        *(u8 **)((u8 *)arg0 + 0x1ED8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x50);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x1ED8))));
        *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
        amCdFs_Close(temp_s2, 0);
        *(u8 **)((u8 *)temp_s3 + 4) = func_001A50F0((u8 *)((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x1ED8))))))), 0);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)temp_s3 + 4))));
        *(u8 **)((u8 *)temp_s3 + 0xC) = func_001A50F0((u8 *)((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x1ED8))))))), 2);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)temp_s3 + 0xC))));
        *(u8 **)((u8 *)temp_s3 + 0x10) = func_001A50F0((u8 *)((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x1ED8))))))), 3);
    }
    temp_s2_2 = *(u8 **)((u8 *)temp_s0 + 4);
    if (temp_s2_2 != NULL) {
        *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) *(u8 **)((u8 *)temp_s2_2 + 0x40);
        *(u8 **)((u8 *)arg0 + 0x1EF0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2_2 + 0x40)) + 0x50);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x1EF0))));
        *(u8 **)((u8 *)temp_s2_2 + 0x40) = NULL;
        amCdFs_Close(temp_s2_2, 0);
    }
    var_s2 = 0;
    var_s0 = arg0;
    do {
        func_001C8500(arg0, var_s2);
        temp_a0 = *(u8 **)((u8 *)var_s0 + 0x1DB8);
        if ((temp_a0 != NULL) && (*(s32 *)((u8 *)temp_a0 + 0x24) == 0)) {
            func_001CA8F0(temp_a0);
            func_001E53B0(arg0, var_s2);
            func_001C7D90((void *)(arg0), var_s2, (void *)(NULL));
        }
        var_s2 += 1;
        var_s0 += 4;
    } while (var_s2 < 8);
    var_s2_2 = 0;
    var_s0_2 = arg0;
    do {
        func_001E5C10(var_s0_2 + 0x650, arg0, var_s2_2);
        var_s2_2 += 1;
        var_s0_2 += 0x680;
    } while (var_s2_2 < 2);
}
