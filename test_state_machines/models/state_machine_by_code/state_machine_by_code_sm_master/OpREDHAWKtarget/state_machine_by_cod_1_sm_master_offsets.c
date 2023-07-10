#include "state_machine_by_cod_1_sm_master.h"
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
  opalParametersAdressMapping = (void**)malloc(sizeof(void*) * 8);
  opalParametersSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 8);
  opalParametersNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 8);
  opalSignalsAdressMapping = (void**)malloc(sizeof(void*) * 4);
  opalSignalsSizeMapping = (uint32_t*)malloc(sizeof(uint32_t) * 4);
  opalSignalsNumElementsMapping = (uint32_t*)malloc(sizeof(uint32_t) * 4);
  opalParametersAdressMapping[0] = (void*)&rtP.SFunction1_Value;
  opalParametersSizeMapping[0] = sizeof(rtP.SFunction1_Value);
  opalParametersNumElementsMapping[0] = 1;
  opalParametersAdressMapping[1] = (void*)&rtP.SFunction_InitialCondition;
  opalParametersSizeMapping[1] = sizeof(rtP.SFunction_InitialCondition);
  opalParametersNumElementsMapping[1] = 1;
  opalParametersAdressMapping[2] = (void*)&rtP.SFunction_P1_Size;
  opalParametersSizeMapping[2] = sizeof(rtP.SFunction_P1_Size[0]);
  opalParametersNumElementsMapping[2] = 2;
  opalParametersAdressMapping[3] = (void*)&rtP.SFunction_P1;
  opalParametersSizeMapping[3] = sizeof(rtP.SFunction_P1);
  opalParametersNumElementsMapping[3] = 1;
  opalParametersAdressMapping[4] = (void*)&rtP.SFunction_P2_Size;
  opalParametersSizeMapping[4] = sizeof(rtP.SFunction_P2_Size[0]);
  opalParametersNumElementsMapping[4] = 2;
  opalParametersAdressMapping[5] = (void*)&rtP.SFunction_P2;
  opalParametersSizeMapping[5] = sizeof(rtP.SFunction_P2);
  opalParametersNumElementsMapping[5] = 1;
  opalParametersAdressMapping[6] = (void*)&rtP.SFunction_P1_Size_p;
  opalParametersSizeMapping[6] = sizeof(rtP.SFunction_P1_Size_p[0]);
  opalParametersNumElementsMapping[6] = 2;
  opalParametersAdressMapping[7] = (void*)&rtP.SFunction_P1_e;
  opalParametersSizeMapping[7] = sizeof(rtP.SFunction_P1_e);
  opalParametersNumElementsMapping[7] = 1;
  opalSignalsAdressMapping[0] = (void*)&rtB.SFunction;
  opalSignalsSizeMapping[0] = sizeof(rtB.SFunction);
  opalSignalsNumElementsMapping[0] = 1;
  opalSignalsAdressMapping[1] = (void*)&rtB.Sum;
  opalSignalsSizeMapping[1] = sizeof(rtB.Sum);
  opalSignalsNumElementsMapping[1] = 1;
  opalSignalsAdressMapping[2] = (void*)&rtB.SFunction_m;
  opalSignalsSizeMapping[2] = sizeof(rtB.SFunction_m);
  opalSignalsNumElementsMapping[2] = 1;
  opalSignalsAdressMapping[3] = (void*)&rtB.outputState;
  opalSignalsSizeMapping[3] = sizeof(rtB.outputState);
  opalSignalsNumElementsMapping[3] = 1;
  opalNumParameters = 8;
  opalNumSignals = 4;
}
