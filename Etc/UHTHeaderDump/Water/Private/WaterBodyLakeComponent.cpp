#include "WaterBodyLakeComponent.h"

UWaterBodyLakeComponent::UWaterBodyLakeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LakeMeshComp = NULL;
    this->LakeCollision = NULL;
}


