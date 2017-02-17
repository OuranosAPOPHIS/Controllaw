/*
 * Control_data.c
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

/* Block parameters (auto storage) */
P_Control_T Control_P = {
  /*  Variable: ThDesired
   * Referenced by: '<S1>/Constant'
   */
  { 0.0, 0.52359877559829882, 0.0 },
  23.80952380952381,                   /* Variable: Thcmd
                                        * Referenced by: '<S2>/Saturation'
                                        */
  18.0,                                /* Variable: mass
                                        * Referenced by: '<S2>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/+Z is not Yaw'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S2>/+X is -P'
                                        */

  /*  Expression: [ .1 ; 1 ; .075]
   * Referenced by: '<S1>/KpR'
   */
  { 0.1, 1.0, 0.075 },

  /*  Expression: [1; 1; 2]
   * Referenced by: '<S1>/KpR1'
   */
  { 1.0, 1.0, 2.0 },

  /*  Expression: [ Kp; Kp; Kp ]
   * Referenced by: '<S1>/KpTh'
   */
  { 2.099749438822144, 2.099749438822144, 2.099749438822144 },

  /*  Expression: [ Kd ; Kd; Kd ]
   * Referenced by: '<S1>/KpTh1 '
   */
  { 4.0, 4.0, 4.0 },
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain'
                                        */
  1U                                   /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch'
                                        */
};
