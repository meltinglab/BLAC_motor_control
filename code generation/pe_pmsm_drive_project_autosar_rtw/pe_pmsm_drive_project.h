/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pe_pmsm_drive_project.h
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

#ifndef RTW_HEADER_pe_pmsm_drive_project_h_
#define RTW_HEADER_pe_pmsm_drive_project_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef pe_pmsm_drive_project_COMMON_INCLUDES_
# define pe_pmsm_drive_project_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_pe_pmsm_drive_project.h"
#include "nesl_rtw.h"
#include "pe_pmsm_drive_project_5df20146_1_gateway.h"
#endif                                 /* pe_pmsm_drive_project_COMMON_INCLUDES_ */

#include "pe_pmsm_drive_project_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#define pe_pmsm_drive_project_M        (rtM)

/* Block signals and states (default storage) for system '<Root>' */
typedef struct tag_DW {
  float64 INPUT_1_1_1[4];              /* '<S50>/INPUT_1_1_1' */
  float64 Switch1[6];                  /* '<S21>/Switch1' */
  float64 INPUT_2_1_1[4];              /* '<S50>/INPUT_2_1_1' */
  float64 INPUT_3_1_1[4];              /* '<S50>/INPUT_3_1_1' */
  float64 INPUT_4_1_1[4];              /* '<S50>/INPUT_4_1_1' */
  float64 INPUT_5_1_1[4];              /* '<S50>/INPUT_5_1_1' */
  float64 INPUT_6_1_1[4];              /* '<S50>/INPUT_6_1_1' */
  float64 INPUT_7_1_1[4];              /* '<S50>/INPUT_7_1_1' */
  float64 STATE_1[41];                 /* '<S50>/STATE_1' */
  float64 INPUT_1_1_1_Discrete[2];     /* '<S50>/INPUT_1_1_1' */
  float64 Delay2_DSTATE[2];            /* '<S3>/Delay2' */
  float64 Delay1_DSTATE[3];            /* '<S3>/Delay1' */
  float64 INPUT_2_1_1_Discrete[2];     /* '<S50>/INPUT_2_1_1' */
  float64 INPUT_3_1_1_Discrete[2];     /* '<S50>/INPUT_3_1_1' */
  float64 INPUT_4_1_1_Discrete[2];     /* '<S50>/INPUT_4_1_1' */
  float64 INPUT_5_1_1_Discrete[2];     /* '<S50>/INPUT_5_1_1' */
  float64 INPUT_6_1_1_Discrete[2];     /* '<S50>/INPUT_6_1_1' */
  float64 INPUT_7_1_1_Discrete[2];     /* '<S50>/INPUT_7_1_1' */
  float64 STATE_1_Discrete[23];        /* '<S50>/STATE_1' */
  float64 UnaryMinus;                  /* '<Root>/Unary Minus' */
  float64 Initial;                     /* '<S46>/Initial' */
  float64 Delay_DSTATE;                /* '<S1>/Delay' */
  float64 UnitDelay2_DSTATE;           /* '<S21>/Unit Delay2' */
  float64 DiscreteTimeIntegrator1_DSTATE;/* '<S46>/Discrete-Time Integrator1' */
  float64 UnitDelay_DSTATE;            /* '<S25>/Unit Delay' */
  float64 DiscreteTimeIntegrator_DSTATE;/* '<S25>/Discrete-Time Integrator' */
  float64 Delay_DSTATE_b;              /* '<S3>/Delay' */
  float64 UnitDelay_DSTATE_f;          /* '<S43>/Unit Delay' */
  float64 DiscreteTimeIntegrator_DSTATE_l;/* '<S43>/Discrete-Time Integrator' */
  float64 UnitDelay_DSTATE_k;          /* '<S26>/Unit Delay' */
  float64 DiscreteTimeIntegrator_DSTATE_p;/* '<S26>/Discrete-Time Integrator' */
  float64 OUTPUT_1_0_Discrete;         /* '<S50>/OUTPUT_1_0' */
  sint32 STATE_1_Modes[18];            /* '<S50>/STATE_1' */
  sint32 OUTPUT_1_0_Modes;             /* '<S50>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S50>/STATE_1' */
  void* STATE_1_SimData;               /* '<S50>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S50>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S50>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S50>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S50>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S50>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S50>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S50>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S50>/OUTPUT_1_0' */
  sint8 DiscreteTimeIntegrator1_PrevRes;/* '<S46>/Discrete-Time Integrator1' */
  sint8 DiscreteTimeIntegrator_PrevRese;/* '<S25>/Discrete-Time Integrator' */
  sint8 DiscreteTimeIntegrator_PrevRe_l;/* '<S43>/Discrete-Time Integrator' */
  sint8 DiscreteTimeIntegrator_PrevRe_d;/* '<S26>/Discrete-Time Integrator' */
  boolean Initial_FirstOutputTime;     /* '<S46>/Initial' */
  boolean STATE_1_FirstOutput;         /* '<S50>/STATE_1' */
  boolean OUTPUT_1_0_FirstOutput;      /* '<S50>/OUTPUT_1_0' */
  boolean Relay_Mode;                  /* '<S19>/Relay' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: faero
   * Referenced by: '<S1>/F_LOAD1'
   */
  float64 F_LOAD1_tableData[1000];

  /* Expression: speed
   * Referenced by: '<S1>/F_LOAD1'
   */
  float64 F_LOAD1_bp01Data[1000];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S24>/2-D Lookup Table Ld'
   *   '<S24>/2-D Lookup Table Lq'
   */
  float64 pooled9[4];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S24>/2-D Lookup Table Ld'
   *   '<S24>/2-D Lookup Table Lq'
   *   '<S24>/2-D Lookup Table Psim'
   */
  float64 pooled10[2];

  /* Expression: psimMatrix
   * Referenced by: '<S24>/2-D Lookup Table Psim'
   */
  float64 uDLookupTablePsim_tableData[4];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S24>/2-D Lookup Table Ld'
   *   '<S24>/2-D Lookup Table Lq'
   *   '<S24>/2-D Lookup Table Psim'
   */
  uint32 pooled16[2];
} ConstP;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32 clockTick0;
    uint32 clockTickH0;
    uint32 clockTick1;
    uint32 clockTickH1;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<Root>/Currents' : Unused code path elimination
 * Block '<Root>/Gates' : Unused code path elimination
 * Block '<S31>/Data Type Duplicate' : Unused code path elimination
 * Block '<S31>/Data Type Propagation' : Unused code path elimination
 * Block '<S32>/Data Type Duplicate' : Unused code path elimination
 * Block '<S32>/Data Type Propagation' : Unused code path elimination
 * Block '<S33>/Data Type Duplicate' : Unused code path elimination
 * Block '<S33>/Data Type Propagation' : Unused code path elimination
 * Block '<S34>/Data Type Duplicate' : Unused code path elimination
 * Block '<S34>/Data Type Propagation' : Unused code path elimination
 * Block '<S41>/Data Type Duplicate' : Unused code path elimination
 * Block '<S41>/Data Type Propagation' : Unused code path elimination
 * Block '<S45>/Data Type Conversion1' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Speed' : Unused code path elimination
 * Block '<S8>/Constant5' : Unused code path elimination
 * Block '<S8>/Constant6' : Unused code path elimination
 * Block '<S8>/Divide3' : Unused code path elimination
 * Block '<S8>/Divide4' : Unused code path elimination
 * Block '<Root>/Torque' : Unused code path elimination
 * Block '<Root>/Vehicle Speed ' : Unused code path elimination
 * Block '<S10>/Constant5' : Unused code path elimination
 * Block '<S10>/Constant6' : Unused code path elimination
 * Block '<S10>/Divide3' : Unused code path elimination
 * Block '<S10>/Divide4' : Unused code path elimination
 * Block '<Root>/rad//s2rpm' : Unused code path elimination
 * Block '<S24>/Switch' : Eliminated due to constant selection input
 * Block '<S27>/Multiport Switch' : Eliminated due to constant selection input
 * Block '<S27>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S37>/Switch' : Eliminated due to constant selection input
 * Block '<S38>/Switch' : Eliminated due to constant selection input
 * Block '<S39>/Gain' : Eliminated nontunable gain of 1
 * Block '<S44>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S46>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S46>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S45>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S45>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition2' : Eliminated since input and output rates are identical
 * Block '<Root>/ZOH//1' : Eliminated since input and output rates are identical
 * Block '<Root>/ZOH//2' : Eliminated since input and output rates are identical
 * Block '<Root>/ZOH//3' : Eliminated since input and output rates are identical
 * Block '<S24>/Constant' : Unused code path elimination
 * Block '<S24>/Zero vector' : Unused code path elimination
 * Block '<S27>/Abs' : Unused code path elimination
 * Block '<S27>/Abs1' : Unused code path elimination
 * Block '<S27>/Constant' : Unused code path elimination
 * Block '<S27>/Gain' : Unused code path elimination
 * Block '<S27>/Gain1' : Unused code path elimination
 * Block '<S27>/Math Function2' : Unused code path elimination
 * Block '<S27>/Math Function3' : Unused code path elimination
 * Block '<S30>/Constant1' : Unused code path elimination
 * Block '<S30>/Switch' : Unused code path elimination
 * Block '<S27>/Product' : Unused code path elimination
 * Block '<S27>/Product1' : Unused code path elimination
 * Block '<S33>/LowerRelop1' : Unused code path elimination
 * Block '<S33>/Switch' : Unused code path elimination
 * Block '<S33>/Switch2' : Unused code path elimination
 * Block '<S33>/UpperRelop' : Unused code path elimination
 * Block '<S34>/LowerRelop1' : Unused code path elimination
 * Block '<S34>/Switch' : Unused code path elimination
 * Block '<S34>/Switch2' : Unused code path elimination
 * Block '<S34>/UpperRelop' : Unused code path elimination
 * Block '<S27>/Sqrt1' : Unused code path elimination
 * Block '<S27>/Sum1' : Unused code path elimination
 * Block '<S37>/Constant' : Unused code path elimination
 * Block '<S37>/Lookup Table id reference' : Unused code path elimination
 * Block '<S37>/Lookup Table iq reference' : Unused code path elimination
 * Block '<S37>/rad//s->rpm' : Unused code path elimination
 * Block '<S38>/Constant' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'pe_pmsm_drive_project'
 * '<S1>'   : 'pe_pmsm_drive_project/Aerodynamic Torque'
 * '<S2>'   : 'pe_pmsm_drive_project/Encoder'
 * '<S3>'   : 'pe_pmsm_drive_project/PMSM controller'
 * '<S4>'   : 'pe_pmsm_drive_project/PS-Simulink Converter'
 * '<S5>'   : 'pe_pmsm_drive_project/RPM Demand'
 * '<S6>'   : 'pe_pmsm_drive_project/Simulink-PS Converter'
 * '<S7>'   : 'pe_pmsm_drive_project/Solver Configuration'
 * '<S8>'   : 'pe_pmsm_drive_project/Subsystem'
 * '<S9>'   : 'pe_pmsm_drive_project/Three-phase inverter'
 * '<S10>'  : 'pe_pmsm_drive_project/motor to vehicle '
 * '<S11>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter'
 * '<S12>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter1'
 * '<S13>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter2'
 * '<S14>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter/EVAL_KEY'
 * '<S15>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter1/EVAL_KEY'
 * '<S16>'  : 'pe_pmsm_drive_project/Encoder/PS-Simulink Converter2/EVAL_KEY'
 * '<S17>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control'
 * '<S18>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control'
 * '<S19>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Input interface'
 * '<S20>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control'
 * '<S21>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/PWM'
 * '<S22>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control'
 * '<S23>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/Park Transform'
 * '<S24>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/Feedforward pre-control'
 * '<S25>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI id'
 * '<S26>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/PI iq'
 * '<S27>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter'
 * '<S28>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization'
 * '<S29>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization1'
 * '<S30>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Prevent division by zero'
 * '<S31>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Saturation v1'
 * '<S32>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Saturation v2'
 * '<S33>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Saturation vd'
 * '<S34>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Saturation vq'
 * '<S35>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization/Compare To Constant'
 * '<S36>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Inner loop control/PMSM Current Controller with Pre-Control/d-q Voltage Limiter/Axis prioritization1/Compare To Constant'
 * '<S37>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator'
 * '<S38>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/Tq Selector'
 * '<S39>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller'
 * '<S40>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Torque limiter'
 * '<S41>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/PMSM Current Reference Generator/Torque limiter/Tq saturation'
 * '<S42>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Compare To Constant'
 * '<S43>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/Outer loop control/Velocity Controller/Discrete PI Controller'
 * '<S44>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/PWM/Inverse Park Transform'
 * '<S45>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)'
 * '<S46>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator'
 * '<S47>'  : 'pe_pmsm_drive_project/PMSM controller/PMSM Field-Oriented Control/PWM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation'
 * '<S48>'  : 'pe_pmsm_drive_project/PS-Simulink Converter/EVAL_KEY'
 * '<S49>'  : 'pe_pmsm_drive_project/Simulink-PS Converter/EVAL_KEY'
 * '<S50>'  : 'pe_pmsm_drive_project/Solver Configuration/EVAL_KEY'
 * '<S51>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G1'
 * '<S52>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G2'
 * '<S53>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G3'
 * '<S54>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G4'
 * '<S55>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G5'
 * '<S56>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G6'
 * '<S57>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G1/EVAL_KEY'
 * '<S58>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G2/EVAL_KEY'
 * '<S59>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G3/EVAL_KEY'
 * '<S60>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G4/EVAL_KEY'
 * '<S61>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G5/EVAL_KEY'
 * '<S62>'  : 'pe_pmsm_drive_project/Three-phase inverter/Simulink-PS G6/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_pe_pmsm_drive_project_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
