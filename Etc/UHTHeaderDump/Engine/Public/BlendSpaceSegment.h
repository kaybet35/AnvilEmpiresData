#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceSegment.generated.h"

USTRUCT(BlueprintType)
struct FBlendSpaceSegment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Vertices[2];
    
    ENGINE_API FBlendSpaceSegment();
};

