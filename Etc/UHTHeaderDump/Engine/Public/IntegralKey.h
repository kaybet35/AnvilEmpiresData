#pragma once
#include "CoreMinimal.h"
#include "IntegralKey.generated.h"

USTRUCT(BlueprintType)
struct FIntegralKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ENGINE_API FIntegralKey();
};

