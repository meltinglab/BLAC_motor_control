/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pe_pmsm_drive_project_private.h
 *
 * Code generated for Simulink model 'pe_pmsm_drive_project'.
 *
 * Model version                  : 1.142
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Mar 23 00:14:53 2019
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_pe_pmsm_drive_project_private_h_
#define RTW_HEADER_pe_pmsm_drive_project_private_h_
#include "rtwtypes.h"

extern float64 rt_modd(float64 u0, float64 u1);
extern float64 look1_binlca(float64 u0, const float64 bp0[], const float64
  table[], uint32 maxIndex);
extern float64 look2_binlc(float64 u0, float64 u1, const float64 bp0[], const
  float64 bp1[], const float64 table[], const uint32 maxIndex[], uint32 stride);
extern float64 look2_binlca(float64 u0, float64 u1, const float64 bp0[], const
  float64 bp1[], const float64 table[], const uint32 maxIndex[], uint32 stride);

#endif                                 /* RTW_HEADER_pe_pmsm_drive_project_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
