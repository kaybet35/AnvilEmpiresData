#pragma once
#include "CoreMinimal.h"
#include "PerBoneBlendWeight.h"
#include "PerBoneBlendWeights.generated.h"

USTRUCT(BlueprintType)
struct FPerBoneBlendWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerBoneBlendWeight> BoneBlendWeights;
    
    ENGINE_API FPerBoneBlendWeights();
};

