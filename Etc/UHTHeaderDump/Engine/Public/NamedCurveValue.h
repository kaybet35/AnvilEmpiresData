#pragma once
#include "CoreMinimal.h"
#include "NamedCurveValue.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNamedCurveValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FNamedCurveValue();
};

