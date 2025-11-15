#pragma once
#include "CoreMinimal.h"
#include "TransformAnimationAttribute.h"
#include "NonBlendableTransformAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNonBlendableTransformAnimationAttribute : public FTransformAnimationAttribute {
    GENERATED_BODY()
public:
    ENGINE_API FNonBlendableTransformAnimationAttribute();
};

