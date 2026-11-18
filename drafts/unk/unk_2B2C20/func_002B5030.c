/* Draft (not built): func_002B5030 at 0x002B5030, size 0x1B0, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B8, original 0x1B0
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B5030.s */

// src/unk/unk_2B2C20.c func_002B5030 size diff=73/110
s32 amCdFs_Close(s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32);
s32 memset(void *, s32, s32);
s32 sprintf(s32 *, s32 *, s32);
extern s32 D_00455260;
extern s32 D_0046EB50;
extern void amCdFs_ReleaseCache(void *);
extern void *amTask_Create();
void func_002B5030(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp60;
    s32 sp78;
    s16 temp_s0;
    s16 var_v1;
    s32 temp_a0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    u8 **temp_s4;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_s4_2;
    u8 *temp_v1;

    temp_s3 = arg0 >> 1;
    temp_s0 = *(&D_0046B560 + (arg2 * 2));
    temp_s4 = (u8 **)(gSklEdit + (temp_s3 * 8) + 0x18);
    sprintf(&sp60, &D_0046EB50, arg1);
    *temp_s4 = amTask_Create(func_002B4950, 0, *(s32 *)((u8 *)gSklEdit + 0x38), 0x200);
    temp_v1 = *temp_s4;
    *(s32 *)((u8 *)temp_v1 + 0x30) = temp_s3;
    temp_a0 = (u8 *)(gSklEdit + (*(s32 *)((u8 *)temp_v1 + 0x30) * 0x1C8));
    temp_s4_2 = temp_a0 + 0x48;
    *(s32 *)((u8 *)temp_a0 + 0x54) = 0;
    temp_s3_2 = *(s32 *)((u8 *)temp_a0 + 0x64) ^ temp_s0;
    *(s32 *)((u8 *)temp_a0 + 0x64) = (s32) temp_s0;
    temp_s3_3 = temp_s3_2 != 0;
    *(s32 *)((u8 *)temp_a0 + 0x58) = arg0;
    *(s32 *)((u8 *)temp_a0 + 0x60) = arg1;
    if (temp_s3_3 != 0) {
        memset(temp_s4_2 + 0x48, 0, 0x70);
    }
    if ((*(s32 *)((u8 *)temp_s4_2 + 0x10) == 0) && (var_v1 = 0xA9C, (*(s32 *)((u8 *)gSklEdit + 0x40) != 0))) {

    } else {
        var_v1 = *(&D_00455260 + (temp_s0 * 2));
    }
    sp78 = (s32) var_v1;
    if (temp_s3_3 != 0) {
        temp_a0_2 = *(s32 *)((u8 *)temp_a0 + 0x48);
        if (temp_a0_2 != 0) {
            amCdFs_Close(temp_a0_2, 0);
            *(s32 *)((u8 *)temp_a0 + 0x48) = 0;
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s4_2 + 4);
        if (temp_a0_3 != NULL) {
            amCdFs_ReleaseCache(temp_a0_3);
            *(u8 **)((u8 *)temp_s4_2 + 4) = NULL;
        }
    }
    if (*(s32 *)((u8 *)temp_a0 + 0x48) == 0) {
        *(s32 *)((u8 *)temp_a0 + 0x48) = amCdFs_ReadFileId(sp78 | 0x10000, 0, 0);
    }
}
