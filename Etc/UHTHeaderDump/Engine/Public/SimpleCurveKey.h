#pragma once
#include "CoreMinimal.h"
#include "SimpleCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSimpleCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSimpleCurveKey();
};

