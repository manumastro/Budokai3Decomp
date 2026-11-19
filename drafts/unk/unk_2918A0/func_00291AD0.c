/* Draft (not built): func_00291AD0 at 0x00291AD0, size 0x11C, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD8, original 0x11C
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00291AD0.s */

// src/unk/unk_2918A0.c func_00291AD0 size diff=46/54
extern s32 D_00453E80;
extern void *amTask_Create();
extern void func_002928C0(void);
void func_00291AD0(s32 unused_arg0, s32 unused_arg1, s32 unused_arg2, s32 unused_arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp10;
    s16 sp14;
    s8 sp18;
    u8 *temp_a1;

    *(s128 *)((u8 *)(&sp10) + 0) = (s128) *(s128 *)((u8 *)(&D_00453E80) + 0);
    *(s64 *)((u8 *)(&sp10) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00453E80) + 0x10);
    if (*(s8 *)((u8 *)(*D_005AA604) + 0x11E6) != 0) {
        sp14 = -0x7FFF;
        sp18 = -1;
    }
    func_0028EE90(D_005AA5A0, D_005AA5CC, D_005AA5D8, D_005AA5E4, arg4, arg5, arg6, arg7);
    func_002BF310();
    *D_005AA5A4 = (int)(amTask_Create(&func_002928C0, 0, 0x9001, 2));
    *(s32 *)((u8 *)(*D_005AA5A4) + 0x40) = 0x41800000;
    temp_a1 = (unsigned char *)(*D_005AA5A4 + 0x30);
    if (*(s8 *)((u8 *)(*D_005AA604) + 0x11E6) != 0) {
        *(s32 *)((u8 *)(*D_005AA5A4) + 0x30) = 0;
        *(s32 *)((u8 *)temp_a1 + 4) = 0x3DCCCCCD;
        *(s32 *)((u8 *)temp_a1 + 8) = 0;
    } else {
        *(s32 *)((u8 *)(*D_005AA5A4) + 0x30) = 0;
        *(s32 *)((u8 *)temp_a1 + 4) = 0x3E19999A;
        *(s32 *)((u8 *)temp_a1 + 8) = 0x3E99999A;
    }
    *(s32 *)((u8 *)temp_a1 + 0xC) = 0;
}
