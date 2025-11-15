#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionBoneFilter.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshSamplingRegionBoneFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeOrExclude: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyToChildren: 1;
    
    ENGINE_API FSkeletalMeshSamplingRegionBoneFilter();
};

