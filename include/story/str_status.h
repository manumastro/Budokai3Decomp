#ifndef STORY_STR_STATUS_H
#define STORY_STR_STATUS_H

/* The story status work block (D_00470910). Only the fields the matched functions use
   are named so far. */
typedef struct StrStatusWork {
    char pad0[0x3C];
} StrStatusWork;

extern StrStatusWork *D_00470910;

#endif
