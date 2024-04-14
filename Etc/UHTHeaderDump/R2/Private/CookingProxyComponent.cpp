#include "CookingProxyComponent.h"

UCookingProxyComponent::UCookingProxyComponent() {
    this->CookType = EAnvilCookingType::DirectHeat;
    this->FoodBurnDurationSec = 60.00f;
    this->WaterDurationPerUnitItemAtMaxTempSec = 30.00f;
    this->BellowsTemperatureModifier = 1.50f;
    this->TemperatureDiffHighQuality = 0.05f;
    this->TemperatureDiffMedQuality = 0.15f;
    this->TemperatureDiffLowQuality = 0.30f;
    this->bCanCookWithExistingOutputs = 0;
}


