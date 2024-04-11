#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDelegateBinding -FallbackName=InputDelegateBinding
#include "BlueprintEnhancedInputActionBinding.h"
#include "EnhancedInputActionDelegateBinding.generated.h"

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UEnhancedInputActionDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;
    
    UEnhancedInputActionDelegateBinding();

};

