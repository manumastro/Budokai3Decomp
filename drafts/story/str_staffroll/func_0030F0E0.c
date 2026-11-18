/* Draft (not built): func_0030F0E0 at 0x0030F0E0, size 0x13C, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); eclared was declared as: 'void (struct Task *)' now declared as: 'void (void *)' @ 678: extern void amTask_Kill(void *);
 * Original: asm/nonmatchings/story/str_staffroll/func_0030F0E0.s */

// src/story/str_staffroll.c func_0030F0E0 cerr diff=-1/0
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
void func_0030F0E0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_6;
    s32 temp_a0_7;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s3;

    temp_s0 = (u8 *)(D_00470998);
    if (temp_s0 != NULL) {
        temp_s3 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x30);
        temp_s1 = *(u8 **)((u8 *)temp_s3 + 8);
        if (temp_s1 != NULL) {
            temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x38);
            if (temp_a0 != 0) {
                func_0022D0E0(temp_a0, 1);
            }
            amTask_Kill((void *)(temp_s1));
        }
        temp_s1_2 = *(u8 **)((u8 *)temp_s3 + 0xC);
        if (temp_s1_2 != NULL) {
            temp_a0_2 = *(s32 *)((u8 *)temp_s1_2 + 0x30);
            if (temp_a0_2 >= 0) {
                amSofdec_Stop(temp_a0_2);
                amSofdec_Destroy(*(s32 *)((u8 *)temp_s1_2 + 0x30));
            }
            amTask_Kill((void *)(temp_s1_2));
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s3 + 0x10);
        if (temp_a0_3 != NULL) {
            amTask_Kill((void *)(temp_a0_3));
        }
        temp_a0_4 = *(u8 **)((u8 *)temp_s3 + 4);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        temp_a0_5 = *(u8 **)((u8 *)temp_s3 + 0);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        amHeap_Free(temp_s3);
        amTask_Kill((void *)(*(u8 **)((u8 *)temp_s0 + 8)));
        temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0);
        if (temp_a0_6 != 0) {
            amCdFs_Close((void *)(temp_a0_6), 0);
        }
        temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 4);
        if (temp_a0_7 != 0) {
            amCdFs_Close((void *)(temp_a0_7), 0);
        }
        amHeap_Free(temp_s0);
        D_00470998 = (s32)(NULL);
    }
}
