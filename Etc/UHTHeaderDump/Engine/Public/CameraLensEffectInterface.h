#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CameraLensEffectInterface.generated.h"

class UFXSystemComponent;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UCameraLensEffectInterface : public UInterface {
    GENERATED_BODY()
};

class ICameraLensEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UFXSystemComponent* GetPrimaryParticleComponent() const PURE_VIRTUAL(GetPrimaryParticleComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<UFXSystemComponent*> GetParticleComponents() const PURE_VIRTUAL(GetParticleComponents, return TArray<UFXSystemComponent*>(););
    
};

