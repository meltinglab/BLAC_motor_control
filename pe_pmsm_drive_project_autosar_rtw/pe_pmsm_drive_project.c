/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pe_pmsm_drive_project.c
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

#include "pe_pmsm_drive_project.h"
#include "pe_pmsm_drive_project_private.h"

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
float64 look1_binlca(float64 u0, const float64 bp0[], const float64 table[],
                     uint32 maxIndex)
{
  float64 y;
  float64 frac;
  uint32 iRght;
  uint32 iLeft;
  uint32 bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    y = (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
  }

  return y;
}

float64 look2_binlc(float64 u0, float64 u1, const float64 bp0[], const float64
                    bp1[], const float64 table[], const uint32 maxIndex[],
                    uint32 stride)
{
  float64 frac;
  uint32 bpIndices[2];
  float64 fractions[2];
  float64 yL_1d;
  uint32 iRght;
  uint32 bpIdx;
  uint32 iLeft;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U] - 1U;
    frac = 1.0;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yL_1d = (table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx];
  bpIdx += stride;
  return (((table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx]) -
          yL_1d) * frac + yL_1d;
}

float64 look2_binlca(float64 u0, float64 u1, const float64 bp0[], const float64
                     bp1[], const float64 table[], const uint32 maxIndex[],
                     uint32 stride)
{
  float64 y;
  float64 frac;
  uint32 bpIndices[2];
  float64 fractions[2];
  float64 yR_1d;
  uint32 iRght;
  uint32 bpIdx;
  uint32 iLeft;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U];
    frac = 0.0;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    y = (table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx];
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yR_1d = table[bpIdx];
    } else {
      yR_1d = (table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx];
    }

    y += (yR_1d - y) * frac;
  }

  return y;
}

