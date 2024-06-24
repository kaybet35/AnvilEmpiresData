#pragma once
#include "CoreMinimal.h"
#include "ExplorationSpawnedEntityInfo.h"
#include "ProxyComponent.h"
#include "ExplorationSpawnerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UExplorationSpawnerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExplorationSpawnedEntityInfo> SpawnedEntitiesData;
    
    UExplorationSpawnerProxyComponent();

};

