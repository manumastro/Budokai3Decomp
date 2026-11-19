/* Draft (not built): func_00309B20 at 0x00309B20, size 0x1A8, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309B20.s */

s32 amCdFs_Close(s32, s32);
s32 func_0022D0E0(s32, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void func_0027E070(void);
extern void ArenaList_Exit(void);
void func_00309B20(void) {
    u8 *temp_s3;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3_2;
    u8 *temp_v0;
    temp_s2 = D_0047098C;
    if (temp_s2 != NULL) {
        temp_s0 = *(u8 **)((u8 *)temp_v0 + 0x30);
        temp_v0 = *(u8 **)((u8 *)temp_s2 + 8);
        temp_s3 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_s3 != NULL) {
            temp_a0 = *(u8 **)((u8 *)temp_s3 + 0x30);
            if (temp_a0 != NULL) {
                func_0027E120(temp_a0);
            }
            temp_a0_2 = *(s32 *)((u8 *)(temp_s3 + 0x30) + 4);
            if (temp_a0_2 != 0) {
                Help_TaskKill(temp_a0_2);
            }
            amTask_Kill(temp_s3);
        }
        temp_s3_2 = *(u8 **)((u8 *)temp_s0 + 0xC);
        if (temp_s3_2 != NULL) {
            temp_a0_3 = *(u8 **)((u8 *)temp_s3_2 + 0x30);
            if (temp_a0_3 != NULL) {
                func_0027E120(temp_a0_3);
            }
            temp_a0_4 = *(s32 *)((u8 *)(temp_s3_2 + 0x30) + 4);
            if (temp_a0_4 != 0) {
                Help_TaskKill(temp_a0_4);
            }
            amTask_Kill(temp_s3_2);
        }
        func_0027E070();
        ArenaList_Exit();
        temp_a0_5 = *(s32 *)((u8 *)*(u8 **)((u8 *)temp_v0 + 0x30) + 0x14);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
        }
        temp_a0_6 = *(u8 **)((u8 *)temp_s0 + 0);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
        temp_a0_7 = *(u8 **)((u8 *)temp_s0 + 4);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        amHeap_Free(temp_s0);
        temp_a0_8 = *(u8 **)((u8 *)temp_s2 + 0xC);
        if (temp_a0_8 != NULL) {
            amTask_Kill(temp_a0_8);
        }
        temp_a0_9 = *(u8 **)((u8 *)temp_s2 + 0x10);
        if (temp_a0_9 != NULL) {
            amTask_Kill(temp_a0_9);
        }
        amTask_Kill(*(u8 **)((u8 *)temp_s2 + 8));
        temp_a0_10 = *(s32 *)((u8 *)temp_s2 + 0);
        if (temp_a0_10 != 0) {
            amCdFs_Close(temp_a0_10, 0);
        }
        temp_a0_11 = *(s32 *)((u8 *)temp_s2 + 4);
        if (temp_a0_11 != 0) {
            amCdFs_Close(temp_a0_11, 0);
        }
        amHeap_Free(temp_s2);
        D_0047098C = NULL;
    }
}
