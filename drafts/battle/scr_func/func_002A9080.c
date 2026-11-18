/* Draft (not built): func_002A9080 at 0x002A9080, size 0x224, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'void *' @ 160: D_005AB7F0 = NULL;
 * Original: asm/nonmatchings/battle/scr_func/func_002A9080.s */

// src/battle/scr_func.c func_002A9080 cerr diff=-1/0
extern void memset(void *, s32, s32);
extern u8 D_005AB3C0[];
extern u8 D_005AB610[];
extern s32 D_005AB7F0[];
s32 func_0022D0E0(s32, s32);
s32 func_002A11F0();
s32 func_002B06B0(s32);
extern void *gEvtWork;
extern void amHeap_Free(void *);
extern void func_0029E450(void *);
void func_002A9080(s32 arg0) {
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s3_2;

    temp_s2 = D_005AB3C0 + (arg0 * 0x68);
    var_s0 = 0;
    var_s3 = temp_s2;
    do {
        if (*(s32 *)((u8 *)var_s3 + 4) != 0) {
            amCdFs_ReleaseCache((s32)((void *)(*(u8 **)((u8 *)var_s3 + 0))));
            *(u8 **)((u8 *)var_s3 + 0) = NULL;
        }
        memset(var_s3, 0, 0x34);
        var_s0 += 1;
        var_s3 += 0x34;
    } while (var_s0 < 2);
    memset(temp_s2, 0, 0x68);
    var_s0_2 = 0;
    var_s2 = D_005AB610 + (arg0 * 0xF0);
    do {
        temp_a0 = *(u8 **)((u8 *)var_s2 + 0);
        if (temp_a0 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0)));
            *(u8 **)((u8 *)var_s2 + 0) = NULL;
        }
        temp_a0_2 = *(u8 **)((u8 *)var_s2 + 8);
        if (temp_a0_2 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_2)));
            *(u8 **)((u8 *)var_s2 + 8) = NULL;
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s2 + 0xC);
        if (temp_a0_3 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_3)));
            *(u8 **)((u8 *)var_s2 + 0xC) = NULL;
        }
        memset(var_s2, 0, 0x18);
        var_s0_2 += 1;
        var_s2 += 0x18;
    } while (var_s0_2 < 0xA);
    func_002A11F0();
    temp_s2_2 = gEvtWork;
    if (temp_s2_2 != NULL) {
        if (*(s32 *)((u8 *)temp_s2_2 + 0x1C) != 0) {
            amCdFs_ReleaseCache((s32)((void *)(*(u8 **)((u8 *)temp_s2_2 + 0x18))));
            *(s32 *)((u8 *)temp_s2_2 + 0x18) = 0;
            *(s32 *)((u8 *)temp_s2_2 + 0x1C) = 0;
        }
        if (*(s32 *)((u8 *)temp_s2_2 + 0x3C) != 0) {
            amCdFs_ReleaseCache((s32)((void *)(*(u8 **)((u8 *)temp_s2_2 + 0x38))));
            *(u8 **)((u8 *)temp_s2_2 + 0x38) = NULL;
            *(s32 *)((u8 *)temp_s2_2 + 0x3C) = 0;
        }
        if (D_005AB7F0 != NULL) {
            func_0029E450(D_005AB7F0);
            D_005AB7F0 = NULL;
        }
        var_s0_3 = 0;
        var_s3_2 = temp_s2_2;
        do {
            temp_a0_4 = *(s32 *)((u8 *)var_s3_2 + 0x80);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
                *(s32 *)((u8 *)var_s3_2 + 0x80) = 0;
            }
            temp_a0_5 = *(s32 *)((u8 *)var_s3_2 + 0x88);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
                *(s32 *)((u8 *)var_s3_2 + 0x88) = 0;
            }
            var_s0_3 += 1;
            var_s3_2 += 4;
        } while (var_s0_3 < 2);
        temp_a0_6 = *(u8 **)((u8 *)temp_s2_2 + 0x74);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
            *(u8 **)((u8 *)temp_s2_2 + 0x74) = NULL;
        }
        temp_a0_7 = *(u8 **)((u8 *)temp_s2_2 + 0x78);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
            *(u8 **)((u8 *)temp_s2_2 + 0x78) = NULL;
        }
    }
    func_002B06B0(arg0);
}
