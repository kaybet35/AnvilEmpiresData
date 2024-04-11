#include "CookingDataComponent.h"

UCookingDataComponent::UCookingDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelExpiryTimestampAgeSec = 0;
    this->bIsFueled = false;
    this->CookCompleteTimestampAgeSec = 0;
    this->bIsFoodBurning = false;
}


