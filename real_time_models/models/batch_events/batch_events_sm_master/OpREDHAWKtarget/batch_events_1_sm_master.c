/*
 * batch_events_1_sm_master.c
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

#include "batch_events_1_sm_master.h"
#include "batch_events_1_sm_master_private.h"

/* Named constants for MATLAB Function: '<S2>/MATLAB Function' */
#define batch_events_1_sm_ma_CALL_EVENT (-1)

/* Block signals (default storage) */
B_batch_events_1_sm_master_T batch_events_1_sm_master_B;

/* Block states (default storage) */
DW_batch_events_1_sm_master_T batch_events_1_sm_master_DW;

/* Real-time model */
static RT_MODEL_batch_events_1_sm_master_T batch_events_1_sm_master_M_;
RT_MODEL_batch_events_1_sm_master_T *const batch_events_1_sm_master_M =
  &batch_events_1_sm_master_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model output function */
static void batch_events_1_sm_master_output(void)
{
  State_batch_events_1_sm_maste_T statesArray[6];
  real_T absx;
  int32_T c_data[25];
  int32_T e_data[20];
  int32_T iloc[3];
  int32_T stateEventPair[2];
  int32_T b_i;
  int32_T b_j;
  int32_T b_k;
  int32_T exponent;
  int32_T j;
  int32_T k;
  boolean_T tf[20];
  boolean_T b_p;
  boolean_T rowmatch;
  static const int32_T f[3] = { 0, 1, 2 };

  static const int32_T g[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19 };

  static const int32_T h[2] = { 0, 1 };

  real_T tmp_0;
  real_T tmp_2;
  real_T tmp_4;
  real_T tmp_6;
  real_T tmp_8;
  real_T tmp_a;
  real_T tmp_c;
  real_T tmp_e;
  int32_T tmp_data[60];
  int32_T tmp_size[2];
  int32_T tmp_size_0[2];
  int32_T d_size;
  int32_T e_size;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T i_3;
  int32_T loop_ub;
  int32_T tmp;
  int32_T tmp_1;
  int32_T tmp_3;
  int32_T tmp_5;
  int32_T tmp_7;
  int32_T tmp_9;
  int32_T tmp_b;
  int32_T tmp_d;
  boolean_T exitg1;

  /* Memory: '<S1>/S-Function' */
  batch_events_1_sm_master_B.SFunction =
    batch_events_1_sm_master_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  batch_events_1_sm_master_B.Sum = batch_events_1_sm_master_P.SFunction1_Value +
    batch_events_1_sm_master_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (batch_events_1_sm_master_B.Sum != 0.0) {
    rtmSetStopRequested(batch_events_1_sm_master_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* S-Function (RECV_Param): '<S7>/S-Function' */

  /* Level2 S-Function Block: '<S7>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<S2>/MATLAB Function1' */
  /* MATLAB Function 'SM_master/MATLAB Function1': '<S4>:1' */
  /* '<S4>:1:3' */
  iloc[0] = 0;
  iloc[1] = 0;
  iloc[2] = 0;
  j = 1 + 0;
  b_k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (b_k < 25)) {
    k = 1 + b_k;
    absx = fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = (rtNaN);
    }

    if ((fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] -
              batch_events_1_sm_master_B.SFunction_n[j - 1]) < absx) || (rtIsInf
         (batch_events_1_sm_master_B.SFunction_n[j - 1]) && rtIsInf
         (batch_events_1_sm_master_P.allevents_Value[k - 1]) &&
         ((batch_events_1_sm_master_B.SFunction_n[j - 1] > 0.0) ==
          (batch_events_1_sm_master_P.allevents_Value[k - 1] > 0.0)))) {
      rowmatch = true;
    } else {
      rowmatch = false;
    }

    if (rowmatch) {
      iloc[j - 1] = k;
      exitg1 = true;
    } else {
      b_k = b_k + 1;
    }
  }

  j = 1 + 1;
  b_k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (b_k < 25)) {
    k = 1 + b_k;
    absx = fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = (rtNaN);
    }

    if ((fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] -
              batch_events_1_sm_master_B.SFunction_n[j - 1]) < absx) || (rtIsInf
         (batch_events_1_sm_master_B.SFunction_n[j - 1]) && rtIsInf
         (batch_events_1_sm_master_P.allevents_Value[k - 1]) &&
         ((batch_events_1_sm_master_B.SFunction_n[j - 1] > 0.0) ==
          (batch_events_1_sm_master_P.allevents_Value[k - 1] > 0.0)))) {
      rowmatch = true;
    } else {
      rowmatch = false;
    }

    if (rowmatch) {
      iloc[j - 1] = k;
      exitg1 = true;
    } else {
      b_k = b_k + 1;
    }
  }

  j = 1 + (1 << 1);
  b_k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (b_k < 25)) {
    k = 1 + b_k;
    absx = fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = (rtNaN);
    }

    if ((fabs(batch_events_1_sm_master_P.allevents_Value[k - 1] -
              batch_events_1_sm_master_B.SFunction_n[j - 1]) < absx) || (rtIsInf
         (batch_events_1_sm_master_B.SFunction_n[j - 1]) && rtIsInf
         (batch_events_1_sm_master_P.allevents_Value[k - 1]) &&
         ((batch_events_1_sm_master_B.SFunction_n[j - 1] > 0.0) ==
          (batch_events_1_sm_master_P.allevents_Value[k - 1] > 0.0)))) {
      rowmatch = true;
    } else {
      rowmatch = false;
    }

    if (rowmatch) {
      iloc[j - 1] = k;
      exitg1 = true;
    } else {
      b_k = b_k + 1;
    }
  }

  /* '<S4>:1:5' */
  for (i = 0; i < 25; i = i + 1) {
    batch_events_1_sm_master_B.eventsArray[i] = 0.0;
  }

  /* '<S4>:1:7' */
  batch_events_1_sm_master_B.eventsArray[(int32_T)(real_T)iloc[0] - 1] = 1.0;
  batch_events_1_sm_master_B.eventsArray[(int32_T)(real_T)iloc[1] - 1] = 1.0;
  batch_events_1_sm_master_B.eventsArray[(int32_T)(real_T)iloc[2] - 1] = 1.0;

  /* End of MATLAB Function: '<S2>/MATLAB Function1' */

  /* MATLAB Function: '<S2>/MATLAB Function' */
  /* MATLAB Function 'SM_master/MATLAB Function': '<S3>:1' */
  if (!batch_events_1_sm_master_DW.stateMachine_not_empty) {
    /* '<S3>:1:18' */
    /* '<S3>:1:20' */
    tmp_a = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[0]);
    if (tmp_a < 2.147483648E+9) {
      if (tmp_a >= -2.147483648E+9) {
        tmp_9 = (int32_T)tmp_a;
      } else {
        tmp_9 = MIN_int32_T;
      }
    } else {
      tmp_9 = MAX_int32_T;
    }

    statesArray[0].number = tmp_9;
    tmp_8 = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[1]);
    if (tmp_8 < 2.147483648E+9) {
      if (tmp_8 >= -2.147483648E+9) {
        tmp_7 = (int32_T)tmp_8;
      } else {
        tmp_7 = MIN_int32_T;
      }
    } else {
      tmp_7 = MAX_int32_T;
    }

    statesArray[1].number = tmp_7;
    tmp_6 = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[2]);
    if (tmp_6 < 2.147483648E+9) {
      if (tmp_6 >= -2.147483648E+9) {
        tmp_5 = (int32_T)tmp_6;
      } else {
        tmp_5 = MIN_int32_T;
      }
    } else {
      tmp_5 = MAX_int32_T;
    }

    statesArray[2].number = tmp_5;
    tmp_4 = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[3]);
    if (tmp_4 < 2.147483648E+9) {
      if (tmp_4 >= -2.147483648E+9) {
        tmp_3 = (int32_T)tmp_4;
      } else {
        tmp_3 = MIN_int32_T;
      }
    } else {
      tmp_3 = MAX_int32_T;
    }

    statesArray[3].number = tmp_3;
    tmp_2 = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[4]);
    if (tmp_2 < 2.147483648E+9) {
      if (tmp_2 >= -2.147483648E+9) {
        tmp_1 = (int32_T)tmp_2;
      } else {
        tmp_1 = MIN_int32_T;
      }
    } else {
      tmp_1 = MAX_int32_T;
    }

    statesArray[4].number = tmp_1;
    tmp_0 = rt_roundd_snf(batch_events_1_sm_master_P.encodedStates1[5]);
    if (tmp_0 < 2.147483648E+9) {
      if (tmp_0 >= -2.147483648E+9) {
        tmp = (int32_T)tmp_0;
      } else {
        tmp = MIN_int32_T;
      }
    } else {
      tmp = MAX_int32_T;
    }

    statesArray[5].number = tmp;
    for (i_0 = 0; i_0 < 6; i_0 = i_0 + 1) {
      batch_events_1_sm_master_DW.stateMachine.statesArray[i_0] =
        statesArray[i_0];
    }

    for (i_1 = 0; i_1 < 60; i_1 = i_1 + 1) {
      tmp_c = rt_roundd_snf(batch_events_1_sm_master_P.transitions1[i_1]);
      if (tmp_c < 2.147483648E+9) {
        if (tmp_c >= -2.147483648E+9) {
          tmp_b = (int32_T)tmp_c;
        } else {
          tmp_b = MIN_int32_T;
        }
      } else {
        tmp_b = MAX_int32_T;
      }

      batch_events_1_sm_master_DW.stateMachine.transitions[i_1] = tmp_b;
    }

    batch_events_1_sm_master_DW.stateMachine.currentState = statesArray[0];
    batch_events_1_sm_master_DW.stateMachine_not_empty = true;
  }

  exponent = 0;
  for (b_i = 0; b_i < 25; b_i = b_i + 1) {
    if (batch_events_1_sm_master_B.eventsArray[b_i] != 0.0) {
      /* '<S3>:1:23' */
      exponent = exponent + 1;
    }
  }

  exponent = (int32_T)(((real_T)exponent + 0.0) / 1.0);

  /* '<S3>:1:26' */
  for (b_i = 0; b_i < exponent; b_i = b_i + 1) {
    /* '<S3>:1:26' */
    b_j = 0;
    for (j = 0; j < 25; j = j + 1) {
      if (batch_events_1_sm_master_B.eventsArray[j] != 0.0) {
        /* '<S3>:1:23' */
        c_data[b_j] = j + 1;
        b_j = b_j + 1;
      }
    }

    stateEventPair[0] =
      batch_events_1_sm_master_DW.stateMachine.currentState.number;
    tmp_e = rt_roundd_snf(batch_events_1_sm_master_P.allEvents1[c_data[(int32_T)
                          ((real_T)b_i * 1.0 + 1.0) - 1] - 1]);
    if (tmp_e < 2.147483648E+9) {
      if (tmp_e >= -2.147483648E+9) {
        tmp_d = (int32_T)tmp_e;
      } else {
        tmp_d = MIN_int32_T;
      }
    } else {
      tmp_d = MAX_int32_T;
    }

    stateEventPair[1] = tmp_d;
    for (b_k = 0; b_k < 20; b_k = b_k + 1) {
      k = b_k + 1;
      tf[k - 1] = false;
      rowmatch = true;
      b_j = 0;
      exitg1 = false;
      while ((exitg1 == false) && (b_j < 2)) {
        j = b_j + 1;
        if (!(batch_events_1_sm_master_DW.stateMachine.transitions[g[k - 1] + 20
              * h[j - 1]] == stateEventPair[j - 1])) {
          rowmatch = false;
          exitg1 = true;
        } else {
          b_j = b_j + 1;
        }
      }

      if (rowmatch) {
        tf[k - 1] = true;
      }
    }

    b_j = 0;
    for (j = 0; j < 20; j = j + 1) {
      if (tf[j]) {
        b_j = b_j + 1;
      }
    }

    d_size = b_j;
    tmp_size[0] = d_size;
    tmp_size[1] = 3;
    if (!((tmp_size[0] == 0) || 0)) {
      b_j = 0;
      for (j = 0; j < 20; j = j + 1) {
        if (tf[j]) {
          b_j = b_j + 1;
        }
      }

      e_size = b_j;
      b_j = 0;
      for (j = 0; j < 20; j = j + 1) {
        if (tf[j]) {
          e_data[b_j] = j + 1;
          b_j = b_j + 1;
        }
      }

      tmp_size_0[0] = e_size;
      tmp_size_0[1] = 3;
      for (i_3 = 0; i_3 < 3; i_3 = i_3 + 1) {
        loop_ub = e_size - 1;
        for (i_2 = 0; i_2 <= loop_ub; i_2 = i_2 + 1) {
          tmp_data[i_2 + tmp_size_0[0] * i_3] =
            batch_events_1_sm_master_DW.stateMachine.transitions[(e_data[i_2] -
            1) + 20 * f[i_3]];
        }
      }

      b_j = tmp_data[2];
      j = 0;
      exitg1 = false;
      while ((exitg1 == false) && (j < 6)) {
        absx = (real_T)j * 1.0 + 1.0;
        rowmatch = false;
        b_p = true;
        if (!(batch_events_1_sm_master_DW.stateMachine.statesArray[(int32_T)absx
              - 1].number == b_j)) {
          b_p = false;
        }

        if (b_p) {
          rowmatch = true;
        }

        if (rowmatch) {
          batch_events_1_sm_master_DW.stateMachine.currentState =
            batch_events_1_sm_master_DW.stateMachine.statesArray[(int32_T)absx -
            1];
          exitg1 = true;
        } else {
          j = j + 1;
        }
      }
    }
  }

  /* '<S3>:1:29' */
  batch_events_1_sm_master_B.outputState = (real_T)
    batch_events_1_sm_master_DW.stateMachine.currentState.number;

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* S-Function (OP_SEND): '<S11>/S-Function' */

  /* Level2 S-Function Block: '<S11>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void batch_events_1_sm_master_update(void)
{
  /* Update for Memory: '<S1>/S-Function' */
  batch_events_1_sm_master_DW.SFunction_PreviousInput =
    batch_events_1_sm_master_B.Sum;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++batch_events_1_sm_master_M->Timing.clockTick0)) {
    ++batch_events_1_sm_master_M->Timing.clockTickH0;
  }

  batch_events_1_sm_master_M->Timing.t[0] =
    batch_events_1_sm_master_M->Timing.clockTick0 *
    batch_events_1_sm_master_M->Timing.stepSize0 +
    batch_events_1_sm_master_M->Timing.clockTickH0 *
    batch_events_1_sm_master_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void batch_events_1_sm_master_initialize(void)
{
  /* user code (Initialize function Body) */

  /* System '<Root>' */
  /* Opal-RT Technologies */
  opalSizeDwork = sizeof(rtDWork);
  if (Opal_rtmGetNumBlockIO(pRtModel) != 0)
    opalSizeBlockIO = sizeof(rtB);
  else
    opalSizeBlockIO = 0;
  if (Opal_rtmGetNumBlockParams(pRtModel) != 0)
    opalSizeRTP = sizeof(rtP);
  else
    opalSizeRTP = 0;

  /* InitializeConditions for Memory: '<S1>/S-Function' */
  batch_events_1_sm_master_DW.SFunction_PreviousInput =
    batch_events_1_sm_master_P.SFunction_InitialCondition;

  /* InitializeConditions for S-Function (RECV_Param): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (OP_SEND): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
  batch_events_1_sm_master_DW.stateMachine_not_empty = false;
}

/* Model terminate function */
static void batch_events_1_sm_master_terminate(void)
{
  /* Terminate for S-Function (RECV_Param): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  batch_events_1_sm_master_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  batch_events_1_sm_master_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  batch_events_1_sm_master_initialize();
}

void MdlTerminate(void)
{
  batch_events_1_sm_master_terminate();
}

/* Registration function */
RT_MODEL_batch_events_1_sm_master_T *batch_events_1_sm_master(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)batch_events_1_sm_master_M, 0,
                sizeof(RT_MODEL_batch_events_1_sm_master_T));
  rtsiSetSolverName(&batch_events_1_sm_master_M->solverInfo,"FixedStepDiscrete");
  batch_events_1_sm_master_M->solverInfoPtr =
    (&batch_events_1_sm_master_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = batch_events_1_sm_master_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "batch_events_1_sm_master_M points to
       static memory which is guaranteed to be non-NULL" */
    batch_events_1_sm_master_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    batch_events_1_sm_master_M->Timing.sampleTimes =
      (&batch_events_1_sm_master_M->Timing.sampleTimesArray[0]);
    batch_events_1_sm_master_M->Timing.offsetTimes =
      (&batch_events_1_sm_master_M->Timing.offsetTimesArray[0]);

    /* task periods */
    batch_events_1_sm_master_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    batch_events_1_sm_master_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(batch_events_1_sm_master_M,
             &batch_events_1_sm_master_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = batch_events_1_sm_master_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    batch_events_1_sm_master_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(batch_events_1_sm_master_M, -1);
  batch_events_1_sm_master_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    batch_events_1_sm_master_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(batch_events_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(batch_events_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogT(batch_events_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogX(batch_events_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogXFinal(batch_events_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(batch_events_1_sm_master_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(batch_events_1_sm_master_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(batch_events_1_sm_master_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(batch_events_1_sm_master_M->rtwLogInfo, 1);
    rtliSetLogY(batch_events_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(batch_events_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(batch_events_1_sm_master_M->rtwLogInfo, (NULL));
  }

  batch_events_1_sm_master_M->solverInfoPtr =
    (&batch_events_1_sm_master_M->solverInfo);
  batch_events_1_sm_master_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&batch_events_1_sm_master_M->solverInfo, 0.001);
  rtsiSetSolverMode(&batch_events_1_sm_master_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  batch_events_1_sm_master_M->ModelData.blockIO = ((void *)
    &batch_events_1_sm_master_B);

  {
    int32_T i;
    for (i = 0; i < 25; i++) {
      batch_events_1_sm_master_B.eventsArray[i] = 0.0;
    }

    batch_events_1_sm_master_B.SFunction = 0.0;
    batch_events_1_sm_master_B.Sum = 0.0;
    batch_events_1_sm_master_B.SFunction_n[0] = 0.0;
    batch_events_1_sm_master_B.SFunction_n[1] = 0.0;
    batch_events_1_sm_master_B.SFunction_n[2] = 0.0;
    batch_events_1_sm_master_B.outputState = 0.0;
  }

  /* parameters */
  batch_events_1_sm_master_M->ModelData.defaultParam = ((real_T *)
    &batch_events_1_sm_master_P);

  /* states (dwork) */
  batch_events_1_sm_master_M->ModelData.dwork = ((void *)
    &batch_events_1_sm_master_DW);
  (void) memset((void *)&batch_events_1_sm_master_DW, 0,
                sizeof(DW_batch_events_1_sm_master_T));
  batch_events_1_sm_master_DW.SFunction_PreviousInput = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &batch_events_1_sm_master_M->NonInlinedSFcns.sfcnInfo;
    batch_events_1_sm_master_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (batch_events_1_sm_master_M)));
    batch_events_1_sm_master_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &batch_events_1_sm_master_M->Sizes.numSampTimes);
    batch_events_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (batch_events_1_sm_master_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   batch_events_1_sm_master_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(batch_events_1_sm_master_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(batch_events_1_sm_master_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (batch_events_1_sm_master_M));
    rtssSetStepSizePtr(sfcnInfo, &batch_events_1_sm_master_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (batch_events_1_sm_master_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &batch_events_1_sm_master_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &batch_events_1_sm_master_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &batch_events_1_sm_master_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &batch_events_1_sm_master_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &batch_events_1_sm_master_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &batch_events_1_sm_master_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &batch_events_1_sm_master_M->solverInfoPtr);
  }

  batch_events_1_sm_master_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)
                  &batch_events_1_sm_master_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  2*sizeof(SimStruct));
    batch_events_1_sm_master_M->childSfunctions =
      (&batch_events_1_sm_master_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    batch_events_1_sm_master_M->childSfunctions[0] =
      (&batch_events_1_sm_master_M->NonInlinedSFcns.childSFunctions[0]);
    batch_events_1_sm_master_M->childSfunctions[1] =
      (&batch_events_1_sm_master_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: batch_events_1_sm_master/<S7>/S-Function (RECV_Param) */
    {
      SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &batch_events_1_sm_master_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &batch_events_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, batch_events_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &batch_events_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 3);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            batch_events_1_sm_master_B.SFunction_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "batch_events_1_sm_master/SM_master/OpComm/Receive/S-Function");
      ssSetRTModel(rts,batch_events_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       batch_events_1_sm_master_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       batch_events_1_sm_master_P.SFunction_P2_Size);
      }

      /* registration */
      RECV_Param(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: batch_events_1_sm_master/<S11>/S-Function (OP_SEND) */
    {
      SimStruct *rts = batch_events_1_sm_master_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &batch_events_1_sm_master_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &batch_events_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, batch_events_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &batch_events_1_sm_master_M->
                           NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &batch_events_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &batch_events_1_sm_master_B.outputState;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "batch_events_1_sm_master/SM_master/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,batch_events_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       batch_events_1_sm_master_P.SFunction_P1_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &batch_events_1_sm_master_DW.SFunction_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &batch_events_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &batch_events_1_sm_master_DW.SFunction_IWORK[0]);
      }

      /* registration */
      OP_SEND(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  batch_events_1_sm_master_M->Sizes.numContStates = (0);/* Number of continuous states */
  batch_events_1_sm_master_M->Sizes.numY = (0);/* Number of model outputs */
  batch_events_1_sm_master_M->Sizes.numU = (0);/* Number of model inputs */
  batch_events_1_sm_master_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  batch_events_1_sm_master_M->Sizes.numSampTimes = (1);/* Number of sample times */
  batch_events_1_sm_master_M->Sizes.numBlocks = (11);/* Number of blocks */
  batch_events_1_sm_master_M->Sizes.numBlockIO = (5);/* Number of block outputs */
  batch_events_1_sm_master_M->Sizes.numBlockPrms = (279);/* Sum of parameter "widths" */
  return batch_events_1_sm_master_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
