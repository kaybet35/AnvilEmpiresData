#include "HitConverterDataComponent.h"

UHitConverterDataComponent::UHitConverterDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSelectedOutputIndex = 0;
    this->HitCounter = 0.00f;
}


