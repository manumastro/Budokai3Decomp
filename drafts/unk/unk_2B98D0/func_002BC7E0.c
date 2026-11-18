/* Draft (not built): func_002BC7E0 at 0x002BC7E0, size 0x140, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ion from 'int' to 'void *' mwccps2.exe Compiler: @ 531: if (func_0022BF80(*(s32 *)((u8 *)gStrStatus + 0x1C0)) == 0xFF) {
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BC7E0.s */

// src/unk/unk_2B98D0.c func_002BC7E0 cerr diff=-1/0
extern void func_002BAFA0(void);
void func_002BC7E0(u8 *arg0) {
    s32 sp20;
    s16 sp24;
    s16 sp2C;
    s32 temp_a0;
    s32 temp_t1;
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
        *(s32 *)((u8 *)gStrStatus + 0x408) = 0;
        temp_t1 = *(s32 *)((u8 *)gStrStatus + 0x408);
        *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00456000) + 0);
        *(s64 *)((u8 *)(&sp20) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456000) + 0x10);
        sp24 = temp_t1 + 0x25;
        sp2C = (temp_t1 + 8) | 0x8000;
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        *(s32 *)((u8 *)gStrStatus + 0x1BC) = func_0022D670((s32)((s32)((s32)((s32)((s32)((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x14C)) + 0x1C)) + 0x100))))))), 0);
        var_v1 = func_002BC250;
        *(u8 **)((u8 *)gStrStatus + 0x9C) = amTask_Create(&func_002BAFA0, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x19, 2);
        if (func_002BC250 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
