#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionBoneFilter.h"
#include "SkeletalMeshSamplingRegionMaterialFilter.h"
#include "SkeletalMeshSamplingRegion.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkeletalMeshSamplingRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportUniformlyDistributedSampling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;
    
    FSkeletalMeshSamplingRegion();
};

