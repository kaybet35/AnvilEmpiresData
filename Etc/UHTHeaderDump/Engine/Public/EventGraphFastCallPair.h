#pragma once
#include "CoreMinimal.h"
#include "EventGraphFastCallPair.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct ENGINE_API FEventGraphFastCallPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* FunctionToPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventGraphCallOffset;
    
    FEventGraphFastCallPair();
};

