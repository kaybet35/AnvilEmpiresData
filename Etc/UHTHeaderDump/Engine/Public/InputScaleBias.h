#pragma once
#include "CoreMinimal.h"
#include "InputScaleBias.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputScaleBias {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bias;
    
    FInputScaleBias();
};

