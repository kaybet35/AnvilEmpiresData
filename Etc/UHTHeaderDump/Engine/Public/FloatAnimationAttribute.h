#pragma once
#include "CoreMinimal.h"
#include "FloatAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FFloatAnimationAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ENGINE_API FFloatAnimationAttribute();
};

