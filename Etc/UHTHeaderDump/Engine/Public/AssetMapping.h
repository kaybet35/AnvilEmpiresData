#pragma once
#include "CoreMinimal.h"
#include "AssetMapping.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FAssetMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* SourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* TargetAsset;
    
    ENGINE_API FAssetMapping();
};

