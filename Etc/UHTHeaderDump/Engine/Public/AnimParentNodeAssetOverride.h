#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AnimParentNodeAssetOverride.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FAnimParentNodeAssetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* NewAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ParentNodeGuid;
    
    ENGINE_API FAnimParentNodeAssetOverride();
};

