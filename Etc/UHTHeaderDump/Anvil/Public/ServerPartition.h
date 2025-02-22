#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ServerPartition.generated.h"

class UBoxComponent;
class USceneComponent;
class UServerPartitionComponent;

UCLASS(Blueprintable)
class ANVIL_API AServerPartition : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UServerPartitionComponent* ServerPartitionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> NavMeshBlockers;
    
public:
    AServerPartition(const FObjectInitializer& ObjectInitializer);

};

