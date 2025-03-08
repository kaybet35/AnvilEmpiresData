#include "DecayDataComponent.h"

UDecayDataComponent::UDecayDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDecaying = false;
    this->bDecayingDueToNotEnclosed = false;
    this->SecondsUntilFullDecay = 0.00f;
}


