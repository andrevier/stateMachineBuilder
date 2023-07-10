/*
 * state_machine_by_cod_1_sm_master.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "state_machine_by_cod_1_sm_master".
 *
 * Model version              : 13.20
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sun Jul  9 15:34:28 2023
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "state_machine_by_cod_1_sm_master.h"
#include "state_machine_by_cod_1_sm_master_private.h"

/* Named constants for MATLAB Function: '<S2>/MATLAB Function' */
#define state_machine_by_cod_CALL_EVENT (-1)

/* Block signals (default storage) */
B_state_machine_by_cod_1_sm_master_T state_machine_by_cod_1_sm_master_B;

/* Block states (default storage) */
DW_state_machine_by_cod_1_sm_master_T state_machine_by_cod_1_sm_master_DW;

/* Real-time model */
static RT_MODEL_state_machine_by_cod_1_sm_master_T
  state_machine_by_cod_1_sm_master_M_;
RT_MODEL_state_machine_by_cod_1_sm_master_T *const
  state_machine_by_cod_1_sm_master_M = &state_machine_by_cod_1_sm_master_M_;
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
static void state_machine_by_cod_1_sm_master_output(void)
{
  real_T e_i;
  int32_T c_data[6];
  int32_T stateEventPair[2];
  int32_T b_j;
  int32_T b_k;
  int32_T j;
  int32_T k;
  boolean_T tf[6];
  boolean_T b_p;
  boolean_T rowmatch;
  static const int32_T d[3] = { 0, 1, 2 };

  static const int32_T e[6] = { 0, 1, 2, 3, 4, 5 };

  static const int32_T f[2] = { 0, 1 };

  real_T tmp_0;
  int32_T tmp_data[18];
  int32_T tmp_size[2];
  int32_T tmp_size_0[2];
  int32_T b_size;
  int32_T c_size;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T tmp;
  boolean_T exitg1;

  /* Memory: '<S1>/S-Function' */
  state_machine_by_cod_1_sm_master_B.SFunction =
    state_machine_by_cod_1_sm_master_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  state_machine_by_cod_1_sm_master_B.Sum =
    state_machine_by_cod_1_sm_master_P.SFunction1_Value +
    state_machine_by_cod_1_sm_master_B.SFunction;

  /* Stop: '<S1>/Stop Simulation' */
  if (state_machine_by_cod_1_sm_master_B.Sum != 0.0) {
    rtmSetStopRequested(state_machine_by_cod_1_sm_master_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* S-Function (RECV_Param): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<S2>/MATLAB Function' */
  /* MATLAB Function 'SM_master/MATLAB Function': '<S3>:1' */
  stateEventPair[0] =
    state_machine_by_cod_1_sm_master_DW.stateMachine.currentState.number;
  tmp_0 = rt_roundd_snf(state_machine_by_cod_1_sm_master_B.SFunction_m);
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
  for (b_k = 0; b_k < 6; b_k = b_k + 1) {
    k = b_k + 1;
    tf[k - 1] = false;
    rowmatch = true;
    b_j = 0;
    exitg1 = false;
    while ((exitg1 == false) && (b_j < 2)) {
      j = b_j + 1;
      if (!(state_machine_by_cod_1_sm_master_DW.stateMachine.transitions[e[k - 1]
            + 6 * f[j - 1]] == stateEventPair[j - 1])) {
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
  for (k = 0; k < 6; k = k + 1) {
    if (tf[k]) {
      b_k = b_k + 1;
    }
  }

  b_size = b_k;
  tmp_size[0] = b_size;
  tmp_size[1] = 3;
  if (!((tmp_size[0] == 0) || 0)) {
    b_k = 0;
    for (k = 0; k < 6; k = k + 1) {
      if (tf[k]) {
        b_k = b_k + 1;
      }
    }

    c_size = b_k;
    b_k = 0;
    for (k = 0; k < 6; k = k + 1) {
      if (tf[k]) {
        c_data[b_k] = k + 1;
        b_k = b_k + 1;
      }
    }

    tmp_size_0[0] = c_size;
    tmp_size_0[1] = 3;
    for (i_0 = 0; i_0 < 3; i_0 = i_0 + 1) {
      loop_ub = c_size - 1;
      for (i = 0; i <= loop_ub; i = i + 1) {
        tmp_data[i + tmp_size_0[0] * i_0] =
          state_machine_by_cod_1_sm_master_DW.stateMachine.transitions[(c_data[i]
          - 1) + 6 * d[i_0]];
      }
    }

    b_k = tmp_data[2];
    k = 0;
    exitg1 = false;
    while ((exitg1 == false) && (k < 3)) {
      e_i = (real_T)k * 1.0 + 1.0;
      rowmatch = false;
      b_p = true;
      if (!(state_machine_by_cod_1_sm_master_DW.stateMachine.statesArray
            [(int32_T)e_i - 1].number == b_k)) {
        b_p = false;
      }

      if (b_p) {
        rowmatch = true;
      }

      if (rowmatch) {
        state_machine_by_cod_1_sm_master_DW.stateMachine.currentState =
          state_machine_by_cod_1_sm_master_DW.stateMachine.statesArray[(int32_T)
          e_i - 1];
        exitg1 = true;
      } else {
        k = k + 1;
      }
    }
  }

  /* '<S3>:1:26' */
  state_machine_by_cod_1_sm_master_B.outputState = (real_T)
    state_machine_by_cod_1_sm_master_DW.stateMachine.currentState.number;

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* S-Function (OP_SEND): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void state_machine_by_cod_1_sm_master_update(void)
{
  /* Update for Memory: '<S1>/S-Function' */
  state_machine_by_cod_1_sm_master_DW.SFunction_PreviousInput =
    state_machine_by_cod_1_sm_master_B.Sum;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++state_machine_by_cod_1_sm_master_M->Timing.clockTick0)) {
    ++state_machine_by_cod_1_sm_master_M->Timing.clockTickH0;
  }

  state_machine_by_cod_1_sm_master_M->Timing.t[0] =
    state_machine_by_cod_1_sm_master_M->Timing.clockTick0 *
    state_machine_by_cod_1_sm_master_M->Timing.stepSize0 +
    state_machine_by_cod_1_sm_master_M->Timing.clockTickH0 *
    state_machine_by_cod_1_sm_master_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void state_machine_by_cod_1_sm_master_initialize(void)
{
  {
    State_state_machine_by_cod_1__T b;
    State_state_machine_by_cod_1__T c;
    State_state_machine_by_cod_1__T d;
    State_state_machine_by_cod_1__T inputState;
    static const int32_T val[18] = { 0, 0, 1, 1, 2, 2, 1, 2, 3, 4, 5, 1, 0, 1, 0,
      2, 1, 0 };

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
    state_machine_by_cod_1_sm_master_DW.SFunction_PreviousInput =
      state_machine_by_cod_1_sm_master_P.SFunction_InitialCondition;

    /* InitializeConditions for S-Function (RECV_Param): '<S6>/S-Function' */
    /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
    {
      SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[0];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for S-Function (OP_SEND): '<S10>/S-Function' */
    /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
    {
      SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[1];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
    b.number = 0;
    c.number = 1;
    d.number = 2;
    state_machine_by_cod_1_sm_master_DW.stateMachine.statesArray[0] = b;
    state_machine_by_cod_1_sm_master_DW.stateMachine.statesArray[1] = c;
    state_machine_by_cod_1_sm_master_DW.stateMachine.statesArray[2] = d;
    memcpy(&state_machine_by_cod_1_sm_master_DW.stateMachine.transitions[0],
           &val[0], 18U * sizeof(int32_T));
    inputState.number = 0;
    state_machine_by_cod_1_sm_master_DW.stateMachine.currentState = inputState;
  }
}

/* Model terminate function */
static void state_machine_by_cod_1_sm_master_terminate(void)
{
  /* Terminate for S-Function (RECV_Param): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  state_machine_by_cod_1_sm_master_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  state_machine_by_cod_1_sm_master_update();
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
  state_machine_by_cod_1_sm_master_initialize();
}

void MdlTerminate(void)
{
  state_machine_by_cod_1_sm_master_terminate();
}

/* Registration function */
RT_MODEL_state_machine_by_cod_1_sm_master_T *state_machine_by_cod_1_sm_master
  (void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)state_machine_by_cod_1_sm_master_M, 0,
                sizeof(RT_MODEL_state_machine_by_cod_1_sm_master_T));
  rtsiSetSolverName(&state_machine_by_cod_1_sm_master_M->solverInfo,
                    "FixedStepDiscrete");
  state_machine_by_cod_1_sm_master_M->solverInfoPtr =
    (&state_machine_by_cod_1_sm_master_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      state_machine_by_cod_1_sm_master_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "state_machine_by_cod_1_sm_master_M points to
       static memory which is guaranteed to be non-NULL" */
    state_machine_by_cod_1_sm_master_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap
      [0]);
    state_machine_by_cod_1_sm_master_M->Timing.sampleTimes =
      (&state_machine_by_cod_1_sm_master_M->Timing.sampleTimesArray[0]);
    state_machine_by_cod_1_sm_master_M->Timing.offsetTimes =
      (&state_machine_by_cod_1_sm_master_M->Timing.offsetTimesArray[0]);

    /* task periods */
    state_machine_by_cod_1_sm_master_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    state_machine_by_cod_1_sm_master_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(state_machine_by_cod_1_sm_master_M,
             &state_machine_by_cod_1_sm_master_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      state_machine_by_cod_1_sm_master_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    state_machine_by_cod_1_sm_master_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(state_machine_by_cod_1_sm_master_M, -1);
  state_machine_by_cod_1_sm_master_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    state_machine_by_cod_1_sm_master_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(state_machine_by_cod_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(state_machine_by_cod_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogT(state_machine_by_cod_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogX(state_machine_by_cod_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogXFinal(state_machine_by_cod_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(state_machine_by_cod_1_sm_master_M->rtwLogInfo,
      "rt_");
    rtliSetLogFormat(state_machine_by_cod_1_sm_master_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(state_machine_by_cod_1_sm_master_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(state_machine_by_cod_1_sm_master_M->rtwLogInfo, 1);
    rtliSetLogY(state_machine_by_cod_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(state_machine_by_cod_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(state_machine_by_cod_1_sm_master_M->rtwLogInfo, (NULL));
  }

  state_machine_by_cod_1_sm_master_M->solverInfoPtr =
    (&state_machine_by_cod_1_sm_master_M->solverInfo);
  state_machine_by_cod_1_sm_master_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&state_machine_by_cod_1_sm_master_M->solverInfo, 0.001);
  rtsiSetSolverMode(&state_machine_by_cod_1_sm_master_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  state_machine_by_cod_1_sm_master_M->ModelData.blockIO = ((void *)
    &state_machine_by_cod_1_sm_master_B);

  {
    state_machine_by_cod_1_sm_master_B.SFunction = 0.0;
    state_machine_by_cod_1_sm_master_B.Sum = 0.0;
    state_machine_by_cod_1_sm_master_B.SFunction_m = 0.0;
    state_machine_by_cod_1_sm_master_B.outputState = 0.0;
  }

  /* parameters */
  state_machine_by_cod_1_sm_master_M->ModelData.defaultParam = ((real_T *)
    &state_machine_by_cod_1_sm_master_P);

  /* states (dwork) */
  state_machine_by_cod_1_sm_master_M->ModelData.dwork = ((void *)
    &state_machine_by_cod_1_sm_master_DW);
  (void) memset((void *)&state_machine_by_cod_1_sm_master_DW, 0,
                sizeof(DW_state_machine_by_cod_1_sm_master_T));
  state_machine_by_cod_1_sm_master_DW.SFunction_PreviousInput = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.sfcnInfo;
    state_machine_by_cod_1_sm_master_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (state_machine_by_cod_1_sm_master_M)));
    state_machine_by_cod_1_sm_master_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &state_machine_by_cod_1_sm_master_M->Sizes.numSampTimes);
    state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(state_machine_by_cod_1_sm_master_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(state_machine_by_cod_1_sm_master_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(state_machine_by_cod_1_sm_master_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (state_machine_by_cod_1_sm_master_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &state_machine_by_cod_1_sm_master_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (state_machine_by_cod_1_sm_master_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &state_machine_by_cod_1_sm_master_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &state_machine_by_cod_1_sm_master_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &state_machine_by_cod_1_sm_master_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &state_machine_by_cod_1_sm_master_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &state_machine_by_cod_1_sm_master_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &state_machine_by_cod_1_sm_master_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &state_machine_by_cod_1_sm_master_M->solverInfoPtr);
  }

  state_machine_by_cod_1_sm_master_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)
                  &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  2*sizeof(SimStruct));
    state_machine_by_cod_1_sm_master_M->childSfunctions =
      (&state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    state_machine_by_cod_1_sm_master_M->childSfunctions[0] =
      (&state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.childSFunctions[0]);
    state_machine_by_cod_1_sm_master_M->childSfunctions[1] =
      (&state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: state_machine_by_cod_1_sm_master/<S6>/S-Function (RECV_Param) */
    {
      SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, state_machine_by_cod_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &state_machine_by_cod_1_sm_master_B.SFunction_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "state_machine_by_cod_1_sm_master/SM_master/OpComm/Receive/S-Function");
      ssSetRTModel(rts,state_machine_by_cod_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       state_machine_by_cod_1_sm_master_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       state_machine_by_cod_1_sm_master_P.SFunction_P2_Size);
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

    /* Level2 S-Function Block: state_machine_by_cod_1_sm_master/<S10>/S-Function (OP_SEND) */
    {
      SimStruct *rts = state_machine_by_cod_1_sm_master_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, state_machine_by_cod_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &state_machine_by_cod_1_sm_master_B.outputState;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "state_machine_by_cod_1_sm_master/SM_master/rtlab_send_subsystem/Subsystem1/Send1/S-Function");
      ssSetRTModel(rts,state_machine_by_cod_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       state_machine_by_cod_1_sm_master_P.SFunction_P1_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &state_machine_by_cod_1_sm_master_DW.SFunction_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &state_machine_by_cod_1_sm_master_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &state_machine_by_cod_1_sm_master_DW.SFunction_IWORK
                   [0]);
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
  state_machine_by_cod_1_sm_master_M->Sizes.numContStates = (0);/* Number of continuous states */
  state_machine_by_cod_1_sm_master_M->Sizes.numY = (0);/* Number of model outputs */
  state_machine_by_cod_1_sm_master_M->Sizes.numU = (0);/* Number of model inputs */
  state_machine_by_cod_1_sm_master_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  state_machine_by_cod_1_sm_master_M->Sizes.numSampTimes = (1);/* Number of sample times */
  state_machine_by_cod_1_sm_master_M->Sizes.numBlocks = (8);/* Number of blocks */
  state_machine_by_cod_1_sm_master_M->Sizes.numBlockIO = (4);/* Number of block outputs */
  state_machine_by_cod_1_sm_master_M->Sizes.numBlockPrms = (11);/* Sum of parameter "widths" */
  return state_machine_by_cod_1_sm_master_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
