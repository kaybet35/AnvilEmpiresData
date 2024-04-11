#include "WaterBodyIsland.h"
#include "WaterSplineComponent.h"

AWaterBodyIsland::AWaterBodyIsland(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWaterSplineComponent>(TEXT("WaterSpline"));
    this->SplineComp = (UWaterSplineComponent*)RootComponent;
}

UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline() const {
    return NULL;
}


