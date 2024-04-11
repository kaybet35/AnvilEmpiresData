#include "WaterBodyCustomComponent.h"

UWaterBodyCustomComponent::UWaterBodyCustomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectsLandscape = false;
    this->MeshComp = NULL;
}


