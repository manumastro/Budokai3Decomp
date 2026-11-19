/* Draft (not built): func_0026A680 at 0x0026A680, size 0x740, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 229 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x788, original 0x740
 * Original: asm/nonmatchings/menu/ess_main/func_0026A680.s */

// src/menu/ess_main.c func_0026A680 size diff=229/482
extern u8 D_0058F680[];
void func_0026ADC0(u8 *a0);
void Ess_TaskShopStart(u8 *a0);
void Ess_TaskEditStart(u8 *a0);
s32 EssEdit_Load(s32);
s32 EssList_Load(s32);
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s8 *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_00276B50(s32);
s32 memcpy(s8 *, void *, s32);
extern s32 D_0046B440;
extern s32 D_00470840;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void Save_ClearBusy(void);
extern void SoundRpc_Send3();
extern void Save_Request();
extern void func_001EF730(char *);
extern void BtbEntry_DecodeColors(char *, void *);
extern char D_00492FCE[];
void func_0026A680(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s3;
    s8 *temp_v0;
    u8 *temp_a3;
    void (*var_v0)(u8 *);
    void (*var_v1)(u8 *);
    void (*var_v1_2)(u8 *);
    u8 *temp_a0_3;
    u8 *temp_s4;

    temp_s4 = arg0 + 0x30;
    var_s1 = *(s32 *)((u8 *)gEssMain + 0x54);
    var_s3 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    temp_s2 = *D_00492FCE | D_00493086;
    func_00269B90();
    func_00269CC0();
    if (temp_s2 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        amAdx_Pause(1, 1);
        if (*(u8 *)((u8 *)gEssMain + 0x5C) != 0) {
            temp_v0 = amHeap_Alloc(0xD680, 0, &D_0046B440, 0xAD5);
            memcpy(temp_v0, D_0058F680 + (*(s32 *)((u8 *)gEssMain + 0x50) * 0xD680), 0xD680);
            BtbEntry_DecodeColors((char *)(temp_v0), (void *)(&D_00470840));
            func_001EF730((char *)(temp_v0));
            Save_ClearBusy();
            Save_Request(4, *(s32 *)((u8 *)gEssMain + 0x50), temp_v0);
            var_v1 = Ess_Exit;
            *(s8 **)((u8 *)gEssMain + 0x270) = temp_v0;
            if (Ess_Exit == NULL) {
                var_v1 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        *(s32 *)((u8 *)gEssMain + 0x210) = 0x3C;
        *(s32 *)((u8 *)gEssMain + 0x218) = 0;
        var_v0 = func_0026B460;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x45;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x240) = 1;
        *(s32 *)((u8 *)gEssMain + 0x248) = 0;
        *(s32 *)((u8 *)gEssMain + 0x250) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
        *(s32 *)((u8 *)gEssMain + 0x190) = -1;
        *(s32 *)((u8 *)gEssMain + 0x188) = 0;
        if (func_0026B460 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v0;
        func_0028DFC0(6, 0, *(s32 *)((u8 *)gEssMain + 0x50), 0, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */), (s32) 0x1F);
        return;
    }
    if (temp_s2 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        switch (var_s1) {                           /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            amAdx_Pause(1, 1);
            EssEdit_Load(*(s32 *)((u8 *)gEssMain + 0x50));
            *(s32 *)((u8 *)gEssMain + 0x90) = 3;
            var_v1_2 = Ess_TaskEditStart;
            *(s32 *)((u8 *)gEssMain + 0x98) = 0;
            *(s32 *)((u8 *)gEssMain + 0xC0) = 0xD;
            *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
            *(s32 *)((u8 *)gEssMain + 0xF0) = 0x43;
            *(s32 *)((u8 *)gEssMain + 0x100) = 0x44;
            *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x210) = 0x3A;
            *(s32 *)((u8 *)gEssMain + 0x238) = 0x3B;
            *(s32 *)((u8 *)gEssMain + 0x218) = 0;
            *(s32 *)((u8 *)gEssMain + 0x120) = 0xE;
            *(s32 *)((u8 *)gEssMain + 0x128) = 0;
            *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
            *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xF;
            *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
            *(s32 *)((u8 *)gEssMain + 0x190) = -1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            *(s32 *)((u8 *)gEssMain + 0x240) = 1;
            *(s32 *)((u8 *)gEssMain + 0x248) = 0;
            *(s32 *)((u8 *)gEssMain + 0x250) = 0;
            if (Ess_TaskEditStart == NULL) {
                var_v1_2 = NULL;
            }
block_27:
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
            break;
        case 1:                                     /* switch 1 */
            amAdx_Pause(1, 1);
            func_00276B50(*(s32 *)((u8 *)gEssMain + 0x50));
            *(s32 *)((u8 *)gEssMain + 0x90) = 3;
            var_v1_2 = Ess_TaskShopStart;
            *(s32 *)((u8 *)gEssMain + 0x98) = 0;
            *(s32 *)((u8 *)gEssMain + 0xC0) = 0xD;
            *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
            *(s32 *)((u8 *)gEssMain + 0xF0) = 0x43;
            *(s32 *)((u8 *)gEssMain + 0x100) = 0x44;
            *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x210) = 0x3A;
            *(s32 *)((u8 *)gEssMain + 0x238) = 0x3B;
            *(s32 *)((u8 *)gEssMain + 0x218) = 0;
            *(s32 *)((u8 *)gEssMain + 0x120) = 0xE;
            *(s32 *)((u8 *)gEssMain + 0x128) = 0;
            *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
            *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xF;
            *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
            *(s32 *)((u8 *)gEssMain + 0x190) = -1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            *(s32 *)((u8 *)gEssMain + 0x240) = 1;
            *(s32 *)((u8 *)gEssMain + 0x248) = 0;
            *(s32 *)((u8 *)gEssMain + 0x250) = 0;
            if (Ess_TaskShopStart == NULL) {
                var_v1_2 = NULL;
            }
            goto block_27;
        case 2:                                     /* switch 1 */
            amAdx_Pause(1, 1);
            *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
            *(s32 *)((u8 *)gEssMain + 0x190) = -1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            EssList_Load(*(s32 *)((u8 *)gEssMain + 0x50));
            var_v1_2 = func_0026ADC0;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            if (func_0026ADC0 == NULL) {
                var_v1_2 = NULL;
            }
            goto block_27;
        }
    }
    if (temp_s2 & 1) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
        var_s3 = 0;
    }
    temp_a0 = var_s3 & 0xF0;
    switch (temp_a0) {                              /* switch 2; irregular */
    case 0x10:                                      /* switch 2 */
        temp_v1 = *(s32 *)((u8 *)temp_s4 + 0xC);
        var_s1 = (s32) ((var_s1 + temp_v1) - 1) % temp_v1;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        break;
    case 0x40:                                      /* switch 2 */
        temp_v1_2 = *(s32 *)((u8 *)temp_s4 + 0xC);
        var_s1 = (s32) (var_s1 + temp_v1_2 + 1) % temp_v1_2;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        break;
    }
    temp_a0_2 = *(s32 *)((u8 *)gEssMain + 0x54);
    temp_a3 = gEssMain + 0x210;
    if (temp_a0_2 != var_s1) {
        *(s32 *)((u8 *)((temp_a0_2 * 4) + temp_a3) + 0x10) = 0x38;
        temp_a0_3 = (var_s1 * 4) + temp_a3;
        *(s32 *)((u8 *)((*(s32 *)((u8 *)gEssMain + 0x54) * 4) + temp_a3) + 0x1C) = 0;
        *(s32 *)((u8 *)temp_a0_3 + 0x10) = 0x39;
        *(s32 *)((u8 *)temp_a0_3 + 0x1C) = 0;
        switch (var_s1) {                           /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 9;
            *(s32 *)((u8 *)gEssMain + 0x190) = 9;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0 = *D_00452EE4;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0 | 0x20000, 0);
            break;
        case 1:                                     /* switch 3 */
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 0xA;
            *(s32 *)((u8 *)gEssMain + 0x190) = 0xA;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_2 = *D_00452EE8;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
            break;
        case 2:                                     /* switch 3 */
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 0xB;
            *(s32 *)((u8 *)gEssMain + 0x190) = 0xB;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_3 = *D_00452EEC;
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_3 | 0x20000, 0);
            break;
        }
    }
    *(s32 *)((u8 *)gEssMain + 0x54) = var_s1;
}
