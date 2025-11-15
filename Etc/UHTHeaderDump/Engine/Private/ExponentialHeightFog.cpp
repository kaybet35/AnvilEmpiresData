#include "ExponentialHeightFog.h"
#include "ExponentialHeightFogComponent.h"
#include "Net/UnrealNetwork.h"

AExponentialHeightFog::AExponentialHeightFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->Component = (UExponentialHeightFogComponent*)RootComponent;
    this->bEnabled = false;
}

void AExponentialHeightFog::OnRep_bEnabled() {
}

void AExponentialHeightFog::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExponentialHeightFog, bEnabled);
}


