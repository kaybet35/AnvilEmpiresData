#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Actor.h"
#include "LevelInstanceInterface.h"
#include "LevelInstance.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ENGINE_API ALevelInstance : public AActor, public ILevelInstanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> CookedWorldAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LevelInstanceSpawnGuid, meta=(AllowPrivateAccess=true))
    FGuid LevelInstanceSpawnGuid;
    
public:
    ALevelInstance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_LevelInstanceSpawnGuid();
    

    // Fix for true pure virtual functions not being implemented
};

