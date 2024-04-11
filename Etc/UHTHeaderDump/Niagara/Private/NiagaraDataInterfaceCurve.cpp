#include "NiagaraDataInterfaceCurve.h"

UNiagaraDataInterfaceCurve::UNiagaraDataInterfaceCurve() {
    this->ShaderLUT.AddDefaulted(1);
    this->ExposedName = TEXT("Float Curve");
}


