#include "WaterBodyOcean.h"
#include "EWaterBodyType.h"
#include "WaterBodyOceanComponent.h"

AWaterBodyOcean::AWaterBodyOcean(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWaterBodyOceanComponent>(TEXT("WaterBodyOceanComponent"))) {
    this->WaterBodyComponent = (UWaterBodyComponent*)RootComponent;
    this->WaterBodyType = EWaterBodyType::Ocean;
}


