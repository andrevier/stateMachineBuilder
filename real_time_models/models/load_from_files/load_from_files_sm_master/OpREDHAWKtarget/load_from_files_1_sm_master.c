/*
 * load_from_files_1_sm_master.c
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

/* Named constants for MATLAB Function: '<S2>/MATLAB Function' */
#define load_from_files_1_sm_CALL_EVENT (-1)

/* Block signals (default storage) */
B_load_from_files_1_sm_master_T load_from_files_1_sm_master_B;

/* Block states (default storage) */
DW_load_from_files_1_sm_master_T load_from_files_1_sm_master_DW;

/* Real-time model */
static RT_MODEL_load_from_files_1_sm_master_T load_from_files_1_sm_master_M_;
RT_MODEL_load_from_files_1_sm_master_T *const load_from_files_1_sm_master_M =
  &load_from_files_1_sm_master_M_;
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
static void load_from_files_1_sm_master_output(void)
{
  State_load_from_files_1_sm_ma_T statesArray[6];
  real_T e_i;
  int32_T c_data[20];
  int32_T stateEventPair[2];
  int32_T b_j;
  int32_T b_k;
  int32_T j;
  int32_T k;
  boolean_T tf[20];
  boolean_T b_p;
  boolean_T rowmatch;
  static const int32_T d[3] = { 0, 1, 2 };

  static const int32_T e[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19 };

  static const int32_T f[2] = { 0, 1 };

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
  int32_T b_size;
  int32_T c_size;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
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
  load_from_files_1_sm_master_B.SFunction =
    load_from_files_1_sm_master_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  load_from_files_1_sm_master_B.Sum =
    load_from_files_1_sm_master_P.SFunction1_Value +
    load_from_files_1_sm_master_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (load_from_files_1_sm_master_B.Sum != 0.0) {
    rtmSetStopRequested(load_from_files_1_sm_master_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* S-Function (RECV_Param): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<S2>/MATLAB Function' */
  /* MATLAB Function 'SM_master/MATLAB Function': '<S3>:1' */
  if (!load_from_files_1_sm_master_DW.stateMachine_not_empty) {
    /* '<S3>:1:10' */
    /* '<S3>:1:12' */
    tmp_c = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[0]);
    if (tmp_c < 2.147483648E+9) {
      if (tmp_c >= -2.147483648E+9) {
        tmp_b = (int32_T)tmp_c;
      } else {
        tmp_b = MIN_int32_T;
      }
    } else {
      tmp_b = MAX_int32_T;
    }

    statesArray[0].number = tmp_b;
    tmp_a = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[1]);
    if (tmp_a < 2.147483648E+9) {
      if (tmp_a >= -2.147483648E+9) {
        tmp_9 = (int32_T)tmp_a;
      } else {
        tmp_9 = MIN_int32_T;
      }
    } else {
      tmp_9 = MAX_int32_T;
    }

    statesArray[1].number = tmp_9;
    tmp_8 = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[2]);
    if (tmp_8 < 2.147483648E+9) {
      if (tmp_8 >= -2.147483648E+9) {
        tmp_7 = (int32_T)tmp_8;
      } else {
        tmp_7 = MIN_int32_T;
      }
    } else {
      tmp_7 = MAX_int32_T;
    }

    statesArray[2].number = tmp_7;
    tmp_6 = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[3]);
    if (tmp_6 < 2.147483648E+9) {
      if (tmp_6 >= -2.147483648E+9) {
        tmp_5 = (int32_T)tmp_6;
      } else {
        tmp_5 = MIN_int32_T;
      }
    } else {
      tmp_5 = MAX_int32_T;
    }

    statesArray[3].number = tmp_5;
    tmp_4 = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[4]);
    if (tmp_4 < 2.147483648E+9) {
      if (tmp_4 >= -2.147483648E+9) {
        tmp_3 = (int32_T)tmp_4;
      } else {
        tmp_3 = MIN_int32_T;
      }
    } else {
      tmp_3 = MAX_int32_T;
    }

    statesArray[4].number = tmp_3;
    tmp_2 = rt_roundd_snf(load_from_files_1_sm_master_P.encodedStates[5]);
    if (tmp_2 < 2.147483648E+9) {
      if (tmp_2 >= -2.147483648E+9) {
        tmp_1 = (int32_T)tmp_2;
      } else {
        tmp_1 = MIN_int32_T;
      }
    } else {
      tmp_1 = MAX_int32_T;
    }

    statesArray[5].number = tmp_1;
    for (i = 0; i < 6; i = i + 1) {
      load_from_files_1_sm_master_DW.stateMachine.statesArray[i] = statesArray[i];
    }

    for (i_0 = 0; i_0 < 60; i_0 = i_0 + 1) {
      tmp_e = rt_roundd_snf(load_from_files_1_sm_master_P.transitions[i_0]);
      if (tmp_e < 2.147483648E+9) {
        if (tmp_e >= -2.147483648E+9) {
          tmp_d = (int32_T)tmp_e;
        } else {
          tmp_d = MIN_int32_T;
        }
      } else {
        tmp_d = MAX_int32_T;
      }

      load_from_files_1_sm_master_DW.stateMachine.transitions[i_0] = tmp_d;
    }

    load_from_files_1_sm_master_DW.stateMachine.currentState = statesArray[0];
    load_from_files_1_sm_master_DW.stateMachine_not_empty = true;
  }

  stateEventPair[0] =
    load_from_files_1_sm_master_DW.stateMachine.currentState.number;
  tmp_0 = rt_roundd_snf(load_from_files_1_sm_master_B.SFunction_o);
  if (tmp_0 < 2.147483648E+9) {
    if (tmp_0 >= -2.147483648E+9) {
      tmp = (int32_T)tmp_0;
    } else {
      tmp = MIN_int32_T;
    }
  } else {
    tmp = MAX_int32_T;
  }

  stateEventPair[1] = tmp;
  for (b_k = 0; b_k < 20; b_k = b_k + 1) {
    k = b_k + 1;
    tf[k - 1] = false;
    rowmatch = true;
    b_j = 0;
    exitg1 = false;
    while ((exitg1 == false) && (b_j < 2)) {
      j = b_j + 1;
      if (!(load_from_files_1_sm_master_DW.stateMachine.transitions[e[k - 1] +
            20 * f[j - 1]] == stateEventPair[j - 1])) {
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

  b_k = 0;
  for (k = 0; k < 20; k = k + 1) {
    if (tf[k]) {
      b_k = b_k + 1;
    }
  }

  b_size = b_k;
  tmp_size[0] = b_size;
  tmp_size[1] = 3;
  if (!((tmp_size[0] == 0) || 0)) {
    b_k = 0;
    for (k = 0; k < 20; k = k + 1) {
      if (tf[k]) {
        b_k = b_k + 1;
      }
    }

    c_size = b_k;
    b_k = 0;
    for (k = 0; k < 20; k = k + 1) {
      if (tf[k]) {
        c_data[b_k] = k + 1;
        b_k = b_k + 1;
      }
    }

    tmp_size_0[0] = c_size;
    tmp_size_0[1] = 3;
    for (i_2 = 0; i_2 < 3; i_2 = i_2 + 1) {
      loop_ub = c_size - 1;
      for (i_1 = 0; i_1 <= loop_ub; i_1 = i_1 + 1) {
        tmp_data[i_1 + tmp_size_0[0] * i_2] =
          load_from_files_1_sm_master_DW.stateMachine.transitions[(c_data[i_1] -
          1) + 20 * d[i_2]];
      }
    }

    b_k = tmp_data[2];
    k = 0;
    exitg1 = false;
    while ((exitg1 == false) && (k < 6)) {
      e_i = (real_T)k * 1.0 + 1.0;
      rowmatch = false;
      b_p = true;
      if (!(load_from_files_1_sm_master_DW.stateMachine.statesArray[(int32_T)e_i
            - 1].number == b_k)) {
        b_p = false;
      }

      if (b_p) {
        rowmatch = true;
      }

      if (rowmatch) {
        load_from_files_1_sm_master_DW.stateMachine.currentState =
          load_from_files_1_sm_master_DW.stateMachine.statesArray[(int32_T)e_i -
          1];
        exitg1 = true;
      } else {
        k = k + 1;
      }
    }
  }

  /* '<S3>:1:16' */
  load_from_files_1_sm_master_B.outputState = (real_T)
    load_from_files_1_sm_master_DW.stateMachine.currentState.number;

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* S-Function (OP_SEND): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void load_from_files_1_sm_master_update(void)
{
  /* Update for Memory: '<S1>/S-Function' */
  load_from_files_1_sm_master_DW.SFunction_PreviousInput =
    load_from_files_1_sm_master_B.Sum;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++load_from_files_1_sm_master_M->Timing.clockTick0)) {
    ++load_from_files_1_sm_master_M->Timing.clockTickH0;
  }

  load_from_files_1_sm_master_M->Timing.t[0] =
    load_from_files_1_sm_master_M->Timing.clockTick0 *
    load_from_files_1_sm_master_M->Timing.stepSize0 +
    load_from_files_1_sm_master_M->Timing.clockTickH0 *
    load_from_files_1_sm_master_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void load_from_files_1_sm_master_initialize(void)
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
  load_from_files_1_sm_master_DW.SFunction_PreviousInput =
    load_from_files_1_sm_master_P.SFunction_InitialCondition;

  /* InitializeConditions for S-Function (RECV_Param): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (OP_SEND): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
  load_from_files_1_sm_master_DW.stateMachine_not_empty = false;
}

/* Model terminate function */
static void load_from_files_1_sm_master_terminate(void)
{
  /* Terminate for S-Function (RECV_Param): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  load_from_files_1_sm_master_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  load_from_files_1_sm_master_update();
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
  load_from_files_1_sm_master_initialize();
}

void MdlTerminate(void)
{
  load_from_files_1_sm_master_terminate();
}

/* Registration function */
RT_MODEL_load_from_files_1_sm_master_T *load_from_files_1_sm_master(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)load_from_files_1_sm_master_M, 0,
                sizeof(RT_MODEL_load_from_files_1_sm_master_T));
  rtsiSetSolverName(&load_from_files_1_sm_master_M->solverInfo,
                    "FixedStepDiscrete");
  load_from_files_1_sm_master_M->solverInfoPtr =
    (&load_from_files_1_sm_master_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      load_from_files_1_sm_master_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "load_from_files_1_sm_master_M points to
       static memory which is guaranteed to be non-NULL" */
    load_from_files_1_sm_master_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    load_from_files_1_sm_master_M->Timing.sampleTimes =
      (&load_from_files_1_sm_master_M->Timing.sampleTimesArray[0]);
    load_from_files_1_sm_master_M->Timing.offsetTimes =
      (&load_from_files_1_sm_master_M->Timing.offsetTimesArray[0]);

    /* task periods */
    load_from_files_1_sm_master_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    load_from_files_1_sm_master_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(load_from_files_1_sm_master_M,
             &load_from_files_1_sm_master_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = load_from_files_1_sm_master_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    load_from_files_1_sm_master_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(load_from_files_1_sm_master_M, -1);
  load_from_files_1_sm_master_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    load_from_files_1_sm_master_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(load_from_files_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(load_from_files_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogT(load_from_files_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogX(load_from_files_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogXFinal(load_from_files_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(load_from_files_1_sm_master_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(load_from_files_1_sm_master_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(load_from_files_1_sm_master_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(load_from_files_1_sm_master_M->rtwLogInfo, 1);
    rtliSetLogY(load_from_files_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(load_from_files_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(load_from_files_1_sm_master_M->rtwLogInfo, (NULL));
  }

  load_from_files_1_sm_master_M->solverInfoPtr =
    (&load_from_files_1_sm_master_M->solverInfo);
  load_from_files_1_sm_master_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&load_from_files_1_sm_master_M->solverInfo, 0.001);
  rtsiSetSolverMode(&load_from_files_1_sm_master_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  load_from_files_1_sm_master_M->ModelData.blockIO = ((void *)
    &load_from_files_1_sm_master_B);

  {
    load_from_files_1_sm_master_B.SFunction = 0.0;
    load_from_files_1_sm_master_B.Sum = 0.0;
    load_from_files_1_sm_master_B.SFunction_o = 0.0;
    load_from_files_1_sm_master_B.outputState = 0.0;
  }

  /* parameters */
  load_from_files_1_sm_master_M->ModelData.defaultParam = ((real_T *)
    &load_from_files_1_sm_master_P);

  /* states (dwork) */
  load_from_files_1_sm_master_M->ModelData.dwork = ((void *)
    &load_from_files_1_sm_master_DW);
  (void) memset((void *)&load_from_files_1_sm_master_DW, 0,
                sizeof(DW_load_from_files_1_sm_master_T));
  load_from_files_1_sm_master_DW.SFunction_PreviousInput = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &load_from_files_1_sm_master_M->NonInlinedSFcns.sfcnInfo;
    load_from_files_1_sm_master_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (load_from_files_1_sm_master_M)));
    load_from_files_1_sm_master_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &load_from_files_1_sm_master_M->Sizes.numSampTimes);
    load_from_files_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(load_from_files_1_sm_master_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   load_from_files_1_sm_master_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(load_from_files_1_sm_master_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(load_from_files_1_sm_master_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (load_from_files_1_sm_master_M));
    rtssSetStepSizePtr(sfcnInfo, &load_from_files_1_sm_master_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (load_from_files_1_sm_master_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &load_from_files_1_sm_master_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &load_from_files_1_sm_master_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &load_from_files_1_sm_master_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &load_from_files_1_sm_master_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &load_from_files_1_sm_master_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &load_from_files_1_sm_master_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &load_from_files_1_sm_master_M->solverInfoPtr);
  }

  load_from_files_1_sm_master_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)
                  &load_from_files_1_sm_master_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  2*sizeof(SimStruct));
    load_from_files_1_sm_master_M->childSfunctions =
      (&load_from_files_1_sm_master_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    load_from_files_1_sm_master_M->childSfunctions[0] =
      (&load_from_files_1_sm_master_M->NonInlinedSFcns.childSFunctions[0]);
    load_from_files_1_sm_master_M->childSfunctions[1] =
      (&load_from_files_1_sm_master_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: load_from_files_1_sm_master/<S6>/S-Function (RECV_Param) */
    {
      SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &load_from_files_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &load_from_files_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, load_from_files_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &load_from_files_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &load_from_files_1_sm_master_B.SFunction_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "load_from_files_1_sm_master/SM_master/OpComm/Receive/S-Function");
      ssSetRTModel(rts,load_from_files_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       load_from_files_1_sm_master_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       load_from_files_1_sm_master_P.SFunction_P2_Size);
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

    /* Level2 S-Function Block: load_from_files_1_sm_master/<S10>/S-Function (OP_SEND) */
    {
      SimStruct *rts = load_from_files_1_sm_master_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &load_from_files_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &load_from_files_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, load_from_files_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &load_from_files_1_sm_master_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &load_from_files_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &load_from_files_1_sm_master_B.outputState;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "load_from_files_1_sm_master/SM_master/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,load_from_files_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       load_from_files_1_sm_master_P.SFunction_P1_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &load_from_files_1_sm_master_DW.SFunction_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &load_from_files_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &load_from_files_1_sm_master_DW.SFunction_IWORK[0]);
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
  load_from_files_1_sm_master_M->Sizes.numContStates = (0);/* Number of continuous states */
  load_from_files_1_sm_master_M->Sizes.numY = (0);/* Number of model outputs */
  load_from_files_1_sm_master_M->Sizes.numU = (0);/* Number of model inputs */
  load_from_files_1_sm_master_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  load_from_files_1_sm_master_M->Sizes.numSampTimes = (1);/* Number of sample times */
  load_from_files_1_sm_master_M->Sizes.numBlocks = (8);/* Number of blocks */
  load_from_files_1_sm_master_M->Sizes.numBlockIO = (4);/* Number of block outputs */
  load_from_files_1_sm_master_M->Sizes.numBlockPrms = (252);/* Sum of parameter "widths" */
  return load_from_files_1_sm_master_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
