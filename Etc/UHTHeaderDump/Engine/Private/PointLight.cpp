#include "PointLight.h"
#include "PointLightComponent.h"

APointLight::APointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->PointLightComponent = (UPointLightComponent*)RootComponent;
}

void APointLight::SetRadius(float NewRadius) {
}

void APointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
}


