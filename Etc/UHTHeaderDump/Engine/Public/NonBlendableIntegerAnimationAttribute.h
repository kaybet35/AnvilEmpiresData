#pragma once
#include "CoreMinimal.h"
#include "IntegerAnimationAttribute.h"
#include "NonBlendableIntegerAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNonBlendableIntegerAnimationAttribute : public FIntegerAnimationAttribute {
    GENERATED_BODY()
public:
    ENGINE_API FNonBlendableIntegerAnimationAttribute();
};

