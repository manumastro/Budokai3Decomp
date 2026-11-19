/* Draft (not built): func_002A5D80 at 0x002A5D80, size 0x1C8, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5D80.s */

s32 Fade_Request(s32, s32, s32);
s32 Scr_Start(s32, s32);
s32 Zenie_GetState(s32);
s32 func_00144370(s32, s8 *, s32, s32);
s32 func_002988D0(void **, s8);
s32 func_00298910(s32);
s32 func_00298990(s32, s32, s32);
s32 func_00298E30(s32 *, s32);
extern s8 D_004708E0;
extern void *D_005AB8D0;
extern s8 D_005ABA60;
extern void SoundRpc_SendWord2();
extern void *D_005AA550[];
void func_002A5D80(u8 *arg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_s3;
    s8 *var_s2;
    void (*var_v1)();
    u8 **var_s1;
    u8 *var_s4;
    var_s4 = arg0;
    var_s0 = gEvtWork;
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0xC);
    if (temp_a0 & 1 && temp_a0 & 2) {
        if (*(s32 *)((u8 *)var_s0 + 0x40) != 0) {
            if (*(s32 *)((u8 *)var_s0 + 0x68) != 0) {
                if (Zenie_GetState(temp_a0) <= 0) {
                } else {
                    goto block_7;
                }
            }
        } else {
            block_7:
            Fade_Request(-1, 0, 0);

            temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x130);
            if (temp_a0_2 != -1) {
                func_00298910(temp_a0_2);
                func_00298E10(D_004700A0);
                D_004700A0 = -1;
            }
            var_a1 = *(s32 *)((u8 *)var_s0 + 0x138);
            if (var_a1 >= 4) {
                var_a1 = 3;
            }
            func_00298990(*(s32 *)((u8 *)var_s0 + 0x134), var_a1, *(u8 **)((u8 *)var_s0 + 0x13C));
            if (*(s32 *)((u8 *)var_s0 + 0x140) != -1) {
                func_00298E30(var_s0 + 0xE0, *(s32 *)((u8 *)var_s0 + 0xF0));
                *(s32 *)((u8 *)var_s0 + 0x140) = -1;
            }
            var_s3 = 0;
            if (0 < D_004708E0) {
                var_s2 = &D_005ABA60;
                var_s1 = (unsigned char **)&D_005AB8D0;
                var_s2 = &D_005ABA60;
                var_s1 = (unsigned char **)&D_005AB8D0;
                do {
                    func_002988D0((void **)var_s1, (s8)*var_s2);
                    var_s3 += 1;
                    var_s2 += 1;
                    var_s1 += 0x10;
                }
                while (var_s3 < D_004708E0);
            }
            var_s1 = (unsigned char **)D_005AA550;
            D_004708E0 = 0;
            var_s2 = NULL;
            var_s1 = (unsigned char **)D_005AA550;
            do {
                func_00144370(1, var_s2 + 0x11122233, 0, *(s32 *)((u8 *)var_s1 + 0xE10));
                var_s2 += 1;
                var_s1 += 4;
            }
            while ((s32)var_s2 < 8);
            SoundRpc_SendWord2(-1);
            Scr_Start(*(s32 *)((u8 *)var_s0 + 0), 0);
            var_v1 = func_002A5D70;
            if (func_002A5D70 == NULL) {
                var_v1 = NULL;
            }
            *(void (**)())((u8 *)var_s4 + 0x1C) = var_v1;
            *(s32 *)((u8 *)var_s0 + 0xC) = 0;
        }
    }
}
