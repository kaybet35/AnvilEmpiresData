#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachmentRule -FallbackName=EAttachmentRule
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FXSystemComponent -FallbackName=FXSystemComponent
#include "ENiagaraAgeUpdateMode.h"
#include "ENiagaraTickBehavior.h"
#include "NiagaraUserRedirectionParameterStore.h"
#include "OnNiagaraSystemFinishedDelegate.h"
#include "NiagaraComponent.generated.h"

class AActor;
class UMaterialInterface;
class UNiagaraCullProxyComponent;
class UNiagaraDataInterface;
class UNiagaraSimCache;
class UNiagaraSystem;
class UObject;
class USceneComponent;
class UStaticMesh;
class UTexture;
class UTextureRenderTarget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIAGARA_API UNiagaraComponent : public UFXSystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraTickBehavior TickBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeedOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserRedirectionParameterStore OverrideParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSolo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGpuComputeDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderingEnabled: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoManageAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoAttachWeldSimulatedBodies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBeforeForceUpdateTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNiagaraSystemFinished OnSystemFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachScaleRule;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowScalability: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraSimCache* SimCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraCullProxyComponent* CullProxy;
    
public:
    UNiagaraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableVec3(FName InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableTexture(FName InVariableName, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableStaticMesh(FName InVariableName, UStaticMesh* InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariablePosition(FName InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableObject(FName InVariableName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableMatrix(FName InVariableName, const FMatrix& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableInt(FName InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableFloat(FName InVariableName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableBool(FName InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableActor(FName InVariableName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    
    UFUNCTION(BlueprintCallable)
    void SetSystemFixedBounds(FBox LocalBounds);
    
    UFUNCTION(BlueprintCallable)
    void SetSimCache(UNiagaraSimCache* NewSimCache, bool bResetSystem);
    
    UFUNCTION(BlueprintCallable)
    void SetSeekDelta(float InSeekDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingEnabled(bool bInRenderingEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSeedOffset(int32 NewRandomSeedOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec4(const FString& InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec3(const FString& InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec2(const FString& InVariableName, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableQuat(const FString& InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariablePosition(const FString& InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableObject(const FString& InVariableName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableMatrix(const FString& InVariableName, const FMatrix& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableLinearColor(const FString& InVariableName, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableInt(const FString& InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableFloat(const FString& InVariableName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableBool(const FString& InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableActor(const FString& InVariableName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSimTime(float InMaxTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void SetGpuComputeDebug(bool bEnableDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSolo(bool bInForceSolo);
    
    UFUNCTION(BlueprintCallable)
    void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredAge(float InDesiredAge);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilation(float Dilation);
    
    UFUNCTION(BlueprintCallable)
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(bool bInAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowScalability(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    
    UFUNCTION(BlueprintCallable)
    void SeekToDesiredAge(float InDesiredAge);
    
    UFUNCTION(BlueprintCallable)
    void ResetSystem();
    
    UFUNCTION(BlueprintCallable)
    void ReinitializeSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void InitForPerformanceBaseline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENiagaraTickBehavior GetTickBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetSystemFixedBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSimCache* GetSimCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeekDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomSeedOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewLODDistanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviewLODDistance() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetNiagaraParticleValues_DebugOnly(const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(const FString& InEmitterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockDesiredAgeDeltaTimeToSeekDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceSolo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceLocalPlayerEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetEmitterFixedBounds(FName EmitterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredAge() const;
    
    UFUNCTION(BlueprintCallable)
    UNiagaraDataInterface* GetDataInterface(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCustomTimeDilation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSystem* GetAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowScalability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENiagaraAgeUpdateMode GetAgeUpdateMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSystemFixedBounds();
    
    UFUNCTION(BlueprintCallable)
    void ClearSimCache(bool bResetSystem);
    
    UFUNCTION(BlueprintCallable)
    void ClearEmitterFixedBounds(FName EmitterName);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
    
};

