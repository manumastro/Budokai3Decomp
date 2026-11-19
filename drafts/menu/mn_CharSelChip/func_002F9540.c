/* Draft (not built): func_002F9540 at 0x002F9540, size 0xA0, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK amHeap_Free(void *);                        /* extern */
M2C_UNK amTask_Kill(void *);                        /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */

void func_002F9540(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    void *temp_s2;
    void *temp_s3;
    void *var_s0;

    var_s1 = 0;
    temp_s3 = M2C_FIELD(arg0, void **, 0x30);
    var_s0 = temp_s3;
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x3C);
        temp_s2 = var_s0 + 0x38;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            M2C_FIELD(temp_s2, s32 *, 4) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 8);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            M2C_FIELD(temp_s2, s32 *, 8) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0x27);
    amHeap_Free(temp_s3);
    amTask_Kill(arg0);
}

/* Similar function already in C: func_002F2600 (src/menu/mn_InputPass.c), similarity 0.69.
 * It is the template below (not built). */
#if 0
void func_002F2600(u8 *task) {
    u8 *s3;
    u8 *s2;
    s32 s1;
    u32 *s0;

    s3 = (u8 *)gInputName;
    if (task != 0) {
        s2 = *(u8 **)(task + 0x30);
        if (*(void **)(s2 + 0x94) != 0) {
            func_0022D4B0(*(void **)(s2 + 0x94), 1);
        }
        if (*(void **)s2 != 0) {
            func_0022D0E0(*(void **)s2, 1);
            *(void **)s2 = 0;
        }
        if (*(void **)(s2 + 0x98) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x98), 1);
            *(void **)(s2 + 0x98) = 0;
        }
        if (*(void **)(s2 + 0x9C) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x9C), 1);
            *(void **)(s2 + 0x9C) = 0;
        }
        s1 = 0;
        s0 = (u32 *)s2;
        do {
            func_0022D4B0((void *)s0[1], 1);
            s1++;
            s0++;
        } while (s1 < 0x24);
        amHeap_Free(s2);
        amTask_Kill((void *)task);
        *(s32 *)(s3 + 0x18) = 0;
    }
}
#endif
