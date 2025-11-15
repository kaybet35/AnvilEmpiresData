#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Actor.h"
#include "ParticleBurstSignatureDelegate.h"
#include "ParticleCollisionSignatureDelegate.h"
#include "ParticleDeathSignatureDelegate.h"
#include "ParticleSpawnSignatureDelegate.h"
#include "Emitter.generated.h"

class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ENGINE_API AEmitter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnSystemFinish: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPostUpdateTickGroup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bCurrentlyActive, meta=(AllowPrivateAccess=true))
    uint8 bCurrentlyActive: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleSpawnSignature OnParticleSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleBurstSignature OnParticleBurst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleDeathSignature OnParticleDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleCollisionSignature OnParticleCollide;
    
    AEmitter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleActive();
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(FName ParameterName, FVector Param);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplate(UParticleSystem* NewTemplate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName ParameterName, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    
    UFUNCTION(BlueprintCallable)
    void SetActorParameter(FName ParameterName, AActor* Param);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCurrentlyActive();
    
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

