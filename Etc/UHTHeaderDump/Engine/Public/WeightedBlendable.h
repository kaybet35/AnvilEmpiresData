#pragma once
#include "CoreMinimal.h"
#include "WeightedBlendable.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FWeightedBlendable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    ENGINE_API FWeightedBlendable();
};

