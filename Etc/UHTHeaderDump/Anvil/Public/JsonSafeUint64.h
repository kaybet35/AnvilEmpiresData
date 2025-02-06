#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.generated.h"

USTRUCT(BlueprintType)
struct FJsonSafeUint64 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 High;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Low;
    
    ANVIL_API FJsonSafeUint64();
};

