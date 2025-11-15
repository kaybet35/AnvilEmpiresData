#include "CullDistanceVolume.h"

ACullDistanceVolume::ACullDistanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CullDistances.AddDefaulted(2);
    this->bEnabled = true;
}


