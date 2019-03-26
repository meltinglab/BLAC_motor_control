/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dxf_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_dxf_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 7;
  out.mJc[5] = 10;
  out.mJc[6] = 15;
  out.mJc[7] = 20;
  out.mJc[8] = 27;
  out.mJc[9] = 34;
  out.mJc[10] = 41;
  out.mJc[11] = 48;
  out.mJc[12] = 55;
  out.mJc[13] = 62;
  out.mJc[14] = 65;
  out.mJc[15] = 67;
  out.mJc[16] = 69;
  out.mJc[17] = 75;
  out.mJc[18] = 81;
  out.mJc[19] = 87;
  out.mJc[20] = 87;
  out.mJc[21] = 89;
  out.mJc[22] = 91;
  out.mJc[23] = 93;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 4;
  out.mIr[3] = 5;
  out.mIr[4] = 7;
  out.mIr[5] = 8;
  out.mIr[6] = 9;
  out.mIr[7] = 7;
  out.mIr[8] = 8;
  out.mIr[9] = 9;
  out.mIr[10] = 5;
  out.mIr[11] = 7;
  out.mIr[12] = 8;
  out.mIr[13] = 9;
  out.mIr[14] = 10;
  out.mIr[15] = 4;
  out.mIr[16] = 7;
  out.mIr[17] = 8;
  out.mIr[18] = 9;
  out.mIr[19] = 10;
  out.mIr[20] = 11;
  out.mIr[21] = 12;
  out.mIr[22] = 13;
  out.mIr[23] = 15;
  out.mIr[24] = 16;
  out.mIr[25] = 19;
  out.mIr[26] = 20;
  out.mIr[27] = 11;
  out.mIr[28] = 12;
  out.mIr[29] = 13;
  out.mIr[30] = 15;
  out.mIr[31] = 16;
  out.mIr[32] = 19;
  out.mIr[33] = 20;
  out.mIr[34] = 11;
  out.mIr[35] = 12;
  out.mIr[36] = 15;
  out.mIr[37] = 16;
  out.mIr[38] = 17;
  out.mIr[39] = 19;
  out.mIr[40] = 20;
  out.mIr[41] = 11;
  out.mIr[42] = 12;
  out.mIr[43] = 15;
  out.mIr[44] = 16;
  out.mIr[45] = 17;
  out.mIr[46] = 19;
  out.mIr[47] = 20;
  out.mIr[48] = 11;
  out.mIr[49] = 12;
  out.mIr[50] = 15;
  out.mIr[51] = 16;
  out.mIr[52] = 19;
  out.mIr[53] = 20;
  out.mIr[54] = 21;
  out.mIr[55] = 11;
  out.mIr[56] = 12;
  out.mIr[57] = 15;
  out.mIr[58] = 16;
  out.mIr[59] = 19;
  out.mIr[60] = 20;
  out.mIr[61] = 21;
  out.mIr[62] = 4;
  out.mIr[63] = 5;
  out.mIr[64] = 13;
  out.mIr[65] = 13;
  out.mIr[66] = 17;
  out.mIr[67] = 13;
  out.mIr[68] = 21;
  out.mIr[69] = 4;
  out.mIr[70] = 5;
  out.mIr[71] = 11;
  out.mIr[72] = 12;
  out.mIr[73] = 13;
  out.mIr[74] = 14;
  out.mIr[75] = 4;
  out.mIr[76] = 5;
  out.mIr[77] = 15;
  out.mIr[78] = 16;
  out.mIr[79] = 17;
  out.mIr[80] = 18;
  out.mIr[81] = 4;
  out.mIr[82] = 5;
  out.mIr[83] = 19;
  out.mIr[84] = 20;
  out.mIr[85] = 21;
  out.mIr[86] = 22;
  out.mIr[87] = 13;
  out.mIr[88] = 14;
  out.mIr[89] = 17;
  out.mIr[90] = 18;
  out.mIr[91] = 21;
  out.mIr[92] = 22;
  (void)sys;
  (void)t2;
  return 0;
}
