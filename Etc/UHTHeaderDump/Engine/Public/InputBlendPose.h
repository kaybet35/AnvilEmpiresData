#pragma once
#include "CoreMinimal.h"
#include "BranchFilter.h"
#include "InputBlendPose.generated.h"

USTRUCT(BlueprintType)
struct FInputBlendPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBranchFilter> BranchFilters;
    
    ENGINE_API FInputBlendPose();
};

