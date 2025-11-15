#pragma once
#include "CoreMinimal.h"
#include "AnimationAttributeIdentifier.h"
#include "AttributeCurve.h"
#include "AnimatedBoneAttribute.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimatedBoneAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationAttributeIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeCurve Curve;
    
    FAnimatedBoneAttribute();
};

