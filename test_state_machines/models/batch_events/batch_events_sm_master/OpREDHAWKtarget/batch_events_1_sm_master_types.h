/*
 * batch_events_1_sm_master_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "batch_events_1_sm_master".
 *
 * Model version              : 13.9
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Mon Jul 10 09:36:39 2023
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_batch_events_1_sm_master_types_h_
#define RTW_HEADER_batch_events_1_sm_master_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLAB Function: '<S2>/MATLAB Function' */
#ifndef struct_tag_67C1k64N2EVOgAR75MP2KB
#define struct_tag_67C1k64N2EVOgAR75MP2KB

struct tag_67C1k64N2EVOgAR75MP2KB
{
  int32_T number;
};

#endif                                 /* struct_tag_67C1k64N2EVOgAR75MP2KB */

#ifndef typedef_State_batch_events_1_sm_maste_T
#define typedef_State_batch_events_1_sm_maste_T

typedef struct tag_67C1k64N2EVOgAR75MP2KB State_batch_events_1_sm_maste_T;

#endif                             /* typedef_State_batch_events_1_sm_maste_T */

#ifndef struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D
#define struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D

struct tag_T0SHRaKYmzw5Uu8xB7Jh1D
{
  State_batch_events_1_sm_maste_T statesArray[6];
  int32_T transitions[60];
  State_batch_events_1_sm_maste_T currentState;
};

#endif                                 /* struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D */

#ifndef typedef_StateMachine_batch_events_1_s_T
#define typedef_StateMachine_batch_events_1_s_T

typedef struct tag_T0SHRaKYmzw5Uu8xB7Jh1D StateMachine_batch_events_1_s_T;

#endif                             /* typedef_StateMachine_batch_events_1_s_T */

/* Parameters (default storage) */
typedef struct P_batch_events_1_sm_master_T_ P_batch_events_1_sm_master_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_batch_events_1_sm_master_T
  RT_MODEL_batch_events_1_sm_master_T;

#endif                        /* RTW_HEADER_batch_events_1_sm_master_types_h_ */
