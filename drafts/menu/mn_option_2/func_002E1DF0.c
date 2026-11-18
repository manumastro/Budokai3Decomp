/* Draft (not built): func_002E1DF0 at 0x002E1DF0, size 0x194, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); DF0()' redeclared was declared as: 'void ()' now declared as: 'void (struct Task *)' @ 276: void func_002E1DF0(Task *t);
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E1DF0.s */

// src/menu/mn_option_2.c func_002E1DF0 cerr diff=-1/0
void func_002E1DF0(void) {
    s32 temp_v0;
    s32 temp_v1;
    s64 temp_v0_2;

    temp_v0 = amSofdec_Draw(*(s32 *)((u8 *)gOpening + 0xC));
    switch (temp_v0) {                              /* irregular */
    case 0:
    case -1:
        return;
    case 1:
        temp_v1 = *(s32 *)((u8 *)gOpening + 0x10);
        if (temp_v1 < 2) {
            *(s32 *)((u8 *)gOpening + 0x10) = (s32) (temp_v1 + 1);
            return;
        }
    default:
block_11:
        temp_v0_2 = (s64)(amPkt_Alloc(0xA0));
        *(s32 *)((u8 *)temp_v0_2 + 0) = 0x70000009;
        *(s32 *)((u8 *)temp_v0_2 + 4) = 0;
        *(s32 *)((u8 *)temp_v0_2 + 0x10) = 0x8001;
        *(s32 *)((u8 *)temp_v0_2 + 0x14) = 0x808B4000;
        *(s64 *)((u8 *)temp_v0_2 + 0x18) = (s64) ((0xEEEE << 0x10) | 0xE8EE);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = 1;
        *(s64 *)((u8 *)temp_v0_2 + 0x28) = 0x46;
        *(s32 *)((u8 *)temp_v0_2 + 0x30) = 0x30000;
        *(s64 *)((u8 *)temp_v0_2 + 0x38) = 0x47;
        *(s32 *)((u8 *)temp_v0_2 + 0x50) = 0x80808080;
        *(s64 *)((u8 *)temp_v0_2 + 0x58) = 1;
        *(s64 *)((u8 *)temp_v0_2 + 0x60) = 0;
        *(s64 *)((u8 *)temp_v0_2 + 0x40) = (s64) (0x7FC00A | (0x6FC << 0x20));
        *(s64 *)((u8 *)temp_v0_2 + 0x60) = 0;
        *(s64 *)((u8 *)temp_v0_2 + 0x68) = 3;
        *(s64 *)((u8 *)temp_v0_2 + 0x70) = 0x72007000;
        *(s64 *)((u8 *)temp_v0_2 + 0x78) = 5;
        *(s64 *)((u8 *)temp_v0_2 + 0x80) = 0x1C002000;
        *(s64 *)((u8 *)temp_v0_2 + 0x88) = 3;
        *(s64 *)((u8 *)temp_v0_2 + 0x90) = (s64) ((0x8E00 << 0x10) | 0x9000);
        *(s64 *)((u8 *)temp_v0_2 + 0x98) = 5;
        amDma_Request(0, 2, 1, 1, 0, 0, 0, 0);
        amVram_Apply(2);
        return;
    case 2:
        if (*(s32 *)((u8 *)gOpening + 0x10) == 1) {
            *(s32 *)((u8 *)gOpening + 0x10) = 2;
            return;
        }
        goto block_11;
    }
}
