#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CameraLensEffectInterface.h"
#include "Emitter.h"
#include "Templates/SubclassOf.h"
#include "EmitterCameraLensEffectBase.generated.h"

class AActor;
class APlayerCameraManager;
class UFXSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ENGINE_API AEmitterCameraLensEffectBase : public AEmitter, public ICameraLensEffectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PS_CameraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* BaseCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetWhenRetriggered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> EmittersToTreatAsSame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistFromCamera;
    
public:
    AEmitterCameraLensEffectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UFXSystemComponent* GetPrimaryParticleComponent() const override PURE_VIRTUAL(GetPrimaryParticleComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFXSystemComponent*> GetParticleComponents() const override PURE_VIRTUAL(GetParticleComponents, return TArray<UFXSystemComponent*>(););
    
};

