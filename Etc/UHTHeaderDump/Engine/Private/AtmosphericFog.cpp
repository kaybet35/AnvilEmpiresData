#include "AtmosphericFog.h"
#include "AtmosphericFogComponent.h"

AAtmosphericFog::AAtmosphericFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtmosphericFogComponent>(TEXT("AtmosphericFogComponent0"));
    this->AtmosphericFogComponent = (UAtmosphericFogComponent*)RootComponent;
}


