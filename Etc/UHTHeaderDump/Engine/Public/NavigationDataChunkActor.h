#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PartitionActor.h"
#include "NavigationDataChunkActor.generated.h"

class UNavigationDataChunk;

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API ANavigationDataChunkActor : public APartitionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNavigationDataChunk*> NavDataChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox DataChunkActorBounds;
    
public:
    ANavigationDataChunkActor(const FObjectInitializer& ObjectInitializer);

};

