#include "WaterBodyLake.h"
#include "EWaterBodyType.h"
#include "WaterBodyLakeComponent.h"

AWaterBodyLake::AWaterBodyLake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWaterBodyLakeComponent>(TEXT("WaterBodyLakeComponent"))) {
    this->WaterBodyComponent = (UWaterBodyComponent*)RootComponent;
    this->WaterBodyType = EWaterBodyType::Lake;
}


