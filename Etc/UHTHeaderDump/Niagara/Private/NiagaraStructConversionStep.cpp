#include "NiagaraStructConversionStep.h"

FNiagaraStructConversionStep::FNiagaraStructConversionStep() {
    this->SourceBytes = 0;
    this->SourceOffset = 0;
    this->SimulationBytes = 0;
    this->SimulationOffset = 0;
    this->ConversionType = ENiagaraStructConversionType::CopyOnly;
}

