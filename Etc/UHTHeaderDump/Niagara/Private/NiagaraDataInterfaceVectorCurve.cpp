#include "NiagaraDataInterfaceVectorCurve.h"

UNiagaraDataInterfaceVectorCurve::UNiagaraDataInterfaceVectorCurve() {
    this->ShaderLUT.AddDefaulted(3);
    this->ExposedName = TEXT("Vector3 Curve");
}


