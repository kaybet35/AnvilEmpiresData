#include "LandscapeSplineActor.h"
#include "LandscapeSplinesComponent.h"

ALandscapeSplineActor::ALandscapeSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULandscapeSplinesComponent>(TEXT("RootComponent0"));
}


