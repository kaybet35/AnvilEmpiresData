#include "FarmProxyComponent.h"

UFarmProxyComponent::UFarmProxyComponent() {
    this->RichSoilMaturityTimeModifier = 0.25f;
    this->WaterDurationMaxSeconds = 90.00f;
    this->WaterDurationPerUnitItem = 30.00f;
    this->EnvWetnessWaterDurationIncreaseMultiplier = 3.00f;
    this->FertilizeDurationPerUnitItem = 90.00f;
}


