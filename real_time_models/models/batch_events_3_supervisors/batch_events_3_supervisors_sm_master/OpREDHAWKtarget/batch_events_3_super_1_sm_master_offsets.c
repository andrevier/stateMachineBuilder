#include "batch_events_3_super_1_sm_master.h"
#include <stdlib.h>
#include <stdint.h>

// Declared in OpalSimCore
extern uint32_t opalNumParameters;
extern uint32_t opalNumSignals;
extern void** opalParametersAdressMapping;
extern uint32_t* opalParametersSizeMapping;
extern uint32_t* opalParametersNumElementsMapping;
extern void** opalSignalsAdressMapping;
extern uint32_t* opalSignalsSizeMapping;
extern uint32_t* opalSignalsNumElementsMapping;
void OpalUnInitAdress(void)
{
  opalNumParameters = 0;
  opalNumSignals = 0;
  if (opalParametersAdressMapping)
    free(opalParametersAdressMapping);
  if (opalParametersSizeMapping)
    free(opalParametersSizeMapping);
  if (opalParametersNumElementsMapping)
    free(opalParametersNumElementsMapping);
  if (opalSignalsAdressMapping)
    free(opalSignalsAdressMapping);
  if (opalSignalsSizeMapping)
    free(opalSignalsSizeMapping);
  if (opalSignalsNumElementsMapping)
    free(opalSignalsNumElementsMapping);
}

