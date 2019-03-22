/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_tdxy_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_tdxy_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXY_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 2;
  out.mJc[10] = 2;
  out.mJc[11] = 2;
  out.mJc[12] = 2;
  out.mJc[13] = 2;
  out.mJc[14] = 5;
  out.mJc[15] = 8;
  out.mJc[16] = 11;
  out.mJc[17] = 11;
  out.mJc[18] = 11;
  out.mJc[19] = 11;
  out.mJc[20] = 12;
  out.mJc[21] = 12;
  out.mJc[22] = 12;
  out.mJc[23] = 12;
  out.mIr[0] = 4;
  out.mIr[1] = 3;
  out.mIr[2] = 0;
  out.mIr[3] = 1;
  out.mIr[4] = 2;
  out.mIr[5] = 0;
  out.mIr[6] = 1;
  out.mIr[7] = 2;
  out.mIr[8] = 0;
  out.mIr[9] = 1;
  out.mIr[10] = 2;
  out.mIr[11] = 5;
  (void)sys;
  (void)t2;
  return 0;
}
