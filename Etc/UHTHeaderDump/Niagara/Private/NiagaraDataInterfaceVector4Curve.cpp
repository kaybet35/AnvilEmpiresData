#include "NiagaraDataInterfaceVector4Curve.h"

UNiagaraDataInterfaceVector4Curve::UNiagaraDataInterfaceVector4Curve() {
    this->ShaderLUT.AddDefaulted(4);
    this->ExposedName = TEXT("Vector4 Curve");
}


