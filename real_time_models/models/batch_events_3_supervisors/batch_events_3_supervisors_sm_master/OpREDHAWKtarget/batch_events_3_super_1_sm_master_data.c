/*
 * batch_events_3_super_1_sm_master_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "batch_events_3_super_1_sm_master".
 *
 * Model version              : 13.16
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Jul 11 11:05:07 2023
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "batch_events_3_super_1_sm_master.h"
#include "batch_events_3_super_1_sm_master_private.h"

/* Block parameters (default storage) */
P_batch_events_3_super_1_sm_master_T batch_events_3_super_1_sm_master_P = {
  /* Variable: allEvents1
   * Referenced by: '<S2>/MATLAB Function1' (Parameter: allEvents1)
   */
  { 1.0, 3.0, 11.0, 12.0, 13.0, 14.0, 16.0, 21.0, 23.0, 25.0, 27.0, 31.0, 32.0,
    33.0, 34.0, 36.0, 41.0, 43.0, 51.0, 52.0, 54.0, 56.0, 58.0, 61.0, 63.0 },

  /* Variable: allEvents2
   * Referenced by: '<S2>/MATLAB Function4' (Parameter: allEvents2)
   */
  { 1.0, 3.0, 11.0, 12.0, 13.0, 14.0, 16.0, 21.0, 23.0, 25.0, 27.0, 31.0, 32.0,
    33.0, 34.0, 36.0, 41.0, 43.0, 51.0, 52.0, 54.0, 56.0, 58.0, 61.0, 63.0 },

  /* Variable: allEvents3
   * Referenced by: '<S2>/MATLAB Function5' (Parameter: allEvents3)
   */
  { 1.0, 3.0, 11.0, 12.0, 13.0, 14.0, 16.0, 21.0, 23.0, 25.0, 27.0, 31.0, 32.0,
    33.0, 34.0, 36.0, 41.0, 43.0, 51.0, 52.0, 54.0, 56.0, 58.0, 61.0, 63.0 },

  /* Variable: encodedStates1
   * Referenced by: '<S2>/MATLAB Function1' (Parameter: encodedStates1)
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

  /* Variable: encodedStates2
   * Referenced by: '<S2>/MATLAB Function4' (Parameter: encodedStates2)
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Variable: encodedStates3
   * Referenced by: '<S2>/MATLAB Function5' (Parameter: encodedStates3)
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Variable: transitions1
   * Referenced by: '<S2>/MATLAB Function1' (Parameter: transitions1)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0,
    3.0, 4.0, 4.0, 5.0, 5.0, 31.0, 32.0, 33.0, 34.0, 36.0, 12.0, 14.0, 21.0,
    32.0, 34.0, 36.0, 14.0, 16.0, 25.0, 11.0, 31.0, 13.0, 33.0, 23.0, 27.0, 0.0,
    1.0, 0.0, 0.0, 2.0, 3.0, 3.0, 3.0, 3.0, 5.0, 4.0, 4.0, 4.0, 4.0, 1.0, 1.0,
    2.0, 1.0, 0.0, 0.0 },

  /* Variable: transitions2
   * Referenced by: '<S2>/MATLAB Function4' (Parameter: transitions2)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 2.0,
    2.0, 3.0, 3.0, 3.0, 3.0, 4.0, 11.0, 13.0, 14.0, 16.0, 31.0, 33.0, 11.0, 12.0,
    13.0, 14.0, 13.0, 14.0, 16.0, 32.0, 34.0, 36.0, 1.0, 12.0, 14.0, 16.0, 3.0,
    1.0, 0.0, 0.0, 0.0, 2.0, 2.0, 3.0, 3.0, 3.0, 0.0, 2.0, 2.0, 2.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 4.0, 1.0, 0.0 },

  /* Variable: transitions3
   * Referenced by: '<S2>/MATLAB Function5' (Parameter: transitions3)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 2.0,
    2.0, 3.0, 3.0, 3.0, 3.0, 4.0, 11.0, 12.0, 13.0, 14.0, 31.0, 33.0, 11.0, 13.0,
    14.0, 16.0, 11.0, 12.0, 14.0, 32.0, 34.0, 36.0, 12.0, 14.0, 16.0, 41.0, 43.0,
    0.0, 0.0, 1.0, 0.0, 2.0, 2.0, 3.0, 3.0, 0.0, 3.0, 2.0, 2.0, 2.0, 0.0, 0.0,
    0.0, 1.0, 4.0, 1.0, 1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]
   * Referenced by: '<S2>/all events' (Parameter: Value)
   */
  { 1.0, 3.0, 11.0, 12.0, 13.0, 14.0, 16.0, 21.0, 23.0, 25.0, 27.0, 31.0, 32.0,
    33.0, 34.0, 36.0, 41.0, 43.0, 51.0, 52.0, 54.0, 56.0, 58.0, 61.0, 63.0 },

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S11>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Data_width
   * Referenced by: '<S11>/S-Function' (Parameter: P1)
   */
  9.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S11>/S-Function' (Parameter: P2Size)
   */
  { 9.0, 1.0 },

  /* Expression: InitialConditions
   * Referenced by: '<S11>/S-Function' (Parameter: P2)
   */
  { 14.0, 23.0, 36.0, 14.0, 32.0, 36.0, 14.0, 32.0, 36.0 },

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S17>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S17>/S-Function' (Parameter: P1)
   */
  1.0
};
