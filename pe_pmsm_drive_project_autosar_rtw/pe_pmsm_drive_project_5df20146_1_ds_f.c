/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_f.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t96, NeDsMethodOutput *t97)
{
  PmRealVector out;
  float64 intrm_sf_mf_11;
  float64 intrm_sf_mf_12;
  float64 t0;
  float64 t1;
  float64 t2;
  float64 t3;
  float64 t5;
  float64 t6;
  float64 t9;
  float64 t10;
  float64 t11;
  float64 t47;
  float64 t51;
  float64 t52;
  float64 t53;
  float64 t54;
  float64 t56;
  float64 t57;
  float64 t59;
  float64 t60;
  float64 t65;
  float64 t72;
  float64 t73;
  float64 t77;
  float64 X_idx_1;
  float64 X_idx_16;
  float64 X_idx_17;
  float64 X_idx_18;
  float64 X_idx_13;
  float64 X_idx_7;
  float64 X_idx_8;
  float64 X_idx_9;
  float64 X_idx_10;
  float64 X_idx_11;
  float64 X_idx_12;
  float64 X_idx_14;
  float64 X_idx_15;
  float64 X_idx_20;
  float64 X_idx_21;
  float64 X_idx_22;
  float64 X_idx_3;
  float64 X_idx_5;
  float64 X_idx_6;
  sint32 M_idx_14;
  sint32 M_idx_15;
  sint32 M_idx_16;
  sint32 M_idx_17;
  sint32 M_idx_2;
  sint32 M_idx_3;
  sint32 M_idx_4;
  sint32 M_idx_5;
  sint32 M_idx_6;
  sint32 M_idx_7;
  sint32 M_idx_8;
  sint32 M_idx_9;
  float64 X_idx_4;
  M_idx_2 = t96->mM.mX[2];
  M_idx_3 = t96->mM.mX[3];
  M_idx_4 = t96->mM.mX[4];
  M_idx_5 = t96->mM.mX[5];
  M_idx_6 = t96->mM.mX[6];
  M_idx_7 = t96->mM.mX[7];
  M_idx_8 = t96->mM.mX[8];
  M_idx_9 = t96->mM.mX[9];
  M_idx_14 = t96->mM.mX[14];
  M_idx_15 = t96->mM.mX[15];
  M_idx_16 = t96->mM.mX[16];
  M_idx_17 = t96->mM.mX[17];
  X_idx_1 = t96->mX.mX[1];
  X_idx_3 = t96->mX.mX[3];
  X_idx_4 = t96->mX.mX[4];
  X_idx_5 = t96->mX.mX[5];
  X_idx_6 = t96->mX.mX[6];
  X_idx_7 = t96->mX.mX[7];
  X_idx_8 = t96->mX.mX[8];
  X_idx_9 = t96->mX.mX[9];
  X_idx_10 = t96->mX.mX[10];
  X_idx_11 = t96->mX.mX[11];
  X_idx_12 = t96->mX.mX[12];
  X_idx_13 = t96->mX.mX[13];
  X_idx_14 = t96->mX.mX[14];
  X_idx_15 = t96->mX.mX[15];
  X_idx_16 = t96->mX.mX[16];
  X_idx_17 = t96->mX.mX[17];
  X_idx_18 = t96->mX.mX[18];
  X_idx_20 = t96->mX.mX[20];
  X_idx_21 = t96->mX.mX[21];
  X_idx_22 = t96->mX.mX[22];
  out = t97->mF;
  t0 = -X_idx_13 + X_idx_16;
  t1 = -X_idx_13 + X_idx_17;
  t2 = -X_idx_13 + X_idx_18;
  t3 = ((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) + X_idx_10 *
           0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) + X_idx_16) + -110.0;
  t5 = ((((((-X_idx_16 + X_idx_7 * 0.001) + X_idx_8 * -0.001) + X_idx_9 * 0.001)
          + X_idx_10 * -0.001) + X_idx_11 * 0.001) + X_idx_12 * -0.001) + 110.0;
  t6 = ((((X_idx_13 * 1.0010000000000002E-9 + -X_idx_8) + X_idx_14) + X_idx_15)
        + X_idx_7) + X_idx_20;
  t9 = ((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) + X_idx_10 *
           0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) + X_idx_17) + -110.0;
  t10 = ((((((X_idx_7 * 0.001 + X_idx_8 * -0.001) + -X_idx_17) + X_idx_9 * 0.001)
           + X_idx_10 * -0.001) + X_idx_11 * 0.001) + X_idx_12 * -0.001) + 110.0;
  t11 = ((-X_idx_14 + -X_idx_10) + X_idx_9) + X_idx_21;
  t72 = ((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) + X_idx_10
            * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) + X_idx_18) +
    -110.0;
  t73 = ((((((X_idx_7 * 0.001 + X_idx_8 * -0.001) + X_idx_9 * 0.001) + X_idx_10 *
            -0.001) + -X_idx_18) + X_idx_11 * 0.001) + X_idx_12 * -0.001) +
    110.0;
  t77 = ((-X_idx_15 + -X_idx_12) + X_idx_11) + X_idx_22;
  t47 = X_idx_3 * 6.0 + -1.5707963267948966;
  intrm_sf_mf_11 = X_idx_5 * 0.0002 + 0.03;
  intrm_sf_mf_12 = X_idx_6 * 0.0002;
  X_idx_13 = t47;
  t59 = t47 + -2.0943951023931953;
  t65 = t47 + 2.0943951023931953;
  t47 = cos(t47) * 0.66666666666666663;
  X_idx_14 = cos(t59) * 0.66666666666666663;
  X_idx_15 = cos(t65) * 0.66666666666666663;
  X_idx_3 = -sin(X_idx_13) * 0.66666666666666663;
  t51 = -sin(t59) * 0.66666666666666663;
  t52 = -sin(t65) * 0.66666666666666663;
  t53 = cos(X_idx_13);
  t54 = -sin(X_idx_13);
  t56 = cos(t59);
  t57 = -sin(t59);
  t59 = cos(t65);
  t60 = -sin(t65);
  t65 = (t47 * t0 + X_idx_14 * t1) + X_idx_15 * t2;
  t47 = (X_idx_3 * t0 + t51 * t1) + t52 * t2;
  if (M_idx_14 != 0) {
    t0 = X_idx_7 - (t3 - 0.799999992) / 0.001;
  } else {
    t0 = X_idx_7 - t3 * 1.0E-5;
  }

  if (M_idx_15 != 0) {
    t1 = X_idx_8 - (t5 - 0.799999992) / 0.001;
  } else {
    t1 = X_idx_8 - t5 * 1.0E-5;
  }

  if (M_idx_16 != 0) {
    t2 = t6 - (-X_idx_16 - 0.799999992) / 0.001;
  } else {
    t2 = t6 - -X_idx_16 * 1.0E-5;
  }

  if (M_idx_17 != 0) {
    t3 = X_idx_20 - (X_idx_16 - 0.799999992) / 0.001;
  } else {
    t3 = X_idx_20 - X_idx_16 * 1.0E-5;
  }

  if (M_idx_2 != 0) {
    X_idx_15 = X_idx_9 - (t9 - 0.799999992) / 0.001;
  } else {
    X_idx_15 = X_idx_9 - t9 * 1.0E-5;
  }

  if (M_idx_3 != 0) {
    t5 = X_idx_10 - (t10 - 0.799999992) / 0.001;
  } else {
    t5 = X_idx_10 - t10 * 1.0E-5;
  }

  if (M_idx_4 != 0) {
    t6 = t11 - (-X_idx_17 - 0.799999992) / 0.001;
  } else {
    t6 = t11 - -X_idx_17 * 1.0E-5;
  }

  if (M_idx_5 != 0) {
    X_idx_14 = X_idx_21 - (X_idx_17 - 0.799999992) / 0.001;
  } else {
    X_idx_14 = X_idx_21 - X_idx_17 * 1.0E-5;
  }

  if (M_idx_6 != 0) {
    X_idx_13 = X_idx_11 - (t72 - 0.799999992) / 0.001;
  } else {
    X_idx_13 = X_idx_11 - t72 * 1.0E-5;
  }

  if (M_idx_7 != 0) {
    t9 = X_idx_12 - (t73 - 0.799999992) / 0.001;
  } else {
    t9 = X_idx_12 - t73 * 1.0E-5;
  }

  if (M_idx_8 != 0) {
    t10 = t77 - (-X_idx_18 - 0.799999992) / 0.001;
  } else {
    t10 = t77 - -X_idx_18 * 1.0E-5;
  }

  if (M_idx_9 != 0) {
    t11 = X_idx_22 - (X_idx_18 - 0.799999992) / 0.001;
  } else {
    t11 = X_idx_22 - X_idx_18 * 1.0E-5;
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = 0.0;
  out.mX[4] = -((t65 - (-(X_idx_1 * intrm_sf_mf_12 * 6.0))) /
                0.57735026918962584);
  out.mX[5] = -((t47 - X_idx_1 * intrm_sf_mf_11 * 6.0) / 0.66666666666666663);
  out.mX[6] = -0.0;
  out.mX[7] = -((t53 * X_idx_5 + t54 * X_idx_6) + X_idx_4);
  out.mX[8] = -((t56 * X_idx_5 + t57 * X_idx_6) + X_idx_4);
  out.mX[9] = -((t59 * X_idx_5 + t60 * X_idx_6) + X_idx_4);
  out.mX[10] = -((X_idx_6 * intrm_sf_mf_11 - X_idx_5 * intrm_sf_mf_12) * 9.0);
  out.mX[11] = t0;
  out.mX[12] = t1;
  out.mX[13] = t2;
  out.mX[14] = t3;
  out.mX[15] = X_idx_15;
  out.mX[16] = t5;
  out.mX[17] = t6;
  out.mX[18] = X_idx_14;
  out.mX[19] = X_idx_13;
  out.mX[20] = t9;
  out.mX[21] = t10;
  out.mX[22] = t11;
  (void)sys;
  (void)t97;
  return 0;
}
