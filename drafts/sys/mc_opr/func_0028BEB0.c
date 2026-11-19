/* Draft (not built): func_0028BEB0 at 0x0028BEB0, size 0x240, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 83 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x230, original 0x240
 * Original: asm/nonmatchings/sys/mc_opr/func_0028BEB0.s */

// src/sys/mc_opr.c func_0028BEB0 size diff=83/140
extern s32 D_00470894;
extern s32 D_00470048;
void func_0028DDB0(u8 *arg0);
void func_0028DF10(void);
s32 func_001EF510(s8 *, s32);
s32 func_001EF930(s8 *, s8 *);
s32 memcmp(s8 *, s32, s32);
extern s32 D_00470830;
extern s32 D_0047084C;
extern s32 D_00470850;
extern s32 D_00470858;
extern s8 *D_00470870;
extern s32 D_00470874;
extern s32 D_00470898;
extern s8 D_004B4B64;
extern s8 D_004B4B65;
extern s32 gMcState;
extern char D_004B4B40[];
extern char D_004B4BC0[];
extern void func_001EF730(char *);
extern void func_0028BDB0(void);
extern void func_0028DDF0(void);
extern void func_0028AAA0(void);
extern void func_0028C4C0(void);
extern void func_0028DDA0(void);
void func_0028BEB0(u8 *arg0) {
    void (*var_v1)();
    void (*var_v1_2)();
    void (*var_v1_3)();
    void (*var_v1_4)();

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_v1 = func_0028BDB0;
        if (func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    case 2:                                         /* switch 1 */
        if ((D_00470874 != 0) && (memcmp((s8 *)(D_004B4BC0), (s32)(D_00470874), 0x24) == 0)) {
            func_001EF510(D_00470870, 0xD680);
            func_001EF930((s8 *)(D_004B4B40), (s8 *)(D_00470870));
            func_001EF730((char *)(D_00470870));
        }
        D_004B4B65 = 0;
        D_004B4B64 = (s8) D_0047084C;
        switch (D_00470048) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_001EF510(D_00470870, 0xD680);
            func_001EF930((s8 *)(D_004B4B40), (s8 *)(D_00470870));
            func_001EF730((char *)(D_00470870));
            func_00288870(0x12);
            var_v1_2 = func_0028DDF0;
            if (func_0028DDF0 == NULL) {
                var_v1_2 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
            D_00470850 = 0x78;
            D_00470894 = (s32) &func_0028AAA0;
            return;
        case 2:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
            D_00470858 = 1;
            func_00288870(0x1B, D_0047084C);
            var_v1_3 = func_0028DDF0;
            if (func_0028DDF0 == NULL) {
                var_v1_3 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_3;
            D_00470858 = 1;
            D_00470850 = 0x78;
            D_00470894 = (s32) &func_0028C4C0;
            return;
        case 9:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
            D_00470830 = 1;
            var_v1_4 = func_0028DF10;
            if (func_0028DF10 == NULL) {
                var_v1_4 = NULL;
            }
block_36:
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_4;
            return;
        case 10:                                    /* switch 2 */
            func_00288870(-1, D_0047084C);
            D_00470894 = (s32) func_0028DDA0;
            var_v1_4 = func_0028DDB0;
            D_00470858 = 1;
            if (func_0028DDB0 == NULL) {
                var_v1_4 = NULL;
            }
            goto block_36;
        default:                                    /* switch 2 */
            D_00470830 = 1;
            var_v1_4 = func_0028DF10;
            if (func_0028DF10 == NULL) {
                var_v1_4 = NULL;
            }
            goto block_36;
        }
        break;
    }
}
