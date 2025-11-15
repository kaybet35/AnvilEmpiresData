#include "VectorFieldVolume.h"
#include "VectorFieldComponent.h"

AVectorFieldVolume::AVectorFieldVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVectorFieldComponent>(TEXT("VectorFieldComponent0"));
    this->VectorFieldComponent = (UVectorFieldComponent*)RootComponent;
}


