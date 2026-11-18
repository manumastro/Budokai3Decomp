/* Draft (not built): func_002ECCE0 at 0x002ECCE0, size 0x138, segment unk/unk_2ECB90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'signed char *' to 'int' @ 51: *(s32 *)((u8 *)temp_a1 + 0) = (s8 *)func_001A50F0(*D_0051CD0C, 0x27F);
 * Original: asm/nonmatchings/unk/unk_2ECB90/func_002ECCE0.s */

// src/unk/unk_2ECB90.c func_002ECCE0 cerr diff=-1/0
s32 BtbObj_RemoveByIdx(s32, s32);
s32 func_001A50F0(s8 *, s32);
s32 func_001F5B70(void *, void *);
void *func_001F5EF0(s32, s32);
void *func_001F5FD0(s32, s32 *, void *, s32 *);
extern s32 D_0046F6C8;
extern s32 D_0051CD20;
extern char *D_0051CD0C[];
extern void func_001F6E50(void);
extern void func_001F7690(void);
extern void func_001F7820(void);
extern void func_001F7BF0(void);
extern void func_001F7DB0(void);
extern void func_002ECBD0(void);
void func_002ECCE0(void) {
    s8 *temp_s1;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_v0;

    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    temp_s1 = (s8 *)(*D_0051CD0C);
    if (D_0051CD20 != 0) {
        return;
    }
    BtbObj_RemoveByIdx(3, 2);
    temp_v0 = func_001F5EF0(3, 2);
    temp_s0 = (s32 *)(func_001F5FD0(0x83000000, &D_0046F6C8, temp_v0, &func_002ECBD0));
    temp_a1 = *(u8 **)((u8 *)temp_v0 + 0x10);
    *(s32 *)((u8 *)temp_a1 + 0) = (s8 *)func_001A50F0(*D_0051CD0C, 0x27F);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x10)) + 0xE) = 1;
    func_001F5B70(temp_v0, temp_a1);
    *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x20) & ~0x800);
    *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x20) | 0x800);
    temp_s0_2 = func_001F5EF0(3, 3);
    temp_a1_2 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
    *(s32 *)((u8 *)temp_a1_2 + 0) = func_001A50F0(temp_s1, 0x27E);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0x10)) + 0xE) = 2;
    func_001F5B70(temp_s0_2, temp_a1_2);
}
