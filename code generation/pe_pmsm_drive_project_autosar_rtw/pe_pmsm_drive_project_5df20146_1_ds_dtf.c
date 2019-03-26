/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dtf.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_dtf(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t119, NeDsMethodOutput *t120)
{
  PmRealVector out;
  float64 t24[3];
  float64 t25[3];
  float64 t26[3];
  float64 t78;
  float64 t79;
  float64 t80;
  float64 t90;
  float64 t91;
  float64 t94;
  float64 t97;
  float64 t108;
  float64 t109;
  float64 t114;
  float64 t115;
  float64 X_idx_13;
  float64 X_idx_16;
  float64 X_idx_17;
  float64 X_idx_18;
  float64 X_idx_3;
  float64 X_idx_5;
  float64 X_idx_6;
  float64 X_idx_4;
  X_idx_3 = t119->mX.mX[3];
  X_idx_4 = t119->mX.mX[4];
  X_idx_5 = t119->mX.mX[5];
  X_idx_6 = t119->mX.mX[6];
  X_idx_13 = t119->mX.mX[13];
  X_idx_16 = t119->mX.mX[16];
  X_idx_17 = t119->mX.mX[17];
  X_idx_18 = t119->mX.mX[18];
  out = t120->mDTF;
  t115 = -X_idx_13 + X_idx_16;
  t108 = -X_idx_13 + X_idx_17;
  t109 = -X_idx_13 + X_idx_18;
  X_idx_17 = X_idx_3 * 6.0 + -1.5707963267948966;
  X_idx_13 = X_idx_17;
  X_idx_18 = X_idx_17 + -2.0943951023931953;
  X_idx_3 = X_idx_17 + 2.0943951023931953;
  X_idx_17 = -sin(X_idx_17) * 0.0 * 0.66666666666666663;
  t114 = -sin(X_idx_18) * 0.0 * 0.66666666666666663;
  X_idx_16 = -sin(X_idx_3) * 0.0 * 0.66666666666666663;
  t78 = -(cos(X_idx_13) * 0.0) * 0.66666666666666663;
  t79 = -(cos(X_idx_18) * 0.0) * 0.66666666666666663;
  t80 = -(cos(X_idx_3) * 0.0) * 0.66666666666666663;
  t90 = -sin(X_idx_13) * 0.0;
  t91 = -(cos(X_idx_13) * 0.0);
  X_idx_13 = -sin(X_idx_18) * 0.0;
  t94 = -(cos(X_idx_18) * 0.0);
  X_idx_18 = -sin(X_idx_3) * 0.0;
  t97 = -(cos(X_idx_3) * 0.0);
  t24[0ULL] = t115;
  t25[1ULL] = t108;
  t26[2ULL] = t109;
  X_idx_16 = (t24[0ULL] * X_idx_17 + t25[1ULL] * t114) + t26[2ULL] * X_idx_16;
  t24[0ULL] = t115;
  t25[1ULL] = t108;
  t26[2ULL] = t109;
  X_idx_17 = (t24[0ULL] * t78 + t25[1ULL] * t79) + t26[2ULL] * t80;
  t24[0ULL] = X_idx_5;
  t25[1ULL] = X_idx_6;
  t26[2ULL] = X_idx_4;
  X_idx_3 = (t24[0ULL] * t90 + t25[1ULL] * t91) + t26[2ULL] * 0.0;
  t24[0ULL] = X_idx_5;
  t25[1ULL] = X_idx_6;
  t26[2ULL] = X_idx_4;
  t114 = (t24[0ULL] * X_idx_13 + t25[1ULL] * t94) + t26[2ULL] * 0.0;
  t24[0ULL] = X_idx_5;
  t25[1ULL] = X_idx_6;
  t26[2ULL] = X_idx_4;
  out.mX[0] = -(X_idx_16 * 1.732050807568877);
  out.mX[1] = -(X_idx_17 * 1.5);
  out.mX[2] = -X_idx_3;
  out.mX[3] = -t114;
  out.mX[4] = -((t24[0ULL] * X_idx_18 + t25[1ULL] * t97) + t26[2ULL] * 0.0);
  (void)sys;
  (void)t120;
  return 0;
}
