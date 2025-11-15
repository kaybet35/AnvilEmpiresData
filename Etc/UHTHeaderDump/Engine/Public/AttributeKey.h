#pragma once
#include "CoreMinimal.h"
#include "AttributeKey.generated.h"

USTRUCT(BlueprintType)
struct FAttributeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ENGINE_API FAttributeKey();
};

