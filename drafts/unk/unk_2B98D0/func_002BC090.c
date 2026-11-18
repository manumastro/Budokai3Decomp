/* Draft (not built): func_002BC090 at 0x002BC090, size 0x90, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); legal implicit conversion from 'int' to 'void *' @ 469: if (func_0022BF80(*(s32 *)((u8 *)gStrStatus + 0x1C0)) == 0xFF) {
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BC090.s */

// src/unk/unk_2B98D0.c func_002BC090 cerr diff=-1/0
void func_002BC090(u8 *arg0) {
    s32 temp_a0;
    void (*var_v1)();
    u8 *temp_a0_2;

    if (func_0022BF80(*(s32 *)((u8 *)gStrStatus + 0x1C0)) == 0xFF) {
        temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x1C0);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)(temp_a0), 1);
            *(s32 *)((u8 *)gStrStatus + 0x1C0) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)gStrStatus + 0xA8);
        if (temp_a0_2 != NULL) {
            amTask_Kill(temp_a0_2);
            *(u8 **)((u8 *)gStrStatus + 0xA8) = NULL;
        }
        var_v1 = func_002BC250;
        if (func_002BC250 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
