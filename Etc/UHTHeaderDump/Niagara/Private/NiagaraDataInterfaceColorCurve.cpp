#include "NiagaraDataInterfaceColorCurve.h"

UNiagaraDataInterfaceColorCurve::UNiagaraDataInterfaceColorCurve() {
    this->ShaderLUT.AddDefaulted(4);
    this->ExposedName = TEXT("Color Curve");
}


