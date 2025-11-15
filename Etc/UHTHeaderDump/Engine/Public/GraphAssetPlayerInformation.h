#pragma once
#include "CoreMinimal.h"
#include "GraphAssetPlayerInformation.generated.h"

USTRUCT(BlueprintType)
struct FGraphAssetPlayerInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerNodeIndices;
    
    ENGINE_API FGraphAssetPlayerInformation();
};

