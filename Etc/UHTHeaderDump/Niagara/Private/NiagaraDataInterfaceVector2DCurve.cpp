#include "NiagaraDataInterfaceVector2DCurve.h"

UNiagaraDataInterfaceVector2DCurve::UNiagaraDataInterfaceVector2DCurve() {
    this->ShaderLUT.AddDefaulted(2);
    this->ExposedName = TEXT("Vector2 Curve");
}


