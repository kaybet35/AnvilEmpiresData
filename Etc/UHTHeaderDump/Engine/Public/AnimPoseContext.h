#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimPoseContext.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimPoseContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    FAnimPoseContext();
};

