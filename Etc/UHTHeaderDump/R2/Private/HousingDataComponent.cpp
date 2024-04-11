#include "HousingDataComponent.h"

UHousingDataComponent::UHousingDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsForCampsOnly = 0;
    this->PledgedPlayerId = 0;
}


