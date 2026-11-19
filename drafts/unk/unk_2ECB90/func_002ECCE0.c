/* Draft (not built): func_002ECCE0 at 0x002ECCE0, size 0x138, segment unk/unk_2ECB90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2ECB90/func_002ECCE0.s */

// src/unk/unk_2ECB90.c func_002ECCE0 diff diff=65/78
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
    s8 *var_s1;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *var_s0;
    u8 *var_s2;

    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    var_s1 = (signed char *)(*D_0051CD0C);
    if (D_0051CD20 != 0) {
        return;
    }
    BtbObj_RemoveByIdx(3, 2);
    var_s2 = func_001F5EF0(3, 2);
    var_s0 = func_001F5FD0(0x83000000, (s32 *)(&D_0046F6C8), (void *)(var_s2), (s32 *)(&func_002ECBD0));
    temp_a1 = *(u8 **)((u8 *)var_s2 + 0x10);
    *(s32 *)((u8 *)temp_a1 + 0) = func_001A50F0((s8 *)(*D_0051CD0C), 0x27F);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x10)) + 0xE) = 1;
    func_001F5B70(var_s2, temp_a1);
    *(s32 *)((u8 *)var_s0 + 0x20) = (s32) (*(s32 *)((u8 *)var_s0 + 0x20) & ~0x800);
    *(s32 *)((u8 *)var_s0 + 0x20) = (s32) (*(s32 *)((u8 *)var_s0 + 0x20) | 0x800);
    var_s0 = func_001F5EF0(3, 3);
    temp_a1_2 = *(u8 **)((u8 *)var_s0 + 0x10);
    *(s32 *)((u8 *)temp_a1_2 + 0) = func_001A50F0(var_s1, 0x27E);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x10)) + 0xE) = 2;
    func_001F5B70(var_s0, temp_a1_2);
}