void OpalInitAdress(void)
{
  OpalUnInitAdress();
  opalParametersAdressMapping = (void**)malloc(sizeof(void*) * 18);
  opalParametersSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 18);
  opalParametersNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 18);
  opalSignalsAdressMapping = (void**)malloc(sizeof(void*) * 9);
  opalSignalsSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 9);
  opalSignalsNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 9);
  opalParametersAdressMapping[0] = (void*)&rtP.allEvents1;
  opalParametersSizeMapping[0] = sizeof(rtP.allEvents1[0]);
  opalParametersNumElementsMapping[0] = 25;
  opalParametersAdressMapping[1] = (void*)&rtP.allEvents2;
  opalParametersSizeMapping[1] = sizeof(rtP.allEvents2[0]);
  opalParametersNumElementsMapping[1] = 25;
  opalParametersAdressMapping[2] = (void*)&rtP.allEvents3;
  opalParametersSizeMapping[2] = sizeof(rtP.allEvents3[0]);
  opalParametersNumElementsMapping[2] = 25;
  opalParametersAdressMapping[3] = (void*)&rtP.encodedStates1;
  opalParametersSizeMapping[3] = sizeof(rtP.encodedStates1[0]);
  opalParametersNumElementsMapping[3] = 156;
  opalParametersAdressMapping[4] = (void*)&rtP.encodedStates2;
  opalParametersSizeMapping[4] = sizeof(rtP.encodedStates2[0]);
  opalParametersNumElementsMapping[4] = 130;
  opalParametersAdressMapping[5] = (void*)&rtP.encodedStates3;
  opalParametersSizeMapping[5] = sizeof(rtP.encodedStates3[0]);
  opalParametersNumElementsMapping[5] = 130;
  opalParametersAdressMapping[6] = (void*)&rtP.transitions1;
  opalParametersSizeMapping[6] = sizeof(rtP.transitions1[0]);
  opalParametersNumElementsMapping[6] = 60;
  opalParametersAdressMapping[7] = (void*)&rtP.transitions2;
  opalParametersSizeMapping[7] = sizeof(rtP.transitions2[0]);
  opalParametersNumElementsMapping[7] = 63;
  opalParametersAdressMapping[8] = (void*)&rtP.transitions3;
  opalParametersSizeMapping[8] = sizeof(rtP.transitions3[0]);
  opalParametersNumElementsMapping[8] = 63;
  opalParametersAdressMapping[9] = (void*)&rtP.SFunction1_Value;
  opalParametersSizeMapping[9] = sizeof(rtP.SFunction1_Value);
  opalParametersNumElementsMapping[9] = 1;
  opalParametersAdressMapping[10] = (void*)&rtP.SFunction_InitialCondition;
  opalParametersSizeMapping[10] = sizeof(rtP.SFunction_InitialCondition);
  opalParametersNumElementsMapping[10] = 1;
  opalParametersAdressMapping[11] = (void*)&rtP.allevents_Value;
  opalParametersSizeMapping[11] = sizeof(rtP.allevents_Value[0]);
  opalParametersNumElementsMapping[11] = 25;
  opalParametersAdressMapping[12] = (void*)&rtP.SFunction_P1_Size;
  opalParametersSizeMapping[12] = sizeof(rtP.SFunction_P1_Size[0]);
  opalParametersNumElementsMapping[12] = 2;
  opalParametersAdressMapping[13] = (void*)&rtP.SFunction_P1;
  opalParametersSizeMapping[13] = sizeof(rtP.SFunction_P1);
  opalParametersNumElementsMapping[13] = 1;
  opalParametersAdressMapping[14] = (void*)&rtP.SFunction_P2_Size;
  opalParametersSizeMapping[14] = sizeof(rtP.SFunction_P2_Size[0]);
  opalParametersNumElementsMapping[14] = 2;
  opalParametersAdressMapping[15] = (void*)&rtP.SFunction_P2;
  opalParametersSizeMapping[15] = sizeof(rtP.SFunction_P2[0]);
  opalParametersNumElementsMapping[15] = 9;
  opalParametersAdressMapping[16] = (void*)&rtP.SFunction_P1_Size_k;
  opalParametersSizeMapping[16] = sizeof(rtP.SFunction_P1_Size_k[0]);
  opalParametersNumElementsMapping[16] = 2;
  opalParametersAdressMapping[17] = (void*)&rtP.SFunction_P1_l;
  opalParametersSizeMapping[17] = sizeof(rtP.SFunction_P1_l);
  opalParametersNumElementsMapping[17] = 1;
  opalSignalsAdressMapping[0] = (void*)&rtB.SFunction;
  opalSignalsSizeMapping[0] = sizeof(rtB.SFunction);
  opalSignalsNumElementsMapping[0] = 1;
  opalSignalsAdressMapping[1] = (void*)&rtB.Sum;
  opalSignalsSizeMapping[1] = sizeof(rtB.Sum);
  opalSignalsNumElementsMapping[1] = 1;
  opalSignalsAdressMapping[2] = (void*)&rtB.SFunction_a;
  opalSignalsSizeMapping[2] = sizeof(rtB.SFunction_a[0]);
  opalSignalsNumElementsMapping[2] = 9;
  opalSignalsAdressMapping[3] = (void*)&rtB.outputState;
  opalSignalsSizeMapping[3] = sizeof(rtB.outputState);
  opalSignalsNumElementsMapping[3] = 1;
  opalSignalsAdressMapping[4] = (void*)&rtB.outputState_k;
  opalSignalsSizeMapping[4] = sizeof(rtB.outputState_k);
  opalSignalsNumElementsMapping[4] = 1;
  opalSignalsAdressMapping[5] = (void*)&rtB.outputState_p;
  opalSignalsSizeMapping[5] = sizeof(rtB.outputState_p);
  opalSignalsNumElementsMapping[5] = 1;
  opalSignalsAdressMapping[6] = (void*)&rtB.sf_MATLABFunction3.eventsArray;
  opalSignalsSizeMapping[6] = sizeof(rtB.sf_MATLABFunction3.eventsArray[0]);
  opalSignalsNumElementsMapping[6] = 25;
  opalSignalsAdressMapping[7] = (void*)&rtB.sf_MATLABFunction2.eventsArray;
  opalSignalsSizeMapping[7] = sizeof(rtB.sf_MATLABFunction2.eventsArray[0]);
  opalSignalsNumElementsMapping[7] = 25;
  opalSignalsAdressMapping[8] = (void*)&rtB.sf_MATLABFunction.eventsArray;
  opalSignalsSizeMapping[8] = sizeof(rtB.sf_MATLABFunction.eventsArray[0]);
  opalSignalsNumElementsMapping[8] = 25;
  opalNumParameters = 18;
  opalNumSignals = 9;
}
