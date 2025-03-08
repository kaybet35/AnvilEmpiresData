#include "GrainMillDataComponent.h"

UGrainMillDataComponent::UGrainMillDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentRecipeIndex = 0;
    this->SmoothedCoarseness = 0.00f;
    this->NextReadyRecipeIndex = 0;
    this->Power = 0.00f;
}


