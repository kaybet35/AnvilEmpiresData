#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EntityFloatPair.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FEntityFloatPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R2_API FEntityFloatPair();
};

