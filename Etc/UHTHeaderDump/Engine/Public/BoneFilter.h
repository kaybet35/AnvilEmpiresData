#pragma once
#include "CoreMinimal.h"
#include "BoneFilter.generated.h"

USTRUCT(BlueprintType)
struct FBoneFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    ENGINE_API FBoneFilter();
};

