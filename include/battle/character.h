#ifndef BATTLE_CHARACTER_H
#define BATTLE_CHARACTER_H

#include "common.h"

/* The character table (D_00447440, 105 entries of 0x60 bytes, one per character; inferred from character.c and
 * char_body.c): how many bodies and faces each costume has, and where the shared models are kept. */
typedef struct CharBodyEntry {
    /* 0x00 */ s32 file;                     /* file of the model, -1 if none */
    /* 0x04 */ s32 secp;                     /* secret parts (char_secp.c) */
    /* 0x08 */ struct CharBody *list;        /* bodies loaded from it */
} CharBodyEntry;

typedef struct CharFaceEntry {
    /* 0x00 */ s32 file;
    /* 0x04 */ struct CharFace *list;
} CharFaceEntry;

typedef struct CharCostume {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s8 body;                      /* first body of the costume, -1 if none */
    /* 0x03 */ s8 face;                      /* first face of the costume, -1 if none */
    /* 0x04 */ s32 unk4;
} CharCostume;

typedef struct CharData {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s8 numCostumes;
    /* 0x05 */ s8 numBodyColors;
    /* 0x06 */ s8 numFaceColors;
    /* 0x07 */ s8 unk07;
    /* 0x08 */ CharBodyEntry *bodies;
    /* 0x0C */ CharFaceEntry *faces;
    /* 0x10 */ CharCostume costume[10];
} CharData;

extern CharData D_00447440[105];

/* A joint of a model: its matrix and four vectors (0x80 bytes; inferred from func_001C9DB0). */
typedef struct Mtx {
    f32 m[4][4];
} __attribute__((aligned(16))) Mtx;

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct Joint {
    /* 0x00 */ Mtx m;
    /* 0x40 */ Vec4 v[4];
} Joint;

typedef struct Model {
    /* 0x000 */ u8 unk000[0x45C];
    /* 0x45C */ Joint *joints;
} Model;

/* The secret parts of a body (char_secp.c): its parts, accessories and mantles. */
typedef struct SecpData {
    /* 0x00 */ s8 numParts;
    /* 0x01 */ s8 numAcsr;
    /* 0x02 */ s8 numMant;
    /* 0x04 */ s32 parts[8];
    /* 0x24 */ s32 acsr[2];
    /* 0x2C */ s32 mant[1];
} SecpData;

typedef struct SecpSlot {
    u8 unk00[0x20];
} SecpSlot;

typedef struct SecpOwnerData {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ SecpSlot slot[2];             /* one per accessory */
} SecpOwnerData;

typedef struct SecpOwner {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ SecpOwnerData *data;
} SecpOwner;

typedef struct Secp {
    /* 0x00 */ void *parts[8];
    /* 0x20 */ s32 *acsr[2];
    /* 0x28 */ void *mant[1];
    /* 0x2C */ s8 numParts;
    /* 0x2D */ s8 numAcsr;
    /* 0x2E */ s8 numMant;
    /* 0x30 */ s32 unk30;
    /* 0x34 */ struct SecpOwner *owner;
    /* 0x38 */ SecpData *data;
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ u8 unk40;
    /* 0x41 */ s8 unk41;
} Secp;

/* A loaded body model (char_body.c), shared by reference count between the characters that use it. */
typedef struct CharBody {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s16 joint[9];                 /* joints shared with the face (func_001C9DB0) */
    /* 0x42 */ u8 unk42[0x48 - 0x42];
    /* 0x48 */ void *unk48;
    /* 0x4C */ Model *model;
    /* 0x50 */ s32 unk50;
    /* 0x54 */ CharBodyEntry *entry;
    /* 0x58 */ struct Secp *secp;
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ s32 code;
    /* 0x64 */ s32 unk64;
    /* 0x68 */ s32 unk68;
    /* 0x6C */ s32 unk6C;
    /* 0x70 */ s32 unk70;
    /* 0x74 */ s32 unk74;
    /* 0x78 */ s32 key;
    /* 0x7C */ s32 refs;
    /* 0x80 */ struct CharBody *prev;
    /* 0x84 */ struct CharBody *next;
} CharBody;

/* A file being read (amCdFs_ReadFileId starts the read; inferred). */
typedef struct CharFile {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s16 state;                    /* 3: done (guess) */
    /* 0x06 */ u8 unk06[0x54 - 0x06];
    /* 0x54 */ s32 data;
} CharFile;

/* A loaded face model (char_body.c, created by func_001CA180), shared like the bodies. */
typedef struct CharFace {
    /* 0x00 */ s16 joint[9];                 /* joints shared with the body */
    /* 0x12 */ u8 unk12[0x18 - 0x12];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ Model *model;
    /* 0x20 */ u8 unk20[0x80 - 0x20];
    /* 0x80 */ CharFaceEntry *entry;
    /* 0x84 */ s32 unk84;
    /* 0x88 */ s32 unk88;
    /* 0x8C */ s32 unk8C;
    /* 0x90 */ CharFile *file;
    /* 0x94 */ CharFile *unk94;
    /* 0x98 */ s32 unk98;
    /* 0x9C */ s32 key;
    /* 0xA0 */ s32 refs;
    /* 0xA4 */ struct CharFace *prev;
    /* 0xA8 */ struct CharFace *next;
} CharFace;

#endif
