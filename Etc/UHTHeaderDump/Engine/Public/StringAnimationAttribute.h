#pragma once
#include "CoreMinimal.h"
#include "StringAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FStringAnimationAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ENGINE_API FStringAnimationAttribute();
};

