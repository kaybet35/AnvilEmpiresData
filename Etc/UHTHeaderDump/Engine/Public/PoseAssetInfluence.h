#pragma once
#include "CoreMinimal.h"
#include "PoseAssetInfluence.generated.h"

USTRUCT(BlueprintType)
struct FPoseAssetInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneTransformIndex;
    
    ENGINE_API FPoseAssetInfluence();
};

