/* Copyright 1994-2010 The MathWorks, Inc.
 *
 * File: rt_forwardsubrr_dbl.c     
 *
 * Abstract:
 *      Simulink Coder support routine which performs
 *      forward substitution: solving Lx=b
 *
 */

#include "rt_matrixlib.h"

/* Function: rt_ForwardSubstitutionRR_Dbl ======================================
 * Abstract: Forward substitution: solving Lx=b 
 *           L: Real, double
 *           b: Real, double
 *           L is a lower (or unit lower) triangular full matrix.
 *           The entries in the upper triangle are ignored.
 *           L is a NxN matrix
 *           X is a NxP matrix
 *           B is a NxP matrix
 */
void rt_ForwardSubstitutionRR_Dbl(float64        *pL,
                                  const float64  *pb,
                                  float64        *x,
                                  sint32          N,
                                  sint32          P,
                                  const sint32 *piv,
                                  boolean      unit_lower)
{  
  /* Real inputs: */
  sint32 i, k;
  for(k=0; k<P; k++) {
    float64 *pLcol = pL;
    for(i=0; i<N; i++) {
      float64 *xj = x + k*N;
      float64 s = 0.0;
      float64 *pLrow = pLcol++;          /* access current row of L */

      {
        sint32 j = i;
        while(j-- > 0) {
          s += *pLrow * *xj;
          pLrow += N;
          xj++;
        }
      }

      if (unit_lower) {
        *xj = pb[piv[i]] - s;
      } else {
        *xj = (pb[piv[i]] - s) / *pLrow;
      }
    }
    pb += N;
  }
}

/* [EOF] rt_forwardsubrr_dbl.c */
