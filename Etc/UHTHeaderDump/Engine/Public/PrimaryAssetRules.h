#pragma once
#include "CoreMinimal.h"
#include "EPrimaryAssetCookRule.h"
#include "PrimaryAssetRules.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyRecursively;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrimaryAssetCookRule CookRule;
    
    ENGINE_API FPrimaryAssetRules();
};

