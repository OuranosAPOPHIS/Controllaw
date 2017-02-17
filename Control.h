/*
 * Control.h
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

#ifndef RTW_HEADER_Control_h_
#define RTW_HEADER_Control_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Control_COMMON_INCLUDES_
# define Control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Control_COMMON_INCLUDES_ */

#include "Control_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */
} DW_Control_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T rdesired[3];                  /* '<Root>/rdesired' */
  real_T ractual[3];                   /* '<Root>/ractual' */
  real_T rdotactual[3];                /* '<Root>/rdotactual' */
  real_T ThdotActual[3];               /* '<Root>/ThdotActual' */
  real_T Thactual[3];                  /* '<Root>/Thactual' */
  real_T Thrust[3];                    /* '<Root>/Thrust ' */
} ExtU_Control_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T rdotactualOut[3];             /* '<Root>/rdotactualOut' */
  real_T rdotdotDesired[3];            /* '<Root>/rdotdotDesired' */
  real_T Thact[3];                     /* '<Root>/Thact' */
  real_T ThdotActualOut[3];            /* '<Root>/ThdotActualOut ' */
  real_T ThDotDot[3];                  /* '<Root>/ThDotDot' */
} ExtY_Control_T;

/* Parameters (auto storage) */
struct P_Control_T_ {
  real_T ThDesired[3];                 /* Variable: ThDesired
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Thcmd;                        /* Variable: Thcmd
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T mass;                         /* Variable: mass
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T ZisnotYaw_Gain;               /* Expression: 0
                                        * Referenced by: '<S2>/+Z is not Yaw'
                                        */
  real_T XisP_Gain;                    /* Expression: -1
                                        * Referenced by: '<S2>/+X is -P'
                                        */
  real_T KpR_Gain[3];                  /* Expression: [ .1 ; 1 ; .075]
                                        * Referenced by: '<S1>/KpR'
                                        */
  real_T KpR1_Gain[3];                 /* Expression: [1; 1; 2]
                                        * Referenced by: '<S1>/KpR1'
                                        */
  real_T KpTh_Gain[3];                 /* Expression: [ Kp; Kp; Kp ]
                                        * Referenced by: '<S1>/KpTh'
                                        */
  real_T KpTh1_Gain[3];                /* Expression: [ Kd ; Kd; Kd ]
                                        * Referenced by: '<S1>/KpTh1 '
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Control_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Control_T Control_P;

/* Block states (auto storage) */
extern DW_Control_T Control_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Control_T Control_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Control_T Control_Y;

/* Model entry point functions */
extern void Control_initialize(void);
extern void Control_step(void);
extern void Control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Control_T *const Control_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('AirControllerActuatorModelled/Control Law')    - opens subsystem AirControllerActuatorModelled/Control Law
 * hilite_system('AirControllerActuatorModelled/Control Law/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AirControllerActuatorModelled'
 * '<S1>'   : 'AirControllerActuatorModelled/Control Law'
 * '<S2>'   : 'AirControllerActuatorModelled/Control Law/Rdotdot to ThDesired'
 */
#endif                                 /* RTW_HEADER_Control_h_ */
