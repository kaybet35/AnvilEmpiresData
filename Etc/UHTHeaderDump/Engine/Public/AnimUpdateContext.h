#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimUpdateContext.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimUpdateContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    FAnimUpdateContext();
};

