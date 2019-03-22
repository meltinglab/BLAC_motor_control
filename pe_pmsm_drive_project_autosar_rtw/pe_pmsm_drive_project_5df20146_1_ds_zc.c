/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_zc.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_zc(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmRealVector out;
  float64 Three_phase_inverter_IGBT_AH_ideal_switch_v;
  float64 Three_phase_inverter_IGBT_BH_ideal_switch_v;
  float64 Three_phase_inverter_IGBT_CH_ideal_switch_v;
  boolean t0;
  boolean t1;
  boolean t2;
  boolean t3;
  boolean t4;
  boolean t5;
  float64 X_idx_16;
  float64 X_idx_17;
  float64 X_idx_18;
  float64 X_idx_7;
  float64 X_idx_8;
  float64 X_idx_9;
  float64 X_idx_10;
  float64 X_idx_11;
  float64 X_idx_12;
  float64 U_idx_1;
  float64 U_idx_2;
  float64 U_idx_3;
  float64 U_idx_4;
  float64 U_idx_5;
  float64 U_idx_6;
  U_idx_1 = t7->mU.mX[1];
  U_idx_2 = t7->mU.mX[2];
  U_idx_3 = t7->mU.mX[3];
  U_idx_4 = t7->mU.mX[4];
  U_idx_5 = t7->mU.mX[5];
  U_idx_6 = t7->mU.mX[6];
  X_idx_7 = t7->mX.mX[7];
  X_idx_8 = t7->mX.mX[8];
  X_idx_9 = t7->mX.mX[9];
  X_idx_10 = t7->mX.mX[10];
  X_idx_11 = t7->mX.mX[11];
  X_idx_12 = t7->mX.mX[12];
  X_idx_16 = t7->mX.mX[16];
  X_idx_17 = t7->mX.mX[17];
  X_idx_18 = t7->mX.mX[18];
  out = t8->mZC;
  Three_phase_inverter_IGBT_AH_ideal_switch_v = ((((((-X_idx_16 + X_idx_7 *
    0.001) + X_idx_8 * -0.001) + X_idx_9 * 0.001) + X_idx_10 * -0.001) +
    X_idx_11 * 0.001) + X_idx_12 * -0.001) + 110.0;
  Three_phase_inverter_IGBT_BH_ideal_switch_v = ((((((X_idx_7 * 0.001 + X_idx_8 *
    -0.001) + -X_idx_17) + X_idx_9 * 0.001) + X_idx_10 * -0.001) + X_idx_11 *
    0.001) + X_idx_12 * -0.001) + 110.0;
  Three_phase_inverter_IGBT_CH_ideal_switch_v = ((((((X_idx_7 * 0.001 + X_idx_8 *
    -0.001) + X_idx_9 * 0.001) + X_idx_10 * -0.001) + -X_idx_18) + X_idx_11 *
    0.001) + X_idx_12 * -0.001) + 110.0;
  if (Three_phase_inverter_IGBT_AH_ideal_switch_v > 0.8) {
    t0 = (U_idx_1 > 0.5);
  } else {
    t0 = false;
  }

  if (X_idx_16 > 0.8) {
    t1 = (U_idx_2 > 0.5);
  } else {
    t1 = false;
  }

  if (Three_phase_inverter_IGBT_BH_ideal_switch_v > 0.8) {
    t2 = (U_idx_3 > 0.5);
  } else {
    t2 = false;
  }

  if (X_idx_17 > 0.8) {
    t3 = (U_idx_4 > 0.5);
  } else {
    t3 = false;
  }

  if (Three_phase_inverter_IGBT_CH_ideal_switch_v > 0.8) {
    t4 = (U_idx_5 > 0.5);
  } else {
    t4 = false;
  }

  if (X_idx_18 > 0.8) {
    t5 = (U_idx_6 > 0.5);
  } else {
    t5 = false;
  }

  out.mX[0] = (U_idx_1 - 0.5) - (Three_phase_inverter_IGBT_AH_ideal_switch_v -
    0.8);
  out.mX[1] = (U_idx_2 - 0.5) - (X_idx_16 - 0.8);
  out.mX[2] = (U_idx_3 - 0.5) - (Three_phase_inverter_IGBT_BH_ideal_switch_v -
    0.8);
  out.mX[3] = (U_idx_4 - 0.5) - (X_idx_17 - 0.8);
  out.mX[4] = (U_idx_5 - 0.5) - (Three_phase_inverter_IGBT_CH_ideal_switch_v -
    0.8);
  out.mX[5] = (U_idx_6 - 0.5) - (X_idx_18 - 0.8);
  out.mX[6] = (((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) +
                   X_idx_10 * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) +
                X_idx_16) + -110.0) - 0.8;
  out.mX[7] = -X_idx_16 - 0.8;
  out.mX[8] = (((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) +
                   X_idx_10 * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) +
                X_idx_17) + -110.0) - 0.8;
  out.mX[9] = -X_idx_17 - 0.8;
  out.mX[10] = (((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) +
                    X_idx_10 * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) +
                 X_idx_18) + -110.0) - 0.8;
  out.mX[11] = -X_idx_18 - 0.8;
  out.mX[12] = (float64)t0;
  out.mX[13] = (float64)t1;
  out.mX[14] = (float64)t2;
  out.mX[15] = (float64)t3;
  out.mX[16] = (float64)t4;
  out.mX[17] = (float64)t5;
  (void)sys;
  (void)t8;
  return 0;
}
