/*
 * Control_private.h
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

#ifndef RTW_HEADER_Control_private_h_
#define RTW_HEADER_Control_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif
#endif                                 /* RTW_HEADER_Control_private_h_ */
