#pragma once
#include "CoreMinimal.h"
#include "ActorPlacementDataLayers.generated.h"

USTRUCT(BlueprintType)
struct FActorPlacementDataLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DataLayerInstanceNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContextID;
    
    ENGINE_API FActorPlacementDataLayers();
};

