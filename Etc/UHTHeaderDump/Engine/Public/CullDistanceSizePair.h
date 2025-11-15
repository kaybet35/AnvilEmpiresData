#pragma once
#include "CoreMinimal.h"
#include "CullDistanceSizePair.generated.h"

USTRUCT(BlueprintType)
struct FCullDistanceSizePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    ENGINE_API FCullDistanceSizePair();
};

