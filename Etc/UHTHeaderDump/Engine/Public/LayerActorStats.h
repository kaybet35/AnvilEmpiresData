#pragma once
#include "CoreMinimal.h"
#include "LayerActorStats.generated.h"

USTRUCT(BlueprintType)
struct FLayerActorStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    ENGINE_API FLayerActorStats();
};

