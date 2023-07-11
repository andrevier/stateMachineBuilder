#include "batch_events_1_sm_master.h"
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
  opalParametersAdressMapping = (void**)malloc(sizeof(void*) * 12);
  opalParametersSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 12);
  opalParametersNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 12);
  opalSignalsAdressMapping = (void**)malloc(sizeof(void*) * 5);
  opalSignalsSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 5);
  opalSignalsNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 5);
  opalParametersAdressMapping[0] = (void*)&rtP.allEvents1;
  opalParametersSizeMapping[0] = sizeof(rtP.allEvents1[0]);
  opalParametersNumElementsMapping[0] = 25;
  opalParametersAdressMapping[1] = (void*)&rtP.encodedStates1;
  opalParametersSizeMapping[1] = sizeof(rtP.encodedStates1[0]);
  opalParametersNumElementsMapping[1] = 156;
  opalParametersAdressMapping[2] = (void*)&rtP.transitions1;
  opalParametersSizeMapping[2] = sizeof(rtP.transitions1[0]);
  opalParametersNumElementsMapping[2] = 60;
  opalParametersAdressMapping[3] = (void*)&rtP.SFunction1_Value;
  opalParametersSizeMapping[3] = sizeof(rtP.SFunction1_Value);
  opalParametersNumElementsMapping[3] = 1;
  opalParametersAdressMapping[4] = (void*)&rtP.SFunction_InitialCondition;
  opalParametersSizeMapping[4] = sizeof(rtP.SFunction_InitialCondition);
  opalParametersNumElementsMapping[4] = 1;
  opalParametersAdressMapping[5] = (void*)&rtP.allevents_Value;
  opalParametersSizeMapping[5] = sizeof(rtP.allevents_Value[0]);
  opalParametersNumElementsMapping[5] = 25;
  opalParametersAdressMapping[6] = (void*)&rtP.SFunction_P1_Size;
  opalParametersSizeMapping[6] = sizeof(rtP.SFunction_P1_Size[0]);
  opalParametersNumElementsMapping[6] = 2;
  opalParametersAdressMapping[7] = (void*)&rtP.SFunction_P1;
  opalParametersSizeMapping[7] = sizeof(rtP.SFunction_P1);
  opalParametersNumElementsMapping[7] = 1;
  opalParametersAdressMapping[8] = (void*)&rtP.SFunction_P2_Size;
  opalParametersSizeMapping[8] = sizeof(rtP.SFunction_P2_Size[0]);
  opalParametersNumElementsMapping[8] = 2;
  opalParametersAdressMapping[9] = (void*)&rtP.SFunction_P2;
  opalParametersSizeMapping[9] = sizeof(rtP.SFunction_P2[0]);
  opalParametersNumElementsMapping[9] = 3;
  opalParametersAdressMapping[10] = (void*)&rtP.SFunction_P1_Size_p;
  opalParametersSizeMapping[10] = sizeof(rtP.SFunction_P1_Size_p[0]);
  opalParametersNumElementsMapping[10] = 2;
  opalParametersAdressMapping[11] = (void*)&rtP.SFunction_P1_c;
  opalParametersSizeMapping[11] = sizeof(rtP.SFunction_P1_c);
  opalParametersNumElementsMapping[11] = 1;
  opalSignalsAdressMapping[0] = (void*)&rtB.SFunction;
  opalSignalsSizeMapping[0] = sizeof(rtB.SFunction);
  opalSignalsNumElementsMapping[0] = 1;
  opalSignalsAdressMapping[1] = (void*)&rtB.Sum;
  opalSignalsSizeMapping[1] = sizeof(rtB.Sum);
  opalSignalsNumElementsMapping[1] = 1;
  opalSignalsAdressMapping[2] = (void*)&rtB.SFunction_n;
  opalSignalsSizeMapping[2] = sizeof(rtB.SFunction_n[0]);
  opalSignalsNumElementsMapping[2] = 3;
  opalSignalsAdressMapping[3] = (void*)&rtB.eventsArray;
  opalSignalsSizeMapping[3] = sizeof(rtB.eventsArray[0]);
  opalSignalsNumElementsMapping[3] = 25;
  opalSignalsAdressMapping[4] = (void*)&rtB.outputState;
  opalSignalsSizeMapping[4] = sizeof(rtB.outputState);
  opalSignalsNumElementsMapping[4] = 1;
  opalNumParameters = 12;
  opalNumSignals = 5;
}
