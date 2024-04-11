#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraLensEffectInterface -FallbackName=CameraLensEffectInterface
#include "NiagaraActor.h"
#include "Templates/SubclassOf.h"
#include "NiagaraLensEffectBase.generated.h"

class AActor;
class APlayerCameraManager;
class UFXSystemComponent;

UCLASS(Abstract, Blueprintable)
class NIAGARA_API ANiagaraLensEffectBase : public ANiagaraActor, public ICameraLensEffectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DesiredRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAuthoredFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetWhenRetriggered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> EmittersToTreatAsSame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* OwningCameraManager;
    
public:
    ANiagaraLensEffectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UFXSystemComponent* GetPrimaryParticleComponent() const override PURE_VIRTUAL(GetPrimaryParticleComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFXSystemComponent*> GetParticleComponents() const override PURE_VIRTUAL(GetParticleComponents, return TArray<UFXSystemComponent*>(););
    
};

