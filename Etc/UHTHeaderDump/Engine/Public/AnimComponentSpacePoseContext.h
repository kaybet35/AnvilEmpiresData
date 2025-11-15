#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimComponentSpacePoseContext.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimComponentSpacePoseContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    FAnimComponentSpacePoseContext();
};