float64 rt_modd(float64 u0, float64 u1)
{
  float64 y;
  boolean yEq;
  float64 q;
  y = u0;
  if (u0 == 0.0) {
    y = 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      yEq = (y == 0.0);
      if ((!yEq) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (yEq) {
        y = 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/* Model step function for TID0 */
void Runnable_Step(void)               /* Sample time: [2.0E-7s, 0.0s] */
{
  sint32 tid = 0;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 2.0E-7, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  UNUSED_PARAMETER(tid);
}

/* Model step function for TID1 */
void Runnable_Step1(void)              /* Sample time: [2.0E-6s, 0.0s] */
{
  sint32 tid = 1;
  NeslSimulationData *simulationData;
  float64 time;
  float64 tmp[28];
  sint32 tmp_0[8];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  float64 time_0;
  float64 tmp_1[69];
  sint32 tmp_2[9];
  float64 Tas;
  float64 Tbs;
  float64 Toffset;
  float64 Tgc_off_h;
  float64 Tgc_on;
  float64 time_1;
  float64 tmp_3[28];
  sint32 tmp_4[8];
  float64 rtb_OUTPUT_1_0[6];
  float64 rtb_MathFunction_h;
  float64 rtb_Switch2;
  float64 rtb_Sum2_c;
  float64 rtb_Sum3;
  float64 rtb_Switch2_c;
  float64 rtb_Product1;
  float64 rtb_avoiddivisionby0;
  boolean rtb_RelationalOperator1;
  float64 rtb_Product3;
  float64 DiscreteTimeIntegrator_b;
  sint32 i;
  boolean rtb_LogicalOperator_idx_2;
  boolean rtb_LogicalOperator_idx_1;
  boolean rtb_LogicalOperator_idx_0;
  float64 rtb_TmpSignalConversionAtSFun_0;
  float64 rtb_TmpSignalConversionAtSFun_1;

  /* UnaryMinus: '<Root>/Unary Minus' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Delay: '<S1>/Delay'
   *  Lookup_n-D: '<S1>/F_LOAD1'
   *  Product: '<S1>/Divide3'
   *  Product: '<S1>/Divide4'
   *  Product: '<S1>/Divide5'
   *  Product: '<S1>/Divide6'
   */
  rtDW.UnaryMinus = -(look1_binlca(rtDW.Delay_DSTATE / 3.0 * 0.3,
    rtConstP.F_LOAD1_bp01Data, rtConstP.F_LOAD1_tableData, 999U) * 0.3 / 3.0);

  /* SimscapeInputBlock: '<S50>/INPUT_1_1_1' */
  rtDW.INPUT_1_1_1[0] = rtDW.UnaryMinus;
  rtDW.INPUT_1_1_1[1] = 0.0;
  rtDW.INPUT_1_1_1[2] = 0.0;
  rtDW.INPUT_1_1_1_Discrete[0] = (rtDW.INPUT_1_1_1[0] !=
    rtDW.INPUT_1_1_1_Discrete[1]);
  rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
  rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
  rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

  /* RelationalOperator: '<S46>/Relational Operator1' */
  rtb_RelationalOperator1 = (rtDW.DiscreteTimeIntegrator1_DSTATE > 0.0001248);

  /* InitialCondition: '<S46>/Initial' incorporates:
   *  Constant: '<S46>/Constant3'
   *  Sum: '<S46>/Add3'
   */
  if (rtDW.Initial_FirstOutputTime) {
    rtDW.Initial_FirstOutputTime = false;
    rtDW.Initial = 0.0;
  } else {
    rtDW.Initial = rtDW.DiscreteTimeIntegrator1_DSTATE - 0.000125;
  }

  /* End of InitialCondition: '<S46>/Initial' */

  /* DiscreteIntegrator: '<S46>/Discrete-Time Integrator1' */
  if (rtb_RelationalOperator1 && (rtDW.DiscreteTimeIntegrator1_PrevRes <= 0)) {
    rtDW.DiscreteTimeIntegrator1_DSTATE = rtDW.Initial;
  }

  /* Math: '<S19>/Math Function' incorporates:
   *  Constant: '<S19>/2*pi'
   *  Delay: '<S3>/Delay2'
   *  Gain: '<S19>/pole pairs '
   */
  rtb_MathFunction_h = rt_modd(6.0 * rtDW.Delay2_DSTATE[1], 6.2831853071795862);

  /* Fcn: '<S23>/d' incorporates:
   *  Fcn: '<S44>/a'
   *  Fcn: '<S44>/b'
   *  Fcn: '<S44>/c'
   */
  Tas = sin(rtb_MathFunction_h);
  Tbs = sin(rtb_MathFunction_h - 2.0943951023931953);
  Tgc_off_h = sin(rtb_MathFunction_h + 2.0943951023931953);

  /* Gain: '<S23>/Gain1' incorporates:
   *  Delay: '<S3>/Delay1'
   *  Fcn: '<S23>/d'
   */
  rtb_TmpSignalConversionAtSFun_1 = ((Tbs * rtDW.Delay1_DSTATE[1] + Tas *
    rtDW.Delay1_DSTATE[0]) + Tgc_off_h * rtDW.Delay1_DSTATE[2]) *
    0.66666666666666663;

  /* Fcn: '<S23>/q' incorporates:
   *  Fcn: '<S44>/a'
   *  Fcn: '<S44>/b'
   *  Fcn: '<S44>/c'
   */
  Tgc_on = cos(rtb_MathFunction_h);
  Toffset = cos(rtb_MathFunction_h - 2.0943951023931953);
  rtb_avoiddivisionby0 = cos(rtb_MathFunction_h + 2.0943951023931953);

  /* Gain: '<S23>/Gain1' incorporates:
   *  Delay: '<S3>/Delay1'
   *  Fcn: '<S23>/q'
   */
  rtb_TmpSignalConversionAtSFun_0 = ((Toffset * rtDW.Delay1_DSTATE[1] + Tgc_on *
    rtDW.Delay1_DSTATE[0]) + rtb_avoiddivisionby0 * rtDW.Delay1_DSTATE[2]) *
    0.66666666666666663;

  /* Gain: '<S19>/pole pairs' incorporates:
   *  Delay: '<S3>/Delay2'
   */
  rtb_Sum3 = 6.0 * rtDW.Delay2_DSTATE[0];

  /* DiscreteIntegrator: '<S25>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S25>/Gain1'
   *  Gain: '<S25>/Gain2'
   *  Sum: '<S22>/Sum'
   *  Sum: '<S25>/Sum1'
   *  UnitDelay: '<S25>/Unit Delay'
   */
  rtb_MathFunction_h = ((0.0 - rtb_TmpSignalConversionAtSFun_1) * 10.0 + 1000.0 *
                        rtDW.UnitDelay_DSTATE) * 2.0E-6 +
    rtDW.DiscreteTimeIntegrator_DSTATE;

  /* Sum: '<S22>/Sum2' incorporates:
   *  Gain: '<S25>/Gain'
   *  Lookup_n-D: '<S24>/2-D Lookup Table Lq'
   *  Product: '<S24>/Product4'
   *  Sum: '<S22>/Sum'
   *  Sum: '<S25>/Sum'
   */
  rtb_Sum2_c = ((0.0 - rtb_TmpSignalConversionAtSFun_1) * 0.1 +
                rtb_MathFunction_h) - rtb_TmpSignalConversionAtSFun_0 *
    look2_binlc(rtb_TmpSignalConversionAtSFun_1, rtb_TmpSignalConversionAtSFun_0,
                rtConstP.pooled10, rtConstP.pooled10, rtConstP.pooled9,
                rtConstP.pooled16, 2U) * rtb_Sum3;

  /* Product: '<S24>/Product2' incorporates:
   *  Lookup_n-D: '<S24>/2-D Lookup Table Ld'
   */
  rtb_Switch2 = rtb_TmpSignalConversionAtSFun_1 * look2_binlca
    (rtb_TmpSignalConversionAtSFun_1, rtb_TmpSignalConversionAtSFun_0,
     rtConstP.pooled10, rtConstP.pooled10, rtConstP.pooled9, rtConstP.pooled16,
     2U) * rtb_Sum3;

  /* Product: '<S24>/Product3' incorporates:
   *  Lookup_n-D: '<S24>/2-D Lookup Table Psim'
   */
  rtb_Product3 = look2_binlc(rtb_TmpSignalConversionAtSFun_1,
    rtb_TmpSignalConversionAtSFun_0, rtConstP.pooled10, rtConstP.pooled10,
    rtConstP.uDLookupTablePsim_tableData, rtConstP.pooled16, 2U) * rtb_Sum3;

  /* Gain: '<S20>/elec->mech' */
  rtb_TmpSignalConversionAtSFun_1 = 0.16666666666666666 * rtb_Sum3;

  /* Abs: '<S37>/Abs1' */
  rtb_Sum3 = fabs(rtb_TmpSignalConversionAtSFun_1);

  /* Saturate: '<S40>/Saturation' */
  if (rtb_Sum3 <= 69.813170079773187) {
    rtb_Sum3 = 69.813170079773187;
  }

  /* End of Saturate: '<S40>/Saturation' */

  /* Product: '<S40>/Product1' incorporates:
   *  Constant: '<S40>/Constant'
   *  Product: '<S40>/Product'
   */
  rtb_Product1 = 2827.4333882308142 / rtb_Sum3;

  /* Sum: '<S39>/Sum' incorporates:
   *  Delay: '<S3>/Delay'
   */
  rtb_Switch2_c = rtDW.Delay_DSTATE_b - rtb_TmpSignalConversionAtSFun_1;

  /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S43>/Gain1'
   *  Gain: '<S43>/Gain2'
   *  Sum: '<S43>/Sum1'
   *  UnitDelay: '<S43>/Unit Delay'
   */
  DiscreteTimeIntegrator_b = (20.0 * rtb_Switch2_c + 1000.0 *
    rtDW.UnitDelay_DSTATE_f) * 2.0E-6 + rtDW.DiscreteTimeIntegrator_DSTATE_l;

  /* Switch: '<S39>/Switch' incorporates:
   *  Gain: '<S43>/Gain'
   *  Sum: '<S43>/Sum'
   */
  rtb_TmpSignalConversionAtSFun_1 = 0.8 * rtb_Switch2_c +
    DiscreteTimeIntegrator_b;

  /* Switch: '<S41>/Switch2' incorporates:
   *  RelationalOperator: '<S41>/LowerRelop1'
   */
  if (rtb_TmpSignalConversionAtSFun_1 > rtb_Product1) {
    rtb_Switch2_c = rtb_Product1;
  } else {
    /* Gain: '<S40>/Sign Change' */
    rtb_Switch2_c = -rtb_Product1;

    /* Switch: '<S41>/Switch' incorporates:
     *  Gain: '<S40>/Sign Change'
     *  RelationalOperator: '<S41>/UpperRelop'
     */
    if (rtb_TmpSignalConversionAtSFun_1 >= -rtb_Product1) {
      rtb_Switch2_c = rtb_TmpSignalConversionAtSFun_1;
    }

    /* End of Switch: '<S41>/Switch' */
  }

  /* End of Switch: '<S41>/Switch2' */

  /* Sum: '<S22>/Sum1' incorporates:
   *  Gain: '<S37>/Tq--> iqRef'
   */
  rtb_Sum3 = 3.7037037037037033 * rtb_Switch2_c -
    rtb_TmpSignalConversionAtSFun_0;

  /* DiscreteIntegrator: '<S26>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S26>/Gain1'
   *  Gain: '<S26>/Gain2'
   *  Sum: '<S26>/Sum1'
   *  UnitDelay: '<S26>/Unit Delay'
   */
  rtb_Product1 = (10.0 * rtb_Sum3 + 1000.0 * rtDW.UnitDelay_DSTATE_k) * 2.0E-6 +
    rtDW.DiscreteTimeIntegrator_DSTATE_p;

  /* Sum: '<S22>/Sum3' incorporates:
   *  Gain: '<S26>/Gain'
   *  Sum: '<S24>/Sum1'
   *  Sum: '<S26>/Sum'
   */
  rtb_Sum3 = (0.1 * rtb_Sum3 + rtb_Product1) + (rtb_Switch2 + rtb_Product3);

  /* Switch: '<S28>/Switch' */
  rtb_Switch2 = rtb_Sum3;

  /* Switch: '<S31>/Switch2' incorporates:
   *  RelationalOperator: '<S31>/LowerRelop1'
   *  RelationalOperator: '<S31>/UpperRelop'
   *  Switch: '<S28>/Switch'
   *  Switch: '<S31>/Switch'
   */
  if (rtb_Sum3 > 63.508529610858844) {
    rtb_Switch2 = 63.508529610858844;
  } else {
    if (rtb_Sum3 < -63.508529610858844) {
      /* Switch: '<S31>/Switch' */
      rtb_Switch2 = -63.508529610858844;
    }
  }

  /* End of Switch: '<S31>/Switch2' */

  /* Sqrt: '<S27>/Sqrt' incorporates:
   *  Math: '<S27>/Math Function'
   *  Math: '<S27>/Math Function1'
   *  Sum: '<S27>/Sum4'
   */
  rtb_TmpSignalConversionAtSFun_0 = sqrt(4033.3333333333344 - rtb_Switch2 *
    rtb_Switch2);

  /* Switch: '<S32>/Switch2' incorporates:
   *  RelationalOperator: '<S32>/LowerRelop1'
   *  Switch: '<S29>/Switch'
   */
  if (rtb_Sum2_c <= rtb_TmpSignalConversionAtSFun_0) {
    /* Gain: '<S27>/Sign Change ' */
    rtb_TmpSignalConversionAtSFun_0 = -rtb_TmpSignalConversionAtSFun_0;

    /* Switch: '<S32>/Switch' incorporates:
     *  RelationalOperator: '<S32>/UpperRelop'
     */
    if (rtb_Sum2_c >= rtb_TmpSignalConversionAtSFun_0) {
      rtb_TmpSignalConversionAtSFun_0 = rtb_Sum2_c;
    }

    /* End of Switch: '<S32>/Switch' */
  }

  /* End of Switch: '<S32>/Switch2' */

  /* MATLAB Function: '<S45>/Switching Time Calculation' incorporates:
   *  Fcn: '<S44>/a'
   *  Fcn: '<S44>/b'
   *  Fcn: '<S44>/c'
   */
  Tas = (Tas * rtb_TmpSignalConversionAtSFun_0 + Tgc_on * rtb_Switch2) * 6.25E-5
    / 110.0 + 3.125E-5;
  Tbs = (Tbs * rtb_TmpSignalConversionAtSFun_0 + Toffset * rtb_Switch2) *
    6.25E-5 / 110.0 + 3.125E-5;
  Tgc_off_h = (Tgc_off_h * rtb_TmpSignalConversionAtSFun_0 +
               rtb_avoiddivisionby0 * rtb_Switch2) * 6.25E-5 / 110.0 + 3.125E-5;
  Toffset = 6.25E-5 - Tas;
  if (6.25E-5 - Tas < 0.0) {
    Toffset = 0.0;
  } else {
    if (6.25E-5 - Tas > 6.25E-5) {
      Toffset = 6.25E-5;
    }
  }

  rtb_avoiddivisionby0 = 6.25E-5 - Tbs;
  if (6.25E-5 - Tbs < 0.0) {
    rtb_avoiddivisionby0 = 0.0;
  } else {
    if (6.25E-5 - Tbs > 6.25E-5) {
      rtb_avoiddivisionby0 = 6.25E-5;
    }
  }

  Tgc_on = 6.25E-5 - Tgc_off_h;
  if (6.25E-5 - Tgc_off_h < 0.0) {
    Tgc_on = 0.0;
  } else {
    if (6.25E-5 - Tgc_off_h > 6.25E-5) {
      Tgc_on = 6.25E-5;
    }
  }

  Tas += 6.25E-5;
  if (Tas < 6.25E-5) {
    Tas = 6.25E-5;
  } else {
    if (Tas > 0.000125) {
      Tas = 0.000125;
    }
  }

  Tbs += 6.25E-5;
  if (Tbs < 6.25E-5) {
    Tbs = 6.25E-5;
  } else {
    if (Tbs > 0.000125) {
      Tbs = 0.000125;
    }
  }

  Tgc_off_h += 6.25E-5;
  if (Tgc_off_h < 6.25E-5) {
    Tgc_off_h = 6.25E-5;
  } else {
    if (Tgc_off_h > 0.000125) {
      Tgc_off_h = 0.000125;
    }
  }

  /* Switch: '<S21>/Switch1' incorporates:
   *  DataTypeConversion: '<S45>/Data Type Conversion'
   *  Logic: '<S46>/Logical Operator3'
   *  UnitDelay: '<S21>/Unit Delay2'
   */
  if (rtDW.UnitDelay2_DSTATE > 0.0) {
    /* Logic: '<S46>/Logical Operator' incorporates:
     *  DiscreteIntegrator: '<S46>/Discrete-Time Integrator1'
     *  MATLAB Function: '<S45>/Switching Time Calculation'
     *  RelationalOperator: '<S46>/Relational Operator'
     *  RelationalOperator: '<S46>/Relational Operator3'
     */
    rtb_LogicalOperator_idx_0 = (rtDW.DiscreteTimeIntegrator1_DSTATE >= Toffset)
      ^ (rtDW.DiscreteTimeIntegrator1_DSTATE >= Tas);
    rtb_LogicalOperator_idx_1 = (rtDW.DiscreteTimeIntegrator1_DSTATE >=
      rtb_avoiddivisionby0) ^ (rtDW.DiscreteTimeIntegrator1_DSTATE >= Tbs);
    rtb_LogicalOperator_idx_2 = (rtDW.DiscreteTimeIntegrator1_DSTATE >= Tgc_on) ^
      (rtDW.DiscreteTimeIntegrator1_DSTATE >= Tgc_off_h);
    rtDW.Switch1[0] = rtb_LogicalOperator_idx_0;
    rtDW.Switch1[1] = !rtb_LogicalOperator_idx_0;
    rtDW.Switch1[2] = rtb_LogicalOperator_idx_1;
    rtDW.Switch1[3] = !rtb_LogicalOperator_idx_1;
    rtDW.Switch1[4] = rtb_LogicalOperator_idx_2;
    rtDW.Switch1[5] = !rtb_LogicalOperator_idx_2;
  } else {
    for (i = 0; i < 6; i++) {
      rtDW.Switch1[i] = 0.0;
    }
  }

  /* End of Switch: '<S21>/Switch1' */

  /* SimscapeInputBlock: '<S50>/INPUT_2_1_1' */
  rtDW.INPUT_2_1_1[0] = rtDW.Switch1[0];
  rtDW.INPUT_2_1_1[1] = 0.0;
  rtDW.INPUT_2_1_1[2] = 0.0;
  rtDW.INPUT_2_1_1_Discrete[0] = (rtDW.INPUT_2_1_1[0] !=
    rtDW.INPUT_2_1_1_Discrete[1]);
  rtDW.INPUT_2_1_1_Discrete[1] = rtDW.INPUT_2_1_1[0];
  rtDW.INPUT_2_1_1[0] = rtDW.INPUT_2_1_1_Discrete[1];
  rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S50>/INPUT_3_1_1' */
  rtDW.INPUT_3_1_1[0] = rtDW.Switch1[1];
  rtDW.INPUT_3_1_1[1] = 0.0;
  rtDW.INPUT_3_1_1[2] = 0.0;
  rtDW.INPUT_3_1_1_Discrete[0] = (rtDW.INPUT_3_1_1[0] !=
    rtDW.INPUT_3_1_1_Discrete[1]);
  rtDW.INPUT_3_1_1_Discrete[1] = rtDW.INPUT_3_1_1[0];
  rtDW.INPUT_3_1_1[0] = rtDW.INPUT_3_1_1_Discrete[1];
  rtDW.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S50>/INPUT_4_1_1' */
  rtDW.INPUT_4_1_1[0] = rtDW.Switch1[2];
  rtDW.INPUT_4_1_1[1] = 0.0;
  rtDW.INPUT_4_1_1[2] = 0.0;
  rtDW.INPUT_4_1_1_Discrete[0] = (rtDW.INPUT_4_1_1[0] !=
    rtDW.INPUT_4_1_1_Discrete[1]);
  rtDW.INPUT_4_1_1_Discrete[1] = rtDW.INPUT_4_1_1[0];
  rtDW.INPUT_4_1_1[0] = rtDW.INPUT_4_1_1_Discrete[1];
  rtDW.INPUT_4_1_1[3] = rtDW.INPUT_4_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S50>/INPUT_5_1_1' */
  rtDW.INPUT_5_1_1[0] = rtDW.Switch1[3];
  rtDW.INPUT_5_1_1[1] = 0.0;
  rtDW.INPUT_5_1_1[2] = 0.0;
  rtDW.INPUT_5_1_1_Discrete[0] = (rtDW.INPUT_5_1_1[0] !=
    rtDW.INPUT_5_1_1_Discrete[1]);
  rtDW.INPUT_5_1_1_Discrete[1] = rtDW.INPUT_5_1_1[0];
  rtDW.INPUT_5_1_1[0] = rtDW.INPUT_5_1_1_Discrete[1];
  rtDW.INPUT_5_1_1[3] = rtDW.INPUT_5_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S50>/INPUT_6_1_1' */
  rtDW.INPUT_6_1_1[0] = rtDW.Switch1[4];
  rtDW.INPUT_6_1_1[1] = 0.0;
  rtDW.INPUT_6_1_1[2] = 0.0;
  rtDW.INPUT_6_1_1_Discrete[0] = (rtDW.INPUT_6_1_1[0] !=
    rtDW.INPUT_6_1_1_Discrete[1]);
  rtDW.INPUT_6_1_1_Discrete[1] = rtDW.INPUT_6_1_1[0];
  rtDW.INPUT_6_1_1[0] = rtDW.INPUT_6_1_1_Discrete[1];
  rtDW.INPUT_6_1_1[3] = rtDW.INPUT_6_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S50>/INPUT_7_1_1' */
  rtDW.INPUT_7_1_1[0] = rtDW.Switch1[5];
  rtDW.INPUT_7_1_1[1] = 0.0;
  rtDW.INPUT_7_1_1[2] = 0.0;
  rtDW.INPUT_7_1_1_Discrete[0] = (rtDW.INPUT_7_1_1[0] !=
    rtDW.INPUT_7_1_1_Discrete[1]);
  rtDW.INPUT_7_1_1_Discrete[1] = rtDW.INPUT_7_1_1[0];
  rtDW.INPUT_7_1_1[0] = rtDW.INPUT_7_1_1_Discrete[1];
  rtDW.INPUT_7_1_1[3] = rtDW.INPUT_7_1_1_Discrete[0];

  /* SimscapeExecutionBlock: '<S50>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S50>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  Tgc_off_h = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0* 4294967296.0)) *
               2.0E-7);
  time = Tgc_off_h;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 23;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 18;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mFoundZcEvents = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsMajorTimeStep = true;
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mIsSolverAssertCheck = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = rtDW.INPUT_1_1_1[0];
  tmp[1] = rtDW.INPUT_1_1_1[1];
  tmp[2] = rtDW.INPUT_1_1_1[2];
  tmp[3] = rtDW.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INPUT_2_1_1[0];
  tmp[5] = rtDW.INPUT_2_1_1[1];
  tmp[6] = rtDW.INPUT_2_1_1[2];
  tmp[7] = rtDW.INPUT_2_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INPUT_3_1_1[0];
  tmp[9] = rtDW.INPUT_3_1_1[1];
  tmp[10] = rtDW.INPUT_3_1_1[2];
  tmp[11] = rtDW.INPUT_3_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INPUT_4_1_1[0];
  tmp[13] = rtDW.INPUT_4_1_1[1];
  tmp[14] = rtDW.INPUT_4_1_1[2];
  tmp[15] = rtDW.INPUT_4_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = rtDW.INPUT_5_1_1[0];
  tmp[17] = rtDW.INPUT_5_1_1[1];
  tmp[18] = rtDW.INPUT_5_1_1[2];
  tmp[19] = rtDW.INPUT_5_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = rtDW.INPUT_6_1_1[0];
  tmp[21] = rtDW.INPUT_6_1_1[1];
  tmp[22] = rtDW.INPUT_6_1_1[2];
  tmp[23] = rtDW.INPUT_6_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = rtDW.INPUT_7_1_1[0];
  tmp[25] = rtDW.INPUT_7_1_1[1];
  tmp[26] = rtDW.INPUT_7_1_1[2];
  tmp[27] = rtDW.INPUT_7_1_1[3];
  tmp_0[7] = 28;
  simulationData->mData->mInputValues.mN = 28;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 8;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 41;
  simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  rtb_LogicalOperator_idx_0 = tid == 1;
  simulationData->mData->mIsFundamentalSampleHit = rtb_LogicalOperator_idx_0;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (i != 0) {
    rtb_LogicalOperator_idx_0 = error_buffer_is_empty(((void*) 0));
    if (rtb_LogicalOperator_idx_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      ((void) 0);
    }
  }

  /* End of SimscapeExecutionBlock: '<S50>/STATE_1' */

  /* SimscapeExecutionBlock: '<S50>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
  time_0 = Tgc_off_h;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mFoundZcEvents = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsMajorTimeStep = true;
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mIsSolverAssertCheck = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_2[0] = 0;
  tmp_1[0] = rtDW.INPUT_1_1_1[0];
  tmp_1[1] = rtDW.INPUT_1_1_1[1];
  tmp_1[2] = rtDW.INPUT_1_1_1[2];
  tmp_1[3] = rtDW.INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = rtDW.INPUT_2_1_1[0];
  tmp_1[5] = rtDW.INPUT_2_1_1[1];
  tmp_1[6] = rtDW.INPUT_2_1_1[2];
  tmp_1[7] = rtDW.INPUT_2_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = rtDW.INPUT_3_1_1[0];
  tmp_1[9] = rtDW.INPUT_3_1_1[1];
  tmp_1[10] = rtDW.INPUT_3_1_1[2];
  tmp_1[11] = rtDW.INPUT_3_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = rtDW.INPUT_4_1_1[0];
  tmp_1[13] = rtDW.INPUT_4_1_1[1];
  tmp_1[14] = rtDW.INPUT_4_1_1[2];
  tmp_1[15] = rtDW.INPUT_4_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = rtDW.INPUT_5_1_1[0];
  tmp_1[17] = rtDW.INPUT_5_1_1[1];
  tmp_1[18] = rtDW.INPUT_5_1_1[2];
  tmp_1[19] = rtDW.INPUT_5_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = rtDW.INPUT_6_1_1[0];
  tmp_1[21] = rtDW.INPUT_6_1_1[1];
  tmp_1[22] = rtDW.INPUT_6_1_1[2];
  tmp_1[23] = rtDW.INPUT_6_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = rtDW.INPUT_7_1_1[0];
  tmp_1[25] = rtDW.INPUT_7_1_1[1];
  tmp_1[26] = rtDW.INPUT_7_1_1[2];
  tmp_1[27] = rtDW.INPUT_7_1_1[3];
  tmp_2[7] = 28;
  memcpy(&tmp_1[28], &rtDW.STATE_1[0], 41U * sizeof(float64));
  tmp_2[8] = 69;
  simulationData->mData->mInputValues.mN = 69;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 9;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 6;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  rtb_LogicalOperator_idx_0 = tid == 1;
  simulationData->mData->mIsFundamentalSampleHit = rtb_LogicalOperator_idx_0;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (i != 0) {
    rtb_LogicalOperator_idx_0 = error_buffer_is_empty(((void*) 0));
    if (rtb_LogicalOperator_idx_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      ((void) 0);
    }
  }

  /* Update for Delay: '<S3>/Delay2' incorporates:
   *  SignalConversion: '<S3>/TmpSignal ConversionAtDelay2Inport1'
   */
  rtDW.Delay2_DSTATE[0] = rtb_OUTPUT_1_0[4];
  rtDW.Delay2_DSTATE[1] = rtb_OUTPUT_1_0[3];

  /* Relay: '<S19>/Relay' */
  rtDW.Relay_Mode = true;

  /* Update for Delay: '<S1>/Delay' */
  rtDW.Delay_DSTATE = rtb_OUTPUT_1_0[4];

  /* Update for UnitDelay: '<S21>/Unit Delay2' incorporates:
   *  Relay: '<S19>/Relay'
   */
  rtDW.UnitDelay2_DSTATE = rtDW.Relay_Mode;

  /* Update for DiscreteIntegrator: '<S46>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_DSTATE += 2.0E-6;
  rtDW.DiscreteTimeIntegrator1_PrevRes = (sint8)rtb_RelationalOperator1;

  /* Update for Delay: '<S3>/Delay1' */
  rtDW.Delay1_DSTATE[0] = rtb_OUTPUT_1_0[0];
  rtDW.Delay1_DSTATE[1] = rtb_OUTPUT_1_0[1];
  rtDW.Delay1_DSTATE[2] = rtb_OUTPUT_1_0[2];

  /* Update for UnitDelay: '<S25>/Unit Delay' incorporates:
   *  Sum: '<S22>/Sum5'
   */
  rtDW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtSFun_0 - rtb_Sum2_c;

  /* Update for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE = rtb_MathFunction_h;
  rtDW.DiscreteTimeIntegrator_PrevRese = 0;

  /* Step: '<S5>/Step' */
  if ((((rtM->Timing.clockTick1+rtM->Timing.clockTickH1* 4294967296.0)) * 2.0E-6)
      < 0.1) {
    i = 0;
  } else {
    i = 15;
  }

  /* End of Step: '<S5>/Step' */

  /* Update for Delay: '<S3>/Delay' incorporates:
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant4'
   *  Gain: '<S3>/rpm -> rad//s [mech.]'
   *  Gain: '<S5>/Gain2'
   *  Product: '<S5>/Divide5'
   *  Product: '<S5>/Divide6'
   */
  rtDW.Delay_DSTATE_b = (float64)i / 0.3 * 3.0 * 9.5492965855137211 *
    0.10471975511965977;

  /* Update for UnitDelay: '<S43>/Unit Delay' incorporates:
   *  Sum: '<S39>/Sum1'
   */
  rtDW.UnitDelay_DSTATE_f = rtb_Switch2_c - rtb_TmpSignalConversionAtSFun_1;

  /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE_l = DiscreteTimeIntegrator_b;
  rtDW.DiscreteTimeIntegrator_PrevRe_l = 0;

  /* Update for UnitDelay: '<S26>/Unit Delay' incorporates:
   *  Sum: '<S22>/Sum4'
   */
  rtDW.UnitDelay_DSTATE_k = rtb_Switch2 - rtb_Sum3;

  /* Update for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE_p = rtb_Product1;
  rtDW.DiscreteTimeIntegrator_PrevRe_d = 0;

  /* Update for SimscapeExecutionBlock: '<S50>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_1 = Tgc_off_h;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 23;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 18;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mFoundZcEvents = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsMajorTimeStep = true;
  rtb_LogicalOperator_idx_0 = false;
  simulationData->mData->mIsSolverAssertCheck = rtb_LogicalOperator_idx_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_4[0] = 0;
  tmp_3[0] = rtDW.INPUT_1_1_1[0];
  tmp_3[1] = rtDW.INPUT_1_1_1[1];
  tmp_3[2] = rtDW.INPUT_1_1_1[2];
  tmp_3[3] = rtDW.INPUT_1_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = rtDW.INPUT_2_1_1[0];
  tmp_3[5] = rtDW.INPUT_2_1_1[1];
  tmp_3[6] = rtDW.INPUT_2_1_1[2];
  tmp_3[7] = rtDW.INPUT_2_1_1[3];
  tmp_4[2] = 8;
  tmp_3[8] = rtDW.INPUT_3_1_1[0];
  tmp_3[9] = rtDW.INPUT_3_1_1[1];
  tmp_3[10] = rtDW.INPUT_3_1_1[2];
  tmp_3[11] = rtDW.INPUT_3_1_1[3];
  tmp_4[3] = 12;
  tmp_3[12] = rtDW.INPUT_4_1_1[0];
  tmp_3[13] = rtDW.INPUT_4_1_1[1];
  tmp_3[14] = rtDW.INPUT_4_1_1[2];
  tmp_3[15] = rtDW.INPUT_4_1_1[3];
  tmp_4[4] = 16;
  tmp_3[16] = rtDW.INPUT_5_1_1[0];
  tmp_3[17] = rtDW.INPUT_5_1_1[1];
  tmp_3[18] = rtDW.INPUT_5_1_1[2];
  tmp_3[19] = rtDW.INPUT_5_1_1[3];
  tmp_4[5] = 20;
  tmp_3[20] = rtDW.INPUT_6_1_1[0];
  tmp_3[21] = rtDW.INPUT_6_1_1[1];
  tmp_3[22] = rtDW.INPUT_6_1_1[2];
  tmp_3[23] = rtDW.INPUT_6_1_1[3];
  tmp_4[6] = 24;
  tmp_3[24] = rtDW.INPUT_7_1_1[0];
  tmp_3[25] = rtDW.INPUT_7_1_1[1];
  tmp_3[26] = rtDW.INPUT_7_1_1[2];
  tmp_3[27] = rtDW.INPUT_7_1_1[3];
  tmp_4[7] = 28;
  simulationData->mData->mInputValues.mN = 28;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 8;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (i != 0) {
    rtb_LogicalOperator_idx_0 = error_buffer_is_empty(((void*) 0));
    if (rtb_LogicalOperator_idx_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      ((void) 0);
    }
  }

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 2.0E-6, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick1++;
  if (!rtM->Timing.clockTick1) {
    rtM->Timing.clockTickH1++;
  }

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void Runnable_Init(void)
{
  {
    NeslSimulator *tmp;
    boolean tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeModelParameters modelParameters;
    float64 tmp_1;
    NeuDiagnosticTree *diagnosticTree;
    sint32 tmp_2;
    char *msg;
    NeslSimulationData *simulationData;
    float64 time;
    NeModelParameters modelParameters_0;
    float64 time_0;
    NeParameterBundle expl_temp;
    float64 time_tmp;

    /* Start for InitialCondition: '<S46>/Initial' */
    rtDW.Initial_FirstOutputTime = true;

    /* Start for SimscapeExecutionBlock: '<S50>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S50>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("pe_pmsm_drive_project/Solver Configuration_1", 0,
      0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      pe_pmsm_drive_project_5df20146_1_gateway();
      tmp = nesl_lease_simulator("pe_pmsm_drive_project/Solver Configuration_1",
        0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 2.0E-7;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 4.75200868E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 2.0E-7;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      &modelParameters, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    expl_temp.mRealParameters.mN = 0;
    expl_temp.mRealParameters.mX = NULL;
    expl_temp.mLogicalParameters.mN = 0;
    expl_temp.mLogicalParameters.mX = NULL;
    expl_temp.mIntegerParameters.mN = 0;
    expl_temp.mIntegerParameters.mX = NULL;
    expl_temp.mIndexParameters.mN = 0;
    expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)rtDW.STATE_1_Simulator, expl_temp);
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time_tmp = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0* 4294967296.0))
                * 2.0E-7);
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 23;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 18;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S50>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S50>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("pe_pmsm_drive_project/Solver Configuration_1", 1,
      0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      pe_pmsm_drive_project_5df20146_1_gateway();
      tmp = nesl_lease_simulator("pe_pmsm_drive_project/Solver Configuration_1",
        1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 2.0E-7;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 4.75200868E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 2.0E-7;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      &modelParameters_0, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    /* InitializeConditions for DiscreteIntegrator: '<S46>/Discrete-Time Integrator1' */
    rtDW.DiscreteTimeIntegrator1_DSTATE = rtDW.Initial;
    rtDW.DiscreteTimeIntegrator1_PrevRes = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRese = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRe_l = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRe_d = 2;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
