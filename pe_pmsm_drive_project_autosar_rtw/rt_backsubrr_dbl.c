/* Copyright 1994-2010 The MathWorks, Inc.
 *
 * File: rt_backsubrr_dbl.c     
 *
 * Abstract:
 *      Simulink Coder support routine which performs
 *      backward substitution: solving Ux=b for real
 *      double precision float operands.
 *
 */

#include "rt_matrixlib.h"

/* Function: rt_BackwardSubstitutionRR_Dbl =====================================
 * Abstract: Backward substitution: Solving Ux=b 
 *           U: real, double
 *           b: real, double
 *           U is an upper (or unit upper) triangular full matrix.
 *           The entries in the lower triangle are ignored.
 *           U is a NxN matrix
 *           X is a NxP matrix
 *           B is a NxP matrix
 */
void rt_BackwardSubstitutionRR_Dbl(float64          *pU,
                                   const float64    *pb,
                                   float64          *x,
                                   sint32            N,
                                   sint32            P,
                                   boolean        unit_upper)
{
  sint32 i,k;
  for(k=P; k>0; k--) {
    float64 *pUcol = pU;
    for(i=0; i<N; i++) {
      float64 *xj = x + k*N-1;
      float64 s = 0.0;
      float64 *pUrow = pUcol--;          /* access current row of U */

      {
        sint32 j = i;
        while(j-- > 0) {
          s += *pUrow * *xj--;
          pUrow -= N;
        }
      }

      if (unit_upper) {
        *xj = *pb-- - s;
      } else {
        *xj = (*pb-- - s) / *pUrow;
      }
    }
  }
}

/* [EOF] rt_backsubrr_dbl.c */
