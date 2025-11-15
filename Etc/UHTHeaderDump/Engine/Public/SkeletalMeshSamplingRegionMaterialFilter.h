#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionMaterialFilter.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshSamplingRegionMaterialFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialName;
    
    ENGINE_API FSkeletalMeshSamplingRegionMaterialFilter();
};

