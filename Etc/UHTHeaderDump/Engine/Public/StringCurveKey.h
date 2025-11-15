#pragma once
#include "CoreMinimal.h"
#include "StringCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FStringCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FStringCurveKey();
};

