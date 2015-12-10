//
// Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
// This program and the accompanying materials
// are licensed and made available under the terms and conditions of the BSD License
// which accompanies this distribution.  The full text of the license may be found at
// http://opensource.org/licenses/bsd-license.php.
//
// THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
// WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
//

///
/// @file      Library/AppleMathLib/Ia32/DivS64x64.c
///
///            Integer division worker functions for Ia32.
///
/// @copyright Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.
///

#include "AppleMathLibInternals.h"

// InternalMathDivS64x64
/// Worker function that Divides a 64-bit signed integer by a 64-bit signed integer and
/// generates a 64-bit signed result.
///
/// This function divides the 64-bit signed value Dividend by the 64-bit
/// signed value Divisor and generates a 64-bit signed quotient.
/// This function returns the 64-bit signed quotient.
///
/// @param  Dividend  A 64-bit signed value.
/// @param  Divisor   A 64-bit signed value.
///
/// @return Dividend / Divisor
INT64
EFIAPI
InternalMathDivS64x64 (
  IN INT64 Dividend,
  IN INT64 Divisor
  )
{
  INT64 Quot;

  Quot = InternalMathDivU64x64 (
           (UINT64)(Dividend >= 0 ? Dividend : -Dividend),
           (UINT64)(Divisor >= 0 ? Divisor : -Divisor)
           );

  return ((Dividend ^ Divisor) >= 0 ? Quot : -Quot);
}
