#include "StaminaDataComponent.h"

UStaminaDataComponent::UStaminaDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stamina = 0.00f;
    this->StaminaLimit = 0.00f;
}


