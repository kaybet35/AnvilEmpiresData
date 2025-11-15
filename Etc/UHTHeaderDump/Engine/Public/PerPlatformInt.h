#pragma once
#include "CoreMinimal.h"
#include "PerPlatformInt.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPerPlatformInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Default;
    
    FPerPlatformInt();
};

