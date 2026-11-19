/* Draft (not built): func_0030EDA0 at 0x0030EDA0, size 0x248, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x254, original 0x248
 * Original: asm/nonmatchings/story/str_staffroll/func_0030EDA0.s */

// src/story/str_staffroll.c func_0030EDA0 size diff=66/149
void func_0030EDA0(u8 *arg0) {
    s16 sp60;
    Task *temp_a1;
    Task *temp_v1;
    Task *temp_v1_2;
    s16 *var_s2;
    s16 *var_s3;
    s32 temp_s2;
    s32 var_s2_2;
    s32 var_s4;
    void (*var_v0)();
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = D_00470998;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 4) == 3) {
        *(u8 **)((u8 *)temp_s0 + 0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 0), 0);
        *(s32 *)((u8 *)temp_s2 + 0) = 0;
        *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 4), 0);
        *(u8 **)((u8 *)temp_s2 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 0));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 4));
        *(Task **)((u8 *)temp_s0 + 8) = amTask_Create(func_0030E5B0, NULL, 0x2200, 8, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        temp_v1 = *(Task **)((u8 *)temp_s0 + 8);
        temp_v1->data.work = *(u8 **)((u8 *)temp_s0 + 0);
        temp_v1->data.wait = (s32) *(u8 **)((u8 *)temp_s0 + 4);
        *(s32 *)((u8 *)temp_v1 + 0x38) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x3C) = 0;
        *(Task **)((u8 *)temp_s0 + 0xC) = amTask_Create((void (*)(Task *)) func_0030E290, NULL, 0x2100, 8, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        temp_v1_2 = *(Task **)((u8 *)temp_s0 + 0xC);
        *(s32 *)((u8 *)temp_v1_2 + 0x38) = 0;
        temp_v1_2->data.work = (u8 *)-1;
        temp_v1_2->data.wait = -1;
        *(Task **)((u8 *)temp_s0 + 0x10) = amTask_Create(func_0030DC00, NULL, 0x2300, 8, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        var_s3 = &sp60;
        temp_a1 = *(Task **)((u8 *)temp_s0 + 0x10);
        var_s4 = 0;
        var_s2 = var_s3;
        temp_a1->data.work = *(u8 **)((u8 *)temp_s0 + 0);
        temp_a1->data.wait = (s32) *(u8 **)((u8 *)temp_s0 + 4);
        *(s32 *)((u8 *)temp_a1 + 0x44) = 0;
        *(s8 *)((u8 *)temp_s0 + 0x1C) = 1;
        *(s128 *)((u8 *)var_s3 + 0) = (s128) *(s128 *)((u8 *)D_004590B0 + 0);
        *(f32 *)((u8 *)var_s3 + 0x10) = (f32) *(f32 *)((u8 *)D_004590B0 + 0x10);
        *(s16 *)((u8 *)var_s3 + 0x14) = (s16) *(s16 *)((u8 *)D_004590B0 + 0x14);
loop_2:
        if (func_002A8C50((s32) *var_s2) != 0) {
            *(s8 *)((u8 *)temp_s0 + 0x1D) = 1;
        } else {
            var_s4 += 1;
            var_s2 += 2;
            if (var_s4 < 0xB) {
                goto loop_2;
            }
        }
        *(s8 *)((u8 *)temp_s0 + 0x1E) = 1;
        var_s2_2 = 0;
loop_7:
        if (func_002A8C50((s32) *var_s3) == 0) {
            *(s8 *)((u8 *)temp_s0 + 0x1E) = 0;
        } else {
            var_s2_2 += 1;
            var_s3 += 2;
            if (var_s2_2 < 0xB) {
                goto loop_7;
            }
        }
        Fade_Request(-1, 0, 0);
        var_v0 = func_0030EAE0;
        if (func_0030EAE0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_002A8A60();
    }
}
