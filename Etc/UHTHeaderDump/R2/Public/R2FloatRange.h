#pragma once
#include "CoreMinimal.h"
#include "R2FloatRange.generated.h"

USTRUCT(BlueprintType)
struct FR2FloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    R2_API FR2FloatRange();
};

