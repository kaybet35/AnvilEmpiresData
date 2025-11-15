#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "SpotLight.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASpotLight : public ALight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
    ASpotLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};

