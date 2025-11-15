#pragma once
#include "CoreMinimal.h"
#include "BranchFilter.generated.h"

USTRUCT(BlueprintType)
struct FBranchFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendDepth;
    
    ENGINE_API FBranchFilter();
};

