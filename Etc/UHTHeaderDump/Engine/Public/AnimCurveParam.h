#pragma once
#include "CoreMinimal.h"
#include "AnimCurveParam.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimCurveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FAnimCurveParam();
};

