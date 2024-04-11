#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "EGameplayTaskRunResult.h"
#include "GameplayTaskOwnerInterface.h"
#include "OnClaimedResourcesChangeSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameplayTasksComponent.generated.h"

class UGameplayTask;
class UGameplayTaskResource;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTASKS_API UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNetDirty: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> TaskPriorityQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> TickingTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> KnownTasks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClaimedResourcesChangeSignature OnClaimedResourcesChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatedTasks, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> SimulatedTasks;
    
public:
    UGameplayTasksComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedTasks(const TArray<UGameplayTask*>& PreviousSimulatedTasks);
    
    UFUNCTION(BlueprintCallable)
    static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
    

    // Fix for true pure virtual functions not being implemented
};

