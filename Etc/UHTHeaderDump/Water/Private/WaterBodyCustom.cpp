#include "WaterBodyCustom.h"
#include "EWaterBodyType.h"
#include "WaterBodyCustomComponent.h"

AWaterBodyCustom::AWaterBodyCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWaterBodyCustomComponent>(TEXT("WaterBodyCustomComponent"))) {
    this->WaterBodyComponent = (UWaterBodyComponent*)RootComponent;
    this->WaterBodyType = EWaterBodyType::Transition;
}


