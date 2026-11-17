#ifndef TYPES_H
#define TYPES_H

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;      /* 64-bit on the EE with Metrowerks (long is 64 bits wide) */
typedef unsigned long u64;
typedef float f32;

#ifndef NULL
#define NULL ((void *)0)
#endif

#endif
