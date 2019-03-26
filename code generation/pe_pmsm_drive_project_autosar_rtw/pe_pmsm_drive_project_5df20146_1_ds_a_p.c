/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_a_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_a_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 3;
  out.mJc[6] = 4;
  out.mJc[7] = 5;
  out.mJc[8] = 6;
  out.mJc[9] = 7;
  out.mJc[10] = 8;
  out.mJc[11] = 9;
  out.mJc[12] = 10;
  out.mJc[13] = 11;
  out.mJc[14] = 13;
  out.mJc[15] = 15;
  out.mJc[16] = 17;
  out.mJc[17] = 18;
  out.mJc[18] = 19;
  out.mJc[19] = 20;
  out.mJc[20] = 22;
  out.mJc[21] = 22;
  out.mJc[22] = 22;
  out.mJc[23] = 22;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 6;
  out.mIr[3] = 4;
  out.mIr[4] = 5;
  out.mIr[5] = 0;
  out.mIr[6] = 0;
  out.mIr[7] = 0;
  out.mIr[8] = 0;
  out.mIr[9] = 0;
  out.mIr[10] = 0;
  out.mIr[11] = 6;
  out.mIr[12] = 7;
  out.mIr[13] = 7;
  out.mIr[14] = 8;
  out.mIr[15] = 7;
  out.mIr[16] = 9;
  out.mIr[17] = 6;
  out.mIr[18] = 6;
  out.mIr[19] = 6;
  out.mIr[20] = 2;
  out.mIr[21] = 10;
  (void)sys;
  (void)t2;
  return 0;
}
