#ifndef rt_matrixlib_h
#define rt_matrixlib_h

/* Copyright 2007-2013 The MathWorks, Inc.
 *
 * File    : rt_matrixlib.h
 * Abstract:
 *     Function prototypes for .c sources in rtw/c/src/matrixmath.
 *
 */


/*==========*
 * Includes *
 *==========*/

#include "rtwtypes.h"
#include <limits.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Matrix Multiplication Utility Functions */
extern void rt_MatMultRR_Dbl(float64         *y, 
                             const float64   *A, 
                             const float64   *B, 
                             const sint32 dims[3]);

#ifdef CREAL_T
extern void rt_MatMultRC_Dbl(creal_T       *y,
                             const float64  *A,
                             const creal_T *B,
                             const sint32 dims[3]);

extern void rt_MatMultCR_Dbl(creal_T       *y,
                             const creal_T *A,
                             const float64  *B,
                             const sint32 dims[3]);

extern void rt_MatMultCC_Dbl(creal_T       *y,
                             const creal_T *A,
                             const creal_T *B,
                             const sint32 dims[3]);
#endif

extern void rt_MatMultRR_Sgl(float32       *y,
                             const float32 *A,
                             const float32 *B,
                             const sint32  dims[3]);

#ifdef CREAL_T
extern void rt_MatMultRC_Sgl(creal32_T       *y,
                             const float32  *A,
                             const creal32_T *B,
                             const sint32   dims[3]);

extern void rt_MatMultCR_Sgl(creal32_T       *y,
                             const creal32_T *A,
                             const float32  *B,
                             const sint32   dims[3]);

extern void rt_MatMultCC_Sgl(creal32_T       *y,
                             const creal32_T *A,
                             const creal32_T *B,
                             const sint32   dims[3]);
#endif

extern void rt_MatMultAndIncRR_Dbl(float64       *y,
                                   const float64 *A,
                                   const float64 *B,
                                   const sint32 dims[3]);

#ifdef CREAL_T
extern void rt_MatMultAndIncRC_Dbl(creal_T       *y,
                                   const float64  *A,
                                   const creal_T *B,
                                   const sint32 dims[3]);

extern void rt_MatMultAndIncCR_Dbl(creal_T       *y,
                                   const creal_T *A,
                                   const float64  *B,
                                   const sint32 dims[3]);

extern void rt_MatMultAndIncCC_Dbl(creal_T       *y,
                                   const creal_T *A,
                                   const creal_T *B,
                                   const sint32 dims[3]);
#endif
extern void rt_MatMultAndIncRR_Sgl(float32       *y,
                                   const float32 *A,
                                   const float32 *B,
                                   const sint32  dims[3]);

#ifdef CREAL_T
extern void rt_MatMultAndIncRC_Sgl(creal32_T       *y,
                                   const float32  *A,
                                   const creal32_T *B,
                                   const sint32   dims[3]);

extern void rt_MatMultAndIncCR_Sgl(creal32_T       *y,
                                   const creal32_T *A,
                                   const float32  *B,
                                   const sint32   dims[3]);

extern void rt_MatMultAndIncCC_Sgl(creal32_T       *y,
                                   const creal32_T *A,
                                   const creal32_T *B,
                                   const sint32   dims[3]);
#endif 

/* Matrix Inversion Utility Functions */
extern void rt_lu_real(float64      *A,
                       const sint32 n,
                       sint32     *piv);

#ifdef CREAL_T
extern void rt_lu_cplx(creal_T *A,
                       const sint32 n,
                       sint32 *piv);
#endif

extern void rt_lu_real_sgl(float32      *A,
                           const sint32 n,
                           sint32     *piv);

#ifdef CREAL_T
extern void rt_lu_cplx_sgl(creal32_T *A,
                           const sint32 n,
                           sint32 *piv);
#endif

extern void rt_BackwardSubstitutionRR_Dbl(float64          *pU,
                                          const float64    *pb,
                                          float64          *x,
                                          sint32            N,
                                          sint32            P,
                                          boolean        unit_upper);

#ifdef CREAL_T
extern void rt_BackwardSubstitutionRC_Dbl(float64          *pU,
                                          const creal_T   *pb,
                                          creal_T         *x,
                                          sint32            N,
                                          sint32            P,
                                          boolean        unit_upper);

extern void rt_BackwardSubstitutionCC_Dbl(creal_T         *pU,
                                          const creal_T   *pb,
                                          creal_T         *x,
                                          sint32            N,
                                          sint32            P,
                                          boolean        unit_upper);
#endif

extern void rt_ForwardSubstitutionRR_Dbl(float64        *pL,
                                         const float64  *pb,
                                         float64        *x,
                                         sint32          N,
                                         sint32          P,
                                         const sint32 *piv,
                                         boolean      unit_lower);

#ifdef CREAL_T
extern void rt_ForwardSubstitutionRC_Dbl(float64        *pL,
                                         const creal_T   *pb,
                                         creal_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);

extern void rt_ForwardSubstitutionCR_Dbl(creal_T   *pL,
                                         const float64    *pb,
                                         creal_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);

