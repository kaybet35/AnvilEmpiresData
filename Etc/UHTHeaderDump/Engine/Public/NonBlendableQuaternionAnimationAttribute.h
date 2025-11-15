#pragma once
#include "CoreMinimal.h"
#include "QuaternionAnimationAttribute.h"
#include "NonBlendableQuaternionAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNonBlendableQuaternionAnimationAttribute : public FQuaternionAnimationAttribute {
    GENERATED_BODY()
public:
    ENGINE_API FNonBlendableQuaternionAnimationAttribute();
};

