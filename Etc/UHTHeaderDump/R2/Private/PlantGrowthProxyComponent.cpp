#include "PlantGrowthProxyComponent.h"

UPlantGrowthProxyComponent::UPlantGrowthProxyComponent() {
    this->MaturePlant = NULL;
    this->RequiredSeedType = NULL;
    this->StageTime = 700.00f;
    this->RequiredTemperature = 0.00f;
    this->GrowthStage = 0;
    this->bCanGrow = false;
}


