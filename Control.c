/*
 * Control.c
 *
 * Code generation for model "Control".
 *
 * Model version              : 1.99
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Fri Feb 17 15:14:21 2017
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Control.h"
#include "Control_private.h"

/* Block states (auto storage) */
DW_Control_T Control_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Control_T Control_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Control_T Control_Y;

/* Real-time model */
RT_MODEL_Control_T Control_M_;
RT_MODEL_Control_T *const Control_M = &Control_M_;

/* Model step function */
void Control_step(void)
{
  /* local block i/o variables */
  real_T rtb_Gain[3];
  real_T y;
  real_T rtb_u;
  real_T rtb_KpR1;
  real_T rtb_KpR1_idx_1;
  real_T rtb_KpR1_idx_0;

  /* Outport: '<Root>/rdotactualOut' incorporates:
   *  Inport: '<Root>/rdotactual'
   */
  Control_Y.rdotactualOut[0] = Control_U.rdotactual[0];

  /* Gain: '<S1>/KpR1' incorporates:
   *  Gain: '<S1>/KpR'
   *  Inport: '<Root>/ractual'
   *  Inport: '<Root>/rdesired'
   *  Inport: '<Root>/rdotactual'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   */
  rtb_KpR1 = ((Control_U.rdesired[0] - Control_U.ractual[0]) *
              Control_P.KpR_Gain[0] - Control_U.rdotactual[0]) *
    Control_P.KpR1_Gain[0];

  /* Outport: '<Root>/rdotdotDesired' */
  Control_Y.rdotdotDesired[0] = rtb_KpR1;

  /* Outport: '<Root>/Thact' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  Control_Y.Thact[0] = Control_U.Thactual[0];

  /* Outport: '<Root>/ThdotActualOut ' incorporates:
   *  Inport: '<Root>/ThdotActual'
   */
  Control_Y.ThdotActualOut[0] = Control_U.ThdotActual[0];

  /* Gain: '<S1>/KpR1' */
  rtb_KpR1_idx_0 = rtb_KpR1;

  /* Outport: '<Root>/rdotactualOut' incorporates:
   *  Inport: '<Root>/rdotactual'
   */
  Control_Y.rdotactualOut[1] = Control_U.rdotactual[1];

  /* Gain: '<S1>/KpR1' incorporates:
   *  Gain: '<S1>/KpR'
   *  Inport: '<Root>/ractual'
   *  Inport: '<Root>/rdesired'
   *  Inport: '<Root>/rdotactual'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   */
  rtb_KpR1 = ((Control_U.rdesired[1] - Control_U.ractual[1]) *
              Control_P.KpR_Gain[1] - Control_U.rdotactual[1]) *
    Control_P.KpR1_Gain[1];

  /* Outport: '<Root>/rdotdotDesired' */
  Control_Y.rdotdotDesired[1] = rtb_KpR1;

  /* Outport: '<Root>/Thact' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  Control_Y.Thact[1] = Control_U.Thactual[1];

  /* Outport: '<Root>/ThdotActualOut ' incorporates:
   *  Inport: '<Root>/ThdotActual'
   */
  Control_Y.ThdotActualOut[1] = Control_U.ThdotActual[1];

  /* Gain: '<S1>/KpR1' */
  rtb_KpR1_idx_1 = rtb_KpR1;

  /* Outport: '<Root>/rdotactualOut' incorporates:
   *  Inport: '<Root>/rdotactual'
   */
  Control_Y.rdotactualOut[2] = Control_U.rdotactual[2];

  /* Gain: '<S1>/KpR1' incorporates:
   *  Gain: '<S1>/KpR'
   *  Inport: '<Root>/ractual'
   *  Inport: '<Root>/rdesired'
   *  Inport: '<Root>/rdotactual'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   */
  rtb_KpR1 = ((Control_U.rdesired[2] - Control_U.ractual[2]) *
              Control_P.KpR_Gain[2] - Control_U.rdotactual[2]) *
    Control_P.KpR1_Gain[2];

  /* Outport: '<Root>/rdotdotDesired' */
  Control_Y.rdotdotDesired[2] = rtb_KpR1;

  /* Outport: '<Root>/Thact' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  Control_Y.Thact[2] = Control_U.Thactual[2];

  /* Outport: '<Root>/ThdotActualOut ' incorporates:
   *  Inport: '<Root>/ThdotActual'
   */
  Control_Y.ThdotActualOut[2] = Control_U.ThdotActual[2];

  /* ManualSwitch: '<S1>/Manual Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  Product: '<S2>/Product'
   *  Product: '<S2>/mass'
   */
  if (Control_P.ManualSwitch_CurrentSetting == 1) {
    /* Sqrt: '<S2>/Sqrt' incorporates:
     *  DotProduct: '<S2>/Dot Product'
     *  Inport: '<Root>/Thrust '
     */
    rtb_u = sqrt((Control_U.Thrust[0] * Control_U.Thrust[0] + Control_U.Thrust[1]
                  * Control_U.Thrust[1]) + Control_U.Thrust[2] *
                 Control_U.Thrust[2]);
    rtb_KpR1_idx_0 = rtb_KpR1_idx_0 * Control_P.mass / rtb_u;
    rtb_KpR1_idx_1 = rtb_KpR1_idx_1 * Control_P.mass / rtb_u;

    /* Product: '<S2>/Product' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S2>/mass'
     */
    rtb_KpR1 = rtb_KpR1 * Control_P.mass / rtb_u;

    /* Saturate: '<S2>/Saturation' */
    rtb_u = Control_P.Thcmd * 3.1415926535897931 / 180.0;
    y = -Control_P.Thcmd * 3.1415926535897931 / 180.0;
    if (rtb_KpR1_idx_1 > rtb_u) {
      rtb_Gain[0] = rtb_u;
    } else if (rtb_KpR1_idx_1 < y) {
      rtb_Gain[0] = y;
    } else {
      rtb_Gain[0] = rtb_KpR1_idx_1;
    }

    /* Gain: '<S2>/+X is -P' */
    rtb_KpR1_idx_0 *= Control_P.XisP_Gain;

    /* Saturate: '<S2>/Saturation' */
    if (rtb_KpR1_idx_0 > rtb_u) {
      rtb_Gain[1] = rtb_u;
    } else if (rtb_KpR1_idx_0 < y) {
      rtb_Gain[1] = y;
    } else {
      rtb_Gain[1] = rtb_KpR1_idx_0;
    }

    /* Gain: '<S2>/+Z is not Yaw' */
    rtb_KpR1_idx_0 = Control_P.ZisnotYaw_Gain * rtb_KpR1;

    /* Saturate: '<S2>/Saturation' */
    if (rtb_KpR1_idx_0 > rtb_u) {
      rtb_Gain[2] = rtb_u;
    } else if (rtb_KpR1_idx_0 < y) {
      rtb_Gain[2] = y;
    } else {
      rtb_Gain[2] = rtb_KpR1_idx_0;
    }
  } else {
    rtb_Gain[0] = Control_P.ThDesired[0];
    rtb_Gain[1] = Control_P.ThDesired[1];
    rtb_Gain[2] = Control_P.ThDesired[2];
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Sum: '<S1>/Sum2' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  rtb_Gain[0] -= Control_U.Thactual[0];

  /* Outport: '<Root>/ThDotDot' incorporates:
   *  Gain: '<S1>/KpTh'
   *  Gain: '<S1>/KpTh1 '
   *  Inport: '<Root>/ThdotActual'
   *  Sum: '<S1>/Sum3'
   */
  Control_Y.ThDotDot[0] = (Control_P.KpTh_Gain[0] * rtb_Gain[0] -
    Control_U.ThdotActual[0]) * Control_P.KpTh1_Gain[0];

  /* Gain: '<S1>/Gain' */
  rtb_Gain[0] *= Control_P.Gain_Gain;

  /* Sum: '<S1>/Sum2' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  rtb_Gain[1] -= Control_U.Thactual[1];

  /* Outport: '<Root>/ThDotDot' incorporates:
   *  Gain: '<S1>/KpTh'
   *  Gain: '<S1>/KpTh1 '
   *  Inport: '<Root>/ThdotActual'
   *  Sum: '<S1>/Sum3'
   */
  Control_Y.ThDotDot[1] = (Control_P.KpTh_Gain[1] * rtb_Gain[1] -
    Control_U.ThdotActual[1]) * Control_P.KpTh1_Gain[1];

  /* Gain: '<S1>/Gain' */
  rtb_Gain[1] *= Control_P.Gain_Gain;

  /* Sum: '<S1>/Sum2' incorporates:
   *  Inport: '<Root>/Thactual'
   */
  rtb_Gain[2] -= Control_U.Thactual[2];

  /* Outport: '<Root>/ThDotDot' incorporates:
   *  Gain: '<S1>/KpTh'
   *  Gain: '<S1>/KpTh1 '
   *  Inport: '<Root>/ThdotActual'
   *  Sum: '<S1>/Sum3'
   */
  Control_Y.ThDotDot[2] = (Control_P.KpTh_Gain[2] * rtb_Gain[2] -
    Control_U.ThdotActual[2]) * Control_P.KpTh1_Gain[2];

  /* Gain: '<S1>/Gain' */
  rtb_Gain[2] *= Control_P.Gain_Gain;

  /* Matfile logging */
  rt_UpdateTXYLogVars(Control_M->rtwLogInfo, (&Control_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(Control_M)!=-1) &&
        !((rtmGetTFinal(Control_M)-Control_M->Timing.taskTime0) >
          Control_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Control_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Control_M->Timing.clockTick0)) {
    ++Control_M->Timing.clockTickH0;
  }

  Control_M->Timing.taskTime0 = Control_M->Timing.clockTick0 *
    Control_M->Timing.stepSize0 + Control_M->Timing.clockTickH0 *
    Control_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Control_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Control_M, 0,
                sizeof(RT_MODEL_Control_T));
  rtmSetTFinal(Control_M, 100.0);
  Control_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Control_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Control_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Control_M->rtwLogInfo, (NULL));
    rtliSetLogT(Control_M->rtwLogInfo, "tout");
    rtliSetLogX(Control_M->rtwLogInfo, "");
    rtliSetLogXFinal(Control_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Control_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Control_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Control_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(Control_M->rtwLogInfo, 1);
    rtliSetLogY(Control_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Control_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Control_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&Control_DW, 0,
                sizeof(DW_Control_T));

  /* external inputs */
  (void) memset((void *)&Control_U, 0,
                sizeof(ExtU_Control_T));

  /* external outputs */
  (void) memset((void *)&Control_Y, 0,
                sizeof(ExtY_Control_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Control_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Control_M), Control_M->Timing.stepSize0, (&rtmGetErrorStatus(Control_M)));
}

/* Model terminate function */
void Control_terminate(void)
{
  /* (no terminate code required) */
}