extern void rt_ForwardSubstitutionCC_Dbl(creal_T   *pL,
                                         const creal_T   *pb,
                                         creal_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);
#endif

extern void rt_BackwardSubstitutionRR_Sgl(float32          *pU,
                                          const float32    *pb,
                                          float32          *x,
                                          sint32              N,
                                          sint32              P,
                                          boolean          unit_upper);

#ifdef CREAL_T
extern void rt_BackwardSubstitutionRC_Sgl(float32          *pU,
                                          const creal32_T   *pb,
                                          creal32_T         *x,
                                          sint32              N,
                                          sint32              P,
                                          boolean          unit_upper);

extern void rt_BackwardSubstitutionCC_Sgl(creal32_T         *pU,
                                          const creal32_T   *pb,
                                          creal32_T         *x,
                                          sint32              N,
                                          sint32              P,
                                          boolean          unit_upper);
#endif

extern void rt_ForwardSubstitutionRR_Sgl(float32    *pL,
                                         const float32    *pb,
                                         float32    *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);

#ifdef CREAL_T
extern void rt_ForwardSubstitutionRC_Sgl(float32    *pL,
                                         const creal32_T   *pb,
                                         creal32_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);

extern void rt_ForwardSubstitutionCR_Sgl(creal32_T   *pL,
                                         const float32    *pb,
                                         creal32_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);

extern void rt_ForwardSubstitutionCC_Sgl(creal32_T   *pL,
                                         const creal32_T   *pb,
                                         creal32_T   *x,
                                         sint32     N,
                                         sint32     P,
                                         const sint32   *piv,
                                         boolean unit_lower);
#endif


extern void rt_MatDivRR_Dbl(float64        *Out,
                            const float64  *In1,
                            const float64  *In2,
                            float64        *lu,
                            sint32       *piv,
                            float64        *x,
                            const sint32    dims[3]);

#ifdef CREAL_T
extern void rt_MatDivRC_Dbl(creal_T       *Out,
                            const float64  *In1,
                            const creal_T *In2,
                            float64        *lu,
                            sint32       *piv,
                            creal_T       *x,
                            const sint32    dims[3]);

extern void rt_MatDivCR_Dbl(creal_T       *Out,
                            const creal_T *In1,
                            const float64  *In2,
                            creal_T       *lu,
                            sint32       *piv,
                            creal_T       *x,
                            const sint32    dims[3]);

extern void rt_MatDivCC_Dbl(creal_T       *Out,
                            const creal_T *In1,
                            const creal_T *In2,
                            creal_T       *lu,
                            sint32       *piv,
                            creal_T       *x,
                            const sint32    dims[3]);
#endif

extern void rt_MatDivRR_Sgl(float32        *Out,
                            const float32  *In1,
                            const float32  *In2,
                            float32        *lu,
                            sint32         *piv,
                            float32        *x,
                            const sint32      dims[3]);

#ifdef CREAL_T
extern void rt_MatDivRC_Sgl(creal32_T       *Out,
                            const float32  *In1,
                            const creal32_T *In2,
                            float32        *lu,
                            sint32         *piv,
                            creal32_T       *x,
                            const sint32      dims[3]);

extern void rt_MatDivCR_Sgl(creal32_T       *Out,
                            const creal32_T *In1,
                            const float32  *In2,
                            creal32_T       *lu,
                            sint32         *piv,
                            creal32_T       *x,
                            const sint32      dims[3]);

extern void rt_MatDivCC_Sgl(creal32_T       *Out,
                            const creal32_T *In1,
                            const creal32_T *In2,
                            creal32_T       *lu,
                            sint32         *piv,
                            creal32_T       *x,
                            const sint32      dims[3]);
#endif


/* Matrix multiplication defines */

/* Quick (approximate) complex absolute value: */
#define CQABS(X) (fabs((X).re) + fabs((X).im))

/* Quick (approximate) complex absolute value for singles: */
#define CQABSSGL(X) (float32)(fabs( (float64) (X).re) + fabs( (float64) (X).im)) 

#ifdef CREAL_T
extern void rt_ComplexTimes_Dbl(creal_T       *Out,
                                const creal_T In1,
                                const creal_T In2);

extern void rt_ComplexRDivide_Dbl(creal_T       *Out,
                                  const creal_T In1,
                                  const creal_T In2);

extern void rt_ComplexReciprocal_Dbl(creal_T       *Out,
                                     const creal_T In1);

extern void rt_ComplexTimes_Sgl(creal32_T       *Out,
                                const creal32_T In1,
                                const creal32_T In2);

extern void rt_ComplexRDivide_Sgl(creal32_T       *Out,
                                  const creal32_T In1,
                                  const creal32_T In2);

extern void rt_ComplexReciprocal_Sgl(creal32_T       *Out,
                                     const creal32_T In1);

#endif

extern float64 rt_Hypot_Dbl(float64 In1,
                           float64 In2);

extern float32 rt_Hypot_Sgl(float32 In1,
                             float32 In2);

#ifdef __cplusplus
}
#endif

#endif /* rt_matrixlib_h */
