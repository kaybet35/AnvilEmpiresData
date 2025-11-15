#include "SpotLight.h"
#include "SpotLightComponent.h"

ASpotLight::ASpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (USpotLightComponent*)RootComponent;
}

void ASpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
}

void ASpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
}


