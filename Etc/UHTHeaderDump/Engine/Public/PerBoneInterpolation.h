#pragma once
#include "CoreMinimal.h"
#include "BoneReference.h"
#include "PerBoneInterpolation.generated.h"

USTRUCT(BlueprintType)
struct FPerBoneInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeedPerSec;
    
    ENGINE_API FPerBoneInterpolation();
};

