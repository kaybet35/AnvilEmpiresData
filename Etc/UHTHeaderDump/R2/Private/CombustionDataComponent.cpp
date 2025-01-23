#include "CombustionDataComponent.h"

UCombustionDataComponent::UCombustionDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFueled = false;
    this->StartTimeStamp = 0;
    this->TotalFuelTime = 0.00f;
}


