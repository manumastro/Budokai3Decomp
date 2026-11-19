/* Draft (not built): func_002A0750 at 0x002A0750, size 0x50, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0750.s */

void func_002A0750(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_t0;
    u8 *temp_v1;
    var_t0 = 0;
    if (0 < *(s32 *)((u8 *)D_004708CC + 0)) {
        do {
            var_t0 += 1;
            temp_v1 = (unsigned char *)(*(s32 *)((u8 *)D_004708CC + 0x58) + arg0 * 0x30);
            *(s32 *)((u8 *)temp_v1 + 0x18) = arg1;
            *(s32 *)((u8 *)temp_v1 + 0x1C) = arg2;
            *(s32 *)((u8 *)temp_v1 + 0x20) = arg3;
        }
        while (var_t0 < *(s32 *)((u8 *)D_004708CC + 0));
    }
}
