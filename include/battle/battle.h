#ifndef BATTLE_BATTLE_H
#define BATTLE_BATTLE_H

#include "common.h"

/* The context a script command gets (script.c's interpreter; inferred from the commands in character.c):
 * the command's arguments, and where it leaves its result. */
typedef struct ScriptCtx {
    /* 0x00 */ s32 ret;                              /* integer result */
    /* 0x04 */ s32 unk04[3];
    /* 0x10 */ s32 (*wait)(struct ScriptCtx *ctx);   /* called each frame while the command waits */
    /* 0x14 */ s32 unk14[6];
    /* 0x2C */ s32 *args;                            /* the command's arguments (ints or floats) */
    /* 0x30 */ s32 unk30[4];
    /* 0x40 */ f32 fret;                             /* float result */
} ScriptCtx;

/* A fighter in a battle (the object btl_main.c keeps per side); only the fields used so far. */
typedef struct Fighter {
    /* 0x0000 */ u8 unk0000[0x1350];
    /* 0x1350 */ s32 unk1350;                        /* the side, 0 or 1 (guess) */
    /* 0x1354 */ struct Fighter *other;              /* the opponent (guess) */
    /* 0x1358 */ u8 unk1358[0x1360 - 0x1358];
    /* 0x1360 */ u8 unk1360[0x13A4 - 0x1360];      /* a sub-object (func_001AAEA0) */
    /* 0x13A4 */ s16 unk13A4;
    /* 0x13A6 */ u8 unk13A6[0x17E4 - 0x13A6];
    /* 0x17E4 */ f32 unk17E4;
    /* 0x17E8 */ f32 unk17E8;
    /* 0x17EC */ u8 unk17EC[0x1AC4 - 0x17EC];
    /* 0x1AC4 */ s32 unk1AC4;
    /* 0x1AC8 */ u8 unk1AC8[0x1ACE - 0x1AC8];
    /* 0x1ACE */ s16 unk1ACE;
    /* 0x1AD0 */ u8 unk1AD0[0x1AD6 - 0x1AD0];
    /* 0x1AD6 */ s16 unk1AD6;
    /* 0x1AD8 */ f32 unk1AD8;
    /* 0x1ADC */ f32 unk1ADC;
    /* 0x1AE0 */ u8 unk1AE0[0x1CFC - 0x1AE0];
    /* 0x1CFC */ s32 unk1CFC;
    /* 0x1D00 */ u8 unk1D00[0x1EE8 - 0x1D00];
    /* 0x1EE8 */ s32 unk1EE8;
    /* 0x1EEC */ u8 unk1EEC[0x1FF8 - 0x1EEC];
    /* 0x1FF8 */ s8 unk1FF8;
} Fighter;

/* The battle's work area, reached through gBattle (inferred: the two fighters at 0x8934). */
typedef struct BattleWork {
    /* 0x0000 */ u8 unk0000[0x88EC];
    /* 0x88EC */ s32 unk88EC;
    /* 0x88F0 */ f32 unk88F0;
    /* 0x88F4 */ u8 unk88F4[0x891C - 0x88F4];
    /* 0x891C */ s32 unk891C;
    /* 0x8920 */ u8 unk8920[0x8934 - 0x8920];
    /* 0x8934 */ Fighter *fighter[2];
    /* 0x893C */ u8 unk893C[0x8944 - 0x893C];
    /* 0x8944 */ s16 unk8944;
    /* 0x8946 */ u8 unk8946[0x8952 - 0x8946];
    /* 0x8952 */ s16 unk8952;
    /* 0x8954 */ u8 unk8954[0x8AB1 - 0x8954];
    /* 0x8AB1 */ s8 unk8AB1;
    /* 0x8AB2 */ s8 unk8AB2;
    /* 0x8AB3 */ s8 unk8AB3;
} BattleWork;

extern BattleWork *D_00470570;

#endif
