#pragma once
#include "CoreMinimal.h"
#include "NamedFloat.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNamedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FNamedFloat();
};

