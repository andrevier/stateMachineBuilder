/*
 * load_from_files_1_sm_master_data.c
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

#include "load_from_files_1_sm_master.h"
#include "load_from_files_1_sm_master_private.h"

/* Block parameters (default storage) */
P_load_from_files_1_sm_master_T load_from_files_1_sm_master_P = {
  /* Variable: allEvents
   * Referenced by: '<S2>/MATLAB Function' (Parameter: allEvents)
   */
  { 1.0, 3.0, 11.0, 12.0, 13.0, 14.0, 16.0, 21.0, 23.0, 25.0, 27.0, 31.0, 32.0,
    33.0, 34.0, 36.0, 41.0, 43.0, 51.0, 52.0, 54.0, 56.0, 58.0, 61.0, 63.0 },

  /* Variable: encodedStates
   * Referenced by: '<S2>/MATLAB Function' (Parameter: encodedStates)
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Variable: transitions
   * Referenced by: '<S2>/MATLAB Function' (Parameter: transitions)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0,
    3.0, 4.0, 4.0, 5.0, 5.0, 31.0, 32.0, 33.0, 34.0, 36.0, 12.0, 14.0, 21.0,
    32.0, 34.0, 36.0, 14.0, 16.0, 25.0, 11.0, 31.0, 13.0, 33.0, 23.0, 27.0, 0.0,
    1.0, 0.0, 0.0, 2.0, 3.0, 3.0, 3.0, 3.0, 5.0, 4.0, 4.0, 4.0, 4.0, 1.0, 1.0,
    2.0, 1.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S6>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Data_width
   * Referenced by: '<S6>/S-Function' (Parameter: P1)
   */
  1.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S6>/S-Function' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Expression: InitialConditions
   * Referenced by: '<S6>/S-Function' (Parameter: P2)
   */
  11.0,

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S10>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S10>/S-Function' (Parameter: P1)
   */
  1.0
};
