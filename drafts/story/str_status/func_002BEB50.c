/* Draft (not built): func_002BEB50 at 0x002BEB50, size 0x160, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x160
 * Original: asm/nonmatchings/story/str_status/func_002BEB50.s */

// src/story/str_status.c func_002BEB50 size diff=46/90
void *BtlCmd_GetMotEntry(s32, s32);
s32 func_00127E88(s32, s32 *, s32);
s32 func_001A50F0(s32, s32);
s32 func_0020A100(s32);
extern s32 D_0046EEA8;
extern void *amObject_Create(void *, void *);
void func_002BEB50(void) {
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s0;
    u8 *var_s2;

    var_s0 = *(u8 **)((u8 *)D_0047011C + 0x2D4);
    if (var_s0 != NULL) {
        *(u8 **)((u8 *)D_0047011C + 0x2D4) = (u8 *) *(u8 **)((u8 *)var_s0 + 0x40);
        *(s32 *)((u8 *)D_0047011C + 0x2D8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x40)) + 0x50);
        amFile_Load(*(s32 *)((u8 *)D_0047011C + 0x2D8));
        *(u8 **)((u8 *)var_s0 + 0x40) = NULL;
        amCdFs_Close((s32) var_s0, 0);
        var_s3 = *(s32 *)((u8 *)D_0047011C + 0x2D8);
        var_s4 = 0;
        if (*(s32 *)((u8 *)var_s3 + 0x10) > 0) {
            var_s0 = NULL;
            do {
                var_s2 = BtlCmd_GetMotEntry(var_s3, var_s4);
                var_s1 = func_001A50F0(var_s3, var_s4);
                if (*(s32 *)((u8 *)var_s2 + 8) >= 0) {
                    amFile_Load(var_s1);
                } else if (func_00127E88(var_s1, &D_0046EEA8, 4) == 0) {
                    func_0020A100(var_s1);
                }
                *(s32 *)((u8 *)(((s32)(D_0047011C)) + ((s32)(var_s0))) + 0x1D4) = var_s1;
                if (*(s32 *)((u8 *)var_s2 + 8) == 1) {
                    *(u8 **)((u8 *)(((s32)(D_0047011C)) + ((s32)(var_s0))) + 0x254) = amObject_Create(*(u8 **)((u8 *)(((s32)(D_0047011C)) + ((s32)(var_s0))) + 0x1D4), NULL);
                }
                var_s4 += 1;
                var_s0 += 4;
            } while (var_s4 < *(s32 *)((u8 *)var_s3 + 0x10));
        }
    }
}

/* Similar function already in C: func_00245240 (src/unk/unk_23A890.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void func_00245240(void) {
    u8 *s0;
    s32 s4;
    u8 *s3;
    u8 *s2;
    s32 s1;
    s32 off;
    s32 i;

    s0 = *(u8 **)(D_0046FE4C + 0x99C);
    if (s0 != 0) {
        *(s32 *)(D_0046FE4C + 0x99C) = *(s32 *)(s0 + 0x40);
        *(s32 *)(D_0046FE4C + 0x9A0) = *(s32 *)(*(u8 **)(s0 + 0x40) + 0x50);
        amFile_Load(*(s32 *)(D_0046FE4C + 0x9A0));
        *(s32 *)(s0 + 0x40) = 0;
        amCdFs_Close((s32)s0, 0);
        s3 = *(u8 **)(D_0046FE4C + 0x9A0);
        if (0 < *(s32 *)(s3 + 0x10)) {
            s4 = 0;
            off = 0;
            do {
                s2 = (u8 *)BtlCmd_GetMotEntry((s32)s3, s4);
                s1 = func_001A50F0((s32)s3, s4);
                if (*(s32 *)(s2 + 8) >= 0) {
                    amFile_Load(s1);
                } else {
                    if (func_00127E88((void *)s1, (void *)D_0046AD08, 4) == 0) {
                        func_0020A100((void *)s1);
                    }
                }
                *(s32 *)(D_0046FE4C + off + 0x91C) = s1;
                if (*(s32 *)(s2 + 8) == 1) {
                    *(s32 *)(D_0046FE4C + off + 0x95C) =
                        amObject_Create(*(s32 *)(D_0046FE4C + off + 0x91C), 0);
                }
                s4++;
                off += 4;
            } while (s4 < *(s32 *)(s3 + 0x10));
        }
    }
    for (i = 0; i < 2; i++) {
        func_00244F00(i, 0);
        func_00244F00(i, 1);
    }
}
#endif
