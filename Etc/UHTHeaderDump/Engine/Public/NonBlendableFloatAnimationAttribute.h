#pragma once
#include "CoreMinimal.h"
#include "FloatAnimationAttribute.h"
#include "NonBlendableFloatAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNonBlendableFloatAnimationAttribute : public FFloatAnimationAttribute {
    GENERATED_BODY()
public:
    ENGINE_API FNonBlendableFloatAnimationAttribute();
};

