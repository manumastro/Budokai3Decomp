/* Draft (not built): amMotion_Create at 0x0013BD20, size 0x34C, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tion_Create(unsigned char *, int, unsigned char *)' mwccps2.exe Compiler: @ 730: amMotion_Create(*(void **)o->hdr->p1C);
 * Original: asm/nonmatchings/sys/amMotion/amMotion_Create.s */

// src/sys/amMotion.c amMotion_Create cerr diff=-1/0
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(void *, s32, s32);
extern s32 D_0045F520;
extern s32 D_0045F530;
extern void func_0013AFA0(void *);
u8 *amMotion_Create(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s3;
    s32 temp_s5;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s8 *temp_v1;
    u8 *temp_s2;
    u8 *temp_v1_2;
    u8 *var_s4;
    u8 *var_v1;
    u8 *var_v1_2;

    var_s4 = arg2;
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_s5 = (struct MotHdr *)amMotion_CalcSize(arg0,(struct MotHdr *)(arg1));
    if (var_s4 != NULL) {

    } else {
        var_s4 = amHeap_Alloc(temp_s5, 0, &D_0045F520, 0xC6);
    }
    memset(var_s4, 0, temp_s5);
    *(u8 **)((u8 *)var_s4 + 0) = (u8 *) D_00470304;
    D_00470304 = NULL;
    *(u8 **)((u8 *)var_s4 + 4) = arg0;
    temp_v1 = (signed char *)(var_s4 + 0x24B0);
    *(s8 **)((u8 *)var_s4 + 0x408) = temp_v1;
    temp_v1_2 = (unsigned char *)(temp_v1 + (*(s32 *)((u8 *)arg0 + 0x10) << 6));
    *(u8 **)((u8 *)var_s4 + 0x45C) = temp_v1_2;
    var_v1 = temp_v1_2 + (temp_s3 << 7);
    if (arg1 & 2) {
        *(u8 **)((u8 *)var_s4 + 0x460) = var_v1;
        var_v1 += temp_s3 << 7;
    }
    *(u8 **)((u8 *)var_s4 + 0x42C) = var_v1;
    var_v1_2 = var_v1 + (temp_s3 << 6);
    if (arg1 & 1) {
        *(u8 **)((u8 *)var_s4 + 0x44C) = var_v1_2;
        var_v1_2 += temp_s3 << 6;
    }
    if (arg1 & 4) {
        *(u8 **)((u8 *)var_s4 + 0x464) = var_v1_2;
        *(u8 **)((u8 *)var_s4 + 0x468) = (u8 *) (var_v1_2 + (*(s32 *)((u8 *)arg0 + 0x10) << 6));
    }
    *(s32 *)((u8 *)var_s4 + 0x40C) = amMotion_FindBone(arg0, &D_0045F530);
    *(s32 *)((u8 *)var_s4 + 0x410) = -1;
    var_a0 = 0;
loop_12:
    if (var_a0 < *(s32 *)((u8 *)arg0 + 0x10)) {
        *(u8 **)((u8 *)((var_a0 * 4) + var_s4) + 8) = (u8 *) (*(u8 **)((u8 *)var_s4 + 0x45C) + (var_a0 << 7));
        var_a0 += 1;
        goto loop_12;
    }
    *(s32 *)((u8 *)var_s4 + 0x428) = 0xBF800000;
    *(s32 *)((u8 *)var_s4 + 0x448) = 0xBF800000;
    *(s32 *)((u8 *)var_s4 + 0x414) = 0;
    *(s32 *)((u8 *)var_s4 + 0x418) = temp_s3;
    func_0013D9B0(var_s4, var_s4 + 0x41C);
    if (*(u8 **)((u8 *)var_s4 + 0x44C) != NULL) {
        func_0013D9B0(var_s4, var_s4 + 0x43C);
    }
    *(s32 *)((u8 *)var_s4 + 0x4AC) = -1;
    var_s1 = 0;
loop_18:
    if (var_s1 < temp_s3) {
        temp_s2 = *(u8 **)((u8 *)var_s4 + 0x45C) + (var_s1 << 7);
        func_0013AFA0(temp_s2);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        *(f32 *)((u8 *)temp_s2 + 0x60) = 1.0f;
        *(f32 *)((u8 *)temp_s2 + 0x64) = 1.0f;
        *(f32 *)((u8 *)temp_s2 + 0x68) = 1.0f;
        *(f32 *)((u8 *)temp_s2 + 0x6C) = 1.0f;
        var_s1 += 1;
        goto loop_18;
    }
    if (*(u8 **)((u8 *)var_s4 + 0x464) != NULL) {
        D_00470300 = (char *)(*(s8 **)((u8 *)var_s4 + 0x408));
        func_0013B0B0(D_003F0800);
        amMotion_WalkTreeRest(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 4)) + 0x14));
        var_s1_2 = 0;
loop_23:
        if (var_s1_2 < *(s32 *)((u8 *)arg0 + 0x10)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            func_0013B190(0);
            M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
            var_s1_2 += 1;
            goto loop_23;
        }
        func_0013B110(1);
    }
    func_0013C1E0(var_s4, 0, 0x3F800000);
    return var_s4;
}
