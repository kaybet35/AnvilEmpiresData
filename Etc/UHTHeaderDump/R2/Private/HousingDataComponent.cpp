#include "HousingDataComponent.h"

UHousingDataComponent::UHousingDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCapacity = 0;
    this->AllowPublicPledging = false;
    this->IsGroupHouse = false;
    this->bIsTownTent = false;
}


