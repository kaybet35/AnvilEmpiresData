#include "CookingDataComponent.h"

UCookingDataComponent::UCookingDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CookType = EAnvilCookingType::DirectHeat;
    this->CookCompleteTimestampAgeSec = 0;
    this->CurrentRecipeIndex = 0;
    this->NormalizedWaterLevel = 0.00f;
    this->EffectiveNormalizedTemp = 0.00f;
    this->bCanCookWithExistingOutputs = 0;
    this->bIsFoodBurning = false;
    this->bIsWatered = false;
}


