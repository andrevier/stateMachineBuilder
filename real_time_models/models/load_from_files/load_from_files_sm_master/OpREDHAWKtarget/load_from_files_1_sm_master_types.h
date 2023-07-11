/*
 * load_from_files_1_sm_master_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "load_from_files_1_sm_master".
 *
 * Model version              : 13.7
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sun Jul  9 16:34:31 2023
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_load_from_files_1_sm_master_types_h_
#define RTW_HEADER_load_from_files_1_sm_master_types_h_
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

#ifndef typedef_State_load_from_files_1_sm_ma_T
#define typedef_State_load_from_files_1_sm_ma_T

typedef struct tag_67C1k64N2EVOgAR75MP2KB State_load_from_files_1_sm_ma_T;

#endif                             /* typedef_State_load_from_files_1_sm_ma_T */

#ifndef struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D
#define struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D

struct tag_T0SHRaKYmzw5Uu8xB7Jh1D
{
  State_load_from_files_1_sm_ma_T statesArray[6];
  int32_T transitions[60];
  State_load_from_files_1_sm_ma_T currentState;
};

#endif                                 /* struct_tag_T0SHRaKYmzw5Uu8xB7Jh1D */

#ifndef typedef_StateMachine_load_from_files__T
#define typedef_StateMachine_load_from_files__T

typedef struct tag_T0SHRaKYmzw5Uu8xB7Jh1D StateMachine_load_from_files__T;

#endif                             /* typedef_StateMachine_load_from_files__T */

/* Parameters (default storage) */
typedef struct P_load_from_files_1_sm_master_T_ P_load_from_files_1_sm_master_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_load_from_files_1_sm_master_T
  RT_MODEL_load_from_files_1_sm_master_T;

#endif                     /* RTW_HEADER_load_from_files_1_sm_master_types_h_ */
