/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dxf.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

sint32 pe_pmsm_drive_project_5df20146_1_ds_dxf(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t384, NeDsMethodOutput *t385)
{
  PmRealVector out;
  float64 intrm_sf_mf_11;
  float64 t1;
  float64 t2;
  float64 t3;
  float64 t25;
  float64 t26;
  float64 t27;
  float64 t28;
  float64 t29;
  float64 t30;
  float64 t31;
  float64 t32;
  float64 t33;
  float64 t34;
  float64 t35;
  float64 t37;
  float64 t38;
  float64 t39;
  float64 t40;
  float64 t41;
  float64 t42;
  float64 t43;
  float64 t44;
  float64 t45;
  float64 t46;
  float64 t47;
  float64 t48[93];
  float64 t89[3];
  float64 t90[3];
  float64 t91[3];
  float64 t94[5];
  float64 t108[5];
  float64 t115[5];
  float64 t116[7];
  float64 t117[7];
  float64 t118[7];
  float64 t119[7];
  float64 t120[7];
  float64 t121[7];
  float64 t125[6];
  float64 t126[6];
  float64 t127[6];
  size_t t211;
  float64 t243;
  float64 t244;
  float64 t245;
  float64 t246;
  float64 t247;
  float64 t248;
  float64 t249;
  float64 t250;
  float64 t251;
  float64 t252;
  float64 t256;
  float64 t257;
  float64 t259;
  float64 t260;
  float64 t265;
  float64 t266;
  float64 t267;
  float64 t268;
  float64 t269;
  float64 t270;
  float64 t292;
  float64 t296;
  float64 t300;
  float64 t304;
  float64 t305;
  float64 t306;
  float64 t307;
  float64 t308;
  float64 t312;
  float64 t316;
  float64 t320;
  float64 t324;
  float64 t325;
  float64 t326;
  float64 t327;
  float64 t328;
  float64 t329;
  float64 t365;
  float64 t369;
  float64 t373;
  float64 t377;
  float64 t381;
  float64 t383;
  float64 X_idx_1;
  float64 X_idx_13;
  float64 X_idx_16;
  float64 X_idx_17;
  float64 X_idx_18;
  float64 X_idx_3;
  float64 X_idx_5;
  float64 X_idx_6;
  sint32 M_idx_14;
  sint32 M_idx_15;
  sint32 M_idx_2;
  sint32 M_idx_3;
  sint32 M_idx_6;
  sint32 M_idx_7;
  sint32 M_idx_16;
  sint32 M_idx_17;
  sint32 M_idx_4;
  sint32 M_idx_5;
  sint32 M_idx_8;
  sint32 M_idx_9;
  float64 X_idx_4;
  M_idx_2 = t384->mM.mX[2];
  M_idx_3 = t384->mM.mX[3];
  M_idx_4 = t384->mM.mX[4];
  M_idx_5 = t384->mM.mX[5];
  M_idx_6 = t384->mM.mX[6];
  M_idx_7 = t384->mM.mX[7];
  M_idx_8 = t384->mM.mX[8];
  M_idx_9 = t384->mM.mX[9];
  M_idx_14 = t384->mM.mX[14];
  M_idx_15 = t384->mM.mX[15];
  M_idx_16 = t384->mM.mX[16];
  M_idx_17 = t384->mM.mX[17];
  X_idx_1 = t384->mX.mX[1];
  X_idx_3 = t384->mX.mX[3];
  X_idx_4 = t384->mX.mX[4];
  X_idx_5 = t384->mX.mX[5];
  X_idx_6 = t384->mX.mX[6];
  X_idx_13 = t384->mX.mX[13];
  X_idx_16 = t384->mX.mX[16];
  X_idx_17 = t384->mX.mX[17];
  X_idx_18 = t384->mX.mX[18];
  out = t385->mDXF;
  t383 = -X_idx_13 + X_idx_16;
  t1 = -X_idx_13 + X_idx_17;
  t2 = -X_idx_13 + X_idx_18;
  X_idx_16 = X_idx_3 * 6.0 + -1.5707963267948966;
  intrm_sf_mf_11 = X_idx_5 * 0.0002 + 0.03;
  t373 = X_idx_6 * 0.0002;
  t247 = cos(X_idx_16) * 0.66666666666666663;
  t248 = cos(X_idx_16 + -2.0943951023931953) * 0.66666666666666663;
  t249 = cos(X_idx_16 + 2.0943951023931953) * 0.66666666666666663;
  t250 = -sin(X_idx_16) * 0.66666666666666663;
  t251 = -sin(X_idx_16 + -2.0943951023931953) * 0.66666666666666663;
  t252 = -sin(X_idx_16 + 2.0943951023931953) * 0.66666666666666663;
  t377 = cos(X_idx_16);
  t381 = -sin(X_idx_16);
  t256 = cos(X_idx_16 + -2.0943951023931953);
  t257 = -sin(X_idx_16 + -2.0943951023931953);
  t259 = cos(X_idx_16 + 2.0943951023931953);
  t260 = -sin(X_idx_16 + 2.0943951023931953);
  t265 = -sin(X_idx_16) * 6.0 * 0.66666666666666663;
  t266 = -sin(X_idx_16 + -2.0943951023931953) * 6.0 * 0.66666666666666663;
  t267 = -sin(X_idx_16 + 2.0943951023931953) * 6.0 * 0.66666666666666663;
  t268 = -(cos(X_idx_16) * 6.0) * 0.66666666666666663;
  t269 = -(cos(X_idx_16 + -2.0943951023931953) * 6.0) * 0.66666666666666663;
  t270 = -(cos(X_idx_16 + 2.0943951023931953) * 6.0) * 0.66666666666666663;
  X_idx_17 = -sin(X_idx_16) * 6.0;
  X_idx_13 = -(cos(X_idx_16) * 6.0);
  X_idx_18 = -sin(X_idx_16 + -2.0943951023931953) * 6.0;
  X_idx_3 = -(cos(X_idx_16 + -2.0943951023931953) * 6.0);
  t365 = -sin(X_idx_16 + 2.0943951023931953) * 6.0;
  t369 = -(cos(X_idx_16 + 2.0943951023931953) * 6.0);
  t292 = (t247 * 0.0 + t248) + t249 * 0.0;
  t296 = (t247 + t248 * 0.0) + t249 * 0.0;
  t300 = (t247 * 0.0 + t248 * 0.0) + t249;
  t304 = (-t247 + -t248) + -t249;
  t89[0ULL] = t383;
  t90[1ULL] = t1;
  t91[2ULL] = t2;
  t308 = (t89[0ULL] * t265 + t90[1ULL] * t266) + t91[2ULL] * t267;
  t312 = (t250 * 0.0 + t251) + t252 * 0.0;
  t316 = (t250 + t251 * 0.0) + t252 * 0.0;
  t320 = (t250 * 0.0 + t251 * 0.0) + t252;
  t324 = (-t250 + -t251) + -t252;
  t89[0ULL] = t383;
  t90[1ULL] = t1;
  t91[2ULL] = t2;
  t328 = (t89[0ULL] * t268 + t90[1ULL] * t269) + t91[2ULL] * t270;
  if (M_idx_14 != 0) {
    t383 = 2.0;
  } else {
    t383 = 1.00000001;
  }

  if (M_idx_15 != 0) {
    t1 = -1.0;
  } else {
    t1 = -1.0E-8;
  }

  if (M_idx_2 != 0) {
    t2 = 1.0;
  } else {
    t2 = 1.0E-8;
  }

  if (M_idx_3 != 0) {
    t3 = -1.0;
  } else {
    t3 = -1.0E-8;
  }

  if (M_idx_6 != 0) {
    t244 = 1.0;
  } else {
    t244 = 1.0E-8;
  }

  if (M_idx_7 != 0) {
    t245 = -1.0;
  } else {
    t245 = -1.0E-8;
  }

  if (M_idx_14 != 0) {
    t246 = -1.0;
  } else {
    t246 = -1.0E-8;
  }

  if (M_idx_15 != 0) {
    t247 = 2.0;
  } else {
    t247 = 1.00000001;
  }

  if (M_idx_2 != 0) {
    t248 = -1.0;
  } else {
    t248 = -1.0E-8;
  }

  if (M_idx_3 != 0) {
    t249 = 1.0;
  } else {
    t249 = 1.0E-8;
  }

  if (M_idx_6 != 0) {
    t250 = -1.0;
  } else {
    t250 = -1.0E-8;
  }

  if (M_idx_7 != 0) {
    t251 = 1.0;
  } else {
    t251 = 1.0E-8;
  }

  if (M_idx_14 != 0) {
    t252 = 1.0;
  } else {
    t252 = 1.0E-8;
  }

  if (M_idx_15 != 0) {
    t265 = -1.0;
  } else {
    t265 = -1.0E-8;
  }

  if (M_idx_2 != 0) {
    t266 = 2.0;
  } else {
    t266 = 1.00000001;
  }

  if (M_idx_3 != 0) {
    t267 = -1.0;
  } else {
    t267 = -1.0E-8;
  }

  if (M_idx_6 != 0) {
    t268 = 1.0;
  } else {
    t268 = 1.0E-8;
  }

  if (M_idx_7 != 0) {
    t269 = -1.0;
  } else {
    t269 = -1.0E-8;
  }

  if (M_idx_14 != 0) {
    t270 = -1.0;
  } else {
    t270 = -1.0E-8;
  }

  if (M_idx_15 != 0) {
    t305 = 1.0;
  } else {
    t305 = 1.0E-8;
  }

  if (M_idx_2 != 0) {
    t306 = -1.0;
  } else {
    t306 = -1.0E-8;
  }

  if (M_idx_3 != 0) {
    t307 = 2.0;
  } else {
    t307 = 1.00000001;
  }

  if (M_idx_6 != 0) {
    t325 = -1.0;
  } else {
    t325 = -1.0E-8;
  }

  if (M_idx_7 != 0) {
    t326 = 1.0;
  } else {
    t326 = 1.0E-8;
  }

  if (M_idx_14 != 0) {
    t327 = 1.0;
  } else {
    t327 = 1.0E-8;
  }

  if (M_idx_15 != 0) {
    t25 = -1.0;
  } else {
    t25 = -1.0E-8;
  }

  if (M_idx_2 != 0) {
    t26 = 1.0;
  } else {
    t26 = 1.0E-8;
  }

  if (M_idx_3 != 0) {
    t27 = -1.0;
  } else {
    t27 = -1.0E-8;
  }

  if (M_idx_6 != 0) {
    t28 = 2.0;
  } else {
    t28 = 1.00000001;
  }

  if (M_idx_7 != 0) {
    t29 = -1.0;
  } else {
    t29 = -1.0E-8;
  }

  if (M_idx_14 != 0) {
    t30 = -1.0;
  } else {
    t30 = -1.0E-8;
  }

  if (M_idx_15 != 0) {
    t31 = 1.0;
  } else {
    t31 = 1.0E-8;
  }

  if (M_idx_2 != 0) {
    t32 = -1.0;
  } else {
    t32 = -1.0E-8;
  }

  if (M_idx_3 != 0) {
    t33 = 1.0;
  } else {
    t33 = 1.0E-8;
  }

  if (M_idx_6 != 0) {
    t34 = -1.0;
  } else {
    t34 = -1.0E-8;
  }

  if (M_idx_7 != 0) {
    t35 = 2.0;
  } else {
    t35 = 1.00000001;
  }

  if (M_idx_14 != 0) {
    t243 = -1000.0;
  } else {
    t243 = -1.0E-5;
  }

  if (M_idx_15 != 0) {
    t37 = 1000.0;
  } else {
    t37 = 1.0E-5;
  }

  if (M_idx_16 != 0) {
    t38 = 1000.0;
  } else {
    t38 = 1.0E-5;
  }

  if (M_idx_17 != 0) {
    t39 = -1000.0;
  } else {
    t39 = -1.0E-5;
  }

  if (M_idx_2 != 0) {
    t40 = -1000.0;
  } else {
    t40 = -1.0E-5;
  }

  if (M_idx_3 != 0) {
    t41 = 1000.0;
  } else {
    t41 = 1.0E-5;
  }

  if (M_idx_4 != 0) {
    t42 = 1000.0;
  } else {
    t42 = 1.0E-5;
  }

  if (M_idx_5 != 0) {
    t43 = -1000.0;
  } else {
    t43 = -1.0E-5;
  }

  if (M_idx_6 != 0) {
    t44 = -1000.0;
  } else {
    t44 = -1.0E-5;
  }

  if (M_idx_7 != 0) {
    t45 = 1000.0;
  } else {
    t45 = 1.0E-5;
  }

  if (M_idx_8 != 0) {
    t46 = 1000.0;
  } else {
    t46 = 1.0E-5;
  }

  if (M_idx_9 != 0) {
    t47 = -1000.0;
  } else {
    t47 = -1.0E-5;
  }

  t329 = -(t373 * 10.392304845413262);
  t89[0ULL] = X_idx_5;
  t90[1ULL] = X_idx_6;
  t91[2ULL] = X_idx_4;
  X_idx_17 = (t89[0ULL] * X_idx_17 + t90[1ULL] * X_idx_13) + t91[2ULL] * 0.0;
  t89[0ULL] = X_idx_5;
  t90[1ULL] = X_idx_6;
  t91[2ULL] = X_idx_4;
  X_idx_16 = (t89[0ULL] * X_idx_18 + t90[1ULL] * X_idx_3) + t91[2ULL] * 0.0;
  t89[0ULL] = X_idx_5;
  t90[1ULL] = X_idx_6;
  t91[2ULL] = X_idx_4;
  t94[0ULL] = -(t308 * 1.732050807568877);
  t94[1ULL] = -(t328 * 1.5);
  t94[2ULL] = -X_idx_17;
  t94[3ULL] = -X_idx_16;
  t94[4ULL] = -((t89[0ULL] * t365 + t90[1ULL] * t369) + t91[2ULL] * 0.0);
  t108[0ULL] = -(-(X_idx_1 * 0.0002 * 6.0) * 1.5);
  t108[1ULL] = -(t377 + t381 * 0.0);
  t108[2ULL] = -(t256 + t257 * 0.0);
  t108[3ULL] = -(t259 + t260 * 0.0);
  t108[4ULL] = -((X_idx_6 * 0.0002 - t373) * 9.0);
  t115[0ULL] = -(X_idx_1 * 0.0002 * 10.392304845413262);
  t115[1ULL] = -(t377 * 0.0 + t381);
  t115[2ULL] = -(t256 * 0.0 + t257);
  t115[3ULL] = -(t259 * 0.0 + t260);
  t115[4ULL] = -((intrm_sf_mf_11 - X_idx_5 * 0.0002) * 9.0);
  t116[0ULL] = t383;
  t116[1ULL] = t1;
  t116[2ULL] = 1.0;
  t116[3ULL] = t2;
  t116[4ULL] = t3;
  t116[5ULL] = t244;
  t116[6ULL] = t245;
  t117[0ULL] = t246;
  t117[1ULL] = t247;
  t117[2ULL] = -1.0;
  t117[3ULL] = t248;
  t117[4ULL] = t249;
  t117[5ULL] = t250;
  t117[6ULL] = t251;
  t118[0ULL] = t252;
  t118[1ULL] = t265;
  t118[2ULL] = t266;
  t118[3ULL] = t267;
  t118[4ULL] = 1.0;
  t118[5ULL] = t268;
  t118[6ULL] = t269;
  t119[0ULL] = t270;
  t119[1ULL] = t305;
  t119[2ULL] = t306;
  t119[3ULL] = t307;
  t119[4ULL] = -1.0;
  t119[5ULL] = t325;
  t119[6ULL] = t326;
  t120[0ULL] = t327;
  t120[1ULL] = t25;
  t120[2ULL] = t26;
  t120[3ULL] = t27;
  t120[4ULL] = t28;
  t120[5ULL] = t29;
  t120[6ULL] = 1.0;
  t121[0ULL] = t30;
  t121[1ULL] = t31;
  t121[2ULL] = t32;
  t121[3ULL] = t33;
  t121[4ULL] = t34;
  t121[5ULL] = t35;
  t121[6ULL] = -1.0;
  t125[0ULL] = -(t296 * 1.732050807568877);
  t125[1ULL] = -(t316 * 1.5);
  t125[2ULL] = t243;
  t125[3ULL] = t37;
  t125[4ULL] = t38;
  t125[5ULL] = t39;
  t126[0ULL] = -(t292 * 1.732050807568877);
  t126[1ULL] = -(t312 * 1.5);
  t126[2ULL] = t40;
  t126[3ULL] = t41;
  t126[4ULL] = t42;
  t126[5ULL] = t43;
  t127[0ULL] = -(t300 * 1.732050807568877);
  t127[1ULL] = -(t320 * 1.5);
  t127[2ULL] = t44;
  t127[3ULL] = t45;
  t127[4ULL] = t46;
  t127[5ULL] = t47;
  t48[0ULL] = t329;
  t48[1ULL] = -(-(intrm_sf_mf_11 * 6.0) * 1.5);
  for (t211 = 0ULL; t211 < 5ULL; t211++) {
    t48[t211 + 2ULL] = t94[t211];
  }

  t48[7ULL] = -((t377 * 0.0 + t381 * 0.0) + 1.0);
  t48[8ULL] = -((t256 * 0.0 + t257 * 0.0) + 1.0);
  t48[9ULL] = -((t259 * 0.0 + t260 * 0.0) + 1.0);
  for (t211 = 0ULL; t211 < 5ULL; t211++) {
    t48[t211 + 10ULL] = t108[t211];
  }

  for (t211 = 0ULL; t211 < 5ULL; t211++) {
    t48[t211 + 15ULL] = t115[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 20ULL] = t116[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 27ULL] = t117[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 34ULL] = t118[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 41ULL] = t119[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 48ULL] = t120[t211];
  }

  for (t211 = 0ULL; t211 < 7ULL; t211++) {
    t48[t211 + 55ULL] = t121[t211];
  }

  t48[62ULL] = -(t304 * 1.732050807568877);
  t48[63ULL] = -(t324 * 1.5);
  t48[64ULL] = 1.0010000000000002E-9;
  t48[65ULL] = 1.0;
  t48[66ULL] = -1.0;
  t48[67ULL] = 1.0;
  t48[68ULL] = -1.0;
  for (t211 = 0ULL; t211 < 6ULL; t211++) {
    t48[t211 + 69ULL] = t125[t211];
  }

  for (t211 = 0ULL; t211 < 6ULL; t211++) {
    t48[t211 + 75ULL] = t126[t211];
  }

  for (t211 = 0ULL; t211 < 6ULL; t211++) {
    t48[t211 + 81ULL] = t127[t211];
  }

  out.mX[0] = t48[0];
  out.mX[1] = t48[1];
  out.mX[2] = t48[2];
  out.mX[3] = t48[3];
  out.mX[4] = t48[4];
  out.mX[5] = t48[5];
  out.mX[6] = t48[6];
  out.mX[7] = t48[7];
  out.mX[8] = t48[8];
  out.mX[9] = t48[9];
  out.mX[10] = t48[10];
  out.mX[11] = t48[11];
  out.mX[12] = t48[12];
  out.mX[13] = t48[13];
  out.mX[14] = t48[14];
  out.mX[15] = t48[15];
  out.mX[16] = t48[16];
  out.mX[17] = t48[17];
  out.mX[18] = t48[18];
  out.mX[19] = t48[19];
  out.mX[20] = t48[20];
  out.mX[21] = t48[21];
  out.mX[22] = t48[22];
  out.mX[23] = t48[23];
  out.mX[24] = t48[24];
  out.mX[25] = t48[25];
  out.mX[26] = t48[26];
  out.mX[27] = t48[27];
  out.mX[28] = t48[28];
  out.mX[29] = t48[29];
  out.mX[30] = t48[30];
  out.mX[31] = t48[31];
  out.mX[32] = t48[32];
  out.mX[33] = t48[33];
  out.mX[34] = t48[34];
  out.mX[35] = t48[35];
  out.mX[36] = t48[36];
  out.mX[37] = t48[37];
  out.mX[38] = t48[38];
  out.mX[39] = t48[39];
  out.mX[40] = t48[40];
  out.mX[41] = t48[41];
  out.mX[42] = t48[42];
  out.mX[43] = t48[43];
  out.mX[44] = t48[44];
  out.mX[45] = t48[45];
  out.mX[46] = t48[46];
  out.mX[47] = t48[47];
  out.mX[48] = t48[48];
  out.mX[49] = t48[49];
  out.mX[50] = t48[50];
  out.mX[51] = t48[51];
  out.mX[52] = t48[52];
  out.mX[53] = t48[53];
  out.mX[54] = t48[54];
  out.mX[55] = t48[55];
  out.mX[56] = t48[56];
  out.mX[57] = t48[57];
  out.mX[58] = t48[58];
  out.mX[59] = t48[59];
  out.mX[60] = t48[60];
  out.mX[61] = t48[61];
  out.mX[62] = t48[62];
  out.mX[63] = t48[63];
  out.mX[64] = t48[64];
  out.mX[65] = t48[65];
  out.mX[66] = t48[66];
  out.mX[67] = t48[67];
  out.mX[68] = t48[68];
  out.mX[69] = t48[69];
  out.mX[70] = t48[70];
  out.mX[71] = t48[71];
  out.mX[72] = t48[72];
  out.mX[73] = t48[73];
  out.mX[74] = t48[74];
  out.mX[75] = t48[75];
  out.mX[76] = t48[76];
  out.mX[77] = t48[77];
  out.mX[78] = t48[78];
  out.mX[79] = t48[79];
  out.mX[80] = t48[80];
  out.mX[81] = t48[81];
  out.mX[82] = t48[82];
  out.mX[83] = t48[83];
  out.mX[84] = t48[84];
  out.mX[85] = t48[85];
  out.mX[86] = t48[86];
  out.mX[87] = 1.0;
  out.mX[88] = 1.0;
  out.mX[89] = 1.0;
  out.mX[90] = 1.0;
  out.mX[91] = 1.0;
  out.mX[92] = 1.0;
  (void)sys;
  (void)t385;
  return 0;
}
