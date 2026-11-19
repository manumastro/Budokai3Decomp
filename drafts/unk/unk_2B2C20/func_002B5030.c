/* Draft (not built): func_002B5030 at 0x002B5030, size 0x1B0, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 69 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E4, original 0x1B0
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B5030.s */

// src/unk/unk_2B2C20.c func_002B5030 size diff=69/121
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
    s16 var_s0;
    s16 var_v1;
    s32 temp_a0_2;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *var_s4;

    var_s3 = arg0 >> 1;
    var_s2 = arg0;
    var_s1 = arg1;
    var_s0 = *(((u8 *)&D_0046B560) + (arg2 * 2));
    temp_v0 = (unsigned char *)(gSklEdit + (var_s3 * 8));
    var_s4 = temp_v0 + 0x18;
    sprintf(&sp60, &D_0046EB50, var_s1);
    *(u8 **)((u8 *)temp_v0 + 0x18) = amTask_Create(func_002B4950, 0, *(s32 *)((u8 *)gSklEdit + 0x38), 0x200);
    temp_v1 = *(u8 **)((u8 *)temp_v0 + 0x18);
    *(s32 *)((u8 *)temp_v1 + 0x30) = var_s3;
    temp_a0 = (unsigned char *)(gSklEdit + (*(s32 *)((u8 *)temp_v1 + 0x30) * 0x1C8));
    temp_v1_2 = *(s32 *)((u8 *)temp_a0 + 0x64);
    var_s4 = temp_a0 + 0x48;
    *(s32 *)((u8 *)temp_a0 + 0x54) = 0;
    var_s3 = temp_v1_2 ^ var_s0;
    *(s32 *)((u8 *)temp_a0 + 0x64) = (s32) var_s0;
    var_s3 = temp_v1_2 != var_s0;
    *(s32 *)((u8 *)temp_a0 + 0x58) = var_s2;
    *(s32 *)((u8 *)temp_a0 + 0x60) = var_s1;
    if (var_s3 != 0) {
        memset(var_s4 + 0x48, 0, 0x70);
    }
    if ((*(s32 *)((u8 *)var_s4 + 0x10) == 0) && (var_v1 = 0xA9C, (*(s32 *)((u8 *)gSklEdit + 0x40) != 0))) {

    } else {
        var_v1 = *(&D_00455260 + (var_s0 * 2));
    }
    sp78 = (s32) var_v1;
    var_s0 = (s16) &sp78;
    if (var_s3 != 0) {
        temp_a0_2 = *(s32 *)((u8 *)temp_a0 + 0x48);
        if (temp_a0_2 != 0) {
            amCdFs_Close(temp_a0_2, 0);
            *(s32 *)((u8 *)temp_a0 + 0x48) = 0;
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s4 + 4);
        if (temp_a0_3 != NULL) {
            amCdFs_ReleaseCache(temp_a0_3);
            *(u8 **)((u8 *)var_s4 + 4) = NULL;
        }
    }
    if (*(s32 *)((u8 *)temp_a0 + 0x48) == 0) {
        *(s32 *)((u8 *)temp_a0 + 0x48) = amCdFs_ReadFileId(*(s32 *)var_s0 | 0x10000, 0, 0);
    }
}
