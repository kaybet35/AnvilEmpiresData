#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceProxy.h"
#include "AnimSingleNodeInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FAnimSingleNodeInstanceProxy();
};

