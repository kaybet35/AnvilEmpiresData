#include "WaterBodyRiverComponent.h"

UWaterBodyRiverComponent::UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LakeTransitionMaterial = NULL;
    this->LakeTransitionMID = NULL;
    this->OceanTransitionMaterial = NULL;
    this->OceanTransitionMID = NULL;
}


