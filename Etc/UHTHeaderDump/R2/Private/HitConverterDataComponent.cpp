#include "HitConverterDataComponent.h"

UHitConverterDataComponent::UHitConverterDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputItemName = 0;
    this->CurrentSelectedOutputIndex = 0;
    this->HitCounter = 0.00f;
}


