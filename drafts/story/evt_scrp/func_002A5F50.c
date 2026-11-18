/* Draft (not built): func_002A5F50 at 0x002A5F50, size 0x13C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp' @ 2156: temp_v1 = *(s32 (**)(s32, s32, u8 *, s32))((u8 *)((temp_a0 * 4) + sp) + 0x30);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5F50.s */

// src/story/evt_scrp.c func_002A5F50 cerr diff=-1/0
s32 func_002AA330(s32, s32, s32, void *);
extern s32 D_004551C0;
extern s32 D_004708E4;
extern void func_002A5D80(void);
void func_002A5F50(u8 *arg0) {
    s32 sp30;
    s32 (*temp_v1)(s32, s32, u8 *, s32);
    s32 temp_a0;
    void (*var_v1)();
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_t2;

    temp_s0 = (u8 *)(gEvtWork);
    temp_t2 = *(u8 **)((u8 *)temp_s0 + 0xC8);
    D_004708E4 += 1;
    if (*(s16 *)((u8 *)temp_t2 + 4) == 3) {
        *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_004551C0) + 0);
        *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_004551C0) + 0x10);
        *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_004551C0) + 0x20);
        *(s128 *)((u8 *)(&sp30) + 0x30) = (s128) *(s128 *)((u8 *)(&D_004551C0) + 0x30);
        *(s128 *)((u8 *)(&sp30) + 0x40) = (s128) *(s128 *)((u8 *)(&D_004551C0) + 0x40);
        *(f32 *)((u8 *)(&sp30) + 0x50) = (f32) *(f32 *)((u8 *)(&D_004551C0) + 0x50);
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0xCC);
        temp_v1 = *(s32 (**)(s32, s32, u8 *, s32))((u8 *)((temp_a0 * 4) + sp) + 0x30);
        if (temp_v1 != NULL) {
            temp_a2 = *(u8 **)((u8 *)temp_t2 + 0x40);
            temp_v1(*(s32 *)((u8 *)temp_s0 + 0), *(s32 *)((u8 *)temp_s0 + 0xD0), temp_a2, *(s32 *)((u8 *)temp_a2 + 0x50));
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC8)) + 0x40) = NULL;
            amCdFs_Close((s32)(*(u8 **)((u8 *)temp_s0 + 0xC8)), 0);
        } else if (temp_a0 == 3) {
            func_002AA330(*(s32 *)((u8 *)temp_s0 + 0), *(s32 *)((u8 *)temp_s0 + 0xD0), *(s32 *)((u8 *)temp_s0 + 0xD8), *(u8 **)((u8 *)temp_t2 + 0x40));
        }
        if (*(s32 *)((u8 *)temp_s0 + 0xD4) < *(s32 *)((u8 *)temp_s0 + 0x30)) {
            var_v1 = func_002A6210;
            if (func_002A6210 == NULL) {
                var_v1 = NULL;
            }
        } else {
            var_v1 = func_002A5D80;
            *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 2);
            if (func_002A5D80 == NULL) {
                var_v1 = NULL;
            }
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
