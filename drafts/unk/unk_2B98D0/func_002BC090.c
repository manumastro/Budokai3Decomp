/* Draft (not built): func_002BC090 at 0x002BC090, size 0x90, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BC090.s */

void func_002BC090(u8 *arg0) {
    s32 temp_a0;
    void (*var_v1)();
    u8 *temp_a0_2;
    if (func_0022BF80((void *)*(s32 *)((u8 *)gStrStatus + 0x1C0)) == 0xFF) {
        temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x1C0);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)temp_a0, 1);
            *(s32 *)((u8 *)gStrStatus + 0x1C0) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)gStrStatus + 0xA8);
        if (temp_a0_2 != NULL) {
            *(u8 **)((u8 *)gStrStatus + 0xA8) = NULL;
            amTask_Kill(temp_a0_2);
        }
        var_v1 = func_002BC250;
        if (func_002BC250 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002BF310 (src/story/str_status.c), similarity 0.60.
 * It is the template below (not built). */
#if 0
void func_002BF310(void) {
    s32 i;
    s32 off = 0;
    for (i = 0; i < 8; i++) {
        if (*(s32 *)((char *)D_0047011C + off + 0x160) != 0) {
            Obj_ResetF38(*(s32 *)((char *)D_0047011C + off + 0x160));
            *(s32 *)((char *)D_0047011C + off + 0x160) = 0;
        }
        *(s32 *)((char *)D_0047011C + off + 0x180) = -1;
        off += 4;
    }
    if (D_0047011C[0x1AC / 4] != 0) {
        amTask_Kill((Task *)D_0047011C[0x1AC / 4]);
        D_0047011C[0x1AC / 4] = 0;
    }
}
#endif
