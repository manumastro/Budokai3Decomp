/* Draft (not built): func_00280AB0 at 0x00280AB0, size 0x1C0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D4, original 0x1C0
 * Original: asm/nonmatchings/unk/unk_280730/func_00280AB0.s */

// src/unk/unk_280730.c func_00280AB0 size diff=38/117
s32 memset(void *, s32, s32, void *);
extern void amFile_Load(void *);
void func_00280AB0(u8 *arg0) {
    s32 *var_v1;
    f32 var_f0;
    s64 temp_s1;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_t0;

    temp_s3 = arg0 + 0x30;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 4) == 3) {
        temp_a0 = *(u8 **)((u8 *)temp_s3 + 4);
        if (temp_a0 != NULL) {
            amHeap_Free(temp_a0);
        }
        *(u8 **)((u8 *)temp_s3 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)arg0 + 0x30), 0);
        *(u8 **)((u8 *)arg0 + 0x30) = NULL;
        amFile_Load(*(u8 **)((u8 *)temp_s3 + 4));
        temp_t0 = *(u8 **)((u8 *)temp_s3 + 4);
        temp_s2 = *(u8 **)((u8 *)temp_s3 + 8);
        temp_s1 = (*(u16 *)((u8 *)temp_s3 + 0xE) & 1) != 0;
        temp_a3 = *(s32 *)((u8 *)temp_t0 + 0x14) + temp_t0;
        temp_s0 = temp_t0 + *(temp_a3 + (*(s32 *)((u8 *)temp_t0 + 0x18) * -4));
        memset(temp_s2, 0, 0x60, temp_a3);
        *(s32 *)((u8 *)temp_s2 + 4) = 3;
        *(u8 **)((u8 *)temp_s2 + 0x10) = (u8 *) *(u8 **)((u8 *)temp_s3 + 4);
        *(s32 *)((u8 *)temp_s2 + 0x14) = (s32) (((s64) (temp_s1 << 0x30) >> 0x30) + 0x7FFF + 1);
        *(s16 *)((u8 *)temp_s2 + 0x18) = 0;
        *(s16 *)((u8 *)temp_s2 + 0x1A) = 0;
        if (temp_s1 != 0) {
            var_f0 = 560.0f;
        } else {
            var_f0 = 48.0f;
        }
        *(f32 *)((u8 *)temp_s2 + 0x20) = var_f0;
        *(s32 *)((u8 *)temp_s2 + 0x24) = 0x43620000;
        *(s32 *)((u8 *)temp_s2 + 0x28) = 0x457A0000;
        *(s32 *)((u8 *)temp_s2 + 0x2C) = 0x3F800000;
        *(s32 *)((u8 *)temp_s2 + 0x34) = 0xC3300000;
        *(s32 *)((u8 *)temp_s2 + 0x3C) = 0x43300000;
        *(s32 *)((u8 *)temp_s2 + 0x30) = 0xC3100000;
        *(s32 *)((u8 *)temp_s2 + 0x38) = 0x43100000;
        *(s32 *)((u8 *)temp_s2 + 0x44) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x40) = 0;
        *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) *(s16 *)((u8 *)temp_s0 + 0x10);
        *(f32 *)((u8 *)temp_s2 + 0x4C) = (f32) *(s16 *)((u8 *)temp_s0 + 0x12);
        *(s32 *)((u8 *)temp_s2 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_s2 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_s2 + 0x58) = 0x3F800000;
        *(s32 *)((u8 *)temp_s2 + 0x5C) = 0;
        func_00280730(temp_s3);
        var_v1 = (int *)(&func_00280A00);
        if (&func_00280A00 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
