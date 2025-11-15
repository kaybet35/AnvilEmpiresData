#pragma once
#include "CoreMinimal.h"
#include "PerBoneBlendWeight.generated.h"

USTRUCT(BlueprintType)
struct FPerBoneBlendWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    ENGINE_API FPerBoneBlendWeight();
};

