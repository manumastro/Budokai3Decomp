/* Draft (not built): func_002DDAD0 at 0x002DDAD0, size 0x154, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x154
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DDAD0.s */

// src/unk/unk_2DB970.c func_002DDAD0 size diff=62/95
s32 func_0022C7D0(s32, s32, void *, s32);
void func_002D7DC0();
extern s32 func_002DA3C0;
extern s32 func_002DB600;
extern void func_002D34E0(void);
extern void func_002D3650(void);
extern void func_002D4260(void);
extern void func_002D6F40(void);
extern void func_002D79C0(void);
extern void func_002D7FC0(void);
extern void func_002DD510(void);
extern void func_002DD2B0(void);
void func_002DDAD0(void) {
    s32 temp_a2;

    temp_a2 = *(s32 *)((u8 *)gOptionWork + 0x378);
    *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
    *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
    switch (temp_a2) {                              /* irregular */
    case 0:
        *(s32 **)((u8 *)gOptionWork + 0x344) = &func_002DD510;
        *(void (**)())((u8 *)gOptionWork + 0x368) = func_002D7DC0;
        *(void (**)())((u8 *)gOptionWork + 0x360) = func_002D7FC0;
        func_0022C7D0(*(s32 *)((u8 *)gOptionWork + 0x90), 1, gOptionWork, 0);
        return;
    case 1:
        *(s32 **)((u8 *)gOptionWork + 0x344) = &func_002DD2B0;
        *(void (**)())((u8 *)gOptionWork + 0x368) = NULL;
        *(void (**)())((u8 *)gOptionWork + 0x360) = func_002D79C0;
        return;
    case 2:
        func_002D6F40();
        return;
    case 3:
        *(s32 **)((u8 *)gOptionWork + 0x344) = &func_002DB600;
        *(void (**)())((u8 *)gOptionWork + 0x368) = NULL;
        *(void (**)())((u8 *)gOptionWork + 0x360) = func_002D4260;
        return;
    case 4:
        *(s32 **)((u8 *)gOptionWork + 0x344) = &func_002DA3C0;
        *(void (**)())((u8 *)gOptionWork + 0x368) = func_002D34E0;
        *(void (**)())((u8 *)gOptionWork + 0x360) = func_002D3650;
        return;
    default:
        *(s32 **)((u8 *)gOptionWork + 0x344) = &func_002DD510;
        *(void (**)())((u8 *)gOptionWork + 0x368) = func_002D7DC0;
        *(void (**)())((u8 *)gOptionWork + 0x360) = func_002D7FC0;
        func_0022C7D0(*(s32 *)((u8 *)gOptionWork + 0x90), 1, gOptionWork, 0);
        return;
    }
}
