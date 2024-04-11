#pragma once
#include "CoreMinimal.h"
#include "ETriggerEvent.h"
#include "BlueprintEnhancedInputActionBinding.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct ENHANCEDINPUT_API FBlueprintEnhancedInputActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerEvent TriggerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    FBlueprintEnhancedInputActionBinding();
};

