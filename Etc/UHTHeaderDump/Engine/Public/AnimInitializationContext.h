#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimInitializationContext.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimInitializationContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    FAnimInitializationContext();
};

