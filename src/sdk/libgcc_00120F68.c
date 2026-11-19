/* libgcc's 64-bit integer / floating point conversions: GCC 2.96's libgcc2.c (L_floatdidf, L_floatdisf, L_fixunsdfdi,
   L_fixdfdi, L_fixunssfdi), compiled by ee-gcc 2.96 -O2 -G0; the double arithmetic goes through the soft-float
   routines of fp-bit.c (dpadd, dpmul, ...). Each of them was its own object in libgcc.a, assembled without delay-slot
   filling (as-flags below): the functions call each other under names the compiler does not see defined here, as
   separate objects do (config/port_syms.ld binds those names).

   as-flags: -O1

   From GCC's libgcc2.c:
   Copyright (C) 1989, 92-98, 1999, 2000 Free Software Foundation, Inc.

   This file is part of GNU CC. GNU CC is free software; you can redistribute it and/or modify it under the terms of
   the GNU General Public License as published by the Free Software Foundation; either version 2, or (at your option)
   any later version.

   In addition to the permissions in the GNU General Public License, the Free Software Foundation gives you unlimited
   permission to link the compiled version of this file into combinations with other programs, and to distribute
   those combinations without any restriction coming from the use of this file. (The General Public License
   restrictions do apply in other respects; for example, they cover modification of the file, and distribution when
   not linked into a combine executable.)

   GNU CC is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
   details. */

typedef int SItype __attribute__ ((mode (SI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));
typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

#define BITS_PER_UNIT 8
#define WORD_SIZE (sizeof (SItype) * BITS_PER_UNIT)
#define HIGH_HALFWORD_COEFF (((UDItype) 1) << (WORD_SIZE / 2))
#define HIGH_WORD_COEFF (((UDItype) 1) << WORD_SIZE)
#define DI_SIZE (sizeof (DItype) * BITS_PER_UNIT)
#define DF_SIZE 53
#define SF_SIZE 24

/* Defined here under the executable's names; called by their libgcc names (other objects in the original). */
DFtype floatdidf_def (DItype u) __asm__("func_00120F68");
SFtype floatdisf_def (DItype u) __asm__("func_00121010");
UDItype fixunsdfdi_def (DFtype a) __asm__("func_001210F8");
DItype fixdfdi_def (DFtype a) __asm__("func_00121210");
UDItype fixunssfdi_def (SFtype original_a) __asm__("func_00121288");
UDItype __fixunsdfdi (DFtype a);

/* L_floatdidf */
DFtype
floatdidf_def (DItype u)
{
  DFtype d;

  d = (SItype) (u >> WORD_SIZE);
  d *= HIGH_HALFWORD_COEFF;
  d *= HIGH_HALFWORD_COEFF;
  d += (USItype) (u & (HIGH_WORD_COEFF - 1));

  return d;
}

/* L_floatdisf */
#define REP_BIT ((UDItype) 1 << (DI_SIZE - DF_SIZE))

SFtype
floatdisf_def (DItype u)
{
  /* Do the calculation in DFmode
     so that we don't lose any of the precision of the high word
     while multiplying it.  */
  DFtype f;

  /* Protect against double-rounding error.
     Represent any low-order bits, that might be truncated in DFmode,
     by a bit that won't be lost.  The bit can go in anywhere below the
     rounding position of the SFmode.  A fixed mask and bit position
     handles all usual configurations.  It doesn't handle the case
     of 128-bit DImode, however.  */
  if (DF_SIZE < DI_SIZE
      && DF_SIZE > (DI_SIZE - DF_SIZE + SF_SIZE))
    {
      if (! (- ((DItype) 1 << DF_SIZE) < u
	     && u < ((DItype) 1 << DF_SIZE)))
	{
	  if (u & (REP_BIT - 1))
	    u |= REP_BIT;
	}
    }
  f = (SItype) (u >> WORD_SIZE);
  f *= HIGH_HALFWORD_COEFF;
  f *= HIGH_HALFWORD_COEFF;
  f += (USItype) (u & (HIGH_WORD_COEFF - 1));

  return (SFtype) f;
}

/* L_fixunsdfdi */
UDItype
fixunsdfdi_def (DFtype a)
{
  DFtype b;
  UDItype v;

  if (a < 0)
    return 0;

  /* Compute high word of result, as a flonum.  */
  b = (a / HIGH_WORD_COEFF);
  /* Convert that to fixed (but not to DItype!),
     and shift it into the high word.  */
  v = (USItype) b;
  v <<= WORD_SIZE;
  /* Remove high part from the DFtype, leaving the low part as flonum.  */
  a -= (DFtype)v;
  /* Convert that to fixed (but not to DItype!) and add it in.
     Sometimes A comes out negative.  This is significant, since
     A has more bits than a long int does.  */
  if (a < 0)
    v -= (USItype) (- a);
  else
    v += (USItype) a;
  return v;
}

/* L_fixdfdi */
DItype
fixdfdi_def (DFtype a)
{
  if (a < 0)
    return - __fixunsdfdi (-a);
  return __fixunsdfdi (a);
}

/* L_fixunssfdi */
UDItype
fixunssfdi_def (SFtype original_a)
{
  /* Convert the SFtype to a DFtype, because that is surely not going
     to lose any bits.  Some day someone else can write a faster version
     that avoids converting to DFtype, and verify it really works right.  */
  DFtype a = original_a;
  DFtype b;
  UDItype v;

  if (a < 0)
    return 0;

  /* Compute high word of result, as a flonum.  */
  b = (a / HIGH_WORD_COEFF);
  /* Convert that to fixed (but not to DItype!),
     and shift it into the high word.  */
  v = (USItype) b;
  v <<= WORD_SIZE;
  /* Remove high part from the DFtype, leaving the low part as flonum.  */
  a -= (DFtype)v;
  /* Convert that to fixed (but not to DItype!) and add it in.
     Sometimes A comes out negative.  This is significant, since
     A has more bits than a long int does.  */
  if (a < 0)
    v -= (USItype) (- a);
  else
    v += (USItype) a;
  return v;
}
