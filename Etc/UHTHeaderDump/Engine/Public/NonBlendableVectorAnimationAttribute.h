#pragma once
#include "CoreMinimal.h"
#include "VectorAnimationAttribute.h"
#include "NonBlendableVectorAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FNonBlendableVectorAnimationAttribute : public FVectorAnimationAttribute {
    GENERATED_BODY()
public:
    ENGINE_API FNonBlendableVectorAnimationAttribute();
};

