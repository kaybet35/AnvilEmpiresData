#pragma once
#include "CoreMinimal.h"
#include "WeightedBlendSample.generated.h"

USTRUCT(BlueprintType)
struct FWeightedBlendSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleWeight;
    
    ENGINE_API FWeightedBlendSample();
};

