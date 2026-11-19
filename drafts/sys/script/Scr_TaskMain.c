/* Draft (not built): Scr_TaskMain at 0x0014A7C0, size 0x2DC, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cps2.exe Compiler: 318: case 2: @ 308: ((s32) temp_a1_2 >> 4) * 4)) + ((temp_a1_2 & 0xF) * 4))(temp_s1, temp_s0, &sp4C);
 * Original: asm/nonmatchings/sys/script/Scr_TaskMain.s */

// src/sys/script.c Scr_TaskMain cerr diff=-1/0
extern s32 D_00400AD0;
extern void amTask_Kill(void *);
void Scr_TaskMain(u8 *arg0) {
    u8 *sp4C;
    s32 (*temp_v1_2)(s32, u8 *);
    s16 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    u32 temp_v1;
    u8 temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s1;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_s1 = arg0 + 0x30;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x34);
    sp4C = *(u8 **)((u8 *)temp_s0 + 0x24);
    if (*(s32 *)((u8 *)arg0 + 0x3C) == 0) {
        goto block_2;
    }
    (*(s32 (**)(u8 *, u8 *))((u8 *)temp_s1 + 0xC))(temp_s1, temp_s0);
block_2:
    if (*(s32 (**)(u8 *, u8 *))((u8 *)temp_s1 + 0x10) == NULL) {
        goto block_5;
    }
    temp_v0 = (*(s32 (**)(u8 *, u8 *))((u8 *)temp_s1 + 0x10))(temp_s1, temp_s0);
    var_a1 = temp_v0;
    if ((temp_v0 & 0xFF) != 1) {
        goto loop_9;
    }
block_5:
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xC) == 3) {
        goto block_25;
    }
    temp_a1 = *(s16 *)((u8 *)temp_s1 + 8);
    if (temp_a1 <= 0) {
        goto loop_8;
    }
    *(s16 *)((u8 *)temp_s1 + 8) = (s16) (temp_a1 - 1);
    goto block_25;
loop_8:
    temp_a1_2 = *sp4C;
    sp4C += 1;
    var_a1 = *(*(&D_00400AD0 + (((s32) temp_a1_2 >> 4) * 4)) + ((temp_a1_2 & 0xF) * 4))(temp_s1, temp_s0, &sp4C);
    if (var_a1 == 1) {
        goto loop_8;
    }
loop_9:
    temp_v1 = var_a1 & 0xFF;
    if (temp_v1 >= 9U) {
        goto block_25;
    }
    switch (temp_v1);                               /* jump table: jtbl_0045F640 */
case 2:
    *(s16 *)((u8 *)temp_s1 + 8) = (s16) (var_a1 >> 8);
    *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x3C) + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x40));
    *(u8 **)((u8 *)temp_s0 + 0x24) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0x28);
    goto block_25;
case 3:
    *(s16 *)((u8 *)temp_s1 + 8) = (s16) (var_a1 >> 8);
    *(u8 **)((u8 *)temp_s0 + 0x24) = sp4C;
    goto block_25;
case 4:
    amTask_Kill(arg0);
    goto block_25;
case 5:
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xC) = 4;
    amTask_KillGroup(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x14), *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x18), 1);
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xC) = 2;
    temp_v0_2 = (int)(Scr_CreateTask((ScrMachine *)(*(u8 **)((u8 *)arg0 + 0x30)), (u8 *)(*(s32 *)((u8 *)temp_s0 + 0)), (s32)(*(s32 *)((u8 *)temp_s0 + 4))));
    temp_v1_2 = *(s32 (**)(s32, u8 *))((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x50);
    if (temp_v1_2 == NULL) {
        goto block_19;
    }
    temp_v1_2(temp_v0_2 + 0x30, temp_s0);
block_19:
    return;
case 6:
    amTask_KillGroup(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x14), *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x18), 1);
    goto block_25;
case 7:
    *(u8 **)((u8 *)temp_s0 + 0x24) = sp4C;
    var_a1 = *(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x44) + (((var_a1 >> 0xC) & 0xFFF) * 4)) + (((var_a1 >> 8) & 0xF) * 4))(temp_s1, temp_s0);
    if (var_a1 != 1) {
        goto loop_9;
    }
    goto loop_8;
    return;
case 0:
case 1:
block_25:
    if (*(s32 (**)(u8 *, u8 *))((u8 *)temp_s1 + 0x14) == NULL) {
        goto block_27;
    }
    (*(s32 (**)(u8 *, u8 *))((u8 *)temp_s1 + 0x14))(temp_s1, temp_s0);
block_27:
    return;
}
