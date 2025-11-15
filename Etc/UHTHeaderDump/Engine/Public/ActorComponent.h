#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorComponentActivatedSignatureDelegate.h"
#include "ActorComponentDeactivateSignatureDelegate.h"
#include "ActorComponentTickFunction.h"
#include "EComponentCreationMethod.h"
#include "EEndPlayReason.h"
#include "ETickingGroup.h"
#include "Interface_AssetUserData.h"
#include "ActorComponent.generated.h"

class AActor;
class UActorComponent;
class UAssetUserData;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class ENGINE_API UActorComponent : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorComponentTickFunction PrimaryComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UCSSerializationIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNetAddressable: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateUsingRegisteredSubObjectList: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bReplicates: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoActivate: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEditableWhenInherited: 1;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEverAffectNavigation: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEditorOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComponentCreationMethod CreationMethod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorComponentActivatedSignature OnComponentActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorComponentDeactivateSignature OnComponentDeactivated;
    
    UActorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleActive();
    
    UFUNCTION(BlueprintCallable)
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReplicated(bool ShouldReplicate);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickIntervalAndCooldown(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickInterval(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoActivate(bool bNewAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bNewActive, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyComponent(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentTickEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetComponentTickInterval() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComponentHasTag(FName Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable)
    void Activate(bool bReset);
    

    // Fix for true pure virtual functions not being implemented
};

