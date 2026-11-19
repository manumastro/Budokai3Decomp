/* Draft (not built): func_002BDD10 at 0x002BDD10, size 0x168, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0x168
 * Original: asm/nonmatchings/story/str_status/func_002BDD10.s */

// src/story/str_status.c func_002BDD10 size diff=33/78
extern void func_0013B110(s32);
s32 func_00141E70(void *, s32);
void *func_00209540(s32, s32, s32);
s32 func_0029D270(s32, s32, s32 *);
extern s32 D_005BD188;
extern void func_00208F70(void *);
extern void func_00209390(void *);
void func_002BDD10(u8 *arg0) {
    s32 sp40;
    u8 **temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(D_0046FE44);
    if (*(s16 *)((u8 *)temp_s1 + 0x100) == 1) {
        temp_s0 = *(u8 ***)((u8 *)arg0 + 0xB8);
        if (!(*(s32 *)((u8 *)temp_s1 + 0x2C) & 1) && (*(s16 *)((u8 *)temp_s1 + 0x36) == 0xE)) {
            func_0013B0B0(NULL);
            func_0029D270(*(s32 *)((u8 *)(*temp_s0) + 0x4C), *(s32 *)((u8 *)temp_s1 + 0x78), &sp40);
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            func_00141E70(temp_s1 + 0x50, 0);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_0013B110(1);
            if (*(s32 *)((u8 *)arg0 + 0xD8) == 5) {
                if (*(u8 **)((u8 *)temp_s1 + 0x74) == NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0x74) = func_00209540(D_005BD188, 0x400040, 0);
                }
            } else {
                temp_a0 = *(u8 **)((u8 *)temp_s1 + 0x74);
                if (temp_a0 != NULL) {
                    func_00209390(temp_a0);
                }
            }
            temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 0x70);
            if (temp_a0_2 != NULL) {
                func_00208F70(temp_a0_2);
                if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x70)) + 0x38) < 0) {
                    *(u8 **)((u8 *)temp_s1 + 0x70) = NULL;
                }
            }
            temp_a0_3 = *(u8 **)((u8 *)temp_s1 + 0x74);
            if (temp_a0_3 != NULL) {
                func_00208F70(temp_a0_3);
                if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x74)) + 0x38) < 0) {
                    *(u8 **)((u8 *)temp_s1 + 0x74) = NULL;
                }
            }
        }
    }
}
