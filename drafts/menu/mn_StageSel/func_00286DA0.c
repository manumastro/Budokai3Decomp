/* Draft (not built): func_00286DA0 at 0x00286DA0, size 0xCC, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF0, original 0xCC
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00286DA0.s */

// src/menu/mn_StageSel.c func_00286DA0 size diff=20/60
s32 memset(void *, s32, s32);
void func_00286DA0(u8 *arg0, u16 arg1) {
    s16 var_a3;
    s32 temp_a1;
    u8 temp_a2;
    u8 var_s0;
    u8 *var_a2;

    *(u16 *)((u8 *)arg0 + 0x23E) = arg1;
    var_s0 = 0;
    *(u16 *)((u8 *)arg0 + 0x240) = arg1;
    memset(arg0 + 0x242, -1, 0x1A);
    var_a3 = 0;
    var_a2 = arg0;
    do {
        if (*(u16 *)((u8 *)arg0 + 0x23E) & (1 << var_a3)) {
            *(s16 *)((u8 *)var_a2 + 0x242) = var_a3;
            var_s0 += 1;
            var_a2 += 2;
        }
        var_a3 += 1;
    } while (var_a3 < 0xD);
    *(u8 *)((u8 *)arg0 + 0x261) = var_s0;
    temp_a2 = *(u8 *)((u8 *)arg0 + 0x261);
    temp_a1 = temp_a2 * 0xC;
    *(s32 *)((u8 *)arg0 + 0x278) = (s32) (0x10000 / temp_a1);
    if (*(u8 *)((u8 *)arg0 + 0x262) == 2) {
        func_00286C50(arg0, temp_a1, temp_a2, var_a3);
    }
}

/* Similar function already in C: func_002E53B0 (src/unk/unk_2E4030.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void func_002E53B0(u8 *a0, s16 a1) {
    u8 *obj;
    s32 n;
    s32 i;
    u8 *p;
    obj = a0;
    *(s16 *)(obj + 0xD2) = a1;
    n = 0;
    *(s16 *)(obj + 0xD4) = a1;
    memset(obj + 0xD6, -1, 0x1A);
    i = 0;
    p = obj;
    for (; i < 0xD; i++) {
        if (*(u16 *)(obj + 0xD2) & (1 << i)) {
            *(s16 *)(p + 0xD6) = i;
            n++;
            p += 2;
        }
    }
    obj[0xF3] = n;
    *(s32 *)(obj + 0x104) = 0x10000 / (obj[0xF3] * 12);
    if (obj[0xF4] == 2) {
        func_002E5260(obj);
    }
}
#endif
