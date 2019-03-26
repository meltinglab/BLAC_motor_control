/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_tdxf_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_tdxf_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  sint32 b;
  static sint32 _cg_const_2[115] = { 1, 3, 4, 5, 4, 5, 7, 8, 9, 6, 7, 8, 9, 4,
    5, 7, 8, 9, 10, 4, 5, 7, 8, 9, 10, 0, 11, 12, 13, 15, 16, 19, 20, 0, 11, 12,
    13, 15, 16, 19, 20, 0, 11, 12, 15, 16, 17, 19, 20, 0, 11, 12, 15, 16, 17, 19,
    20, 0, 11, 12, 15, 16, 19, 20, 21, 0, 11, 12, 15, 16, 19, 20, 21, 4, 5, 6, 7,
    13, 7, 8, 13, 17, 7, 9, 13, 21, 4, 5, 6, 11, 12, 13, 14, 4, 5, 6, 15, 16, 17,
    18, 4, 5, 6, 19, 20, 21, 22, 2, 10, 13, 14, 17, 18, 21, 22 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 4;
  out.mJc[3] = 4;
  out.mJc[4] = 9;
  out.mJc[5] = 13;
  out.mJc[6] = 19;
  out.mJc[7] = 25;
  out.mJc[8] = 33;
  out.mJc[9] = 41;
  out.mJc[10] = 49;
  out.mJc[11] = 57;
  out.mJc[12] = 65;
  out.mJc[13] = 73;
  out.mJc[14] = 78;
  out.mJc[15] = 82;
  out.mJc[16] = 86;
  out.mJc[17] = 93;
  out.mJc[18] = 100;
  out.mJc[19] = 107;
  out.mJc[20] = 109;
  out.mJc[21] = 111;
  out.mJc[22] = 113;
  out.mJc[23] = 115;
  for (b = 0; b < 115; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
