/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_log.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_log(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t47, NeDsMethodOutput *t48)
{
  PmRealVector out;
  float64 Battery_i;
  float64 Battery_p_v;
  float64 Gmin_i;
  float64 Permanent_Magnet_Synchronous_Motor_phase_splitter_i_a;
  float64 Three_phase_inverter_IGBT_AH_diode_v;
  float64 t0[205];
  float64 t21;
  float64 t29;
  float64 t30;
  float64 t32;
  float64 t33;
  float64 t34;
  float64 t36;
  float64 t37;
  float64 t38;
  float64 X_idx_8;
  float64 X_idx_10;
  float64 X_idx_12;
  float64 X_idx_7;
  float64 X_idx_9;
  float64 X_idx_11;
  float64 X_idx_13;
  float64 X_idx_14;
  float64 X_idx_15;
  float64 X_idx_16;
  float64 X_idx_17;
  float64 X_idx_18;
  float64 X_idx_1;
  float64 X_idx_19;
  float64 U_idx_0;
  float64 X_idx_3;
  float64 X_idx_20;
  float64 X_idx_21;
  float64 X_idx_22;
  float64 U_idx_1;
  sint32 M_idx_0;
  float64 U_idx_2;
  sint32 M_idx_1;
  float64 U_idx_3;
  sint32 M_idx_10;
  float64 U_idx_4;
  sint32 M_idx_11;
  float64 U_idx_5;
  sint32 M_idx_12;
  float64 U_idx_6;
  sint32 M_idx_13;
  float64 X_idx_0;
  float64 X_idx_2;
  float64 X_idx_5;
  float64 X_idx_6;
  float64 X_idx_4;
  M_idx_0 = t47->mM.mX[0];
  M_idx_1 = t47->mM.mX[1];
  M_idx_10 = t47->mM.mX[10];
  M_idx_11 = t47->mM.mX[11];
  M_idx_12 = t47->mM.mX[12];
  M_idx_13 = t47->mM.mX[13];
  U_idx_0 = t47->mU.mX[0];
  U_idx_1 = t47->mU.mX[1];
  U_idx_2 = t47->mU.mX[2];
  U_idx_3 = t47->mU.mX[3];
  U_idx_4 = t47->mU.mX[4];
  U_idx_5 = t47->mU.mX[5];
  U_idx_6 = t47->mU.mX[6];
  X_idx_0 = t47->mX.mX[0];
  X_idx_1 = t47->mX.mX[1];
  X_idx_2 = t47->mX.mX[2];
  X_idx_3 = t47->mX.mX[3];
  X_idx_4 = t47->mX.mX[4];
  X_idx_5 = t47->mX.mX[5];
  X_idx_6 = t47->mX.mX[6];
  X_idx_7 = t47->mX.mX[7];
  X_idx_8 = t47->mX.mX[8];
  X_idx_9 = t47->mX.mX[9];
  X_idx_10 = t47->mX.mX[10];
  X_idx_11 = t47->mX.mX[11];
  X_idx_12 = t47->mX.mX[12];
  X_idx_13 = t47->mX.mX[13];
  X_idx_14 = t47->mX.mX[14];
  X_idx_15 = t47->mX.mX[15];
  X_idx_16 = t47->mX.mX[16];
  X_idx_17 = t47->mX.mX[17];
  X_idx_18 = t47->mX.mX[18];
  X_idx_19 = t47->mX.mX[19];
  X_idx_20 = t47->mX.mX[20];
  X_idx_21 = t47->mX.mX[21];
  X_idx_22 = t47->mX.mX[22];
  out = t48->mLOG;
  Battery_i = ((((-X_idx_8 + -X_idx_10) + -X_idx_12) + X_idx_7) + X_idx_9) +
    X_idx_11;
  Battery_p_v = (((((X_idx_7 * 0.001 + X_idx_8 * -0.001) + X_idx_9 * 0.001) +
                   X_idx_10 * -0.001) + X_idx_11 * 0.001) + X_idx_12 * -0.001) +
    110.0;
  t21 = (X_idx_13 * 1.0010000000000002E-9 + X_idx_14) + X_idx_15;
  Gmin_i = X_idx_13 * -1.0E-9;
  Permanent_Magnet_Synchronous_Motor_phase_splitter_i_a = (X_idx_13 *
    -1.0010000000000002E-9 + -X_idx_14) + -X_idx_15;
  Three_phase_inverter_IGBT_AH_diode_v = ((((((X_idx_7 * -0.001 + X_idx_8 *
    0.001) + X_idx_9 * -0.001) + X_idx_10 * 0.001) + X_idx_11 * -0.001) +
    X_idx_12 * 0.001) + X_idx_16) + -110.0;
  t29 = ((((((-X_idx_16 + X_idx_7 * 0.001) + X_idx_8 * -0.001) + X_idx_9 * 0.001)
           + X_idx_10 * -0.001) + X_idx_11 * 0.001) + X_idx_12 * -0.001) + 110.0;
  t30 = ((((X_idx_13 * 1.0010000000000002E-9 + -X_idx_8) + X_idx_14) + X_idx_15)
         + X_idx_7) + X_idx_20;
  t32 = ((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) + X_idx_10
            * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) + X_idx_17) +
    -110.0;
  t33 = ((((((X_idx_7 * 0.001 + X_idx_8 * -0.001) + -X_idx_17) + X_idx_9 * 0.001)
           + X_idx_10 * -0.001) + X_idx_11 * 0.001) + X_idx_12 * -0.001) + 110.0;
  t34 = ((-X_idx_14 + -X_idx_10) + X_idx_9) + X_idx_21;
  t36 = ((((((X_idx_7 * -0.001 + X_idx_8 * 0.001) + X_idx_9 * -0.001) + X_idx_10
            * 0.001) + X_idx_11 * -0.001) + X_idx_12 * 0.001) + X_idx_18) +
    -110.0;
  t37 = ((((((X_idx_7 * 0.001 + X_idx_8 * -0.001) + X_idx_9 * 0.001) + X_idx_10 *
            -0.001) + -X_idx_18) + X_idx_11 * 0.001) + X_idx_12 * -0.001) +
    110.0;
  t38 = ((-X_idx_15 + -X_idx_12) + X_idx_11) + X_idx_22;
  t0[0ULL] = X_idx_0 * 0.00027777777777777778;
  t0[1ULL] = Battery_i;
  t0[2ULL] = 0.0;
  t0[3ULL] = 0.0;
  t0[4ULL] = Battery_p_v;
  t0[5ULL] = -(Battery_i * Battery_i * 1.0E-6) / -1.0 * 1000.0;
  t0[6ULL] = Battery_p_v;
  t0[7ULL] = 0.0;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = t21;
  t0[13ULL] = -X_idx_14;
  t0[14ULL] = -X_idx_15;
  t0[15ULL] = t21;
  t0[16ULL] = -X_idx_14;
  t0[17ULL] = -X_idx_15;
  t0[18ULL] = X_idx_16;
  t0[19ULL] = X_idx_17;
  t0[20ULL] = X_idx_18;
  t0[21ULL] = X_idx_16;
  t0[22ULL] = X_idx_17;
  t0[23ULL] = X_idx_18;
  t0[24ULL] = 0.0;
  t0[25ULL] = 0.0;
  t0[26ULL] = X_idx_2;
  t0[27ULL] = 0.0;
  t0[28ULL] = X_idx_1;
  t0[29ULL] = X_idx_1;
  t0[30ULL] = X_idx_2 * 57.295779513082323;
  t0[31ULL] = 0.0;
  t0[32ULL] = X_idx_1;
  t0[33ULL] = X_idx_1;
  t0[34ULL] = X_idx_1;
  t0[35ULL] = X_idx_19;
  t0[36ULL] = X_idx_19;
  t0[37ULL] = 0.0;
  t0[38ULL] = X_idx_1;
  t0[39ULL] = X_idx_1;
  t0[40ULL] = 0.0;
  t0[41ULL] = Gmin_i;
  t0[42ULL] = X_idx_13;
  t0[43ULL] = 0.0;
  t0[44ULL] = Gmin_i * 1.0E+9;
  t0[45ULL] = 0.0;
  t0[46ULL] = X_idx_1;
  t0[47ULL] = U_idx_0;
  t0[48ULL] = -U_idx_0;
  t0[49ULL] = X_idx_1 / -1.0;
  t0[50ULL] = X_idx_1;
  t0[51ULL] = U_idx_0 + X_idx_19;
  t0[52ULL] = X_idx_1;
  t0[53ULL] = 0.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = X_idx_16;
  t0[56ULL] = X_idx_17;
  t0[57ULL] = X_idx_18;
  t0[58ULL] = X_idx_1;
  t0[59ULL] = X_idx_3;
  t0[60ULL] = X_idx_1 * 9.5492965855137211;
  t0[61ULL] = X_idx_5;
  t0[62ULL] = X_idx_6;
  t0[63ULL] = X_idx_13;
  t0[64ULL] = t21;
  t0[65ULL] = -X_idx_14;
  t0[66ULL] = -X_idx_15;
  t0[67ULL] = X_idx_16;
  t0[68ULL] = X_idx_17;
  t0[69ULL] = X_idx_18;
  t0[70ULL] = X_idx_16;
  t0[71ULL] = X_idx_17;
  t0[72ULL] = X_idx_18;
  t0[73ULL] = Permanent_Magnet_Synchronous_Motor_phase_splitter_i_a;
  t0[74ULL] = X_idx_14;
  t0[75ULL] = X_idx_15;
  t0[76ULL] = 0.0;
  t0[77ULL] = X_idx_1;
  t0[78ULL] = X_idx_16;
  t0[79ULL] = X_idx_3 * 57.295779513082323;
  t0[80ULL] = X_idx_3;
  t0[81ULL] = X_idx_1 * 9.5492965855137211;
  t0[82ULL] = X_idx_17;
  t0[83ULL] = X_idx_18;
  t0[84ULL] = X_idx_19;
  t0[85ULL] = X_idx_4;
  t0[86ULL] = -Permanent_Magnet_Synchronous_Motor_phase_splitter_i_a;
  t0[87ULL] = -X_idx_14;
  t0[88ULL] = -X_idx_15;
  t0[89ULL] = X_idx_5;
  t0[90ULL] = Gmin_i;
  t0[91ULL] = X_idx_6;
  t0[92ULL] = X_idx_13;
  t0[93ULL] = -X_idx_19;
  t0[94ULL] = -X_idx_13 + X_idx_16;
  t0[95ULL] = -X_idx_13 + X_idx_17;
  t0[96ULL] = -X_idx_13 + X_idx_18;
  t0[97ULL] = -X_idx_19;
  t0[98ULL] = Battery_p_v;
  t0[99ULL] = X_idx_16;
  t0[100ULL] = U_idx_1;
  t0[101ULL] = X_idx_7;
  t0[102ULL] = Battery_p_v;
  t0[103ULL] = X_idx_16;
  t0[104ULL] = -(X_idx_7 * Three_phase_inverter_IGBT_AH_diode_v * 0.001) / -1.0 *
    1000.0;
  t0[105ULL] = Three_phase_inverter_IGBT_AH_diode_v;
  t0[106ULL] = U_idx_1;
  t0[107ULL] = X_idx_8;
  t0[108ULL] = -((U_idx_1 - 0.5) + ((t29 - 0.8) - (U_idx_1 - 0.5)) * (float64)
                 (M_idx_0 != 0)) / -1.0;
  t0[109ULL] = X_idx_16;
  t0[110ULL] = Battery_p_v;
  t0[111ULL] = -(X_idx_8 * t29 * 0.001) / -1.0 * 1000.0;
  t0[112ULL] = t29;
  t0[113ULL] = X_idx_16;
  t0[114ULL] = 0.0;
  t0[115ULL] = U_idx_2;
  t0[116ULL] = t30;
  t0[117ULL] = X_idx_16;
  t0[118ULL] = 0.0;
  t0[119ULL] = -(t30 * -X_idx_16 * 0.001) / -1.0 * 1000.0;
  t0[120ULL] = -X_idx_16;
  t0[121ULL] = U_idx_2;
  t0[122ULL] = X_idx_20;
  t0[123ULL] = -((U_idx_2 - 0.5) + ((X_idx_16 - 0.8) - (U_idx_2 - 0.5)) *
                 (float64)(M_idx_1 != 0)) / -1.0;
  t0[124ULL] = 0.0;
  t0[125ULL] = X_idx_16;
  t0[126ULL] = -(X_idx_16 * X_idx_20 * 0.001) / -1.0 * 1000.0;
  t0[127ULL] = X_idx_16;
  t0[128ULL] = Battery_p_v;
  t0[129ULL] = X_idx_17;
  t0[130ULL] = U_idx_3;
  t0[131ULL] = X_idx_9;
  t0[132ULL] = Battery_p_v;
  t0[133ULL] = X_idx_17;
  t0[134ULL] = -(X_idx_9 * t32 * 0.001) / -1.0 * 1000.0;
  t0[135ULL] = t32;
  t0[136ULL] = U_idx_3;
  t0[137ULL] = X_idx_10;
  t0[138ULL] = -((U_idx_3 - 0.5) + ((t33 - 0.8) - (U_idx_3 - 0.5)) * (float64)
                 (M_idx_10 != 0)) / -1.0;
  t0[139ULL] = X_idx_17;
  t0[140ULL] = Battery_p_v;
  t0[141ULL] = -(X_idx_10 * t33 * 0.001) / -1.0 * 1000.0;
  t0[142ULL] = t33;
  t0[143ULL] = X_idx_17;
  t0[144ULL] = 0.0;
  t0[145ULL] = U_idx_4;
  t0[146ULL] = t34;
  t0[147ULL] = X_idx_17;
  t0[148ULL] = 0.0;
  t0[149ULL] = -(t34 * -X_idx_17 * 0.001) / -1.0 * 1000.0;
  t0[150ULL] = -X_idx_17;
  t0[151ULL] = U_idx_4;
  t0[152ULL] = X_idx_21;
  t0[153ULL] = -((U_idx_4 - 0.5) + ((X_idx_17 - 0.8) - (U_idx_4 - 0.5)) *
                 (float64)(M_idx_11 != 0)) / -1.0;
  t0[154ULL] = 0.0;
  t0[155ULL] = X_idx_17;
  t0[156ULL] = -(X_idx_17 * X_idx_21 * 0.001) / -1.0 * 1000.0;
  t0[157ULL] = X_idx_17;
  t0[158ULL] = Battery_p_v;
  t0[159ULL] = X_idx_18;
  t0[160ULL] = U_idx_5;
  t0[161ULL] = X_idx_11;
  t0[162ULL] = Battery_p_v;
  t0[163ULL] = X_idx_18;
  t0[164ULL] = -(X_idx_11 * t36 * 0.001) / -1.0 * 1000.0;
  t0[165ULL] = t36;
  t0[166ULL] = U_idx_5;
  t0[167ULL] = X_idx_12;
  t0[168ULL] = -((U_idx_5 - 0.5) + ((t37 - 0.8) - (U_idx_5 - 0.5)) * (float64)
                 (M_idx_12 != 0)) / -1.0;
  t0[169ULL] = X_idx_18;
  t0[170ULL] = Battery_p_v;
  t0[171ULL] = -(X_idx_12 * t37 * 0.001) / -1.0 * 1000.0;
  t0[172ULL] = t37;
  t0[173ULL] = X_idx_18;
  t0[174ULL] = 0.0;
  t0[175ULL] = U_idx_6;
  t0[176ULL] = t38;
  t0[177ULL] = X_idx_18;
  t0[178ULL] = 0.0;
  t0[179ULL] = -(t38 * -X_idx_18 * 0.001) / -1.0 * 1000.0;
  t0[180ULL] = -X_idx_18;
  t0[181ULL] = U_idx_6;
  t0[182ULL] = X_idx_22;
  t0[183ULL] = -((U_idx_6 - 0.5) + ((X_idx_18 - 0.8) - (U_idx_6 - 0.5)) *
                 (float64)(M_idx_13 != 0)) / -1.0;
  t0[184ULL] = 0.0;
  t0[185ULL] = X_idx_18;
  t0[186ULL] = -(X_idx_18 * X_idx_22 * 0.001) / -1.0 * 1000.0;
  t0[187ULL] = X_idx_18;
  t0[188ULL] = -t21;
  t0[189ULL] = X_idx_14;
  t0[190ULL] = X_idx_15;
  t0[191ULL] = X_idx_16;
  t0[192ULL] = X_idx_17;
  t0[193ULL] = X_idx_18;
  t0[194ULL] = X_idx_16;
  t0[195ULL] = X_idx_17;
  t0[196ULL] = X_idx_18;
  t0[197ULL] = t21;
  t0[198ULL] = -X_idx_14;
  t0[199ULL] = -X_idx_15;
  t0[200ULL] = Battery_p_v;
  t0[201ULL] = 0.0;
  t0[202ULL] = X_idx_16;
  t0[203ULL] = X_idx_17;
  t0[204ULL] = X_idx_18;
  for (M_idx_0 = 0; M_idx_0 < 205; M_idx_0++) {
    out.mX[M_idx_0] = t0[M_idx_0];
  }

  (void)sys;
  (void)t48;
  return 0;
}
