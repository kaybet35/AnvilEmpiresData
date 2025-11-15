#pragma once
#include "CoreMinimal.h"
#include "PoseAssetInfluence.h"
#include "PoseAssetInfluences.generated.h"

USTRUCT(BlueprintType)
struct FPoseAssetInfluences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseAssetInfluence> Influences;
    
    ENGINE_API FPoseAssetInfluences();
};

