#include "GrassRemovalVolumeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SplineDataComponent -FallbackName=SplineDataComponent

UGrassRemovalVolumeComponent::UGrassRemovalVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeferGrassUpdate = false;
    this->bSetByUseVolume = true;
    this->bSetBySpline = true;
    this->SplineDataComponent = CreateDefaultSubobject<USplineDataComponent>(TEXT("SplineDataComponent"));
}

void UGrassRemovalVolumeComponent::TryRemoveGrass() {
}

void UGrassRemovalVolumeComponent::RemoveGrassWithRetry() {
}

bool UGrassRemovalVolumeComponent::RemoveGrass() {
    return false;
}


