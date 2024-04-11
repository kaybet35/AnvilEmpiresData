#pragma once
#include "CoreMinimal.h"
#include "InputComboStepData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputComboStepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ComboStepAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPressKey;
    
    ENHANCEDINPUT_API FInputComboStepData();
};

