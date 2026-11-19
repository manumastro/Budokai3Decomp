/* Draft (not built): func_00289F30 at 0x00289F30, size 0x170, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x170
 * Original: asm/nonmatchings/sys/mc_opr/func_00289F30.s */

// src/sys/mc_opr.c func_00289F30 size diff=46/90
extern s32 D_00470894;
extern void amHeap_Free(void *);
extern void *D_004708A0;
s32 func_001EF510(void *, s32);
s32 func_001EF930(s8 *, void *);
extern s32 D_00470558;
extern s32 D_0047084C;
extern s32 D_00470850;
extern s64 D_004B4B48;
extern s32 D_004B4B50;
extern s8 D_004B4B64;
extern s8 D_004B4B65;
extern s32 gMcState;
extern char D_004B4B40[];
extern void *D_0047054C;
extern void func_0028DDF0(void);
extern void func_00289E80(void);
extern void func_0028A9E0(void);
void func_00289F30(u8 *arg0, s32 arg1) {
    s32 *var_v0;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 var_a1;

    var_a1 = arg1;
    switch (gMcState) {                             /* irregular */
    case 2:
        var_a1 = 0xD680;
        if (D_00470558 != 0xD680) {
        case 3:
            func_00288870(9, var_a1);
            var_v1 = (int *)(&func_0028DDF0);
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            D_00470894 = (int)(&func_00289E80);
            if (D_0047054C != NULL) {
                amHeap_Free(D_0047054C);
                D_0047054C = NULL;
            }
            return;
        }
        D_004708A0 = D_0047054C;
        D_0047054C = NULL;
        if (func_001EF510(D_004708A0, 0xD680) != 0) {
            func_00288870(9);
            var_v0 = (int *)(&func_0028DDF0);
            if (&func_0028DDF0 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            D_00470894 = (int)(&func_00289E80);
            amHeap_Free(D_004708A0);
            D_004708A0 = NULL;
            return;
        }
        D_004B4B48 = 1;
        D_004B4B50 = 1;
        func_001EF930((s8 *)(D_004B4B40), (void *)(D_004708A0));
        amHeap_Free(D_004708A0);
        D_004B4B65 = 0;
        D_004708A0 = NULL;
        D_004B4B64 = (s8) D_0047084C;
        func_00288870(0xA);
        var_v1_2 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        D_00470894 = (int)(&func_0028A9E0);
        D_00470850 = 0x78;
        return;
    }
}
