#pragma once
#include "CoreMinimal.h"
#include "AnimationAttributeIdentifier.h"
#include "EmptyPayload.h"
#include "AttributePayload.generated.h"

USTRUCT(BlueprintType)
struct FAttributePayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationAttributeIdentifier Identifier;
    
    ENGINE_API FAttributePayload();
};

