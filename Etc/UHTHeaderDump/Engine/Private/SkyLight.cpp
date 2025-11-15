#include "SkyLight.h"
#include "Net/UnrealNetwork.h"
#include "SkyLightComponent.h"

ASkyLight::ASkyLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->LightComponent = (USkyLightComponent*)RootComponent;
    this->bEnabled = false;
}

void ASkyLight::OnRep_bEnabled() {
}

void ASkyLight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyLight, bEnabled);
}


