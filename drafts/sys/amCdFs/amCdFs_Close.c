/* Draft (not built): amCdFs_Close at 0x0025C800, size 0x1C4, segment sys/amCdFs (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oid (struct CdReq *, int)' now declared as: 'void (unsigned char *, int)' @ 386: void amCdFs_Close(u8 *arg0, s32 arg1) {
 * Original: asm/nonmatchings/sys/amCdFs/amCdFs_Close.s */

// src/sys/amCdFs.c amCdFs_Close cerr diff=-1/0
s32 fn_8004FC94(s32);
s32 printf(s8 *);
void amCdFs_Close(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    s32 var_a1;

    if ((gCdReqHead == arg0) && (D_00470758 == 1)) {
        D_00470758 = 0;
    }
    temp_v0 = *(s16 *)((u8 *)arg0 + 4);
    switch (temp_v0) {
    case 1:
    case 2:
        if (*(s8 *)((u8 *)arg0 + 0) == 0) {
            ADXF_StopNw(D_0047078C);
            if ((arg1 == 0) && (func_00155FF8(D_0047078C) != 0)) {
                if (D_00470798 >= 0x40) {
                    printf((s8 *)(D_0046B010));
loop_11:
                    goto loop_11;
                }
                D_00470798 += 1;
                var_a1 = 0;
loop_14:
                if (*(&D_0058EAF0 + (var_a1 * 4)) != 0) {
                    var_a1 += 1;
                    goto loop_14;
                }
                *(&D_0058EAF0 + (var_a1 * 4)) = D_0047078C;
                if (*(s8 *)((u8 *)arg0 + 1) != 0) {
                    D_0058EBF0[var_a1] = *(u8 **)((u8 *)arg0 + 0x54);
                    *(u8 **)((u8 *)arg0 + 0x54) = NULL;
                }
                goto block_21;
            }
            fn_8004FC94(D_0047078C);
            goto block_21;
        }
    case 0:
    case 4:
    case 5:
    case 6:
block_21:
        amCdFs_Unlink(arg0);
    default:
        if (*(s32 *)((u8 *)arg0 + 0x40) > 0) {
            amCdFs_ReleaseCache((u8 *) *(s32 *)((u8 *)arg0 + 0x40));
        }
        amCdFs_FreeReq(arg0);
        return;
    }
}
