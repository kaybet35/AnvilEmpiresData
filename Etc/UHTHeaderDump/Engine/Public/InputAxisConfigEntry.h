#pragma once
#include "CoreMinimal.h"
#include "InputAxisProperties.h"
#include "InputAxisConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FInputAxisConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisProperties AxisProperties;
    
    ENGINE_API FInputAxisConfigEntry();
};

