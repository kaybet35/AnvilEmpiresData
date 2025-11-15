#pragma once
#include "CoreMinimal.h"
#include "IntegerAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FIntegerAnimationAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ENGINE_API FIntegerAnimationAttribute();
};

